/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057268dc; end: 105726927; -[SCPhotoPickerController documentPicker:didPickDocumentsAtURLs:] */

void FUN_1057268dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010be02920(param_1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  func_0x00010be9dac0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105726928; end: 10572692b; -[SCPhotoPickerController documentPickerWasCancelled:] */

void FUN_105726928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCancel_112577a38);
  return;
}



/* Entry: 10572692c; end: 10572692f; -[SCPhotoPickerController presentationControllerDidDismiss:] */

void FUN_10572692c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCancel_112577a38);
  return;
}



/* Entry: 105726930; end: 105726967; -[SCPhotoPickerController _dismissCurrentUI] */

void FUN_105726930(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105726968; end: 1057269c7; -[SCPhotoPickerController _selectPhotosAtURLs:] */

void FUN_105726968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fb580();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057269c8; end: 105726b4f; -[SCPhotoPickerController _urlForImageCapture:] */

void FUN_1057269c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_105726b24:
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    _UIImageJPEGRepresentation(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_3;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) goto LAB_105726b24;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = lVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110df1c18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c26b280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c2bda80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
    puVar6 = (undefined *)0x0;
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar5,0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105726b50; end: 105726d6f; -[SCPhotoPickerController _storeDataForAsset:atURL:] */

void FUN_105726b50(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_retain(param_6);
    lVar1 = param_5;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      puVar6 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
      puVar2 = (undefined *)0x0;
    }
    else {
      lVar1 = param_5;
      func_0x00010c09ea00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_5;
      func_0x00010c09ea00(param_5);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_2;
      func_0x00010bf51c80();
      func_0x00010c0df720(param_1,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_5;
      func_0x00010c09ea00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf01f00();
      func_0x00010c0df720(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    lVar1 = param_5;
    func_0x00010bf5a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = (undefined *)0x0;
    if (lVar1 != 0) {
      lVar1 = param_5;
      func_0x00010bf5a700(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df7c0(puVar3,param_4,(long)(param_1 * 1000000.0));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar7 = puVar3;
    }
    puVar3 = PTR_PTR_1126bd8a0;
    _objc_alloc(PTR_PTR_1126bd8a0);
    func_0x00010c03d060();
    uVar4 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf6b020(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fb5a0();
    _objc_release(param_6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105726d70; end: 105726d9f; -[SCPhotoPickerController .cxx_destruct] */

void FUN_105726d70(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105726da0; end: 105726ec7; -[SCPhotoPickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105726da0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126bd8a8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127288cc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_1127288d0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c035e00();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127288d4);
  *(undefined **)(param_1 + _DAT_1127288d4) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105726ec8;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105726ec8; end: 105726ef3;  */

void FUN_105726ec8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105726ef4; end: 105726f77; -[SCPhotoPickerEntryPoint _present] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105726ef4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_1127288cc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127288d4);
  func_0x00010c0fb560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(lVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105726f78; end: 105726fbf; -[SCPhotoPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105726f78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127288d0);
  _objc_destroyWeak(param_1 + _DAT_1127288cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127288d4,0);
  return;
}



/* Entry: 105726fc0; end: 10572701f;  */

void FUN_105726fc0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df9e58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110df9e58,
                      &PTR____CFConstantStringClassReference_110df9e78,0);
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



/* Entry: 105727020; end: 105727027; -[SCMemoriesPhotoSnapCandidate snapId] */

undefined8 FUN_105727020(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105727028; end: 10572702f; -[SCMemoriesPhotoSnapCandidate setSnapId:] */

void FUN_105727028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105727030; end: 105727037; -[SCMemoriesPhotoSnapCandidate sortDate] */

undefined8 FUN_105727030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105727038; end: 105727067; -[SCMemoriesPhotoSnapCandidate setSortDate:] */

void FUN_105727038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105727068; end: 105727097; -[SCMemoriesPhotoSnapCandidate .cxx_destruct] */

void FUN_105727068(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105727098; end: 105727353;  */

undefined * FUN_105727098(undefined *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      puVar13 = *(undefined **)(lVar12 * 8);
      puVar5 = puVar13;
      FUN_105727354();
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = param_1;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar5 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar6);
            }
            puVar15 = *(undefined **)((long)puVar14 * 8);
            puVar7 = puVar15;
            func_0x00010bf313a0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 == (undefined *)0x0) {
              puVar8 = puVar13;
              func_0x00010bf59960();
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 == (undefined *)0x0) {
                puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
                func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                _objc_retain(puVar8);
                puVar9 = puVar8;
              }
              _objc_release(puVar8);
            }
            else {
              _objc_retain(puVar7);
              puVar9 = puVar7;
            }
            _objc_release(puVar7);
            FUN_1057273ac(puVar15,puVar9,puVar3,puVar11);
            _objc_release(puVar9);
            puVar14 = puVar14 + 1;
          } while (puVar5 != puVar14);
          puVar5 = puVar6;
          func_0x00010bf52a60();
        }
        _objc_release(puVar6);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar4);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar5 = puVar11;
  FUN_105727550();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = param_1;
    func_0x00010c07b240();
    if (((ulong)puVar11 & 1) == 0) {
      puVar11 = param_1;
      func_0x00010c266aa0(param_1);
    }
    else {
      puVar11 = (undefined *)0x1;
    }
  }
  _objc_release(param_1);
  return puVar11;
}



/* Entry: 105727354; end: 1057273ab;  */

ulong FUN_105727354(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c07b240();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c266aa0(param_1);
    }
    else {
      uVar1 = 1;
    }
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057273ac; end: 10572754f;  */

void FUN_1057273ac(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  if (param_1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    puVar4 = param_1;
    if (((puVar2 != (undefined *)0x0) && (puVar2 = param_1, func_0x00010c2a5040(), 0 < (int)puVar2))
       && (puVar2 = param_1, func_0x00010bfe0640(), 0 < (int)puVar2)) {
      func_0x00010b5fa088();
      iVar1 = (int)puVar4;
      func_0x00010b5fa4c8();
      _objc_release(param_1);
      if (iVar1 == 0) goto LAB_105727520;
      puVar4 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf4b900();
      _objc_release(puVar4);
      if ((uVar3 & 1) != 0) goto LAB_105727520;
      puVar4 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_3);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126bd8b0;
      _objc_opt_new(PTR_PTR_1126bd8b0);
      puVar2 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204680(puVar4);
      _objc_release(puVar2);
      func_0x00010c206820(puVar4);
      func_0x00010befa120(param_4);
    }
  }
  _objc_release(puVar4);
LAB_105727520:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105727550; end: 1057276ab;  */

undefined * FUN_105727550(ulong param_1,undefined *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c246ca0(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108ad710);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_1);
      }
      uVar2 = *(undefined8 *)(uVar11 * 8);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar12);
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar11);
    uVar1 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar9 = &uStack_250;
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uVar1 = param_1;
    func_0x00010bfa9a20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010bf52a60();
    if (uVar11 != 0) {
      lVar13 = *plStack_240;
      do {
        uVar14 = 0;
        do {
          if (*plStack_240 != lVar13) {
            _objc_enumerationMutation(uVar1);
          }
          puVar12 = *(undefined **)(lStack_248 + uVar14 * 8);
          uVar5 = param_1;
          func_0x00010bfa7040();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          FUN_105727354();
          _objc_release(uVar5);
          if ((uVar6 & 1) == 0) {
            puVar7 = puVar12;
            func_0x00010bf313a0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 == (undefined *)0x0) {
              puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              _objc_retain(puVar7);
              puVar8 = puVar7;
            }
            _objc_release(puVar7);
            param_2 = puVar8;
            FUN_1057273ac(puVar12,puVar8,puVar4,puVar3);
            _objc_release(puVar8);
          }
          uVar14 = uVar14 + 1;
        } while (uVar11 != uVar14);
        uVar11 = uVar1;
        puVar9 = &uStack_250;
        func_0x00010bf52a60();
      } while (uVar11 != 0);
    }
    _objc_release(uVar1);
    puVar12 = puVar3;
    FUN_105727550();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      _objc_retain(param_2);
      _objc_retain(puVar9);
      puVar12 = (undefined *)puVar9;
      func_0x00010c246940();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c246940(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar12;
      func_0x00010bf433a0();
      _objc_release(puVar3);
      _objc_release(puVar12);
      if (puVar4 == (undefined *)0x0) {
        puVar12 = param_2;
        func_0x00010c241220(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = (undefined *)puVar9;
        func_0x00010c241220(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar12;
        func_0x00010bf433a0(puVar12);
        _objc_release(puVar3);
        _objc_release(puVar12);
      }
      _objc_release(puVar9);
      _objc_release(param_2);
      return puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 1057276ac; end: 10572789f;  */

undefined * FUN_1057276ac(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar3 = param_1;
  func_0x00010bfa9a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      uVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(uVar3);
        }
        puVar10 = *(undefined **)(lStack_128 + uVar12 * 8);
        uVar5 = param_1;
        func_0x00010bfa7040();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        FUN_105727354();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          puVar7 = puVar10;
          func_0x00010bf313a0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == (undefined *)0x0) {
            puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(puVar7);
            puVar8 = puVar7;
          }
          _objc_release(puVar7);
          param_2 = puVar8;
          FUN_1057273ac(puVar10,puVar8,puVar2,puVar1);
          _objc_release(puVar8);
        }
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      uVar4 = uVar3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(uVar3);
  puVar10 = puVar1;
  FUN_105727550();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar9);
  puVar1 = (undefined *)puVar9;
  func_0x00010c246940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c246940(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bf433a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar10 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)puVar9;
    func_0x00010c241220(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf433a0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar9);
  _objc_release(param_2);
  return puVar10;
}



/* Entry: 1057278a0; end: 105727987;  */

long FUN_1057278a0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c246940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c246940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf433a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf433a0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 105727988; end: 105727a93; -[SCMemoriesSnapThumbnailProviderImpl initWithCachingMediaManager:dataObjectContext:] */

undefined1 *
FUN_105727988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e9f98;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105727a94; end: 105727a9b; -[SCMemoriesSnapThumbnailProviderImpl provideThumbnailWithSnapThumbnailRequest:] */

void FUN_105727a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c119ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_provideThumbnailWithSnapThumbnai_1126240c8,param_3,0);
  return;
}



/* Entry: 105727a9c; end: 105727b8f; -[SCMemoriesSnapThumbnailProviderImpl provideThumbnailWithSnapThumbnailRequest:opportunistic:] */

void FUN_105727a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105727b90; end: 105727d6f;  */

void FUN_105727b90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_105727d70;
  uStack_90 = 0x105727d80;
  uStack_88 = 0;
  puStack_a8 = &uStack_b0;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_105727d88;
    puStack_e8 = &UNK_1108ad730;
    puStack_c8 = puStack_78;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_e0 = param_2;
    lStack_d8 = lVar1;
    puStack_c0 = &uStack_b0;
    _objc_retain(uVar4);
    uStack_b8 = *(undefined1 *)(param_1 + 0x30);
    uStack_d0 = uVar4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uStack_d0);
    _objc_release(uStack_e0);
  }
  puVar2 = PTR_PTR_1126b0418;
  _objc_copyWeak(auStack_108,param_1 + 0x28);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_108);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105727d70; end: 105727d87;  */

void FUN_105727d70(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105727d88; end: 105727e7f;  */

void FUN_105727d88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760)
    ;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be839e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105727e80; end: 105727e8f;  */

void FUN_105727e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),PTR_s_cancel_1125a9090
            );
  return;
}



/* Entry: 105727e90; end: 105727ec7;  */

void FUN_105727e90(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  __Block_object_dispose(*(undefined8 *)(param_1 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_dispose_11034bce8)(*(undefined8 *)(param_1 + 0x20),8);
  return;
}



/* Entry: 105727ec8; end: 10572819b; -[SCMemoriesSnapThumbnailProviderImpl _provideImageForSnapId:opportunistic:observer:] */

void FUN_105727ec8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010c26a0e0(param_5);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar6 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar7 = dVar6;
  func_0x00010c26a0e0(param_5);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af4d0;
  uVar5 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    FUN_10572819c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_7);
    _objc_release(puVar2);
    _objc_release(uVar5);
    func_0x00010bf436e0(param_7);
    uVar5 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    uVar3 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    uVar5 = uVar3;
    func_0x00010c134ce0(param_1 * dVar6,param_2 * dVar7,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_7);
    __Block_object_dispose(&uStack_b0,8);
    __Block_object_dispose(&uStack_90,8);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10572819c; end: 10572825b;  */

void FUN_10572819c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110df9f18;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf99240();
  iVar4 = (int)puVar3;
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar3 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  if ((*(byte *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x18) & 1) != 0) goto LAB_105728350;
  if (param_2 == (undefined *)0x0) {
    if ((iVar4 != 0) && ((*(byte *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x18) & 1) == 0)) {
      uVar5 = *(undefined8 *)(puVar1 + 0x20);
      FUN_10572819c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5);
      _objc_release(puVar2);
      goto LAB_10572832c;
    }
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x18) = 1;
    uVar5 = *(undefined8 *)(puVar1 + 0x20);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
LAB_10572832c:
    _objc_release(puVar3);
  }
  if (iVar4 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x18) = 1;
    func_0x00010bf436e0(*(undefined8 *)(puVar1 + 0x20));
  }
LAB_105728350:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10572825c; end: 105728367;  */

void FUN_10572825c(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) != 0) goto LAB_105728350;
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if (param_2 == (undefined *)0x0) {
    if ((param_5 != 0) && ((*(byte *)(lVar3 + 0x18) & 1) == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      FUN_10572819c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar2);
      goto LAB_10572832c;
    }
  }
  else {
    *(undefined1 *)(lVar3 + 0x18) = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
LAB_10572832c:
    _objc_release(puVar1);
  }
  if (param_5 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
LAB_105728350:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105728368; end: 1057283a3; -[SCMemoriesSnapThumbnailProviderImpl .cxx_destruct] */

void FUN_105728368(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057283a4; end: 105728417; -[SCGrapheneExternalMusicMetric2 init] */

undefined1 * FUN_1057283a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9fa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105728418; end: 105728687;  */

/* WARNING: Removing unreachable block (ram,0x000105728910) */
/* WARNING: Removing unreachable block (ram,0x000105728e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105728418(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  char *unaff_x24;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 auStack_348 [2];
  char cStack_331;
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  char acStack_2d0 [24];
  undefined1 *puStack_2b8;
  undefined8 auStack_2b0 [3];
  undefined1 auStack_298 [24];
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined1 ***pppuStack_220;
  code *pcStack_218;
  char acStack_208 [24];
  char *pcStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  char acStack_170 [24];
  undefined1 *puStack_158;
  undefined8 auStack_150 [3];
  undefined1 auStack_138 [24];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar16 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_a8,auStack_88,&lStack_58,2);
    param_5 = (char *)(long)(param_1 * 1000.0);
    pcVar1 = "\x01";
    pcVar5 = acStack_a8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_90 = acStack_a8;
    func_0x00010007e5dc(&pcStack_90);
    lVar17 = 0;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    pcVar10 = acStack_170;
    pcStack_b8 = FUN_105728688;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar1;
    pcVar4 = pcVar5;
    pcVar7 = param_5;
    pcVar8 = param_6;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar5);
    _objc_retain(param_5);
    if (pcVar2 != (char *)0x0) {
      plVar16 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_150,pcVar2);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar2 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_138,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520();
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_120,pcVar2);
      acStack_170[0] = '\0';
      acStack_170[1] = '\0';
      acStack_170[2] = '\0';
      acStack_170[3] = '\0';
      acStack_170[4] = '\0';
      acStack_170[5] = '\0';
      acStack_170[6] = '\0';
      acStack_170[7] = '\0';
      acStack_170[8] = '\0';
      acStack_170[9] = '\0';
      acStack_170[10] = '\0';
      acStack_170[0xb] = '\0';
      acStack_170[0xc] = '\0';
      acStack_170[0xd] = '\0';
      acStack_170[0xe] = '\0';
      acStack_170[0xf] = '\0';
      acStack_170[0x10] = '\0';
      acStack_170[0x11] = '\0';
      acStack_170[0x12] = '\0';
      acStack_170[0x13] = '\0';
      acStack_170[0x14] = '\0';
      acStack_170[0x15] = '\0';
      acStack_170[0x16] = '\0';
      acStack_170[0x17] = '\0';
      func_0x00010007e1e8(acStack_170,auStack_150,&lStack_108,3);
      pcVar9 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_158 = acStack_170;
      func_0x00010007e5dc(&puStack_158);
      lVar17 = 0;
      pcVar4 = pcVar10;
      pcVar7 = param_6;
      do {
        if ((&cStack_109)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        unaff_x24 = acStack_170;
      } while (lVar17 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(pcVar5);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_1a8 = auStack_150;
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (char *)puStack_1a8);
    _objc_release(param_5);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_178 = FUN_105728948;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar10 = pcVar9;
    pcVar12 = pcVar4;
    pcVar13 = pcVar7;
    puStack_1b0 = (undefined8 *)unaff_x24;
    pcStack_1a0 = pcVar2;
    pcStack_198 = param_5;
    pcStack_190 = pcVar5;
    pcStack_188 = pcVar1;
    ppuStack_180 = &puStack_c0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar4);
    if (pcVar3 != (char *)0x0) {
      plVar16 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      unaff_x24 = (char *)auStack_1e8;
      func_0x00010002b838(auStack_1e8,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_1d0,pcVar1);
      acStack_208[0] = '\0';
      acStack_208[1] = '\0';
      acStack_208[2] = '\0';
      acStack_208[3] = '\0';
      acStack_208[4] = '\0';
      acStack_208[5] = '\0';
      acStack_208[6] = '\0';
      acStack_208[7] = '\0';
      acStack_208[8] = '\0';
      acStack_208[9] = '\0';
      acStack_208[10] = '\0';
      acStack_208[0xb] = '\0';
      acStack_208[0xc] = '\0';
      acStack_208[0xd] = '\0';
      acStack_208[0xe] = '\0';
      acStack_208[0xf] = '\0';
      acStack_208[0x10] = '\0';
      acStack_208[0x11] = '\0';
      acStack_208[0x12] = '\0';
      acStack_208[0x13] = '\0';
      acStack_208[0x14] = '\0';
      acStack_208[0x15] = '\0';
      acStack_208[0x16] = '\0';
      acStack_208[0x17] = '\0';
      func_0x00010007e1e8(acStack_208,auStack_1e8,&lStack_1b8,2);
      pcVar10 = "";
      pcVar12 = acStack_208;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_1f0 = acStack_208;
      func_0x00010007e5dc(&pcStack_1f0);
      lVar17 = 0;
      pcVar13 = pcVar7;
      do {
        if ((&cStack_1b9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x30);
    }
    _objc_release(pcVar4);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    if (cStack_1d1 < '\0') {
      __ZdlPv(auStack_1e8[0]);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar9);
    __Unwind_Resume();
    pcVar4 = acStack_2d0;
    pcStack_218 = FUN_105728b78;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar10;
    pcVar2 = pcVar12;
    pcVar9 = pcVar13;
    pppuStack_220 = &ppuStack_180;
    _objc_retain(pcVar10);
    _objc_retain(pcVar12);
    _objc_retain(pcVar13);
    if (pcVar1 != (char *)0x0) {
      plVar16 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar10;
        _objc_retainAutorelease(pcVar10);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_2b0,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_298,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar1 = pcVar13;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_280,pcVar1);
      acStack_2d0[0] = '\0';
      acStack_2d0[1] = '\0';
      acStack_2d0[2] = '\0';
      acStack_2d0[3] = '\0';
      acStack_2d0[4] = '\0';
      acStack_2d0[5] = '\0';
      acStack_2d0[6] = '\0';
      acStack_2d0[7] = '\0';
      acStack_2d0[8] = '\0';
      acStack_2d0[9] = '\0';
      acStack_2d0[10] = '\0';
      acStack_2d0[0xb] = '\0';
      acStack_2d0[0xc] = '\0';
      acStack_2d0[0xd] = '\0';
      acStack_2d0[0xe] = '\0';
      acStack_2d0[0xf] = '\0';
      acStack_2d0[0x10] = '\0';
      acStack_2d0[0x11] = '\0';
      acStack_2d0[0x12] = '\0';
      acStack_2d0[0x13] = '\0';
      acStack_2d0[0x14] = '\0';
      acStack_2d0[0x15] = '\0';
      acStack_2d0[0x16] = '\0';
      acStack_2d0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2d0,auStack_2b0,&lStack_268,3);
      pcVar5 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108ad8b0,acStack_2d0,pcVar8);
      puStack_2b8 = acStack_2d0;
      func_0x00010007e5dc(&puStack_2b8);
      lVar17 = 0;
      pcVar2 = pcVar4;
      pcVar9 = pcVar8;
      do {
        if ((&cStack_269)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        unaff_x24 = acStack_2d0;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar13);
    _objc_release(pcVar12);
    pcVar1 = pcVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar13);
    puStack_308 = auStack_2b0;
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (char *)puStack_308);
    _objc_release(pcVar13);
    _objc_release(pcVar12);
    _objc_release(pcVar10);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcStack_2d8 = FUN_105728e38;
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_310 = (undefined8 *)unaff_x24;
    pcStack_300 = pcVar1;
    pcStack_2f8 = pcVar13;
    pcStack_2f0 = pcVar12;
    pcStack_2e8 = pcVar10;
    pppuStack_2e0 = &pppuStack_220;
    _objc_retain(pcVar5);
    _objc_retain(pcVar2);
    if (pcVar4 != (char *)0x0) {
      plVar16 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_348,pcVar1);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_330,pcVar1);
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_358 = 0;
      func_0x00010007e1e8(&uStack_368,auStack_348,&lStack_318,2);
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108ad900,&uStack_368,pcVar9);
      puStack_350 = &uStack_368;
      func_0x00010007e5dc(&puStack_350);
      lVar17 = 0;
      do {
        if ((&cStack_319)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x30);
    }
    _objc_release(pcVar2);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    if (cStack_331 < '\0') {
      __ZdlPv(auStack_348[0]);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar5);
    __Unwind_Resume();
    lVar17 = (long)_DAT_1127288f0;
    pcVar5 = pcVar1 + lVar17;
    _objc_loadWeakRetained();
    func_0x00010c22b040();
    _objc_release(pcVar5);
    pcVar5 = pcVar1 + lVar17;
    _objc_loadWeakRetained();
    param_3 = pcVar5;
    func_0x00010c22b040();
    func_0x000108f94dd8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar5);
    pcVar5 = pcVar1 + lVar17;
    _objc_loadWeakRetained();
    pcVar2 = pcVar5;
    func_0x00010c29c060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pcVar5);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = PTR_PTR_1126bd8c0;
      _objc_alloc(PTR_PTR_1126bd8c0);
      pcVar5 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar5);
      pcVar7 = pcVar5;
      func_0x00010c22ad00();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar2);
      pcVar8 = pcVar2;
      func_0x00010c22ad20();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar1 + _DAT_1127288f4;
      _objc_loadWeakRetained(pcVar9);
      pcVar10 = pcVar9;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045a60(pcVar4);
      _objc_release(pcVar10);
      _objc_release(pcVar9);
      _objc_release(pcVar8);
      _objc_release(pcVar2);
      _objc_release(pcVar7);
      _objc_release(pcVar5);
      func_0x00010c1c8b80(pcVar4);
      pcVar5 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar5);
      func_0x00010bf0c980(pcVar2);
      _objc_release(pcVar2);
    }
    else {
      puVar6 = PTR_PTR_1126bd8b8;
      _objc_alloc();
      pcVar5 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar5);
      pcVar4 = pcVar5;
      func_0x00010c22ad00();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar2);
      pcVar7 = pcVar2;
      func_0x00010c22ad20();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar1 + _DAT_1127288f4;
      _objc_loadWeakRetained(pcVar9);
      pcVar8 = pcVar9;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045a60();
      lVar15 = (long)_DAT_1127288f8;
      uVar14 = *(undefined8 *)(pcVar1 + lVar15);
      *(undefined **)(pcVar1 + lVar15) = puVar6;
      _objc_release(uVar14);
      _objc_release(pcVar8);
      _objc_release(pcVar9);
      _objc_release(pcVar7);
      _objc_release(pcVar2);
      _objc_release(pcVar4);
      _objc_release(pcVar5);
      uVar14 = *(undefined8 *)(pcVar1 + lVar15);
      pcVar5 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar5);
      func_0x00010c22aea0();
      func_0x00010c283e20(uVar14);
      _objc_release(pcVar5);
      uVar14 = *(undefined8 *)(pcVar1 + lVar15);
      pcVar5 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bf837c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2852a0(uVar14);
      _objc_release(pcVar2);
      _objc_release(pcVar5);
      pcVar5 = pcVar1 + lVar17;
      _objc_loadWeakRetained(pcVar5);
      pcVar4 = pcVar5;
      func_0x00010c29c060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar5);
      func_0x00010bf0ca20(pcVar4);
      func_0x00010c239ea0(*(undefined8 *)(pcVar1 + lVar15));
    }
    _objc_release(pcVar4);
    puVar6 = PTR_PTR_1126b5648;
    func_0x00010c22af40(PTR_PTR_1126b5648);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    pcVar5 = pcVar1 + lVar17;
    _objc_loadWeakRetained(pcVar5);
    pcVar2 = pcVar5;
    func_0x00010c22b040();
    func_0x000108f94dd8();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010c2ac460(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(pcVar2);
    _objc_release(pcVar5);
    pcVar1 = pcVar1 + _DAT_1127288fc;
    _objc_loadWeakRetained(pcVar1);
    pcVar5 = pcVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = pcVar2;
    func_0x00010c22af20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(pcVar9);
    _objc_release(pcVar2);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105728688; end: 105728947;  */

/* WARNING: Removing unreachable block (ram,0x000105728910) */
/* WARNING: Removing unreachable block (ram,0x000105728e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105728688(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar4 = param_4;
  pcVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar6 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_105728948;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar6;
  pcVar10 = pcVar4;
  puStack_100 = (undefined8 *)unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar8 = "";
    pcVar9 = acStack_158;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar14 = 0;
    pcVar10 = pcVar4;
    do {
      if ((&cStack_109)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar3 = acStack_220;
  pcStack_168 = FUN_105728b78;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar6 = pcVar9;
  pcVar2 = pcVar10;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  _objc_retain(pcVar10);
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_200,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1d0,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1b8,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108ad8b0,acStack_220,pcVar5);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar14 = 0;
    pcVar6 = pcVar3;
    pcVar2 = pcVar5;
    do {
      if ((&cStack_1b9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_220;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  pcVar4 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  puStack_258 = auStack_200;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_258);
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_228 = FUN_105728e38;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = (undefined8 *)unaff_x24;
  pcStack_250 = pcVar4;
  pcStack_248 = pcVar10;
  pcStack_240 = pcVar9;
  pcStack_238 = pcVar8;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar5 != (char *)0x0) {
    plVar15 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_298,pcVar4);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar4 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_280,pcVar4);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108ad900,&uStack_2b8,pcVar2);
    puStack_2a0 = &uStack_2b8;
    func_0x00010007e5dc(&puStack_2a0);
    lVar14 = 0;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    lVar14 = (long)_DAT_1127288f0;
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained();
    func_0x00010c22b040();
    _objc_release(pcVar1);
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained();
    pcVar6 = pcVar1;
    func_0x00010c22b040();
    func_0x000108f94dd8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar1);
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained();
    pcVar5 = pcVar1;
    func_0x00010c29c060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pcVar1);
    if (pcVar5 == (char *)0x0) {
      pcVar8 = PTR_PTR_1126bd8c0;
      _objc_alloc(PTR_PTR_1126bd8c0);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar9 = pcVar1;
      func_0x00010c22ad00();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar5);
      pcVar3 = pcVar5;
      func_0x00010c22ad20();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar4 + _DAT_1127288f4;
      _objc_loadWeakRetained(pcVar2);
      pcVar10 = pcVar2;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045a60(pcVar8);
      _objc_release(pcVar10);
      _objc_release(pcVar2);
      _objc_release(pcVar3);
      _objc_release(pcVar5);
      _objc_release(pcVar9);
      _objc_release(pcVar1);
      func_0x00010c1c8b80(pcVar8);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar5 = pcVar1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar1);
      func_0x00010bf0c980(pcVar5);
      _objc_release(pcVar5);
    }
    else {
      puVar7 = PTR_PTR_1126bd8b8;
      _objc_alloc();
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar8 = pcVar1;
      func_0x00010c22ad00();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar5);
      pcVar9 = pcVar5;
      func_0x00010c22ad20();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar4 + _DAT_1127288f4;
      _objc_loadWeakRetained(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045a60();
      lVar13 = (long)_DAT_1127288f8;
      uVar12 = *(undefined8 *)(pcVar4 + lVar13);
      *(undefined **)(pcVar4 + lVar13) = puVar7;
      _objc_release(uVar12);
      _objc_release(pcVar3);
      _objc_release(pcVar2);
      _objc_release(pcVar9);
      _objc_release(pcVar5);
      _objc_release(pcVar8);
      _objc_release(pcVar1);
      uVar12 = *(undefined8 *)(pcVar4 + lVar13);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      func_0x00010c22aea0();
      func_0x00010c283e20(uVar12);
      _objc_release(pcVar1);
      uVar12 = *(undefined8 *)(pcVar4 + lVar13);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar5 = pcVar1;
      func_0x00010bf837c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2852a0(uVar12);
      _objc_release(pcVar5);
      _objc_release(pcVar1);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar8 = pcVar1;
      func_0x00010c29c060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar1);
      func_0x00010bf0ca20(pcVar8);
      func_0x00010c239ea0(*(undefined8 *)(pcVar4 + lVar13));
    }
    _objc_release(pcVar8);
    puVar7 = PTR_PTR_1126b5648;
    func_0x00010c22af40(PTR_PTR_1126b5648);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained(pcVar1);
    pcVar5 = pcVar1;
    func_0x00010c22b040();
    func_0x000108f94dd8();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar11;
    func_0x00010c2ac460(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar4 = pcVar4 + _DAT_1127288fc;
    _objc_loadWeakRetained(pcVar4);
    pcVar1 = pcVar4;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar5;
    func_0x00010c22af20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(pcVar2);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    _objc_release(pcVar4);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
    return;
  }
  return;
}



/* Entry: 105728948; end: 105728b77;  */

/* WARNING: Removing unreachable block (ram,0x000105728e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105728948(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
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
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
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
    unaff_x24 = (char *)auStack_78;
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
    pcVar1 = "";
    pcVar4 = acStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar14 = 0;
    pcVar5 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar3 = acStack_160;
  pcStack_a8 = FUN_105728b78;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar7 = pcVar4;
  pcVar8 = pcVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_140,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_110,pcVar2);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,auStack_140,&lStack_f8,3);
    pcVar9 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108ad8b0,acStack_160,param_5);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar14 = 0;
    pcVar7 = pcVar3;
    pcVar8 = param_5;
    do {
      if ((&cStack_f9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    puStack_198 = auStack_140;
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (char *)puStack_198);
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_168 = FUN_105728e38;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = (undefined8 *)unaff_x24;
    pcStack_190 = pcVar2;
    pcStack_188 = pcVar5;
    pcStack_180 = pcVar4;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_b0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar7);
    if (pcVar3 != (char *)0x0) {
      plVar15 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1c0,pcVar1);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108ad900,&uStack_1f8,pcVar8);
      puStack_1e0 = &uStack_1f8;
      func_0x00010007e5dc(&puStack_1e0);
      lVar14 = 0;
      do {
        if ((&cStack_1a9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      __Unwind_Resume();
      lVar14 = (long)_DAT_1127288f0;
      pcVar4 = pcVar1 + lVar14;
      _objc_loadWeakRetained();
      func_0x00010c22b040();
      _objc_release(pcVar4);
      pcVar4 = pcVar1 + lVar14;
      _objc_loadWeakRetained();
      pcVar5 = pcVar4;
      func_0x00010c22b040();
      func_0x000108f94dd8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar4);
      pcVar4 = pcVar1 + lVar14;
      _objc_loadWeakRetained();
      pcVar2 = pcVar4;
      func_0x00010c29c060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(pcVar4);
      if (pcVar2 == (char *)0x0) {
        pcVar7 = PTR_PTR_1126bd8c0;
        _objc_alloc(PTR_PTR_1126bd8c0);
        pcVar4 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar4);
        pcVar8 = pcVar4;
        func_0x00010c22ad00();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar2);
        pcVar3 = pcVar2;
        func_0x00010c22ad20();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar1 + _DAT_1127288f4;
        _objc_loadWeakRetained(pcVar9);
        pcVar10 = pcVar9;
        func_0x00010c295440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c045a60(pcVar7);
        _objc_release(pcVar10);
        _objc_release(pcVar9);
        _objc_release(pcVar3);
        _objc_release(pcVar2);
        _objc_release(pcVar8);
        _objc_release(pcVar4);
        func_0x00010c1c8b80(pcVar7);
        pcVar4 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010c27ece0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pcVar4);
        func_0x00010bf0c980(pcVar2);
        _objc_release(pcVar2);
      }
      else {
        puVar6 = PTR_PTR_1126bd8b8;
        _objc_alloc();
        pcVar4 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar4);
        pcVar7 = pcVar4;
        func_0x00010c22ad00();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar2);
        pcVar8 = pcVar2;
        func_0x00010c22ad20();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar1 + _DAT_1127288f4;
        _objc_loadWeakRetained(pcVar9);
        pcVar3 = pcVar9;
        func_0x00010c295440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c045a60();
        lVar13 = (long)_DAT_1127288f8;
        uVar12 = *(undefined8 *)(pcVar1 + lVar13);
        *(undefined **)(pcVar1 + lVar13) = puVar6;
        _objc_release(uVar12);
        _objc_release(pcVar3);
        _objc_release(pcVar9);
        _objc_release(pcVar8);
        _objc_release(pcVar2);
        _objc_release(pcVar7);
        _objc_release(pcVar4);
        uVar12 = *(undefined8 *)(pcVar1 + lVar13);
        pcVar4 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar4);
        func_0x00010c22aea0();
        func_0x00010c283e20(uVar12);
        _objc_release(pcVar4);
        uVar12 = *(undefined8 *)(pcVar1 + lVar13);
        pcVar4 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bf837c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2852a0(uVar12);
        _objc_release(pcVar2);
        _objc_release(pcVar4);
        pcVar4 = pcVar1 + lVar14;
        _objc_loadWeakRetained(pcVar4);
        pcVar7 = pcVar4;
        func_0x00010c29c060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pcVar4);
        func_0x00010bf0ca20(pcVar7);
        func_0x00010c239ea0(*(undefined8 *)(pcVar1 + lVar13));
      }
      _objc_release(pcVar7);
      puVar6 = PTR_PTR_1126b5648;
      func_0x00010c22af40(PTR_PTR_1126b5648);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      pcVar4 = pcVar1 + lVar14;
      _objc_loadWeakRetained(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010c22b040();
      func_0x000108f94dd8();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar11;
      func_0x00010c2ac460(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(pcVar2);
      _objc_release(pcVar4);
      pcVar1 = pcVar1 + _DAT_1127288fc;
      _objc_loadWeakRetained(pcVar1);
      pcVar4 = pcVar1;
      func_0x00010bfcdfa0();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar2;
      func_0x00010c22af20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(pcVar9);
      _objc_release(pcVar2);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105728b78; end: 105728e37;  */

/* WARNING: Removing unreachable block (ram,0x000105728e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105728b78(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108ad8b0,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar5 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_105728e38;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_120,pcVar2);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108ad900,&uStack_158,pcVar4);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar14 = 0;
    do {
      if ((&cStack_109)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    lVar14 = (long)_DAT_1127288f0;
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained();
    func_0x00010c22b040();
    _objc_release(pcVar1);
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained();
    pcVar5 = pcVar1;
    func_0x00010c22b040();
    func_0x000108f94dd8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar1);
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained();
    pcVar2 = pcVar1;
    func_0x00010c29c060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pcVar1);
    if (pcVar2 == (char *)0x0) {
      pcVar7 = PTR_PTR_1126bd8c0;
      _objc_alloc(PTR_PTR_1126bd8c0);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar8 = pcVar1;
      func_0x00010c22ad00();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar2);
      pcVar9 = pcVar2;
      func_0x00010c22ad20();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4 + _DAT_1127288f4;
      _objc_loadWeakRetained(pcVar3);
      pcVar10 = pcVar3;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045a60(pcVar7);
      _objc_release(pcVar10);
      _objc_release(pcVar3);
      _objc_release(pcVar9);
      _objc_release(pcVar2);
      _objc_release(pcVar8);
      _objc_release(pcVar1);
      func_0x00010c1c8b80(pcVar7);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar1);
      func_0x00010bf0c980(pcVar2);
      _objc_release(pcVar2);
    }
    else {
      puVar6 = PTR_PTR_1126bd8b8;
      _objc_alloc();
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar7 = pcVar1;
      func_0x00010c22ad00();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar2);
      pcVar8 = pcVar2;
      func_0x00010c22ad20();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4 + _DAT_1127288f4;
      _objc_loadWeakRetained(pcVar3);
      pcVar9 = pcVar3;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045a60();
      lVar13 = (long)_DAT_1127288f8;
      uVar12 = *(undefined8 *)(pcVar4 + lVar13);
      *(undefined **)(pcVar4 + lVar13) = puVar6;
      _objc_release(uVar12);
      _objc_release(pcVar9);
      _objc_release(pcVar3);
      _objc_release(pcVar8);
      _objc_release(pcVar2);
      _objc_release(pcVar7);
      _objc_release(pcVar1);
      uVar12 = *(undefined8 *)(pcVar4 + lVar13);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      func_0x00010c22aea0();
      func_0x00010c283e20(uVar12);
      _objc_release(pcVar1);
      uVar12 = *(undefined8 *)(pcVar4 + lVar13);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bf837c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2852a0(uVar12);
      _objc_release(pcVar2);
      _objc_release(pcVar1);
      pcVar1 = pcVar4 + lVar14;
      _objc_loadWeakRetained(pcVar1);
      pcVar7 = pcVar1;
      func_0x00010c29c060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar1);
      func_0x00010bf0ca20(pcVar7);
      func_0x00010c239ea0(*(undefined8 *)(pcVar4 + lVar13));
    }
    _objc_release(pcVar7);
    puVar6 = PTR_PTR_1126b5648;
    func_0x00010c22af40(PTR_PTR_1126b5648);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    pcVar1 = pcVar4 + lVar14;
    _objc_loadWeakRetained(pcVar1);
    pcVar2 = pcVar1;
    func_0x00010c22b040();
    func_0x000108f94dd8();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010c2ac460(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
    pcVar4 = pcVar4 + _DAT_1127288fc;
    _objc_loadWeakRetained(pcVar4);
    pcVar1 = pcVar4;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    func_0x00010c22af20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
    _objc_release(pcVar4);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
    return;
  }
  return;
}



/* Entry: 105728e38; end: 105729067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105728e38(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
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
    plVar15 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108ad900,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar14 = (long)_DAT_1127288f0;
  pcVar2 = pcVar1 + lVar14;
  _objc_loadWeakRetained();
  func_0x00010c22b040();
  _objc_release(pcVar2);
  pcVar2 = pcVar1 + lVar14;
  _objc_loadWeakRetained();
  pcVar3 = pcVar2;
  func_0x00010c22b040();
  func_0x000108f94dd8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar2);
  pcVar2 = pcVar1 + lVar14;
  _objc_loadWeakRetained();
  pcVar4 = pcVar2;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pcVar2);
  if (pcVar4 == (char *)0x0) {
    pcVar6 = PTR_PTR_1126bd8c0;
    _objc_alloc(PTR_PTR_1126bd8c0);
    pcVar2 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar2);
    pcVar7 = pcVar2;
    func_0x00010c22ad00();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar4);
    pcVar8 = pcVar4;
    func_0x00010c22ad20();
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = pcVar1 + _DAT_1127288f4;
    _objc_loadWeakRetained(pcVar9);
    pcVar10 = pcVar9;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045a60(pcVar6);
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    _objc_release(pcVar7);
    _objc_release(pcVar2);
    func_0x00010c1c8b80(pcVar6);
    pcVar2 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar2);
    pcVar4 = pcVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar2);
    func_0x00010bf0c980(pcVar4);
    _objc_release(pcVar4);
  }
  else {
    puVar5 = PTR_PTR_1126bd8b8;
    _objc_alloc();
    pcVar2 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar2);
    pcVar6 = pcVar2;
    func_0x00010c22ad00();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar4);
    pcVar7 = pcVar4;
    func_0x00010c22ad20();
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = pcVar1 + _DAT_1127288f4;
    _objc_loadWeakRetained(pcVar9);
    pcVar8 = pcVar9;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045a60();
    lVar13 = (long)_DAT_1127288f8;
    uVar12 = *(undefined8 *)(pcVar1 + lVar13);
    *(undefined **)(pcVar1 + lVar13) = puVar5;
    _objc_release(uVar12);
    _objc_release(pcVar8);
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    _objc_release(pcVar4);
    _objc_release(pcVar6);
    _objc_release(pcVar2);
    uVar12 = *(undefined8 *)(pcVar1 + lVar13);
    pcVar2 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar2);
    func_0x00010c22aea0();
    func_0x00010c283e20(uVar12);
    _objc_release(pcVar2);
    uVar12 = *(undefined8 *)(pcVar1 + lVar13);
    pcVar2 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar2);
    pcVar4 = pcVar2;
    func_0x00010bf837c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2852a0(uVar12);
    _objc_release(pcVar4);
    _objc_release(pcVar2);
    pcVar2 = pcVar1 + lVar14;
    _objc_loadWeakRetained(pcVar2);
    pcVar6 = pcVar2;
    func_0x00010c29c060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar2);
    func_0x00010bf0ca20(pcVar6);
    func_0x00010c239ea0(*(undefined8 *)(pcVar1 + lVar13));
  }
  _objc_release(pcVar6);
  puVar5 = PTR_PTR_1126b5648;
  func_0x00010c22af40(PTR_PTR_1126b5648);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  pcVar2 = pcVar1 + lVar14;
  _objc_loadWeakRetained(pcVar2);
  pcVar4 = pcVar2;
  func_0x00010c22b040();
  func_0x000108f94dd8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar11;
  func_0x00010c2ac460(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(pcVar4);
  _objc_release(pcVar2);
  pcVar1 = pcVar1 + _DAT_1127288fc;
  _objc_loadWeakRetained(pcVar1);
  pcVar2 = pcVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = pcVar4;
  func_0x00010c22af20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(pcVar9);
  _objc_release(pcVar4);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 105729068; end: 1057294c7; -[SCExternalShareSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105729068(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = (long)_DAT_1127288f0;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22b040();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c22b040();
  func_0x000108f94dd8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar6 = PTR_PTR_1126bd8c0;
    _objc_alloc(PTR_PTR_1126bd8c0);
    lVar1 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar1);
    lVar7 = lVar1;
    func_0x00010c22ad00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar4);
    lVar8 = lVar4;
    func_0x00010c22ad20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_1127288f4;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045a60(puVar6,param_2,lVar7,lVar8,lVar10,0,param_1,lVar3,lVar2 == 5);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar1);
    func_0x00010c1c8b80(puVar6,param_2,5);
    lVar1 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf0c980(lVar2,param_2,puVar6);
    _objc_release(lVar2);
  }
  else {
    puVar6 = PTR_PTR_1126bd8b8;
    _objc_alloc();
    lVar1 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar1);
    lVar7 = lVar1;
    func_0x00010c22ad00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar4);
    lVar8 = lVar4;
    func_0x00010c22ad20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_1127288f4;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045a60(puVar6,param_2,lVar7,lVar8,lVar10,0,param_1,lVar3,lVar2 == 5);
    lVar12 = (long)_DAT_1127288f8;
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar6;
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar1);
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    lVar1 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c22aea0();
    func_0x00010c283e20(uVar11);
    _objc_release(lVar1);
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    lVar1 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf837c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2852a0(uVar11,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = (undefined *)(param_1 + lVar13);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010c29c060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf0ca20(puVar6,param_2,*(undefined8 *)(param_1 + lVar12));
    func_0x00010c239ea0(*(undefined8 *)(param_1 + lVar12));
  }
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b5648;
  func_0x00010c22af40(PTR_PTR_1126b5648);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar1 = lVar13;
  func_0x00010c22b040();
  func_0x000108f94dd8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae8d8,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(lVar13);
  param_1 = param_1 + _DAT_1127288fc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010c22af20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1057294c8; end: 105729527; -[SCExternalShareSheetEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057294c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(byte *)(param_1 + _DAT_112728900) & 1) == 0) {
    func_0x00010bf82f40(param_1);
  }
  puStack_28 = PTR_PTR_1126e9fa8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105729528; end: 105729573; -[SCExternalShareSheetEntryPoint shareSheetRendered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105729528(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127288f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22af80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105729574; end: 10572969f; -[SCExternalShareSheetEntryPoint shareOptionSelected:] */

void FUN_105729574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057296a0;
  puStack_60 = &UNK_110846540;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  FUN_1057296ec(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e1880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b760();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1057296a0; end: 1057296eb;  */

void FUN_1057296a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfb720();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb1d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057296ec; end: 10572970f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057296ec(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272890c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105729710; end: 105729833; -[SCExternalShareSheetEntryPoint dismiss] */

void FUN_105729710(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105729834;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  FUN_1057296ec(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e1880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b760();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105729834; end: 10572987b;  */

void FUN_105729834(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfb720();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572987c; end: 1057298d7; -[SCExternalShareSheetEntryPoint _shareOptionSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572987c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127288f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ace0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057298d8; end: 10572994b; -[SCExternalShareSheetEntryPoint _detachUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057298d8(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112728900) = 1;
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_1127288f8));
  param_1 = param_1 + _DAT_1127288f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572994c; end: 10572994f;  */

void FUN_10572994c(void)

{
  return;
}



/* Entry: 105729950; end: 10572999b; -[SCExternalShareSheetEntryPoint _dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105729950(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127288f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572999c; end: 105729a13; -[SCExternalShareSheetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572999c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127288f4);
  _objc_destroyWeak(param_1 + _DAT_11272890c);
  _objc_destroyWeak(param_1 + _DAT_1127288fc);
  _objc_destroyWeak(param_1 + _DAT_112728908);
  _objc_destroyWeak(param_1 + _DAT_1127288f0);
  _objc_destroyWeak(param_1 + _DAT_112728904);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127288f8,0);
  return;
}



/* Entry: 105729a14; end: 105729b9f; -[SCExternalShareSheetViewController initWithShareOptions:shareOptionsOrder:valdiRuntimeProvider:cameraRollFirst:delegate:snapSource:useDeviceLevelStorage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105729a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e9fb0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112728910;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112728914;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112728918;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272891c) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112728920),param_7);
    lVar4 = (long)_DAT_112728924;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112728928);
    *(undefined **)((long)puVar1 + (long)_DAT_112728928) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105729ba0; end: 105729c07; -[SCExternalShareSheetViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105729ba0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e9fb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bde4700(param_1);
  param_1 = param_1 + _DAT_112728920;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22af80();
  _objc_release(param_1);
  return;
}



/* Entry: 105729c08; end: 105729c4f; -[SCExternalShareSheetViewController shareOptionClickedWithDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105729c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108f95f24(param_3);
  param_1 = param_1 + _DAT_112728920;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22ace0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105729c50; end: 105729d23; -[SCExternalShareSheetViewController dismiss] */

void FUN_105729c50(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105729cd8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105729d24; end: 105729d2b; -[SCExternalShareSheetViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105729d24(void)

{
  return 0;
}



/* Entry: 105729d2c; end: 105729d37; -[SCExternalShareSheetViewController pushToValdiMarshaller:] */

undefined8 FUN_105729d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df1c8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010afa0b54();
  func_0x00010afa0aec();
  return param_3;
}



/* Entry: 105729d38; end: 105729d43; -[SCExternalShareSheetViewController defaultProjectNameV2] */

void FUN_105729d38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_send_to_1126350c0);
  return;
}



/* Entry: 105729d44; end: 105729fd3; -[SCExternalShareSheetViewController _configSubViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105729d44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126b5668;
  _objc_alloc(PTR_PTR_1126b5668);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112728910);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5e80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112728914);
  func_0x00010bf51e00(uVar2);
  func_0x00010c18af20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c20eaa0(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c15d0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_11272891c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176de0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b5638;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112728918);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3,param_2,puVar1,param_1,uVar2);
  lVar9 = (long)_DAT_11272892c;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar3;
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c295200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0();
  _objc_release(uVar2);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x0001008cd514();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar9));
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar3);
  func_0x00010c222380(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar7);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar5);
  _objc_release(puVar7);
  _objc_release(puVar3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105729fd4; end: 105729fe3; -[SCExternalShareSheetViewController useShortCopyString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105729fd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728930);
}



/* Entry: 105729fe4; end: 10572a023; -[SCExternalShareSheetViewController setUseShortCopyString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105729fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112728930;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572a024; end: 10572a033; -[SCExternalShareSheetViewController useDeviceLevelStorage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10572a024(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728928);
}



/* Entry: 10572a034; end: 10572a073; -[SCExternalShareSheetViewController setUseDeviceLevelStorage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112728928;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572a074; end: 10572a083; -[SCExternalShareSheetViewController snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10572a074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728924);
}



/* Entry: 10572a084; end: 10572a08f; -[SCExternalShareSheetViewController setSnapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10572a090; end: 10572a12b; -[SCExternalShareSheetViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a090(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728924,0);
  _objc_storeStrong(param_1 + _DAT_112728928,0);
  _objc_storeStrong(param_1 + _DAT_112728930,0);
  _objc_destroyWeak(param_1 + _DAT_112728920);
  _objc_storeStrong(param_1 + _DAT_112728918,0);
  _objc_storeStrong(param_1 + _DAT_112728914,0);
  _objc_storeStrong(param_1 + _DAT_112728910,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272892c,0);
  return;
}



/* Entry: 10572a12c; end: 10572a2db; -[SCMainCameraExternalShareSheetContainerView initWithShareOptions:shareOptionsOrder:valdiRuntimeProvider:cameraRollFirst:delegate:snapSource:useDeviceLevelStorage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10572a12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puStack_68 = PTR_PTR_1126e9fb8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112728938;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11272893c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112728940;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_5;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112728944) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_112728948),param_7);
    lVar4 = (long)_DAT_11272894c;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_8;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112728950);
    *(undefined **)((long)puVar2 + (long)_DAT_112728950) = puVar1;
    _objc_release(uVar3);
    func_0x00010bde4720(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10572a2dc; end: 10572a383; -[SCMainCameraExternalShareSheetContainerView hitTest:withEvent:] */

void FUN_10572a2dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9fb8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_opt_class(param_3);
  puVar3 = (undefined1 *)puVar1;
  _objc_opt_isKindOfClass(puVar1,uVar2);
  if ((((ulong)puVar3 & 1) == 0) || (func_0x00010bdddb40(param_1,param_2), (param_3 & 1) == 0)) {
    _objc_retain(puVar1);
    puVar3 = (undefined1 *)puVar1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10572a384; end: 10572a393; -[SCMainCameraExternalShareSheetContainerView updateBottomPaddingSpace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a384(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112728954) = param_1;
  return;
}



/* Entry: 10572a394; end: 10572a3cb; -[SCMainCameraExternalShareSheetContainerView updateDismissDisabledRects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728958);
  *(undefined8 *)(param_1 + _DAT_112728958) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572a3cc; end: 10572a4c3; -[SCMainCameraExternalShareSheetContainerView showShareSheetWithAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a3cc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  double dVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = (long)_DAT_11272895c;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  dVar2 = *(double *)(param_5 + _DAT_112728954);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c19f0e0(param_1,param_2 - dVar2,*(undefined8 *)(param_5 + lVar1));
  lVar1 = (long)_DAT_112728960;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10572a4c4;
  puStack_80 = &UNK_110870f70;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_78 = param_5;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_98);
  return;
}



/* Entry: 10572a4c4; end: 10572a4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112728960),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10572a4e4; end: 10572a51f; -[SCMainCameraExternalShareSheetContainerView shareOptionClickedWithDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a4e4(long param_1)

{
  param_1 = param_1 + _DAT_112728948;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22ace0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572a520; end: 10572a60f; -[SCMainCameraExternalShareSheetContainerView dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a520(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + _DAT_112728934) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + _DAT_112728934) = 1;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10572a5c4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10572a610; end: 10572a617; -[SCMainCameraExternalShareSheetContainerView shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10572a610(void)

{
  return 0;
}



/* Entry: 10572a618; end: 10572a623; -[SCMainCameraExternalShareSheetContainerView pushToValdiMarshaller:] */

undefined8 FUN_10572a618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df1c8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010afa0b54();
  func_0x00010afa0aec();
  return param_3;
}



/* Entry: 10572a624; end: 10572a843; -[SCMainCameraExternalShareSheetContainerView _configSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a624(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126b5668;
  _objc_alloc(PTR_PTR_1126b5668);
  uVar2 = *(undefined8 *)(param_4 + _DAT_112728938);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5e80(puVar1,param_5,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_4 + _DAT_11272893c);
  func_0x00010bf51e00(uVar2);
  func_0x00010c18af20(puVar1,param_5,uVar2);
  _objc_release(uVar2);
  func_0x00010c20eaa0(puVar1,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c15e8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,
                      *(undefined1 *)(param_4 + _DAT_112728944));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176de0(puVar1,param_5,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b5638;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_4 + _DAT_112728940);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3,param_5,puVar1,param_4,uVar2);
  lVar7 = (long)_DAT_112728960;
  uVar5 = *(undefined8 *)(param_4 + lVar7);
  *(undefined **)(param_4 + lVar7) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_4 + lVar7);
  func_0x00010c295200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0();
  _objc_release(uVar2);
  func_0x00010bfb68e0(param_4);
  dVar8 = 200.0;
  func_0x00010c19f0e0(0,0x4069000000000000,param_3,0x4069000000000000,
                      *(undefined8 *)(param_4 + lVar7));
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bfb68e0(param_4);
  func_0x00010bfb68e0(param_4);
  func_0x00010c013de0(0,dVar8 + -200.0,param_3,0x4069000000000000);
  lVar6 = (long)_DAT_11272895c;
  uVar2 = *(undefined8 *)(param_4 + lVar6);
  *(undefined **)(param_4 + lVar6) = puVar3;
  _objc_release(uVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_4 + lVar6),param_5,1);
  func_0x00010befbb60(*(undefined8 *)(param_4 + lVar6),param_5,*(undefined8 *)(param_4 + lVar7));
  func_0x00010befbb60(param_4,param_5,*(undefined8 *)(param_4 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10572a844; end: 10572a97b; -[SCMainCameraExternalShareSheetContainerView _checkIfPointCanBePassedThrough:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10572a844(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_112728958);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar1 = *(ulong *)(lStack_118 + lVar5 * 8);
        func_0x00010bdc1080();
        _CGRectContainsPoint();
        if ((uVar1 & 1) != 0) {
          _objc_release(lVar3);
          lVar2 = 0;
          goto LAB_10572a944;
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  func_0x00010bf82f40(param_1);
  lVar2 = 1;
LAB_10572a944:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_112728964);
}



/* Entry: 10572a97c; end: 10572a98b; -[SCMainCameraExternalShareSheetContainerView useShortCopyString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10572a97c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728964);
}



/* Entry: 10572a98c; end: 10572a9cb; -[SCMainCameraExternalShareSheetContainerView setUseShortCopyString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112728964;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572a9cc; end: 10572a9db; -[SCMainCameraExternalShareSheetContainerView useDeviceLevelStorage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10572a9cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728950);
}



/* Entry: 10572a9dc; end: 10572aa1b; -[SCMainCameraExternalShareSheetContainerView setUseDeviceLevelStorage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572a9dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112728950;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572aa1c; end: 10572aa2b; -[SCMainCameraExternalShareSheetContainerView snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10572aa1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272894c);
}



/* Entry: 10572aa2c; end: 10572aa37; -[SCMainCameraExternalShareSheetContainerView setSnapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572aa2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10572aa38; end: 10572aaf3; -[SCMainCameraExternalShareSheetContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572aa38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272894c,0);
  _objc_storeStrong(param_1 + _DAT_112728950,0);
  _objc_storeStrong(param_1 + _DAT_112728964,0);
  _objc_storeStrong(param_1 + _DAT_112728958,0);
  _objc_storeStrong(param_1 + _DAT_11272895c,0);
  _objc_storeStrong(param_1 + _DAT_112728940,0);
  _objc_storeStrong(param_1 + _DAT_11272893c,0);
  _objc_storeStrong(param_1 + _DAT_112728938,0);
  _objc_storeStrong(param_1 + _DAT_112728960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728948);
  return;
}



/* Entry: 10572aaf4; end: 10572ab17; +[SCCSnapPlaybackViewISnapPlaybackViewActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10572aaf4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ada60;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108ada30;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10572ab18; end: 10572ab43;  */

undefined8 FUN_10572ab18(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[3],param_2[4],*param_2,param_2[1]);
  return 0;
}



/* Entry: 10572ab44; end: 10572abbf;  */

void FUN_10572ab44(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10572ac8c;
  puStack_30 = &UNK_1108adad8;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  FUN_10572acc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10572abc0; end: 10572abcb; +[SCCSnapPlaybackViewSnapPlaybackView componentPath] */

undefined ** FUN_10572abc0(void)

{
  return &PTR____CFConstantStringClassReference_110df9f58;
}



/* Entry: 10572abcc; end: 10572abff; -[SCCSnapPlaybackViewSnapPlaybackView initWithViewModel:componentContext:runtime:] */

void FUN_10572abcc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e9fc0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10572ac00; end: 10572ac4b; -[SCCSnapPlaybackViewSnapPlaybackView setViewModel:] */

void FUN_10572ac00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_10572acc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10572ac4c; end: 10572ac8b; -[SCCSnapPlaybackViewSnapPlaybackView viewModel] */

void FUN_10572ac4c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10572acc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10572ac8c; end: 10572acbf;  */

void FUN_10572ac8c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10572acc0; end: 10572acc7;  */

void FUN_10572acc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10572acc8; end: 10572adeb; -[SCCSnapPlaybackViewSnapPlaybackControls initWithPlay:pause:seek:setVolume:setScrubbingMode:] */

undefined8 *
FUN_10572acc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar4 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_1126e9fc8;
  puVar5 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010572b050();
  return puVar5;
}



/* Entry: 10572adec; end: 10572ae0b; +[SCCSnapPlaybackViewSnapPlaybackControls valdiMarshallableObjectDescriptor] */

void FUN_10572adec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108adb50;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_1108adb08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


