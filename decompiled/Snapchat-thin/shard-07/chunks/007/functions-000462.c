/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058960b0; end: 105896133;  */

void FUN_1058960b0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),7);
  return;
}



/* Entry: 105896134; end: 10589626f; -[SCMemoriesFeaturedStoryDataMutator updateTitleForTemporaryEntry:title:completionHandler:] */

void FUN_105896134(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105896270;
    puStack_50 = &UNK_110849530;
    uStack_48 = param_5;
    _objc_retain(param_5);
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    uVar2 = uStack_48;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar2 = param_3;
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105896270; end: 10589628b;  */

void FUN_105896270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105896288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,1,0);
  return;
}



/* Entry: 10589628c; end: 10589643b;  */

void FUN_10589628c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10589643c;
  puStack_78 = &UNK_110848218;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uStack_68 = uVar3;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c0f8520(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10589643c; end: 10589649f;  */

void FUN_10589643c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bc830;
    func_0x00010bf35080(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058964a0; end: 105896657;  */

void FUN_1058964a0(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126af4c0;
  if (lVar1 != 0) {
    puVar6 = (undefined *)0x0;
    puVar5 = (undefined *)0x0;
    if ((param_2 != 0) && (param_3 == 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf97200(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar6 = PTR_PTR_1126af4d0;
      uVar2 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar5 = puVar4;
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105896658;
    puStack_80 = &UNK_110855c70;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_58 = (undefined1)param_2;
    puStack_78 = puVar5;
    puStack_70 = puVar6;
    uStack_60 = uVar2;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    _objc_release(lStack_68);
    _objc_release(puStack_70);
    _objc_release(puStack_78);
    _objc_release(uStack_60);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105896658; end: 10589666f;  */

void FUN_105896658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010589666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105896670; end: 1058967af; -[SCMemoriesFeaturedStoryDataMutator reorderTempEntry:reorderedSnaps:completion:] */

void FUN_105896670(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,0);
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058967b0; end: 105896a23;  */

void FUN_1058967b0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010b5fcc74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) goto LAB_1058969c4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105896a24;
    puStack_80 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_78 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_98);
    lVar1 = lStack_78;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010b5fcde4();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_a0,*(undefined8 *)(param_1 + 0x30));
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_105896a38;
    puStack_c0 = &UNK_110848218;
    _objc_copyWeak(auStack_a8,auStack_a0);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uStack_b8 = uVar5;
    _objc_retain(lVar1);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x60);
    lStack_b0 = lVar1;
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_a0);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    func_0x00010c0f8520(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_e0);
    _objc_release(lStack_b0);
    _objc_release(uStack_b8);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(lVar1);
LAB_1058969c4:
  _objc_release(lVar2);
  return;
}



/* Entry: 105896a24; end: 105896a37;  */

void FUN_105896a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105896a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105896a38; end: 105896a9b;  */

void FUN_105896a38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bc830;
    func_0x00010bf35080(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062e0();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105896a9c; end: 105896c0f;  */

void FUN_105896a9c(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af4c0;
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      puVar3 = *(undefined **)(param_1 + 0x28);
      if (puVar3 == (undefined *)0x0) goto LAB_105896bf0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x105896c24;
      puStack_80 = &UNK_110849530;
      _objc_retain(puVar3);
      puStack_78 = puVar3;
      func_0x000100162d98("APPSTORE",&puStack_98);
      puVar3 = puStack_78;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_105896c10;
        puStack_58 = &UNK_11084aaa8;
        _objc_retain(lVar4);
        lStack_48 = lVar4;
        _objc_retain(puVar3);
        puStack_50 = puVar3;
        func_0x000100162d98("APPSTORE",&puStack_70);
        _objc_release(puStack_50);
        _objc_release(lStack_48);
      }
      func_0x00010bfa3360(lVar1);
    }
    _objc_release(puVar3);
  }
LAB_105896bf0:
  _objc_release(lVar1);
  return;
}



/* Entry: 105896c10; end: 105896c37;  */

void FUN_105896c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105896c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105896c38; end: 105896ccf; -[SCMemoriesFeaturedStoryDataMutator updateTitleForPlaceholderEntry:title:] */

void FUN_105896c38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0(PTR_PTR_1126bf8c8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e860(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105896cd0; end: 105896d17; -[SCMemoriesFeaturedStoryDataMutator updateFeaturedStoriesWithEntries:] */

void FUN_105896cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c285b80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105896d18; end: 105896d7b; -[SCMemoriesFeaturedStoryDataMutator fetchMemoriesOperaFeaturedStoriesSnapForEntry:] */

void FUN_105896d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfa8860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105896d7c; end: 105896d83; -[SCMemoriesFeaturedStoryDataMutator addListener:] */

void FUN_105896d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105896d84; end: 105896d8b; -[SCMemoriesFeaturedStoryDataMutator removeListener:] */

void FUN_105896d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105896d8c; end: 105896e83; -[SCMemoriesFeaturedStoryDataMutator resetViewProgressForFeaturedStories:completionQueue:completionHandler:] */

void FUN_105896d8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105896e84;
    puStack_68 = &UNK_1108465d0;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105896e84; end: 105896f63;  */

void FUN_105896e84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105896f64;
  puStack_50 = &UNK_110842e18;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  puStack_90 = puVar3;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105897094;
  puStack_78 = &UNK_11085a1b8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar5;
  _objc_retain(uVar2);
  uStack_70 = uVar2;
  func_0x00010c0f8520(uVar4,param_2,&puStack_68,uVar1,&puStack_90);
  _objc_release(uVar4);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105896f64; end: 105897093;  */

void FUN_105896f64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      puVar3 = PTR_PTR_1126bc830;
      func_0x00010bf35080(PTR_PTR_1126bc830);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2063c0();
      func_0x00010c2045e0(puVar3);
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010589709c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))();
  return;
}



/* Entry: 105897094; end: 10589709f;  */

void FUN_105897094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010589709c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1058970a0; end: 1058971bf; -[SCMemoriesFeaturedStoryDataMutator _removeMediaForSnaps:] */

undefined * FUN_1058970a0(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
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
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar9 = auStack_d8;
  iVar10 = 0x10;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar13 = *plStack_110;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(undefined8 *)(lStack_118 + (long)puVar14 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        param_2 = uVar3;
        func_0x0001080194b4(uVar12,uVar3);
        _objc_release(uVar3);
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar9 = auStack_d8;
      iVar10 = 0x10;
      puVar2 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  if (iVar10 != 0) {
    puVar2 = (undefined *)puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar8);
        }
        uVar12 = *(undefined8 *)((long)puVar14 * 8);
        uVar3 = *(undefined8 *)(param_3 + 0x18);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        param_2 = uVar3;
        func_0x0001080194b4(uVar12,uVar3);
        _objc_release(uVar3);
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar2 = (undefined *)puVar8;
      func_0x00010bf52a60();
    }
  }
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
  puVar14 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830);
  _objc_retainAutoreleasedReturnValue();
  iVar10 = (int)*(undefined8 *)(param_3 + 0x50);
  func_0x000108ec1b8c();
  puVar2 = PTR_PTR_1126af4d0;
  if (iVar10 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52da0();
    _objc_release(uVar3);
    puVar11 = (undefined *)puVar8;
    func_0x00010bf529e0();
    if (puVar2 <= puVar11) {
      func_0x00010c1b1a80(puVar14);
    }
  }
  puVar4 = puVar9;
  func_0x00010c245800(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_retain(puVar8);
  puVar2 = (undefined *)puVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar8);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      puVar6 = puVar14;
      func_0x00010c245780(puVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar12;
      func_0x00010c241220(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      param_2 = uVar3;
      func_0x00010b704538(puVar6,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(puVar14);
      _objc_release(puVar7);
      _objc_release(uVar3);
      _objc_release(puVar6);
      func_0x00010c241220(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar12);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = (undefined *)puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  func_0x00010c2062e0(puVar14);
  puVar2 = (undefined *)puVar8;
  func_0x00010bfaea20(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010bf9c1c0();
  if (0 < (int)puVar4) {
    func_0x00010bf9c1c0(puVar9);
    func_0x00010bf529e0(puVar2);
    func_0x00010c1988c0(puVar14);
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return (undefined *)puVar8;
  }
  ___stack_chk_fail();
  func_0x00010bf3d2a0(param_2);
  return (undefined *)(ulong)((int)param_2 != 0);
}



/* Entry: 1058971c0; end: 10589754f; -[SCMemoriesFeaturedStoryDataMutator _performDeletionChangeRequestsForSnaps:entry:removeMedia:] */

undefined *
FUN_1058971c0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 != 0) {
    puVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)((long)puVar11 * 8);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        param_2 = uVar4;
        func_0x0001080194b4(uVar9,uVar4);
        _objc_release(uVar4);
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      puVar3 = param_3;
      func_0x00010bf52a60();
    }
  }
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
  puVar11 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x000108ec1b8c();
  puVar3 = PTR_PTR_1126af4d0;
  if (iVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52da0();
    _objc_release(uVar4);
    puVar8 = param_3;
    func_0x00010bf529e0();
    if (puVar3 <= puVar8) {
      func_0x00010c1b1a80(puVar11);
    }
  }
  uVar4 = param_4;
  func_0x00010c245800(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(undefined8 *)((long)puVar8 * 8);
      puVar5 = puVar11;
      func_0x00010c245780(puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010c241220(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      param_2 = uVar4;
      func_0x00010b704538(puVar5,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(puVar11);
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(puVar5);
      func_0x00010c241220(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9);
      _objc_release(uVar10);
      puVar8 = puVar8 + 1;
    } while (puVar3 != puVar8);
    puVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010c2062e0(puVar11);
  puVar3 = param_3;
  func_0x00010bfaea20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf9c1c0();
  if (0 < (int)uVar4) {
    func_0x00010bf9c1c0(param_4);
    func_0x00010bf529e0(puVar3);
    func_0x00010c1988c0(puVar11);
  }
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bf3d2a0(param_2);
  return (undefined *)(ulong)((int)param_2 != 0);
}



/* Entry: 105897550; end: 10589756f;  */

bool FUN_105897550(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3d2a0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 105897570; end: 105897587; -[SCMemoriesFeaturedStoryDataMutator delegate] */

void FUN_105897570(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105897588; end: 10589759f; -[SCMemoriesFeaturedStoryDataMutator dataSource] */

void FUN_105897588(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058975a0; end: 105897663; -[SCMemoriesFeaturedStoryDataMutator .cxx_destruct] */

void FUN_1058975a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 105897664; end: 105897757; -[SCMemoriesFeaturedStoryDataMutatorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105897664(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b480);
  _objc_destroyWeak(param_1 + _DAT_11272b47c);
  _objc_destroyWeak(param_1 + _DAT_11272b478);
  _objc_destroyWeak(param_1 + _DAT_11272b474);
  _objc_destroyWeak(param_1 + _DAT_11272b470);
  _objc_destroyWeak(param_1 + _DAT_11272b46c);
  _objc_destroyWeak(param_1 + _DAT_11272b468);
  _objc_destroyWeak(param_1 + _DAT_11272b464);
  _objc_destroyWeak(param_1 + _DAT_11272b460);
  _objc_destroyWeak(param_1 + _DAT_11272b45c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b458);
  return;
}



/* Entry: 105897758; end: 105897c8b; -[SCMemoriesGenAIFeaturedStoryManagerServiceProvider _createMashupStyleGenAIStoriesManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105897758(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126bf930;
  _objc_alloc();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272b498;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar23;
  func_0x00010c0c8d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_78 = 0;
    lVar24 = 0;
  }
  else {
    uStack_78 = param_1 + _DAT_11272b4a0;
    _objc_loadWeakRetained();
    lVar24 = param_1 + _DAT_11272b494;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar24;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11272b488;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar25;
  func_0x00010c14a940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11272b48c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar26;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11272b4ac;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar27;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_105897c8c();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_105897c8c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11272b4a4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar28;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11272b490;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar29;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11272b4a8;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar30;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11272b4b0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar31;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11272b4bc;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar32;
  func_0x00010c0c9b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11272b4b4;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar33;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11272b4b8;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar34;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11272b4c0;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar35;
  func_0x00010c0c8ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_11272b4c4;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar36;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_11272b4c8;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar37;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = 0;
  if (param_1 != 0) {
    lVar21 = param_1 + _DAT_11272b4cc;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar21;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a820(puVar1,param_2,lVar2,uStack_78,lVar3,lVar4,lVar5,lVar6,lVar8,lVar10,lVar11,
                      lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar22);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar37);
  _objc_release(lVar19);
  _objc_release(lVar36);
  _objc_release(lVar18);
  _objc_release(lVar35);
  _objc_release(lVar17);
  _objc_release(lVar34);
  _objc_release(lVar16);
  _objc_release(lVar33);
  _objc_release(lVar15);
  _objc_release(lVar32);
  _objc_release(lVar14);
  _objc_release(lVar31);
  _objc_release(lVar13);
  _objc_release(lVar30);
  _objc_release(lVar12);
  _objc_release(lVar29);
  _objc_release(lVar11);
  _objc_release(lVar28);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar27);
  _objc_release(lVar5);
  _objc_release(lVar26);
  _objc_release(lVar4);
  _objc_release(lVar25);
  _objc_release(lVar3);
  _objc_release(lVar24);
  _objc_release(uStack_78);
  _objc_release(lVar2);
  _objc_release(lVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105897c8c; end: 105897caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105897c8c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272b49c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105897cb0; end: 105897db3; -[SCMemoriesGenAIFeaturedStoryManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105897cb0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b4cc);
  _objc_destroyWeak(param_1 + _DAT_11272b4c8);
  _objc_destroyWeak(param_1 + _DAT_11272b4c4);
  _objc_destroyWeak(param_1 + _DAT_11272b4c0);
  _objc_destroyWeak(param_1 + _DAT_11272b4bc);
  _objc_destroyWeak(param_1 + _DAT_11272b4b8);
  _objc_destroyWeak(param_1 + _DAT_11272b4b4);
  _objc_destroyWeak(param_1 + _DAT_11272b4b0);
  _objc_destroyWeak(param_1 + _DAT_11272b4ac);
  _objc_destroyWeak(param_1 + _DAT_11272b4a8);
  _objc_destroyWeak(param_1 + _DAT_11272b4a4);
  _objc_destroyWeak(param_1 + _DAT_11272b4a0);
  _objc_destroyWeak(param_1 + _DAT_11272b49c);
  _objc_destroyWeak(param_1 + _DAT_11272b498);
  _objc_destroyWeak(param_1 + _DAT_11272b494);
  _objc_destroyWeak(param_1 + _DAT_11272b490);
  _objc_destroyWeak(param_1 + _DAT_11272b48c);
  _objc_destroyWeak(param_1 + _DAT_11272b488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b484);
  return;
}



/* Entry: 105897db4; end: 10589826b; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager initWithMemoriesMashupSnapDocFactory:cloudFSService:snapDocEditorFactory:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesProfile:memoriesDataObjectContext:memoriesFeaturedStoryDataMutator:grapheneRegistry:encryptedContentManager:snapDocDownloadingService:snapRenderer:circumstanceEngine:notificationPool:coordinator:docObjectContext:memoriesEncryptedDatabase:memoriesUserDefaultsManager:] */

undefined8 *
FUN_105897db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126eaaf8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    puVar1[0x1a] = 0x4014000000000000;
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = param_16;
    func_0x000108ec1354();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 10589826c; end: 10589842f; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateMashupStyleFeaturedStoriesForNewCollectionsIfNecessaryWithServerRespondedCollections:allCollectionIds:context:origin:shouldEnableFailureCap:] */

void FUN_10589826c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 == lVar2) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xe0) = param_7;
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_3);
    uStack_68 = param_5;
    uStack_60 = param_6;
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25ffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar4 = PTR_PTR_1126ae6b8;
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105898430; end: 105898577;  */

void FUN_105898430(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    puVar4 = PTR_PTR_1126af4c0;
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaad00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x000107e665e8(puVar4,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1b200(lVar1);
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105898578; end: 1058985d7; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateMashupForGalleryEntry:memoriesMashupModel:] */

void FUN_105898578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058985d8; end: 105898637; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateMashupForGallerySnaps:collageCreativeTools:] */

void FUN_1058985d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105898638; end: 10589863f; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager terminateFeaturedStoriesGenerationIfNeeded] */

void FUN_105898638(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__terminateGenerationWithReason__112590640,1);
  return;
}



/* Entry: 105898640; end: 10589875f; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager featuredStoryGenerationDidComplete:generationResult:context:completionObserver:entrySource:collectionTitle:collectionCategory:] */

void FUN_105898640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010be1f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e67df8(param_3,param_4,param_5,param_7,param_6,param_8,uVar4,
                      &PTR____CFConstantStringClassReference_110e09738,uVar2,uVar1,uVar5,uVar6,uVar7
                      ,lVar3,*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0xe0));
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105898760; end: 10589889f; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateFeaturedStoryWithLocalEntry:memoriesMashupStyleModel:memoriesServerGeneratedStoryModel:observer:collectionCategory:itemOrder:groupName:priority:] */

void FUN_105898760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1058988a0;
  puStack_90 = &UNK_1108bad48;
  uStack_60 = param_9;
  uStack_88 = param_3;
  uStack_80 = param_6;
  lStack_78 = param_1;
  uStack_70 = param_5;
  uStack_68 = param_8;
  uStack_58 = param_7;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1058988a0; end: 105898c17;  */

void FUN_1058988a0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105898c18;
  uStack_70 = 0x105898c28;
  uStack_68 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105898c30;
  puStack_a0 = &UNK_1108ba818;
  puStack_88 = puStack_98;
  func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_b8,
                      &PTR___NSConcreteGlobalBlock_1108bacf8);
  puVar4 = PTR_PTR_1126af4c0;
  lVar2 = puStack_88[5];
  if (lVar2 == 0) {
LAB_105898b04:
    uVar3 = 3;
  }
  else {
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_88[5];
    puStack_88[5] = puVar4;
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x38) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010bee7c00();
      if (iVar1 != 0) {
        uVar5 = puStack_88[5];
        func_0x00010c080ca0();
        if ((uVar5 & 1) == 0) goto LAB_105898b04;
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010bddc100();
        if (iVar1 == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          lVar2 = *(long *)(param_1 + 0x38);
          func_0x00010c15f260(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar2;
          func_0x00010bfbea80();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c0844e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be1b220(uVar3);
LAB_105898bc4:
          _objc_release(uVar8);
          _objc_release(lVar7);
        }
        else {
          lVar6 = *(long *)(param_1 + 0x38);
          func_0x00010c15f260();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bfbea80();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar7;
          func_0x00010c247ba0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(lVar6);
          lVar7 = lVar2;
          func_0x00010bf529e0();
          if (lVar7 != 0) {
            lVar6 = *(long *)(param_1 + 0x30);
            lVar7 = lVar2;
            func_0x000107e666f0(lVar2,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x90),
                                &PTR____CFConstantStringClassReference_110e09738,
                                *(undefined8 *)(lVar6 + 0xa0));
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(param_1 + 0x28);
            _objc_retain(uVar8);
            uVar10 = *(undefined8 *)(param_1 + 0x38);
            _objc_retain(*(undefined8 *)(param_1 + 0x38));
            uVar3 = *(undefined8 *)(param_1 + 0x40);
            _objc_retain(uVar3);
            uVar9 = *(undefined8 *)(param_1 + 0x48);
            _objc_retain(uVar9);
            func_0x00010c297260(lVar7);
            _objc_release(uVar9);
            _objc_release(uVar3);
            _objc_release(uVar10);
            goto LAB_105898bc4;
          }
          func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),4,
                              &PTR____CFConstantStringClassReference_110e09738);
        }
        _objc_release(lVar2);
        goto LAB_105898b20;
      }
    }
    uVar3 = 2;
  }
  func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),uVar3,
                      &PTR____CFConstantStringClassReference_110e09738);
LAB_105898b20:
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  return;
}



/* Entry: 105898c18; end: 105898c2f;  */

void FUN_105898c18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105898c30; end: 105898c67;  */

void FUN_105898c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105898c68; end: 105898c6b;  */

void FUN_105898c68(void)

{
  return;
}



/* Entry: 105898c6c; end: 105898d83;  */

void FUN_105898c6c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),5,
                        &PTR____CFConstantStringClassReference_110e09738);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010bf51e00(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15f260(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbea80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0844e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1b220(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105898d84; end: 105898dd7;  */

void FUN_105898d84(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 105898dd8; end: 10589901f; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _containsGenAILens:] */

ulong FUN_105898dd8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  uVar3 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar8 = auStack_100;
  uVar3 = uVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(uVar4);
      }
      uVar9 = *(undefined8 *)(uVar10 * 8);
      uVar5 = uVar9;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf0b760();
      _objc_release(uVar5);
      if ((int)uVar6 == 5) {
        func_0x00010c0c3fe0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010bf8a6c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf4dae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf980c0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar9);
      }
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
    puVar8 = auStack_100;
    uVar3 = uVar4;
    func_0x00010bf52a60();
  }
  _objc_release(uVar4);
  bVar1 = *(byte *)(puStack_118 + 3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (ulong)(bVar1 & 1);
  }
  ___stack_chk_fail();
  iVar7 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  if (iVar7 == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
    *puVar8 = 1;
  }
  return param_3;
}



/* Entry: 105899020; end: 10589903f;  */

void FUN_105899020(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 105899040; end: 105899083; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _validateServerGeneratedSnapDataModelIsGenAI:] */

bool FUN_105899040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c15f260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c243a00();
  _objc_release(param_3);
  return (int)uVar1 == 1;
}



/* Entry: 105899084; end: 1058992cb; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _allowToGenerateAISnapDataModel:forOrigin:collectionCategory:] */

undefined8
FUN_105899084(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  if (param_4 == 3) {
    return 0;
  }
  if (param_4 != 0) {
    return 1;
  }
  func_0x00010c15f260();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfbea80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c12f9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c12fa40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c096c60();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bfd84e0();
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)lVar15 != 0) {
      uVar17 = *(undefined8 *)(param_1 + 0xd8);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar17,param_2,puVar16);
      _objc_release(puVar16);
      goto LAB_1058992a0;
    }
  }
  uVar17 = 1;
LAB_1058992a0:
  _objc_release(lVar2);
  return uVar17;
}



/* Entry: 1058992cc; end: 1058992ef; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _getBitMaskTypeFromCollectionCategory:] */

undefined8 FUN_1058992cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 0x32U < 0x10) {
    return *(undefined8 *)(&UNK_10ddbfdf8 + (param_3 - 0x32U) * 8);
  }
  return 0;
}



/* Entry: 1058992f0; end: 105899347; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _terminateGenerationWithReason:] */

void FUN_1058992f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105899348;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xa0),param_2,&puStack_40);
  return;
}



/* Entry: 105899348; end: 10589938f;  */

void FUN_105899348(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0) = *(undefined8 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105899390; end: 105899b4b; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _generateGenAIFeaturedStoriesIfNecessaryWithCollections:featuredStoriesToConvert:context:completionObserver:origin:] */

long FUN_105899390(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar21 = param_3;
  func_0x00010bf529e0();
  lVar3 = param_4;
  func_0x00010bf529e0();
  if ((lVar21 == lVar3) && (lVar21 = param_3, func_0x00010bf529e0(), lVar21 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar4;
    _objc_release(uVar23);
    _objc_retain(param_3);
    lVar21 = param_3;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar21 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        lVar27 = *(long *)(lVar24 * 8);
        lVar5 = param_1;
        func_0x00010beb43c0();
        if ((int)lVar5 == 0) goto LAB_105899a38;
        lVar6 = lVar27;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar28 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar6);
            }
            lVar25 = *(long *)(lVar28 * 8);
            lVar7 = param_1;
            func_0x00010beb43c0();
            if ((int)lVar7 == 0) goto LAB_105899a00;
            lVar7 = lVar25;
            func_0x00010c0848e0();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar25;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar25;
            func_0x00010c15f280();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010bf529e0();
            _objc_release(lVar9);
            if (lVar10 != 0) {
              lVar9 = param_4;
              func_0x00010bfb2040();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126af4d0;
              if (lVar9 != 0) {
                uVar23 = *(undefined8 *)(param_1 + 0x40);
                func_0x00010c269d40(uVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa7380();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar23);
                puVar11 = puVar4;
                func_0x00010c0ba200();
                _objc_retainAutoreleasedReturnValue();
                func_0x000107e6a278();
                func_0x00010c15f280();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar25;
                func_0x00010bf52a60();
                lVar2 = lRam0000000000000000;
                while (lVar10 != 0) {
                  lVar29 = 0;
                  do {
                    if (lRam0000000000000000 != lVar2) {
                      _objc_enumerationMutation(lVar25);
                    }
                    uVar26 = *(ulong *)(lVar29 * 8);
                    lVar12 = param_1;
                    func_0x00010beb43c0();
                    if ((int)lVar12 == 0) goto LAB_10589998c;
                    func_0x000107e69b00();
                    _objc_retainAutoreleasedReturnValue();
                    if ((uVar26 != 0) && (lVar12 = param_1, func_0x00010bee7c00(), (int)lVar12 != 0)
                       ) {
                      uVar13 = uVar26;
                      func_0x00010c0844e0(uVar26);
                      _objc_retainAutoreleasedReturnValue();
                      puVar14 = puVar11;
                      func_0x00010bf4b900();
                      _objc_release(uVar13);
                      if (((ulong)puVar14 & 1) == 0) {
                        lVar12 = lVar27;
                        func_0x00010bf33240(lVar27);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c067fc0();
                        lVar15 = param_1;
                        func_0x00010bdca340();
                        _objc_release(lVar12);
                        if ((int)lVar15 == 0) {
                          puVar14 = PTR_PTR_1126af5d0;
                          func_0x00010bfa01c0(PTR_PTR_1126af5d0);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0d9840(param_6);
                          _objc_release(puVar14);
                          _objc_release(uVar26);
                          _objc_release(lVar25);
                          _objc_release(puVar11);
                          _objc_release(puVar4);
                          _objc_release(lVar8);
                          _objc_release(lVar7);
                          _objc_release(lVar9);
                          _objc_release(lVar6);
                          _objc_release(param_3);
                          goto LAB_105899a6c;
                        }
                        puVar14 = PTR_PTR_1126bf800;
                        func_0x00010bfbcd40();
                        _objc_retainAutoreleasedReturnValue();
                        uVar13 = uVar26;
                        func_0x00010c0844e0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar16 = uVar13;
                        param_2 = lVar9;
                        func_0x000107e679c8();
                        if ((uVar16 & 1) == 0) {
                          puVar17 = PTR_PTR_1126bf808;
                          _objc_alloc();
                          uVar23 = *(undefined8 *)(param_1 + 0x40);
                          func_0x00010c269d40();
                          _objc_retainAutoreleasedReturnValue();
                          lVar12 = lVar27;
                          func_0x00010c2711a0();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf977c0();
                          lVar15 = lVar27;
                          func_0x00010bf33240();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c067fc0();
                          lVar18 = lVar27;
                          func_0x00010bf33240();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c067fc0();
                          func_0x00010be1d3e0();
                          lVar19 = lVar27;
                          func_0x00010bfcf800();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf529e0();
                          func_0x00010c028a60(puVar17);
                          _objc_release(lVar19);
                          _objc_release(lVar18);
                          _objc_release(lVar15);
                          _objc_release(lVar12);
                          _objc_release(uVar23);
                          uVar23 = *(undefined8 *)(param_1 + 0xb0);
                          puVar20 = PTR_PTR_1126b60f8;
                          func_0x00010c0f2b40(PTR_PTR_1126b60f8);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(uVar23);
                          _objc_release(puVar20);
                          uVar23 = *(undefined8 *)(param_1 + 0x80);
                          func_0x00010c25e900(param_1);
                          func_0x00010bef7840(uVar23);
                          _objc_release(puVar17);
                        }
                        _objc_release(uVar13);
                        _objc_release(puVar14);
                      }
                    }
                    _objc_release(uVar26);
                    lVar29 = lVar29 + 1;
                  } while (lVar10 != lVar29);
                  lVar10 = lVar25;
                  func_0x00010bf52a60();
                }
LAB_10589998c:
                _objc_release(lVar25);
                _objc_release(puVar11);
                _objc_release(puVar4);
                _objc_release(lVar8);
                lVar8 = lVar7;
                lVar7 = lVar9;
              }
            }
            _objc_release(lVar8);
            _objc_release(lVar7);
            lVar28 = lVar28 + 1;
          } while (lVar28 != lVar5);
          lVar5 = lVar6;
          func_0x00010bf52a60();
        }
LAB_105899a00:
        _objc_release(lVar6);
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar21);
      lVar21 = param_3;
      func_0x00010bf52a60();
    }
LAB_105899a38:
    _objc_release(param_3);
    lVar21 = *(long *)(param_1 + 0xb0);
    func_0x00010bf529e0();
    if (lVar21 != 0) goto LAB_105899a6c;
  }
  param_2 = param_6;
  func_0x000107e67794(1,param_6,0);
LAB_105899a6c:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf3fe40(uVar23);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar23);
  _objc_release(param_2);
  return lVar21;
}



/* Entry: 105899b4c; end: 105899bbb;  */

undefined8 FUN_105899b4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3fe40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105899bbc; end: 105899bc3;  */

void FUN_105899bbc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105899bc4; end: 105899beb; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _shouldKeepAddingCommand] */

void FUN_105899bc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c25e900();
                    /* WARNING: Could not recover jumptable at 0x00010c22daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_shouldAddCommandForCurrentType__1126690e0,param_1);
  return;
}



/* Entry: 105899bec; end: 105899bf3; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager subType] */

undefined8 FUN_105899bec(void)

{
  return 5;
}



/* Entry: 105899bf4; end: 105899f0b; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _generateGenAIForFeaturedStory:orderedSelectedOriginalSnaps:genAIModel:collectionCategory:snapId:itemOrder:groupName:observer:] */

void FUN_105899bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_5;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = PTR_PTR_1126b25b8;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011280();
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e6121c(puVar3,uVar1,uVar6,uVar5,*(undefined8 *)(param_1 + 0x18),puVar2,
                      &PTR____CFConstantStringClassReference_110e09738);
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  puVar4 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(param_10);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uStack_78 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010c297260(puVar4);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105899f0c; end: 105899f13;  */

void FUN_105899f0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105899f14; end: 10589a3bb;  */

void FUN_105899f14(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (uVar2 == 0) goto LAB_105899fc0;
  lVar3 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (lVar3 != 0)) {
    if (*(long *)(uVar2 + 0xc0) == 0) {
      iVar1 = (int)*(undefined8 *)(uVar2 + 0x68);
      func_0x000108ec1214();
      if (iVar1 == 0) {
        lVar4 = *(long *)(param_1 + 0x50);
        func_0x00010c270d80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          lVar4 = *(long *)(param_1 + 0x58);
          func_0x00010bf529e0();
          if (lVar4 != 0) {
            lVar5 = *(long *)(param_1 + 0x58);
            func_0x00010bfb1920(lVar5);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar5;
            func_0x00010bf59960();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            puVar6 = PTR_PTR_1126bcf30;
            _objc_opt_new(PTR_PTR_1126bcf30);
            func_0x00010c26f320(lVar4);
            func_0x00010c203d40(puVar6);
            func_0x00010c216040(*(undefined8 *)(param_1 + 0x50));
            _objc_release(puVar6);
            goto LAB_10589a0c0;
          }
        }
        else {
LAB_10589a0c0:
          _objc_release(lVar4);
        }
        lVar7 = *(long *)(param_1 + 0x50);
        func_0x000107e63da0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(uVar2 + 0x88);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        FUN_10589af74();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        puVar6 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_10589a3bc;
        puStack_88 = &UNK_110856a28;
        _objc_retain(lVar7);
        lVar5 = lVar4;
        lStack_80 = lVar7;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          uVar8 = *(undefined8 *)(uVar2 + 0x70);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c12f680();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          if (((lVar7 != 0) && (*(long *)(param_1 + 0x68) == 0x32)) &&
             (uVar10 = uVar2, func_0x00010bde79a0(), (uVar10 & 1) == 0)) {
            puStack_d0 = puVar6;
            uStack_c8 = 0xc2000000;
            uStack_c0 = 0x10589a3c8;
            puStack_b8 = &UNK_110841f80;
            uStack_b0 = uVar2;
            _objc_retain(lVar7);
            lStack_a8 = lVar7;
            func_0x0001000d76cc("APPSTORE",&puStack_d0);
            _objc_release(lStack_a8);
          }
          _objc_retain(uVar9);
          uVar8 = *(undefined8 *)(uVar2 + 0xb8);
          *(undefined8 *)(uVar2 + 0xb8) = uVar9;
          _objc_release(uVar8);
          _objc_initWeak(auStack_d8,uVar2);
          uVar8 = uVar9;
          func_0x00010c13cb40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_e8,auStack_d8);
          _objc_retain(uVar9);
          uVar12 = *(undefined8 *)(param_1 + 0x20);
          _objc_retain(uVar12);
          uVar13 = *(undefined8 *)(param_1 + 0x50);
          _objc_retain(uVar13);
          uVar14 = *(undefined8 *)(param_1 + 0x28);
          _objc_retain(uVar14);
          uVar15 = *(undefined8 *)(param_1 + 0x30);
          _objc_retain(uVar15);
          uStack_e0 = *(undefined8 *)(param_1 + 0x68);
          uVar16 = *(undefined8 *)(param_1 + 0x38);
          _objc_retain(uVar16);
          uVar17 = *(undefined8 *)(param_1 + 0x40);
          _objc_retain(uVar17);
          uVar11 = *(undefined8 *)(param_1 + 0x48);
          _objc_retain(uVar11);
          func_0x00010c297260(uVar8);
          _objc_release(uVar8);
          _objc_release(uVar11);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar9);
          _objc_destroyWeak(auStack_e8);
          _objc_destroyWeak(auStack_d8);
          _objc_release(uVar9);
        }
        else {
          func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),0x1e,
                              &PTR____CFConstantStringClassReference_110e09738);
        }
        _objc_release(lVar5);
        _objc_release(lStack_80);
        _objc_release(lVar4);
        _objc_release(lVar7);
      }
      else {
        func_0x00010be05c40(uVar2);
      }
    }
    else {
      func_0x000107e66410(*(undefined8 *)(param_1 + 0x20),*(long *)(uVar2 + 0xc0),
                          &PTR____CFConstantStringClassReference_110e09738);
      func_0x00010be94020(uVar2);
    }
  }
  else {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),10,
                        &PTR____CFConstantStringClassReference_110e09738);
  }
  _objc_release(lVar3);
LAB_105899fc0:
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10589a3bc; end: 10589a3d3;  */

void FUN_10589a3bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isEqualToString__1125fa240,param_2);
  return;
}



/* Entry: 10589a3d4; end: 10589a637;  */

void FUN_10589a3d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10589a600;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10589a638;
  puStack_70 = &UNK_110842e18;
  lStack_68 = lVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  if (*(long *)(lVar1 + 0xb8) != *(long *)(param_1 + 0x20)) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),0xe,
                        &PTR____CFConstantStringClassReference_110e09738);
    goto LAB_10589a600;
  }
  *(undefined8 *)(lVar1 + 0xb8) = 0;
  _objc_release();
  if (*(long *)(lVar1 + 0xc0) != 0) {
    func_0x000107e66410(*(undefined8 *)(param_1 + 0x28),*(long *)(lVar1 + 0xc0),
                        &PTR____CFConstantStringClassReference_110e09738);
    func_0x00010be94020(lVar1);
    goto LAB_10589a600;
  }
  lVar2 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd8fa0();
  if ((int)uVar4 == 0) {
LAB_10589a5ac:
    _objc_release(uVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfdb0c0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0fee00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c0fee00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea760();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      goto LAB_10589a5ac;
    }
  }
  if ((param_3 == 0) && (lVar2 != 0)) {
    func_0x00010be05c40(lVar1);
  }
  else {
    func_0x000107e664b4(*(undefined8 *)(param_1 + 0x28),param_3,
                        &PTR____CFConstantStringClassReference_110e09738);
  }
  _objc_release(lVar2);
LAB_10589a600:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10589a638; end: 10589a63f;  */

void FUN_10589a638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__invalidateLensTimeoutTimer_11256d008);
  return;
}



/* Entry: 10589a640; end: 10589a70f; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _setupNonSupportedLensTimerWithLensId:] */

void FUN_10589a640(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010be3d9a0(param_1);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10589a710;
    puStack_58 = &UNK_1108bae08;
    lStack_50 = param_1;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010c150360(uVar2,puVar1,param_2,0,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar1;
    _objc_release(uVar2);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10589a710; end: 10589a81b;  */

void FUN_10589a710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10589a81c; end: 10589a8b7;  */

void FUN_10589a81c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_10589b0e4(param_2,*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f2e18();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589a8b8; end: 10589a8bb;  */

void FUN_10589a8b8(void)

{
  return;
}



/* Entry: 10589a8bc; end: 10589a8f7; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _invalidateLensTimeoutTimer] */

void FUN_10589a8bc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 200) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10589a8f8; end: 10589ab97; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _downloadAndPersistGenAiSnapDoc:genAiEntry:createdFromSnapIds:collectionCategory:snapId:itemOrder:groupName:observer:] */

void FUN_10589a8f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if ((param_3 == 0) ||
     ((lVar1 = param_1, func_0x00010bddc100(), (int)lVar1 != 0 &&
      (lVar1 = param_5, func_0x00010bf529e0(), lVar1 == 0)))) {
    func_0x000107e66360(param_10,9,&PTR____CFConstantStringClassReference_110e09738);
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar3 = PTR_PTR_1126b25b8;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011280();
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e6121c(puVar3,param_3,uVar6,uVar5,*(undefined8 *)(param_1 + 0x18),puVar2,
                        &PTR____CFConstantStringClassReference_110e09738);
    _objc_release(uVar5);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_10);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_10);
    _objc_release(param_4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10589ab98; end: 10589ac4f;  */

void FUN_10589ab98(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be73200(uVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),10,
                        &PTR____CFConstantStringClassReference_110e09738);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589ac50; end: 10589ade7; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _persistGenAiSnapDoc:genAiEntry:createdFromSnapIds:collectionCategory:snapId:itemOrder:groupName:observer:] */

void FUN_10589ac50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_1;
  func_0x00010be1d3e0();
  if (lVar1 == 0) {
    func_0x000107e66360(param_10,0x11,&PTR____CFConstantStringClassReference_110e09738);
  }
  else {
    func_0x00010bf3d240(param_4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x000107e63da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e66da8(param_3,param_4,0,uVar3,param_5,1,puVar2,param_7,param_8,param_9,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                        &PTR____CFConstantStringClassReference_110e09738,param_10,0);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10589ade8; end: 10589adf3; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _categoryTypeRequestOriginalSnap:] */

bool FUN_10589ade8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x32;
}



/* Entry: 10589adf4; end: 10589ae07; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _resetTerminationReasonIfNeeded] */

void FUN_10589adf4(long param_1)

{
  if (*(long *)(param_1 + 0xc0) == 2) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}



/* Entry: 10589ae08; end: 10589ae2f; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _getGrapheneLoggingTypeFromCategoryType:] */

undefined ** FUN_10589ae08(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 0x32U < 0x10) {
    return (undefined **)(&PTR_PTR_1108bae68)[param_3 - 0x32U];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10589ae30; end: 10589af73; -[SCMemoriesMashupStyleFeaturedStoryGenAIManager .cxx_destruct] */

void FUN_10589ae30(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
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



/* Entry: 10589af74; end: 10589b0c3;  */

void FUN_10589af74(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bf938);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  puVar1 = puVar2;
  func_0x00010c0b8600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10589b0c4; end: 10589b0e3;  */

void FUN_10589b0c4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10589b0e4; end: 10589b1b3;  */

void FUN_10589b0e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf938;
  _objc_alloc(PTR_PTR_1126bf938);
  func_0x00010c024240();
  puVar2 = puVar1;
  FUN_10589b7a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10589b1b4; end: 10589b233; -[SCMemoriesFeaturedStoriesNotSupportedLenses initWithLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10589b1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eab00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272b540);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272b540) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10589b234; end: 10589b257; -[SCMemoriesFeaturedStoriesNotSupportedLenses copyWithZone:] */

undefined8 FUN_10589b234(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10589b258; end: 10589b267; -[SCMemoriesFeaturedStoriesNotSupportedLenses hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10589b258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272b540),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10589b268; end: 10589b2ff; -[SCMemoriesFeaturedStoriesNotSupportedLenses isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10589b268(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10589b2e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10589b2e4;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11272b540);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11272b540)) {
      func_0x00010c071ae0();
      goto LAB_10589b2e4;
    }
  }
  lVar3 = 1;
LAB_10589b2e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10589b300; end: 10589b30f; -[SCMemoriesFeaturedStoriesNotSupportedLenses lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10589b300(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272b540);
}



/* Entry: 10589b310; end: 10589b323; -[SCMemoriesFeaturedStoriesNotSupportedLenses .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10589b310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272b540,0);
  return;
}



/* Entry: 10589b324; end: 10589b32f; +[SCMemoriesFeaturedStoriesNotSupportedLenses table] */

undefined * FUN_10589b324(void)

{
  return &UNK_10f304b4f;
}



/* Entry: 10589b330; end: 10589b3db; +[SCMemoriesFeaturedStoriesNotSupportedLenses immutableObjectParse:bufferSize:] */

void FUN_10589b330(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126bf938;
  _objc_alloc(PTR_PTR_1126bf938);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar4 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar2 + (ulong)*puVar2 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c024240(puVar3,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10589b3dc; end: 10589b3ff; +[SCMemoriesFeaturedStoriesNotSupportedLenses objectClassFunctionPointer] */

undefined1  [16] FUN_10589b3dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10589b3f8;
  auVar1._0_8_ = 0x10589b3f0;
  return auVar1;
}



/* Entry: 10589b400; end: 10589b49b;  */

undefined1 * FUN_10589b400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126eab08;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10589b49c; end: 10589b7a7;  */

void FUN_10589b49c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
LAB_10589b710:
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar4 < 0) {
      puVar1 = param_1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x0) goto LAB_10589b714;
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010bf636c0();
      _objc_release(puVar4);
      func_0x0001001b9e08(puVar1,&UNK_10f304b7b);
      puVar4 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x0) goto LAB_10589b714;
      puVar4 = param_1;
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
      _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
      _objc_release(puVar4);
      _objc_release(puVar4);
      puVar4 = puVar1;
      _sqlite3_step();
      if ((int)puVar4 != 100) goto LAB_10589b710;
      puVar2 = puVar1;
      _sqlite3_column_int64(puVar1,0);
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bf938);
      _sqlite3_column_blob(puVar1,1);
      _sqlite3_column_bytes(puVar1,1);
      puVar3 = puVar4;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
      _sqlite3_reset(puVar1);
      if (puVar3 == (undefined *)0x0) goto LAB_10589b70c;
      puVar4 = PTR_PTR_1126bf940;
      _objc_alloc(PTR_PTR_1126bf940);
      puVar1 = puVar3;
      func_0x00010c094540(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10589b400(puVar4,puVar2,puVar1);
      param_1 = puVar3;
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bf938);
      puVar3 = puVar4;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
      if (puVar3 == (undefined *)0x0) {
LAB_10589b70c:
        param_1 = (undefined *)0x0;
        goto LAB_10589b710;
      }
      puVar4 = PTR_PTR_1126bf940;
      _objc_alloc(PTR_PTR_1126bf940);
      puVar1 = puVar3;
      func_0x00010c094540(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10589b400(puVar4,puVar2,puVar1);
      param_1 = puVar3;
    }
    _objc_release(puVar1);
  }
LAB_10589b714:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10589b7a8; end: 10589b953;  */

void FUN_10589b7a8(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bf940;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_10589b49c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar3 = PTR_PTR_1126bf940;
    _objc_retain(param_1);
    _objc_opt_self(puVar3);
    puVar3 = PTR_PTR_1126bf940;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10589b400(puVar3,0xffffffffffffffff,puVar2);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar3 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar3 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar3);
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10589b954; end: 10589b9b3;  */

void FUN_10589b954(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bf938;
    _objc_alloc(PTR_PTR_1126bf938);
    func_0x00010c024240();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10589b9b4; end: 10589b9bf; -[SCMemoriesFeaturedStoriesNotSupportedLensesChangeRequest .cxx_destruct] */

void FUN_10589b9b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10589b9c0; end: 10589b9cb; -[SCMemoriesFeaturedStoriesNotSupportedLensesChangeRequest table] */

undefined * FUN_10589b9c0(void)

{
  return &UNK_10f304b4f;
}



/* Entry: 10589b9cc; end: 10589ba13; -[SCMemoriesFeaturedStoriesNotSupportedLensesChangeRequest createTableWithSQLite:] */

void FUN_10589b9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbfe78,0x99,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10589ba14; end: 10589bd9b; -[SCMemoriesFeaturedStoriesNotSupportedLensesChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10589ba14(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10589b954(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10589bd9c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f304c1b);
    if (lVar6 == 0) goto LAB_10589bd38;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10589bd38;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bf938);
    func_0x00010c21c9a0(puVar7);
LAB_10589bd20:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f304bd4);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bf938);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10589bd44;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10589bd44;
    }
    FUN_10589b954(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10589bd9c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f304c6f);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bf938);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10589bd20;
      }
    }
LAB_10589bd38:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10589bd44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10589bd9c; end: 10589bf2b;  */

ulong FUN_10589bd9c(ulong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_2 == (char *)0x0) {
    uVar7 = 0;
    goto LAB_10589be8c;
  }
  pcVar3 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  uVar7 = param_1;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    _strlen(pcVar3);
    func_0x0001001cde08(param_1,pcVar3,pcVar4);
    goto LAB_10589be8c;
  }
  pcVar3 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar3 == (char *)0x0) {
    pcVar3 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar3 != (char *)0x0) goto LAB_10589be4c;
    uVar7 = 0;
  }
  else {
LAB_10589be4c:
    pcVar5 = pcVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar6 = pcVar3;
    func_0x00010c08fa60(pcVar3);
    pcVar4 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    func_0x0001001cde08(param_1,pcVar4,pcVar6);
  }
  _objc_release(pcVar3);
LAB_10589be8c:
  _objc_release(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x0001001ce548(param_1,((int)uVar8 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10589bf2c; end: 10589bf6b;  */

void FUN_10589bf2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10589bf6c; end: 10589c4e7; -[SCMemoriesMashupFeaturedStoryManagerServiceProvider _memoriesMashupStyleFeaturedStoryMashupManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10589bf6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126bf950;
  _objc_alloc();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11272b568;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar24;
  func_0x00010c0c8d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_78 = 0;
    lVar25 = 0;
  }
  else {
    uStack_78 = param_1 + _DAT_11272b570;
    _objc_loadWeakRetained();
    lVar25 = param_1 + _DAT_11272b564;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar25;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11272b554;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar26;
  func_0x00010c14a940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11272b558;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar27;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11272b55c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar28;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_10589c4e8();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_10589c4e8();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11272b574;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar29;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11272b560;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar30;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11272b578;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar31;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11272b580;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar32;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11272b584;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar33;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11272b588;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar34;
  func_0x00010bf51700();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11272b58c;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar35;
  func_0x00010c0c8ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_11272b590;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar36;
  func_0x00010c242b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_11272b57c;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar37;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_11272b594;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar38;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_11272b598;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar39;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = 0;
  if (param_1 != 0) {
    lVar22 = param_1 + _DAT_11272b59c;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar22;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a7e0(puVar1,param_2,lVar2,uStack_78,lVar3,lVar4,lVar5,lVar6,lVar8,lVar10,lVar11,
                      lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar23);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar39);
  _objc_release(lVar20);
  _objc_release(lVar38);
  _objc_release(lVar19);
  _objc_release(lVar37);
  _objc_release(lVar18);
  _objc_release(lVar36);
  _objc_release(lVar17);
  _objc_release(lVar35);
  _objc_release(lVar16);
  _objc_release(lVar34);
  _objc_release(lVar15);
  _objc_release(lVar33);
  _objc_release(lVar14);
  _objc_release(lVar32);
  _objc_release(lVar13);
  _objc_release(lVar31);
  _objc_release(lVar12);
  _objc_release(lVar30);
  _objc_release(lVar11);
  _objc_release(lVar29);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar28);
  _objc_release(lVar5);
  _objc_release(lVar27);
  _objc_release(lVar4);
  _objc_release(lVar26);
  _objc_release(lVar3);
  _objc_release(lVar25);
  _objc_release(uStack_78);
  _objc_release(lVar2);
  _objc_release(lVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10589c4e8; end: 10589c50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10589c4e8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272b56c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


