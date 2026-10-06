/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f4daa0; end: 106f4db77; -[SCSpectaclesDepthDownloader monitorProgressWithBlock:] */

void FUN_106f4daa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f4db78; end: 106f4dbe7;  */

void FUN_106f4db78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retainBlock(uVar2);
    func_0x00010befa120(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))((float)*(double *)(lVar1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f4dbe8; end: 106f4dbf3; -[SCSpectaclesDepthDownloader progressWeight] */

undefined8 FUN_106f4dbe8(void)

{
  return 0x42480000;
}



/* Entry: 106f4dbf4; end: 106f4dc2f; -[SCSpectaclesDepthDownloader .cxx_destruct] */

void FUN_106f4dbf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f4dc30; end: 106f4dcfb; -[SCSpectaclesDepthStatusFetcher initWithSnap:networker:performer:] */

undefined1 *
FUN_106f4dc30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4dcfc; end: 106f4dd07; -[SCSpectaclesDepthStatusFetcher inputDataKeys] */

undefined * FUN_106f4dcfc(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f4dd08; end: 106f4dd83; -[SCSpectaclesDepthStatusFetcher outputDataKeys] */

void FUN_106f4dd08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e8f618;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f638;
  uVar14 = 2;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_28);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar14);
  uVar1 = *(undefined8 *)(puVar13 + 8);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(puVar13 + 8);
  func_0x00010c0c7520();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  if (lVar3 == 0) {
    func_0x00010801e908(puVar2,0,0,0,0,0,1,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(puVar13 + 8);
    func_0x00010c0c7520();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010801e908(puVar2,0,0,0,0,0,1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(puVar13 + 0x10);
  puVar2 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar13 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  _objc_retain(uVar14);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e87d78;
  func_0x00010c25f400(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(uVar14);
  _objc_release(uVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  puVar6 = PTR_PTR_1126d2c50;
  _objc_alloc();
  func_0x00010c0206e0();
  puVar13 = puVar6;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar13 = puVar7;
  func_0x00010c2490e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar13 = puVar7;
  func_0x00010c2496c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar8 = puVar7;
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar8;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (puVar13 == (undefined *)0x0) {
      _objc_release(puVar8);
      lVar3 = *(long *)(puVar12 + 0x20);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,puVar8,0);
LAB_106f4e2dc:
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106f4e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(ppuVar11[4] + 0x10))(ppuVar11[4],0);
      return;
    }
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar8);
      }
      uVar9 = *(ulong *)((long)puVar17 * 8);
      func_0x00010bf0ddc0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0720c0();
      _objc_release(uVar9);
      if ((uVar10 & 1) != 0) {
        _objc_release(puVar8);
        lVar3 = *(long *)(puVar12 + 0x20);
        if ((puVar2 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          pcVar16 = *(code **)(lVar3 + 0x10);
          puVar12 = (undefined *)0x0;
          puVar8 = puVar13;
        }
        else {
          puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          pcVar16 = *(code **)(lVar3 + 0x10);
          puVar13 = (undefined *)0x0;
          puVar8 = puVar12;
        }
        (*pcVar16)(lVar3,puVar12,puVar13,0);
        goto LAB_106f4e2dc;
      }
      puVar17 = puVar17 + 1;
    } while (puVar13 != puVar17);
    puVar13 = puVar8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106f4dd84; end: 106f4e017; -[SCSpectaclesDepthStatusFetcher runWithInputData:completion:] */

void FUN_106f4dd84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  code *pcVar15;
  undefined *puVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0c7520();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  if (lVar2 == 0) {
    func_0x00010801e908(puVar13,0,0,0,0,0,1,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0c7520();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010801e908(puVar13,0,0,0,0,0,1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar13);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar13 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_4);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e87d78;
  func_0x00010c25f400(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar13);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  puVar5 = PTR_PTR_1126d2c50;
  _objc_alloc();
  func_0x00010c0206e0();
  puVar13 = puVar5;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar13 = puVar6;
  func_0x00010c2490e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar13 = puVar6;
  func_0x00010c2496c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar8 = puVar6;
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (puVar13 == (undefined *)0x0) {
      _objc_release(puVar8);
      lVar2 = *(long *)(puVar12 + 0x20);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0,puVar8,0);
LAB_106f4e2dc:
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106f4e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(ppuVar11[4] + 0x10))(ppuVar11[4],0);
      return;
    }
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar8);
      }
      uVar9 = *(ulong *)((long)puVar16 * 8);
      func_0x00010bf0ddc0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0720c0();
      _objc_release(uVar9);
      if ((uVar10 & 1) != 0) {
        _objc_release(puVar8);
        lVar2 = *(long *)(puVar12 + 0x20);
        if ((puVar4 == (undefined *)0x0) || (puVar7 == (undefined *)0x0)) {
          puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          pcVar15 = *(code **)(lVar2 + 0x10);
          puVar12 = (undefined *)0x0;
          puVar8 = puVar13;
        }
        else {
          puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          pcVar15 = *(code **)(lVar2 + 0x10);
          puVar13 = (undefined *)0x0;
          puVar8 = puVar12;
        }
        (*pcVar15)(lVar2,puVar12,puVar13,0);
        goto LAB_106f4e2dc;
      }
      puVar16 = puVar16 + 1;
    } while (puVar13 != puVar16);
    puVar13 = puVar8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106f4e018; end: 106f4e347;  */

void FUN_106f4e018(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2c50;
  _objc_alloc();
  func_0x00010c0206e0();
  puVar8 = puVar1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar8 = puVar2;
  func_0x00010c2490e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar8 = puVar2;
  func_0x00010c2496c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = puVar2;
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  do {
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar7);
      lVar11 = *(long *)(param_1 + 0x20);
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar11 + 0x10))(lVar11,0,puVar12,0);
LAB_106f4e2dc:
      _objc_release(puVar12);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106f4e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
      return;
    }
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar7);
      }
      uVar5 = *(ulong *)((long)puVar12 * 8);
      func_0x00010bf0ddc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((uVar6 & 1) != 0) {
        _objc_release(puVar7);
        lVar11 = *(long *)(param_1 + 0x20);
        if ((puVar3 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) {
          puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = *(code **)(lVar11 + 0x10);
          puVar7 = (undefined *)0x0;
          puVar12 = puVar8;
        }
        else {
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = *(code **)(lVar11 + 0x10);
          puVar8 = (undefined *)0x0;
          puVar12 = puVar7;
        }
        (*pcVar10)(lVar11,puVar7,puVar8,0);
        goto LAB_106f4e2dc;
      }
      puVar12 = puVar12 + 1;
    } while (puVar8 != puVar12);
    puVar8 = puVar7;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106f4e348; end: 106f4e35b;  */

void FUN_106f4e348(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106f4e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3,0);
  return;
}



/* Entry: 106f4e35c; end: 106f4e397; -[SCSpectaclesDepthStatusFetcher .cxx_destruct] */

void FUN_106f4e35c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4e398; end: 106f4e3df; -[SCSpectaclesDepthUnzipper initWithPart:] */

void FUN_106f4e398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7ec0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106f4e3e0; end: 106f4e42b; -[SCSpectaclesDepthUnzipper _inputDataKey] */

void FUN_106f4e3e0(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar1 = &PTR_PTR_110985210;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_106f4e41c;
    ppuVar1 = &PTR_PTR_110985218;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_106f4e41c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f4e42c; end: 106f4e4df; -[SCSpectaclesDepthUnzipper inputDataKeys] */

undefined *
FUN_106f4e42c(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be3c180();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f5d8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e8f5f8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e8f4d8;
  pppuVar3 = &ppuStack_48;
  uVar5 = 4;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_48 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar3,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pppuVar4 = &ppuStack_80;
  pcStack_58 = FUN_106f4e4e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if (param_1[1] == (undefined *)0x1) {
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e8f718;
    uVar5 = 1;
LAB_106f4e55c:
    param_1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    pppuVar4 = pppuVar3;
    if (param_1[1] == (undefined *)0x0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e8f6f8;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e8f6d8;
      pppuVar4 = &ppuStack_78;
      uVar5 = 2;
      goto LAB_106f4e55c;
    }
  }
  ppuVar1 = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(pppuVar4);
    _objc_retain(uVar5);
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf55da0();
    _objc_release(puVar6);
    if ((int)puVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126b9fb0;
      _objc_alloc();
      func_0x00010c008480();
      if (puVar2 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar2;
        func_0x00010c27f220(puVar2,param_2,uVar5,param_5);
      }
      _objc_release(puVar2);
    }
    _objc_release(uVar5);
    _objc_release(pppuVar4);
    return puVar6;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return (undefined *)ppuVar1;
}



/* Entry: 106f4e4e0; end: 106f4e58f; -[SCSpectaclesDepthUnzipper outputDataKeys] */

undefined *
FUN_106f4e4e0(undefined *param_1,undefined8 param_2,undefined ***param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 8) == 1) {
    ppuStack_30 = &PTR____CFConstantStringClassReference_110e8f718;
    param_4 = 1;
  }
  else {
    pppuVar2 = param_3;
    if (*(long *)(param_1 + 8) != 0) goto LAB_106f4e568;
    ppuStack_28 = &PTR____CFConstantStringClassReference_110e8f6f8;
    ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f6d8;
    pppuVar2 = &ppuStack_28;
    param_4 = 2;
  }
  param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_106f4e568:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar2);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf55da0();
  _objc_release(puVar3);
  if ((int)puVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    func_0x00010c008480();
    if (puVar1 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar1;
      func_0x00010c27f220(puVar1,param_2,param_4,param_5);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(pppuVar2);
  return puVar3;
}



/* Entry: 106f4e590; end: 106f4e69b; -[SCSpectaclesDepthUnzipper _unzipData:toDirectory:error:] */

undefined *
FUN_106f4e590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf55da0();
  _objc_release(puVar2);
  if ((int)puVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    func_0x00010c008480();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar1;
      func_0x00010c27f220(puVar1,param_2,param_4,param_5);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106f4e69c; end: 106f4e6d7; -[SCSpectaclesDepthUnzipper _directoryForCamera:] */

void FUN_106f4e69c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e8f278;
  if (param_3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e8f298;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106f4e6d8; end: 106f4e6fb; -[SCSpectaclesDepthUnzipper _depthCameraForPrimaryCamera:] */

long FUN_106f4e6d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 2;
  if (param_3 != 1) {
    lVar1 = 0;
  }
  if (param_3 == 2) {
    lVar1 = 1;
  }
  if (*(long *)(param_1 + 8) != 1) {
    lVar1 = param_3;
  }
  return lVar1;
}



/* Entry: 106f4e6fc; end: 106f4eb63; -[SCSpectaclesDepthUnzipper runWithInputData:completion:] */

void FUN_106f4e6fc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3c180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c067fc0(uVar5);
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c156c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bed22e0();
  _objc_retain(0);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bed22e0();
    puVar13 = (undefined *)0x0;
    _objc_retain(0);
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0,0);
      goto LAB_106f4eae8;
    }
    _objc_release(0);
  }
  func_0x00010bdfad80(param_1);
  uVar1 = param_1;
  func_0x00010be01b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010bdc2c60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126d3540;
  _objc_alloc();
  puVar9 = puVar13;
  func_0x00010c0f5800(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cac0();
  _objc_release(puVar9);
  if (*(long *)(param_1 + 8) == 0) {
    puVar10 = puVar7;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126ae720;
    _objc_retain();
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar11,0,0);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar10);
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar10,0,0);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
LAB_106f4eae8:
  _objc_release(puVar13);
  _objc_release(0);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126d3548;
  _objc_alloc(PTR_PTR_1126d3548);
  func_0x00010c008360();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106f4eb64; end: 106f4ebc3;  */

void FUN_106f4eb64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3548;
  _objc_alloc(PTR_PTR_1126d3548);
  func_0x00010c008360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f4ebc4; end: 106f4ebcb; -[SCSpectaclesDepthUnzipper isExpensive] */

undefined8 FUN_106f4ebc4(void)

{
  return 1;
}



/* Entry: 106f4ebcc; end: 106f4ebd3; -[SCSpectaclesDepthUnzipper progressWeight] */

undefined8 FUN_106f4ebcc(void)

{
  return 0x41200000;
}



/* Entry: 106f4ebd4; end: 106f4ec43; -[SCSpectaclesDeviceMetadataDemuxer inputDataKeys] */

undefined * FUN_106f4ebd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_40;
    pcStack_28 = FUN_106f4ec44;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f438;
    lVar9 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_106f4ecb4;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_50 = &puStack_30;
      _objc_retain(lVar9);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar3 = (undefined *)pppuVar2;
      _objc_opt_isKindOfClass(pppuVar2,puVar1);
      puVar1 = (undefined *)pppuVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(pppuVar2);
      ppuStack_98 = &PTR____CFConstantStringClassReference_110e8f438;
      puVar3 = PTR_PTR_1126d3550;
      _objc_alloc();
      puVar4 = puVar1;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar5 = puVar4;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03cdc0();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar9 + 0x10))(lVar9,puVar1,0,0);
      _objc_release(lVar9);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar5);
      puVar1 = puVar4;
      _objc_release(puVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return puVar1;
      }
      ___stack_chk_fail();
      pcStack_a8 = FUN_106f4ee3c;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8f418;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_b0 = &ppuStack_50;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pppuVar2 = &ppuStack_e0;
        pcStack_c8 = FUN_106f4eeac;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110e8f458;
        puVar10 = (undefined *)0x1;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_d0 = &pppuStack_b0;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
          ___stack_chk_fail();
          pcStack_e8 = FUN_106f4ef1c;
          lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_110 = puVar4;
          puStack_108 = puVar5;
          puStack_100 = puVar3;
          lStack_f8 = lVar9;
          pppuStack_f0 = &pppuStack_d0;
          _objc_retain(puVar10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3508;
          _objc_opt_class(PTR_PTR_1126d3508);
          puVar3 = (undefined *)pppuVar2;
          _objc_opt_isKindOfClass(pppuVar2,puVar1);
          puVar1 = (undefined *)pppuVar2;
          if (((ulong)puVar3 & 1) == 0) {
            puVar1 = (undefined *)0x0;
          }
          _objc_retain(puVar1);
          _objc_release(pppuVar2);
          puVar3 = puVar1;
          func_0x00010c29f860();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 == (undefined *)0x0) {
            uVar12 = 0;
            puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = 0;
            puVar8 = puVar3;
            (**(code **)(puVar10 + 0x10))(puVar10,0);
            puVar5 = puVar10;
          }
          else {
            ppuStack_128 = &PTR____CFConstantStringClassReference_110e8f458;
            puVar3 = puVar1;
            func_0x00010c29f860();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = 1;
            puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_120 = puVar3;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = (undefined *)0x0;
            uVar11 = 0;
            (**(code **)(puVar10 + 0x10))(puVar10,puVar4);
            _objc_release(puVar10);
            puVar5 = puVar4;
          }
          _objc_release(puVar5);
          _objc_release(puVar3);
          puVar5 = puVar1;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
            ___stack_chk_fail();
            ppuVar6 = &puStack_170;
            pcStack_138 = FUN_106f4f0bc;
            puStack_160 = puVar4;
            puStack_158 = puVar3;
            puStack_150 = puVar1;
            puStack_148 = puVar10;
            pppuStack_140 = &pppuStack_f0;
            _objc_retain(puVar8);
            _objc_retain(uVar11);
            _objc_retain(uVar12);
            puStack_168 = PTR_PTR_1126f7ec8;
            puStack_170 = puVar5;
            _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
            if (ppuVar6 != (undefined **)0x0) {
              _objc_retain(puVar8);
              uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
              *(undefined **)((long)ppuVar6 + 8) = puVar8;
              _objc_release(uVar7);
              _objc_retain(uVar11);
              uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
              *(undefined8 *)((long)ppuVar6 + 0x10) = uVar11;
              _objc_release(uVar7);
              _objc_retain(uVar12);
              uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
              *(undefined8 *)((long)ppuVar6 + 0x18) = uVar12;
              _objc_release(uVar7);
            }
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(puVar8);
            return (undefined *)ppuVar6;
          }
          return puVar5;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f4ec44; end: 106f4ecb3; -[SCSpectaclesDeviceMetadataDemuxer outputDataKeys] */

undefined * FUN_106f4ec44(void)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f438;
  lVar9 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_106f4ecb4;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_30 = &stack0xfffffffffffffff0;
    _objc_retain(lVar9);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3508;
    _objc_opt_class(PTR_PTR_1126d3508);
    puVar3 = (undefined *)pppuVar2;
    _objc_opt_isKindOfClass(pppuVar2,puVar1);
    puVar1 = (undefined *)pppuVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(pppuVar2);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e8f438;
    puVar3 = PTR_PTR_1126d3550;
    _objc_alloc();
    puVar4 = puVar1;
    func_0x00010bf27c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar5 = puVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cdc0();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,puVar1,0,0);
    _objc_release(lVar9);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar1 = puVar4;
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar1;
    }
    ___stack_chk_fail();
    pcStack_88 = FUN_106f4ee3c;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8f418;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_90 = &puStack_30;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pppuVar2 = &ppuStack_c0;
      pcStack_a8 = FUN_106f4eeac;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8f458;
      puVar10 = (undefined *)0x1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_b0 = &ppuStack_90;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106f4ef1c;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_f0 = puVar4;
        puStack_e8 = puVar5;
        puStack_e0 = puVar3;
        lStack_d8 = lVar9;
        pppuStack_d0 = &pppuStack_b0;
        _objc_retain(puVar10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3508;
        _objc_opt_class(PTR_PTR_1126d3508);
        puVar3 = (undefined *)pppuVar2;
        _objc_opt_isKindOfClass(pppuVar2,puVar1);
        puVar1 = (undefined *)pppuVar2;
        if (((ulong)puVar3 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(pppuVar2);
        puVar3 = puVar1;
        func_0x00010c29f860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 == (undefined *)0x0) {
          uVar12 = 0;
          puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = 0;
          puVar8 = puVar3;
          (**(code **)(puVar10 + 0x10))(puVar10,0);
          puVar5 = puVar10;
        }
        else {
          ppuStack_108 = &PTR____CFConstantStringClassReference_110e8f458;
          puVar3 = puVar1;
          func_0x00010c29f860();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = 1;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_100 = puVar3;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = (undefined *)0x0;
          uVar11 = 0;
          (**(code **)(puVar10 + 0x10))(puVar10,puVar4);
          _objc_release(puVar10);
          puVar5 = puVar4;
        }
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar5 = puVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          ppuVar6 = &puStack_150;
          pcStack_118 = FUN_106f4f0bc;
          puStack_140 = puVar4;
          puStack_138 = puVar3;
          puStack_130 = puVar1;
          puStack_128 = puVar10;
          pppuStack_120 = &pppuStack_d0;
          _objc_retain(puVar8);
          _objc_retain(uVar11);
          _objc_retain(uVar12);
          puStack_148 = PTR_PTR_1126f7ec8;
          puStack_150 = puVar5;
          _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
          if (ppuVar6 != (undefined **)0x0) {
            _objc_retain(puVar8);
            uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
            *(undefined **)((long)ppuVar6 + 8) = puVar8;
            _objc_release(uVar7);
            _objc_retain(uVar11);
            uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
            *(undefined8 *)((long)ppuVar6 + 0x10) = uVar11;
            _objc_release(uVar7);
            _objc_retain(uVar12);
            uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
            *(undefined8 *)((long)ppuVar6 + 0x18) = uVar12;
            _objc_release(uVar7);
          }
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(puVar8);
          return (undefined *)ppuVar6;
        }
        return puVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f4ecb4; end: 106f4ee3b; -[SCSpectaclesDeviceMetadataDemuxer runWithInputData:completion:] */

undefined * FUN_106f4ecb4(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e8f438;
  puVar2 = PTR_PTR_1126d3550;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010bf27c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cdc0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,puVar4,0,0);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar4 = puVar3;
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106f4ee3c;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pppuVar5 = &ppuStack_a0;
    pcStack_88 = FUN_106f4eeac;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8f458;
    puVar9 = (undefined *)0x1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_90 = &puStack_70;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pcStack_a8 = FUN_106f4ef1c;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_d0 = puVar3;
      puStack_c8 = puVar1;
      puStack_c0 = puVar2;
      lStack_b8 = param_4;
      pppuStack_b0 = &ppuStack_90;
      _objc_retain(puVar9);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar2 = (undefined *)pppuVar5;
      _objc_opt_isKindOfClass(pppuVar5,puVar1);
      puVar1 = (undefined *)pppuVar5;
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(pppuVar5);
      puVar2 = puVar1;
      func_0x00010c29f860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 == (undefined *)0x0) {
        uVar11 = 0;
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = 0;
        puVar8 = puVar2;
        (**(code **)(puVar9 + 0x10))(puVar9,0);
        puVar4 = puVar9;
      }
      else {
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110e8f458;
        puVar2 = puVar1;
        func_0x00010c29f860();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = 1;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_e0 = puVar2;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = (undefined *)0x0;
        uVar10 = 0;
        (**(code **)(puVar9 + 0x10))(puVar9,puVar3);
        _objc_release(puVar9);
        puVar4 = puVar3;
      }
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar4 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        ppuVar6 = &puStack_130;
        pcStack_f8 = FUN_106f4f0bc;
        puStack_120 = puVar3;
        puStack_118 = puVar2;
        puStack_110 = puVar1;
        puStack_108 = puVar9;
        pppuStack_100 = &pppuStack_b0;
        _objc_retain(puVar8);
        _objc_retain(uVar10);
        _objc_retain(uVar11);
        puStack_128 = PTR_PTR_1126f7ec8;
        puStack_130 = puVar4;
        _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
        if (ppuVar6 != (undefined **)0x0) {
          _objc_retain(puVar8);
          uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
          *(undefined **)((long)ppuVar6 + 8) = puVar8;
          _objc_release(uVar7);
          _objc_retain(uVar10);
          uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
          *(undefined8 *)((long)ppuVar6 + 0x10) = uVar10;
          _objc_release(uVar7);
          _objc_retain(uVar11);
          uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
          *(undefined8 *)((long)ppuVar6 + 0x18) = uVar11;
          _objc_release(uVar7);
        }
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(puVar8);
        return (undefined *)ppuVar6;
      }
      return puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar4;
}



/* Entry: 106f4ee3c; end: 106f4eeab; -[SCSpectaclesDeviceVIOCalibrationDemuxer inputDataKeys] */

undefined * FUN_106f4ee3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *unaff_x22;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_40;
    pcStack_28 = FUN_106f4eeac;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f458;
    puVar8 = (undefined *)0x1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_106f4ef1c;
      lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_50 = &puStack_30;
      _objc_retain(puVar8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar3 = (undefined *)pppuVar2;
      _objc_opt_isKindOfClass(pppuVar2,puVar1);
      puVar1 = (undefined *)pppuVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(pppuVar2);
      puVar3 = puVar1;
      func_0x00010c29f860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 == (undefined *)0x0) {
        uVar10 = 0;
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = 0;
        puVar7 = puVar3;
        (**(code **)(puVar8 + 0x10))(puVar8,0);
        puVar4 = puVar8;
      }
      else {
        ppuStack_88 = &PTR____CFConstantStringClassReference_110e8f458;
        puVar3 = puVar1;
        func_0x00010c29f860();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = 1;
        unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_80 = puVar3;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined *)0x0;
        uVar9 = 0;
        (**(code **)(puVar8 + 0x10))(puVar8,unaff_x22);
        _objc_release(puVar8);
        puVar4 = unaff_x22;
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        ppuVar5 = &puStack_d0;
        pcStack_98 = FUN_106f4f0bc;
        puStack_c0 = unaff_x22;
        puStack_b8 = puVar3;
        puStack_b0 = puVar1;
        puStack_a8 = puVar8;
        pppuStack_a0 = &ppuStack_50;
        _objc_retain(puVar7);
        _objc_retain(uVar9);
        _objc_retain(uVar10);
        puStack_c8 = PTR_PTR_1126f7ec8;
        puStack_d0 = puVar4;
        _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
        if (ppuVar5 != (undefined **)0x0) {
          _objc_retain(puVar7);
          uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
          *(undefined **)((long)ppuVar5 + 8) = puVar7;
          _objc_release(uVar6);
          _objc_retain(uVar9);
          uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
          *(undefined8 *)((long)ppuVar5 + 0x10) = uVar9;
          _objc_release(uVar6);
          _objc_retain(uVar10);
          uVar6 = *(undefined8 *)((long)ppuVar5 + 0x18);
          *(undefined8 *)((long)ppuVar5 + 0x18) = uVar10;
          _objc_release(uVar6);
        }
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(puVar7);
        return (undefined *)ppuVar5;
      }
      return puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f4eeac; end: 106f4ef1b; -[SCSpectaclesDeviceVIOCalibrationDemuxer outputDataKeys] */

undefined * FUN_106f4eeac(void)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *unaff_x22;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f458;
  puVar8 = (undefined *)0x1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_28 = FUN_106f4ef1c;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_30 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar3 = (undefined *)pppuVar2;
  _objc_opt_isKindOfClass(pppuVar2,puVar1);
  puVar1 = (undefined *)pppuVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(pppuVar2);
  puVar3 = puVar1;
  func_0x00010c29f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    uVar10 = 0;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    puVar7 = puVar3;
    (**(code **)(puVar8 + 0x10))(puVar8,0);
    puVar4 = puVar8;
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e8f458;
    puVar3 = puVar1;
    func_0x00010c29f860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 1;
    unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x0;
    uVar9 = 0;
    (**(code **)(puVar8 + 0x10))(puVar8,unaff_x22);
    _objc_release(puVar8);
    puVar4 = unaff_x22;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_b0;
  pcStack_78 = FUN_106f4f0bc;
  puStack_a0 = unaff_x22;
  puStack_98 = puVar3;
  puStack_90 = puVar1;
  puStack_88 = puVar8;
  ppuStack_80 = &puStack_30;
  _objc_retain(puVar7);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  puStack_a8 = PTR_PTR_1126f7ec8;
  puStack_b0 = puVar4;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar7;
    _objc_release(uVar6);
    _objc_retain(uVar9);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 *)((long)ppuVar5 + 0x10) = uVar9;
    _objc_release(uVar6);
    _objc_retain(uVar10);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined8 *)((long)ppuVar5 + 0x18) = uVar10;
    _objc_release(uVar6);
  }
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar7);
  return (undefined *)ppuVar5;
}



/* Entry: 106f4ef1c; end: 106f4f0bb; -[SCSpectaclesDeviceVIOCalibrationDemuxer runWithInputData:completion:] */

undefined *
FUN_106f4ef1c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *unaff_x22;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c29f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    uVar8 = 0;
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    puVar6 = puVar2;
    (**(code **)(param_4 + 0x10))(param_4,0);
    puVar3 = param_4;
  }
  else {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110e8f458;
    puVar2 = puVar1;
    func_0x00010c29f860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 1;
    unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x0;
    uVar7 = 0;
    (**(code **)(param_4 + 0x10))(param_4,unaff_x22);
    _objc_release(param_4);
    puVar3 = unaff_x22;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_90;
  pcStack_58 = FUN_106f4f0bc;
  puStack_80 = unaff_x22;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  puStack_88 = PTR_PTR_1126f7ec8;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined **)((long)ppuVar4 + 8) = puVar6;
    _objc_release(uVar5);
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined8 *)((long)ppuVar4 + 0x10) = uVar7;
    _objc_release(uVar5);
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined8 *)((long)ppuVar4 + 0x18) = uVar8;
    _objc_release(uVar5);
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  return (undefined *)ppuVar4;
}



/* Entry: 106f4f0bc; end: 106f4f187; -[SCSpectaclesEncryptionKeyFetcher initWithSnap:encryptedContentManager:performer:] */

undefined1 *
FUN_106f4f0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7ec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4f188; end: 106f4f193; -[SCSpectaclesEncryptionKeyFetcher inputDataKeys] */

undefined * FUN_106f4f188(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f4f194; end: 106f4f20f; -[SCSpectaclesEncryptionKeyFetcher outputDataKeys] */

void FUN_106f4f194(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e8f5d8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f5f8;
  uVar5 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_28);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(puVar3 + 8);
  uVar2 = *(undefined8 *)(puVar3 + 0x10);
  uVar4 = *(undefined8 *)(puVar3 + 0x18);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106f4f2c8;
  puStack_70 = &UNK_110985030;
  uStack_68 = uVar5;
  _objc_retain(uVar5);
  func_0x00010c135a80(uVar2,param_2,uVar1,0,uVar4,&puStack_88);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(uVar5);
  return;
}



/* Entry: 106f4f210; end: 106f4f3af; -[SCSpectaclesEncryptionKeyFetcher runWithInputData:completion:] */

void FUN_106f4f210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106f4f2c8;
  puStack_40 = &UNK_110985030;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c135a80(uVar2,param_2,uVar1,0,uVar3,&puStack_58);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106f4f3b0; end: 106f4f3eb; -[SCSpectaclesEncryptionKeyFetcher .cxx_destruct] */

void FUN_106f4f3b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4f3ec; end: 106f4f49f; -[SCSpectaclesLabsCVDepthExtractor initWithMedia:] */

undefined8 * FUN_106f4f3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7ed0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(puVar1);
    func_0x00010c0bc900(param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106f4f4a0; end: 106f4f4a3;  */

void FUN_106f4f4a0(void)

{
  return;
}



/* Entry: 106f4f4a4; end: 106f4f4d7;  */

void FUN_106f4f4a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f4f4d8; end: 106f4f563; -[SCSpectaclesLabsCVDepthExtractor inputDataKeys] */

void FUN_106f4f4d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e8f438;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e8f4d8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f3f8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_106f4f564;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e8f698;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e8f6b8;
    pppuVar11 = &ppuStack_58;
    lVar12 = 2;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(pppuVar11);
      _objc_retain(lVar12);
      pppuVar3 = pppuVar11;
      func_0x00010c0e00e0(pppuVar11);
      _objc_retainAutoreleasedReturnValue();
      pppuVar4 = pppuVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(pppuVar4);
      pppuVar4 = pppuVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar4;
      _objc_autoreleasePoolPush();
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      pppuVar6 = pppuVar5;
      func_0x0001005c6500();
      _objc_retainAutoreleasedReturnValue();
      pppuVar7 = pppuVar6;
      pppuStack_e0 = pppuVar6;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_d8 = pppuVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad380(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(pppuVar7);
      _objc_release(pppuVar6);
      uVar10 = *(ulong *)(puVar2 + 8);
      lStack_108 = 0;
      func_0x00010c14e080();
      lVar1 = lStack_108;
      _objc_retain(lStack_108);
      if ((uVar10 & 1) == 0) {
        (**(code **)(lVar12 + 0x10))(lVar12,0,lVar1,0);
      }
      else {
        puVar2 = PTR_PTR_1126d3558;
        _objc_alloc(PTR_PTR_1126d3558);
        pppuVar6 = pppuVar3;
        func_0x00010c0f5800(pppuVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010c0f5800(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0114e0(puVar2);
        _objc_release(puVar8);
        _objc_release(pppuVar6);
        puStack_130 = &uStack_138;
        uStack_138 = 0;
        uStack_128 = 0x3032000000;
        pcStack_120 = FUN_106f4fa20;
        uStack_118 = 0x106f4fa30;
        uStack_110 = 0;
        puStack_160 = &uStack_168;
        uStack_168 = 0;
        uStack_158 = 0x3032000000;
        pcStack_150 = FUN_106f4fa20;
        uStack_148 = 0x106f4fa30;
        uStack_140 = 0;
        func_0x00010bf9eca0(puVar2);
        _objc_retain(lVar1);
        _objc_release(lVar1);
        puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60();
        _objc_release(puVar8);
        if (lVar1 == 0) {
          uStack_f0 = puStack_130[5];
          ppuStack_100 = &PTR____CFConstantStringClassReference_110e8f698;
          ppuStack_f8 = &PTR____CFConstantStringClassReference_110e8f6b8;
          uStack_e8 = puStack_160[5];
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar12 + 0x10))(lVar12,puVar8,0,0);
          _objc_release(puVar8);
        }
        else {
          (**(code **)(lVar12 + 0x10))(lVar12,0,lVar1,0);
        }
        __Block_object_dispose(&uStack_168,8);
        _objc_release(uStack_140);
        __Block_object_dispose(&uStack_138,8);
        _objc_release(uStack_110);
        _objc_release(puVar2);
      }
      _objc_release(puVar9);
      _objc_release(lVar1);
      _objc_autoreleasePoolPop(pppuVar5);
      _objc_release(pppuVar4);
      _objc_release(pppuVar3);
      _objc_release(lVar12);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d0) {
        ___stack_chk_fail();
        __Block_object_dispose(&uStack_168,8);
        lVar12 = 8;
        __Block_object_dispose(&uStack_138);
        __Unwind_Resume();
        pppuVar11[5] = *(undefined ***)(lVar12 + 0x28);
        *(undefined8 *)(lVar12 + 0x28) = 0;
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f4f564; end: 106f4f5df; -[SCSpectaclesLabsCVDepthExtractor outputDataKeys] */

void FUN_106f4f564(void)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  long lStack_a0;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e8f698;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f6b8;
  pppuVar11 = &ppuStack_28;
  lVar12 = 2;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar11);
  _objc_retain(lVar12);
  pppuVar3 = pppuVar11;
  func_0x00010c0e00e0(pppuVar11);
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(pppuVar4);
  pppuVar4 = pppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar5 = pppuVar4;
  _objc_autoreleasePoolPush();
  puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
  pppuVar6 = pppuVar5;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = pppuVar6;
  pppuStack_b0 = pppuVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_a8 = pppuVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad380(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(pppuVar7);
  _objc_release(pppuVar6);
  uVar10 = *(ulong *)(puVar2 + 8);
  lStack_d8 = 0;
  func_0x00010c14e080();
  lVar1 = lStack_d8;
  _objc_retain(lStack_d8);
  if ((uVar10 & 1) == 0) {
    (**(code **)(lVar12 + 0x10))(lVar12,0,lVar1,0);
  }
  else {
    puVar2 = PTR_PTR_1126d3558;
    _objc_alloc(PTR_PTR_1126d3558);
    pppuVar6 = pppuVar3;
    func_0x00010c0f5800(pppuVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c0f5800(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0114e0(puVar2);
    _objc_release(puVar8);
    _objc_release(pppuVar6);
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_106f4fa20;
    uStack_e8 = 0x106f4fa30;
    uStack_e0 = 0;
    puStack_130 = &uStack_138;
    uStack_138 = 0;
    uStack_128 = 0x3032000000;
    pcStack_120 = FUN_106f4fa20;
    uStack_118 = 0x106f4fa30;
    uStack_110 = 0;
    func_0x00010bf9eca0(puVar2);
    _objc_retain(lVar1);
    _objc_release(lVar1);
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar8);
    if (lVar1 == 0) {
      uStack_c0 = puStack_100[5];
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110e8f698;
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110e8f6b8;
      uStack_b8 = puStack_130[5];
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar12 + 0x10))(lVar12,puVar8,0,0);
      _objc_release(puVar8);
    }
    else {
      (**(code **)(lVar12 + 0x10))(lVar12,0,lVar1,0);
    }
    __Block_object_dispose(&uStack_138,8);
    _objc_release(uStack_110);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    _objc_release(puVar2);
  }
  _objc_release(puVar9);
  _objc_release(lVar1);
  _objc_autoreleasePoolPop(pppuVar5);
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_138,8);
  lVar12 = 8;
  __Block_object_dispose(&uStack_108);
  __Unwind_Resume();
  pppuVar11[5] = *(undefined ***)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 106f4f5e0; end: 106f4fa1f; -[SCSpectaclesLabsCVDepthExtractor runWithInputData:completion:] */

void FUN_106f4f5e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
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
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(lVar9);
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_autoreleasePoolPush();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar9 = lVar3;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  lStack_80 = lVar9;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad380(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  uVar7 = *(ulong *)(param_1 + 8);
  lStack_a8 = 0;
  func_0x00010c14e080();
  lVar9 = lStack_a8;
  _objc_retain(lStack_a8);
  if ((uVar7 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,lVar9,0);
  }
  else {
    puVar5 = PTR_PTR_1126d3558;
    _objc_alloc(PTR_PTR_1126d3558);
    lVar4 = lVar1;
    func_0x00010c0f5800(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0f5800(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0114e0(puVar5);
    _objc_release(puVar8);
    _objc_release(lVar4);
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_106f4fa20;
    uStack_b8 = 0x106f4fa30;
    uStack_b0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_106f4fa20;
    uStack_e8 = 0x106f4fa30;
    uStack_e0 = 0;
    func_0x00010bf9eca0(puVar5);
    _objc_retain(lVar9);
    _objc_release(lVar9);
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar8);
    if (lVar9 == 0) {
      uStack_90 = puStack_d0[5];
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8f698;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110e8f6b8;
      uStack_88 = puStack_100[5];
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar8,0,0);
      _objc_release(puVar8);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4,0,lVar9,0);
    }
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_autoreleasePoolPop(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_108,8);
  lVar9 = 8;
  __Block_object_dispose(&uStack_d8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 106f4fa20; end: 106f4fa37;  */

void FUN_106f4fa20(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f4fa38; end: 106f4fa8b;  */

void FUN_106f4fa38(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c112d00();
  lVar3 = 0x20;
  if (lVar1 != *(long *)(param_1 + 0x30)) {
    lVar3 = 0x28;
  }
  lVar3 = *(long *)(*(long *)(param_1 + lVar3) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f4fa8c; end: 106f4fa8f;  */

void FUN_106f4fa8c(void)

{
  return;
}



/* Entry: 106f4fa90; end: 106f4fa97; -[SCSpectaclesLabsCVDepthExtractor isExpensive] */

undefined8 FUN_106f4fa90(void)

{
  return 1;
}



/* Entry: 106f4fa98; end: 106f4fa9f; -[SCSpectaclesLabsCVDepthExtractor progressWeight] */

undefined8 FUN_106f4fa98(void)

{
  return 0x41200000;
}



/* Entry: 106f4faa0; end: 106f4faab; -[SCSpectaclesLabsCVDepthExtractor .cxx_destruct] */

void FUN_106f4faa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4faac; end: 106f4faf3; -[SCSpectaclesLabsCVDepthWriter initWithPart:] */

void FUN_106f4faac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7ed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106f4faf4; end: 106f4fb3f; -[SCSpectaclesLabsCVDepthWriter _inputDataKey] */

void FUN_106f4faf4(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar1 = &PTR_PTR_110985220;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_106f4fb30;
    ppuVar1 = &PTR_PTR_110985228;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_106f4fb30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f4fb40; end: 106f4fbcb; -[SCSpectaclesLabsCVDepthWriter inputDataKeys] */

undefined ***
FUN_106f4fb40(undefined ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  ppppuVar6 = &pppuStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be3c180();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 1;
  pppuVar9 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_30 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&pppuStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_60;
  pcStack_38 = FUN_106f4fbcc;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (param_1[1] == (undefined **)0x1) {
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e8f718;
    uVar8 = 1;
LAB_106f4fc48:
    param_1 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    pppuVar7 = (undefined ***)ppppuVar6;
    if (param_1[1] == (undefined **)0x0) {
      ppuStack_58 = &PTR____CFConstantStringClassReference_110e8f6f8;
      ppuStack_50 = &PTR____CFConstantStringClassReference_110e8f6d8;
      pppuVar7 = &ppuStack_58;
      uVar8 = 2;
      goto LAB_106f4fc48;
    }
  }
  pppuVar9 = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(pppuVar7);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(uVar8);
    func_0x00010c0df840(puVar1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25ce20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar4 = uVar8;
    func_0x00010bdc2c60(uVar8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf55da0();
    _objc_release(uVar8);
    if ((int)puVar2 == 0) {
      pppuVar9 = (undefined ***)0x0;
    }
    else {
      pppuVar5 = pppuVar7;
      func_0x00010c102980(pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar5;
      func_0x00010c14e080();
      _objc_release(pppuVar5);
    }
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(pppuVar7);
    return pppuVar9;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return pppuVar9;
}



/* Entry: 106f4fbcc; end: 106f4fc7b; -[SCSpectaclesLabsCVDepthWriter outputDataKeys] */

undefined ***
FUN_106f4fbcc(undefined ***param_1,undefined8 param_2,undefined ***param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar6 = &ppuStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[1] == (undefined **)0x1) {
    ppuStack_30 = &PTR____CFConstantStringClassReference_110e8f718;
    param_4 = 1;
  }
  else {
    pppuVar6 = param_3;
    if (param_1[1] != (undefined **)0x0) goto LAB_106f4fc54;
    ppuStack_28 = &PTR____CFConstantStringClassReference_110e8f6f8;
    ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f6d8;
    pppuVar6 = &ppuStack_28;
    param_4 = 2;
  }
  param_1 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar6,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_106f4fc54:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df840(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_4;
  func_0x00010bdc2c60(param_4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf55da0();
  _objc_release(param_4);
  if ((int)puVar2 == 0) {
    pppuVar7 = (undefined ***)0x0;
  }
  else {
    pppuVar5 = pppuVar6;
    func_0x00010c102980(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar5;
    func_0x00010c14e080();
    _objc_release(pppuVar5);
  }
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(pppuVar6);
  return pppuVar7;
}



/* Entry: 106f4fc7c; end: 106f4fdd3; -[SCSpectaclesLabsCVDepthWriter _writeImage:toDirectory:index:error:] */

undefined8
FUN_106f4fc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df840(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_4;
  func_0x00010bdc2c60(param_4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf55da0();
  _objc_release(param_4);
  if ((int)puVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010c102980(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c14e080();
    _objc_release(uVar5);
  }
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106f4fdd4; end: 106f501c7; -[SCSpectaclesLabsCVDepthWriter runWithInputData:completion:] */

void FUN_106f4fdd4(ulong param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3c180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad380(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = puVar2;
  func_0x00010bf6dba0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bdc2c60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beeba80();
  _objc_retain(0);
  _objc_release(puVar6);
  _objc_release(puVar4);
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0,0);
  }
  else {
    puVar4 = puVar2;
    func_0x00010bf85080(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bdc2c60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010beeba80();
    _objc_retain(0);
    _objc_release(0);
    _objc_release(puVar6);
    _objc_release(puVar4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0,0);
    }
    else {
      puVar6 = PTR_PTR_1126d3540;
      _objc_alloc();
      puVar4 = puVar5;
      func_0x00010c0f5800(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00cac0();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ae720;
      if (*(long *)(param_1 + 8) == 0) {
        _objc_retain(puVar2);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_4 + 0x10))(param_4,puVar7,0,0);
        _objc_release(puVar7);
        _objc_release(puVar4);
        puVar4 = puVar2;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_4 + 0x10))(param_4,puVar4,0,0);
      }
      _objc_release(puVar4);
      _objc_release(puVar6);
    }
  }
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3548,PTR_s_depthMetadataFromDepthFrameData__1125b9110,
             *(undefined8 *)(param_4 + 0x20));
  return;
}



/* Entry: 106f501c8; end: 106f501db;  */

void FUN_106f501c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3548,PTR_s_depthMetadataFromDepthFrameData__1125b9110,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f501dc; end: 106f50223; -[SCSpectaclesLutExtractor initWithContentType:] */

void FUN_106f501dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7ee0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106f50224; end: 106f50293; -[SCSpectaclesLutExtractor inputDataKeys] */

void FUN_106f50224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f438;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    if (*(long *)(puVar1 + 8) == 1) {
      ppuVar2 = &PTR_PTR_1109851c8;
    }
    else {
      if (*(long *)(puVar1 + 8) != 0) goto _objc_autoreleaseReturnValue;
      ppuVar2 = &PTR_PTR_1109851b8;
    }
    _objc_retain(*ppuVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f50294; end: 106f502df; -[SCSpectaclesLutExtractor _leftLutKey] */

void FUN_106f50294(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (*(long *)(param_1 + 8) == 1) {
    ppuVar1 = &PTR_PTR_1109851c8;
  }
  else {
    if (*(long *)(param_1 + 8) != 0) goto LAB_106f502d0;
    ppuVar1 = &PTR_PTR_1109851b8;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_106f502d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f502e0; end: 106f5032b; -[SCSpectaclesLutExtractor _rightLutKey] */

void FUN_106f502e0(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (*(long *)(param_1 + 8) == 1) {
    ppuVar1 = &PTR_PTR_1109851d0;
  }
  else {
    if (*(long *)(param_1 + 8) != 0) goto LAB_106f5031c;
    ppuVar1 = &PTR_PTR_1109851c0;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_106f5031c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f5032c; end: 106f503e3; -[SCSpectaclesLutExtractor outputDataKeys] */

undefined * FUN_106f5032c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be49f40();
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = lVar1;
  func_0x00010be97500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined *)0x3;
  if (*(long *)(lVar1 + 8) != 1) {
    puVar2 = (undefined *)0x1;
  }
  return puVar2;
}



/* Entry: 106f503e4; end: 106f503f7; -[SCSpectaclesLutExtractor _inputType] */

undefined8 FUN_106f503e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (*(long *)(param_1 + 8) != 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106f503f8; end: 106f507ef; -[SCSpectaclesLutExtractor runWithInputData:completion:] */

undefined1 *
FUN_106f503f8(float param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  float fVar18;
  double dVar19;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined **ppuStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined **ppuStack_2e0;
  long lStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  long lStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  long lStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined8 ***pppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3558;
  _objc_alloc();
  func_0x00010be3c220(param_2);
  uVar13 = param_4;
  func_0x00010c0f5800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0114c0();
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126d3560;
  _objc_alloc_init();
  uStack_a0 = 0;
  puVar3 = puVar1;
  func_0x00010bf9ec20();
  uVar13 = uStack_a0;
  _objc_retain(uStack_a0);
  if (((ulong)puVar3 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,uVar13,0);
  }
  else {
    uStack_b8 = uVar13;
    puVar3 = PTR_PTR_1126d3568;
    _objc_alloc();
    func_0x00010bfe41c0(puVar2);
    dVar19 = (double)param_1;
    puVar14 = puVar2;
    func_0x00010c08e860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar14;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08e3c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf51e00();
    puVar6 = puVar2;
    uStack_a8 = param_4;
    func_0x00010c08e860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    puStack_b0 = puVar1;
    func_0x00010c2a5040();
    puVar1 = puVar2;
    func_0x00010c08e860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    puStack_c0 = param_2;
    func_0x00010bfe0640();
    func_0x00010bffaf60(dVar19,(double)(int)puVar7,(double)(int)puVar8);
    fVar18 = SUB84(dVar19,0);
    puStack_c8 = puVar3;
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar14);
    puVar17 = PTR_PTR_1126d3568;
    _objc_alloc();
    func_0x00010bfe41c0(puVar2);
    puVar1 = puVar2;
    func_0x00010c140ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010c140860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf51e00();
    puVar5 = puVar2;
    func_0x00010c140ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2a5040();
    puVar7 = puVar2;
    func_0x00010c140ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfe0640();
    func_0x00010bffaf60((double)fVar18,(double)(int)puVar6,(double)(int)puVar8);
    uVar13 = uStack_b8;
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar14 = puStack_c0;
    puVar4 = puStack_c0;
    func_0x00010be49f40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_c8;
    puStack_88 = puStack_c8;
    puStack_98 = puVar4;
    func_0x00010be97500();
    _objc_retainAutoreleasedReturnValue();
    param_2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar14;
    puStack_80 = puVar17;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_2,0,0);
    _objc_release(param_2);
    puVar1 = puStack_b0;
    _objc_release(puVar14);
    param_4 = uStack_a8;
    _objc_release(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar3);
  }
  _objc_release(uVar13);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar9 = param_5;
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106f507f0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    pppuVar10 = &ppuStack_110;
    pcStack_f8 = FUN_106f50860;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110e8f4d8;
    puVar14 = (undefined *)0x1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_100 = &puStack_e0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      pcStack_118 = FUN_106f508d0;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_140 = puVar2;
      puStack_138 = puVar1;
      uStack_130 = param_4;
      puStack_128 = param_5;
      pppuStack_120 = &ppuStack_100;
      _objc_retain(puVar14);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar11 = (undefined1 *)pppuVar10;
      _objc_opt_isKindOfClass(pppuVar10,puVar1);
      puVar9 = (undefined1 *)pppuVar10;
      if (((ulong)puVar11 & 1) == 0) {
        puVar9 = (undefined1 *)0x0;
      }
      _objc_retain(puVar9);
      _objc_release(pppuVar10);
      puVar11 = puVar9;
      func_0x00010c112d00();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar11 == (undefined1 *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar14 + 0x10))(puVar14,0,puVar1,0);
        puVar3 = puVar14;
      }
      else {
        ppuStack_158 = &PTR____CFConstantStringClassReference_110e8f4d8;
        func_0x00010c112d00(puVar9);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_150 = puVar1;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar14 + 0x10))(puVar14,puVar2,0,0);
        _objc_release(puVar14);
        puVar3 = puVar2;
      }
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar11 = puVar9;
      _objc_release(puVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
        return puVar11;
      }
      ___stack_chk_fail();
      pcStack_168 = FUN_106f50a74;
      lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_180 = &PTR____CFConstantStringClassReference_110e8f418;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_170 = &pppuStack_120;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
        ___stack_chk_fail();
        pppuVar10 = &ppuStack_1a0;
        pcStack_188 = FUN_106f50ae4;
        lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e8f498;
        lVar15 = 1;
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_190 = &pppuStack_170;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
          ___stack_chk_fail();
          pcStack_1a8 = FUN_106f50b54;
          lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uStack_1e0 = uVar13;
          puStack_1d8 = param_2;
          puStack_1d0 = puVar2;
          puStack_1c8 = puVar1;
          puStack_1c0 = puVar9;
          puStack_1b8 = puVar14;
          pppuStack_1b0 = &pppuStack_190;
          _objc_retain(lVar15);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3508;
          _objc_opt_class(PTR_PTR_1126d3508);
          puVar3 = (undefined *)pppuVar10;
          _objc_opt_isKindOfClass(pppuVar10,puVar1);
          puVar1 = (undefined *)pppuVar10;
          if (((ulong)puVar3 & 1) == 0) {
            puVar1 = (undefined *)0x0;
          }
          _objc_retain(puVar1);
          _objc_release(pppuVar10);
          puVar3 = puVar1;
          func_0x00010c094fa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 == (undefined *)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar15 + 0x10))(lVar15,0,puVar3,0);
            _objc_release(lVar15);
            puVar14 = puVar3;
          }
          else {
            ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e8f498;
            puVar14 = PTR_PTR_1126d3550;
            _objc_alloc();
            puVar3 = puVar1;
            func_0x00010c094fa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c03cdc0();
            param_2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_1f0 = puVar14;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar15 + 0x10))(lVar15,param_2,0,0);
            _objc_release(lVar15);
            _objc_release(param_2);
            _objc_release(puVar14);
            puVar2 = puVar3;
          }
          _objc_release(puVar3);
          puVar3 = puVar1;
          _objc_release(puVar1);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
            return puVar3;
          }
          ___stack_chk_fail();
          pcStack_208 = FUN_106f50d2c;
          lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_220 = &PTR____CFConstantStringClassReference_110e8f418;
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_210 = &pppuStack_1b0;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
            ___stack_chk_fail();
            pppuVar10 = &ppuStack_240;
            pcStack_228 = FUN_106f50d9c;
            lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_240 = &PTR____CFConstantStringClassReference_110e8f478;
            lVar16 = 1;
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pppuStack_230 = &pppuStack_210;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
              ___stack_chk_fail();
              pcStack_248 = FUN_106f50e0c;
              lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
              uStack_280 = uVar13;
              puStack_278 = param_2;
              puStack_270 = puVar2;
              puStack_268 = puVar14;
              puStack_260 = puVar1;
              lStack_258 = lVar15;
              pppuStack_250 = &pppuStack_230;
              _objc_retain(lVar16);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3508;
              _objc_opt_class(PTR_PTR_1126d3508);
              puVar3 = (undefined *)pppuVar10;
              _objc_opt_isKindOfClass(pppuVar10,puVar1);
              puVar1 = (undefined *)pppuVar10;
              if (((ulong)puVar3 & 1) == 0) {
                puVar1 = (undefined *)0x0;
              }
              _objc_retain(puVar1);
              _objc_release(pppuVar10);
              puVar3 = puVar1;
              func_0x00010c29f880();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar3 == (undefined *)0x0) {
                puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar16 + 0x10))(lVar16,0,puVar3,0);
                _objc_release(lVar16);
                puVar14 = puVar3;
              }
              else {
                ppuStack_298 = &PTR____CFConstantStringClassReference_110e8f478;
                puVar14 = PTR_PTR_1126d3550;
                _objc_alloc();
                puVar3 = puVar1;
                func_0x00010c29f880();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c03cdc0();
                puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                puStack_290 = puVar14;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar16 + 0x10))(lVar16,puVar2,0,0);
                _objc_release(lVar16);
                _objc_release(puVar2);
                _objc_release(puVar14);
                puVar2 = puVar3;
              }
              _objc_release(puVar3);
              puVar3 = puVar1;
              _objc_release(puVar1);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
                return puVar3;
              }
              ___stack_chk_fail();
              pcStack_2a8 = FUN_106f50fe4;
              lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e8f418;
              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
              pppuStack_2b0 = &pppuStack_250;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
                ___stack_chk_fail();
                pppuVar10 = &ppuStack_2e0;
                pcStack_2c8 = FUN_106f51054;
                lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                ppuStack_2e0 = &PTR____CFConstantStringClassReference_110e8f4b8;
                puVar17 = (undefined *)0x1;
                puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                pppuStack_2d0 = &pppuStack_2b0;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
                  ___stack_chk_fail();
                  pcStack_2e8 = FUN_106f510c4;
                  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_310 = puVar2;
                  puStack_308 = puVar14;
                  puStack_300 = puVar1;
                  lStack_2f8 = lVar16;
                  pppuStack_2f0 = &pppuStack_2d0;
                  _objc_retain(puVar17);
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3508;
                  _objc_opt_class(PTR_PTR_1126d3508);
                  puVar2 = (undefined *)pppuVar10;
                  _objc_opt_isKindOfClass(pppuVar10,puVar1);
                  puVar1 = (undefined *)pppuVar10;
                  if (((ulong)puVar2 & 1) == 0) {
                    puVar1 = (undefined *)0x0;
                  }
                  _objc_retain(puVar1);
                  _objc_release(pppuVar10);
                  puVar2 = puVar1;
                  func_0x00010c123cc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar2 == (undefined *)0x0) {
                    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
                    func_0x00010bf99240();
                    _objc_retainAutoreleasedReturnValue();
                    puVar14 = puVar2;
                    (**(code **)(puVar17 + 0x10))(puVar17,0,puVar2,0);
                    puVar3 = puVar17;
                  }
                  else {
                    ppuStack_328 = &PTR____CFConstantStringClassReference_110e8f4b8;
                    puVar2 = puVar1;
                    func_0x00010c123cc0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                    puStack_320 = puVar2;
                    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                    _objc_retainAutoreleasedReturnValue();
                    puVar14 = (undefined *)0x0;
                    (**(code **)(puVar17 + 0x10))(puVar17,puVar3,0,0);
                    _objc_release(puVar17);
                  }
                  _objc_release(puVar3);
                  _objc_release(puVar2);
                  puVar2 = puVar1;
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
                    ___stack_chk_fail();
                    ppuVar12 = &puStack_360;
                    pcStack_338 = FUN_106f51264;
                    puStack_350 = puVar1;
                    puStack_348 = puVar17;
                    pppuStack_340 = &pppuStack_2f0;
                    _objc_retain(puVar14);
                    puStack_358 = PTR_PTR_1126f7ee8;
                    puStack_360 = puVar2;
                    _objc_msgSendSuper2(&puStack_360,PTR_s_init_1125d9248);
                    if (ppuVar12 != (undefined **)0x0) {
                      _objc_retain(puVar14);
                      uVar13 = *(undefined8 *)((long)ppuVar12 + 8);
                      *(undefined **)((long)ppuVar12 + 8) = puVar14;
                      _objc_release(uVar13);
                    }
                    _objc_release(puVar14);
                    return (undefined1 *)ppuVar12;
                  }
                  return puVar2;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar3;
}



/* Entry: 106f507f0; end: 106f5085f; -[SCSpectaclesPrimaryCameraMediaMetadataDemuxer inputDataKeys] */

undefined1 * FUN_106f507f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *unaff_x22;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined **ppuStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_40;
    pcStack_28 = FUN_106f50860;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f4d8;
    puVar9 = (undefined *)0x1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_106f508d0;
      lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_50 = &puStack_30;
      _objc_retain(puVar9);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar3 = (undefined1 *)pppuVar2;
      _objc_opt_isKindOfClass(pppuVar2,puVar1);
      puVar4 = (undefined1 *)pppuVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(pppuVar2);
      puVar3 = puVar4;
      func_0x00010c112d00();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar3 == (undefined1 *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar9 + 0x10))(puVar9,0,puVar1,0);
      }
      else {
        ppuStack_88 = &PTR____CFConstantStringClassReference_110e8f4d8;
        func_0x00010c112d00(puVar4);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_80 = puVar1;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar9 + 0x10))(puVar9,unaff_x22,0,0);
        _objc_release(puVar9);
        puVar9 = unaff_x22;
      }
      _objc_release(puVar9);
      _objc_release(puVar1);
      _objc_release(puVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return puVar4;
      }
      ___stack_chk_fail();
      pcStack_98 = FUN_106f50a74;
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110e8f418;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_a0 = &ppuStack_50;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
        ___stack_chk_fail();
        pppuVar2 = &ppuStack_d0;
        pcStack_b8 = FUN_106f50ae4;
        lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_d0 = &PTR____CFConstantStringClassReference_110e8f498;
        lVar10 = 1;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_c0 = &pppuStack_a0;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
          ___stack_chk_fail();
          pcStack_d8 = FUN_106f50b54;
          lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_e0 = &pppuStack_c0;
          _objc_retain(lVar10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3508;
          _objc_opt_class(PTR_PTR_1126d3508);
          puVar9 = (undefined *)pppuVar2;
          _objc_opt_isKindOfClass(pppuVar2,puVar1);
          puVar1 = (undefined *)pppuVar2;
          if (((ulong)puVar9 & 1) == 0) {
            puVar1 = (undefined *)0x0;
          }
          _objc_retain(puVar1);
          _objc_release(pppuVar2);
          puVar9 = puVar1;
          func_0x00010c094fa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar9 == (undefined *)0x0) {
            puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar10 + 0x10))(lVar10,0,puVar9,0);
            _objc_release(lVar10);
          }
          else {
            ppuStack_128 = &PTR____CFConstantStringClassReference_110e8f498;
            puVar5 = PTR_PTR_1126d3550;
            _objc_alloc();
            puVar9 = puVar1;
            func_0x00010c094fa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c03cdc0();
            puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_120 = puVar5;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar10 + 0x10))(lVar10,puVar11,0,0);
            _objc_release(lVar10);
            _objc_release(puVar11);
            _objc_release(puVar5);
            unaff_x22 = puVar9;
          }
          _objc_release(puVar9);
          _objc_release(puVar1);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
            return puVar1;
          }
          ___stack_chk_fail();
          pcStack_138 = FUN_106f50d2c;
          lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_150 = &PTR____CFConstantStringClassReference_110e8f418;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_140 = &pppuStack_e0;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
            ___stack_chk_fail();
            pppuVar2 = &ppuStack_170;
            pcStack_158 = FUN_106f50d9c;
            lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_170 = &PTR____CFConstantStringClassReference_110e8f478;
            lVar10 = 1;
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pppuStack_160 = &pppuStack_140;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
              ___stack_chk_fail();
              pcStack_178 = FUN_106f50e0c;
              lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              pppuStack_180 = &pppuStack_160;
              _objc_retain(lVar10);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3508;
              _objc_opt_class(PTR_PTR_1126d3508);
              puVar5 = (undefined *)pppuVar2;
              _objc_opt_isKindOfClass(pppuVar2,puVar1);
              puVar9 = (undefined *)pppuVar2;
              if (((ulong)puVar5 & 1) == 0) {
                puVar9 = (undefined *)0x0;
              }
              _objc_retain(puVar9);
              _objc_release(pppuVar2);
              puVar1 = puVar9;
              func_0x00010c29f880();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar1 == (undefined *)0x0) {
                puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar10 + 0x10))(lVar10,0,puVar1,0);
                _objc_release(lVar10);
                puVar5 = puVar1;
              }
              else {
                ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e8f478;
                puVar5 = PTR_PTR_1126d3550;
                _objc_alloc();
                puVar1 = puVar9;
                func_0x00010c29f880();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c03cdc0();
                puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                puStack_1c0 = puVar5;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar10 + 0x10))(lVar10,puVar11,0,0);
                _objc_release(lVar10);
                _objc_release(puVar11);
                _objc_release(puVar5);
                unaff_x22 = puVar1;
              }
              _objc_release(puVar1);
              puVar1 = puVar9;
              _objc_release(puVar9);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
                return puVar1;
              }
              ___stack_chk_fail();
              pcStack_1d8 = FUN_106f50fe4;
              lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e8f418;
              puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
              pppuStack_1e0 = &pppuStack_180;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
                ___stack_chk_fail();
                pppuVar2 = &ppuStack_210;
                pcStack_1f8 = FUN_106f51054;
                lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
                ppuStack_210 = &PTR____CFConstantStringClassReference_110e8f4b8;
                puVar11 = (undefined *)0x1;
                puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                pppuStack_200 = &pppuStack_1e0;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
                  ___stack_chk_fail();
                  pcStack_218 = FUN_106f510c4;
                  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_240 = unaff_x22;
                  puStack_238 = puVar5;
                  puStack_230 = puVar9;
                  lStack_228 = lVar10;
                  pppuStack_220 = &pppuStack_200;
                  _objc_retain(puVar11);
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3508;
                  _objc_opt_class(PTR_PTR_1126d3508);
                  puVar9 = (undefined *)pppuVar2;
                  _objc_opt_isKindOfClass(pppuVar2,puVar1);
                  puVar1 = (undefined *)pppuVar2;
                  if (((ulong)puVar9 & 1) == 0) {
                    puVar1 = (undefined *)0x0;
                  }
                  _objc_retain(puVar1);
                  _objc_release(pppuVar2);
                  puVar9 = puVar1;
                  func_0x00010c123cc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar9 == (undefined *)0x0) {
                    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
                    func_0x00010bf99240();
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = puVar9;
                    (**(code **)(puVar11 + 0x10))(puVar11,0,puVar9,0);
                    puVar5 = puVar11;
                  }
                  else {
                    ppuStack_258 = &PTR____CFConstantStringClassReference_110e8f4b8;
                    puVar9 = puVar1;
                    func_0x00010c123cc0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                    puStack_250 = puVar9;
                    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = (undefined *)0x0;
                    (**(code **)(puVar11 + 0x10))(puVar11,puVar5,0,0);
                    _objc_release(puVar11);
                  }
                  _objc_release(puVar5);
                  _objc_release(puVar9);
                  puVar9 = puVar1;
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
                    ___stack_chk_fail();
                    ppuVar6 = &puStack_290;
                    pcStack_268 = FUN_106f51264;
                    puStack_280 = puVar1;
                    puStack_278 = puVar11;
                    pppuStack_270 = &pppuStack_220;
                    _objc_retain(puVar8);
                    puStack_288 = PTR_PTR_1126f7ee8;
                    puStack_290 = puVar9;
                    _objc_msgSendSuper2(&puStack_290,PTR_s_init_1125d9248);
                    if (ppuVar6 != (undefined **)0x0) {
                      _objc_retain(puVar8);
                      uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
                      *(undefined **)((long)ppuVar6 + 8) = puVar8;
                      _objc_release(uVar7);
                    }
                    _objc_release(puVar8);
                    return (undefined1 *)ppuVar6;
                  }
                  return puVar9;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f50860; end: 106f508cf; -[SCSpectaclesPrimaryCameraMediaMetadataDemuxer outputDataKeys] */

undefined1 * FUN_106f50860(void)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *unaff_x22;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined **ppuStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f4d8;
  puVar9 = (undefined *)0x1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_106f508d0;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_30 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3508;
    _objc_opt_class(PTR_PTR_1126d3508);
    puVar3 = (undefined1 *)pppuVar2;
    _objc_opt_isKindOfClass(pppuVar2,puVar1);
    puVar4 = (undefined1 *)pppuVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(pppuVar2);
    puVar3 = puVar4;
    func_0x00010c112d00();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar3 == (undefined1 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(puVar9 + 0x10))(puVar9,0,puVar1,0);
    }
    else {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110e8f4d8;
      func_0x00010c112d00(puVar4);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar1;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(puVar9 + 0x10))(puVar9,unaff_x22,0,0);
      _objc_release(puVar9);
      puVar9 = unaff_x22;
    }
    _objc_release(puVar9);
    _objc_release(puVar1);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return puVar4;
    }
    ___stack_chk_fail();
    pcStack_78 = FUN_106f50a74;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e8f418;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_80 = &puStack_30;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pppuVar2 = &ppuStack_b0;
      pcStack_98 = FUN_106f50ae4;
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110e8f498;
      lVar10 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_a0 = &ppuStack_80;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
        ___stack_chk_fail();
        pcStack_b8 = FUN_106f50b54;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_c0 = &pppuStack_a0;
        _objc_retain(lVar10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3508;
        _objc_opt_class(PTR_PTR_1126d3508);
        puVar9 = (undefined *)pppuVar2;
        _objc_opt_isKindOfClass(pppuVar2,puVar1);
        puVar1 = (undefined *)pppuVar2;
        if (((ulong)puVar9 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(pppuVar2);
        puVar9 = puVar1;
        func_0x00010c094fa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar9 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar10 + 0x10))(lVar10,0,puVar9,0);
          _objc_release(lVar10);
        }
        else {
          ppuStack_108 = &PTR____CFConstantStringClassReference_110e8f498;
          puVar5 = PTR_PTR_1126d3550;
          _objc_alloc();
          puVar9 = puVar1;
          func_0x00010c094fa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c03cdc0();
          puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_100 = puVar5;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar10 + 0x10))(lVar10,puVar11,0,0);
          _objc_release(lVar10);
          _objc_release(puVar11);
          _objc_release(puVar5);
          unaff_x22 = puVar9;
        }
        _objc_release(puVar9);
        _objc_release(puVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
          return puVar1;
        }
        ___stack_chk_fail();
        pcStack_118 = FUN_106f50d2c;
        lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_130 = &PTR____CFConstantStringClassReference_110e8f418;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_120 = &pppuStack_c0;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
          ___stack_chk_fail();
          pppuVar2 = &ppuStack_150;
          pcStack_138 = FUN_106f50d9c;
          lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_150 = &PTR____CFConstantStringClassReference_110e8f478;
          lVar10 = 1;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_140 = &pppuStack_120;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
            ___stack_chk_fail();
            pcStack_158 = FUN_106f50e0c;
            lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pppuStack_160 = &pppuStack_140;
            _objc_retain(lVar10);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3508;
            _objc_opt_class(PTR_PTR_1126d3508);
            puVar5 = (undefined *)pppuVar2;
            _objc_opt_isKindOfClass(pppuVar2,puVar1);
            puVar9 = (undefined *)pppuVar2;
            if (((ulong)puVar5 & 1) == 0) {
              puVar9 = (undefined *)0x0;
            }
            _objc_retain(puVar9);
            _objc_release(pppuVar2);
            puVar1 = puVar9;
            func_0x00010c29f880();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar1 == (undefined *)0x0) {
              puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              (**(code **)(lVar10 + 0x10))(lVar10,0,puVar1,0);
              _objc_release(lVar10);
              puVar5 = puVar1;
            }
            else {
              ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e8f478;
              puVar5 = PTR_PTR_1126d3550;
              _objc_alloc();
              puVar1 = puVar9;
              func_0x00010c29f880();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c03cdc0();
              puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_1a0 = puVar5;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              (**(code **)(lVar10 + 0x10))(lVar10,puVar11,0,0);
              _objc_release(lVar10);
              _objc_release(puVar11);
              _objc_release(puVar5);
              unaff_x22 = puVar1;
            }
            _objc_release(puVar1);
            puVar1 = puVar9;
            _objc_release(puVar9);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
              return puVar1;
            }
            ___stack_chk_fail();
            pcStack_1b8 = FUN_106f50fe4;
            lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e8f418;
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pppuStack_1c0 = &pppuStack_160;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
              ___stack_chk_fail();
              pppuVar2 = &ppuStack_1f0;
              pcStack_1d8 = FUN_106f51054;
              lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e8f4b8;
              puVar11 = (undefined *)0x1;
              puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
              pppuStack_1e0 = &pppuStack_1c0;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
                ___stack_chk_fail();
                pcStack_1f8 = FUN_106f510c4;
                lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puStack_220 = unaff_x22;
                puStack_218 = puVar5;
                puStack_210 = puVar9;
                lStack_208 = lVar10;
                pppuStack_200 = &pppuStack_1e0;
                _objc_retain(puVar11);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3508;
                _objc_opt_class(PTR_PTR_1126d3508);
                puVar9 = (undefined *)pppuVar2;
                _objc_opt_isKindOfClass(pppuVar2,puVar1);
                puVar1 = (undefined *)pppuVar2;
                if (((ulong)puVar9 & 1) == 0) {
                  puVar1 = (undefined *)0x0;
                }
                _objc_retain(puVar1);
                _objc_release(pppuVar2);
                puVar9 = puVar1;
                func_0x00010c123cc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar9 == (undefined *)0x0) {
                  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x00010bf99240();
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar9;
                  (**(code **)(puVar11 + 0x10))(puVar11,0,puVar9,0);
                  puVar5 = puVar11;
                }
                else {
                  ppuStack_238 = &PTR____CFConstantStringClassReference_110e8f4b8;
                  puVar9 = puVar1;
                  func_0x00010c123cc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  puStack_230 = puVar9;
                  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = (undefined *)0x0;
                  (**(code **)(puVar11 + 0x10))(puVar11,puVar5,0,0);
                  _objc_release(puVar11);
                }
                _objc_release(puVar5);
                _objc_release(puVar9);
                puVar9 = puVar1;
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
                  ___stack_chk_fail();
                  ppuVar6 = &puStack_270;
                  pcStack_248 = FUN_106f51264;
                  puStack_260 = puVar1;
                  puStack_258 = puVar11;
                  pppuStack_250 = &pppuStack_200;
                  _objc_retain(puVar8);
                  puStack_268 = PTR_PTR_1126f7ee8;
                  puStack_270 = puVar9;
                  _objc_msgSendSuper2(&puStack_270,PTR_s_init_1125d9248);
                  if (ppuVar6 != (undefined **)0x0) {
                    _objc_retain(puVar8);
                    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
                    *(undefined **)((long)ppuVar6 + 8) = puVar8;
                    _objc_release(uVar7);
                  }
                  _objc_release(puVar8);
                  return (undefined1 *)ppuVar6;
                }
                return puVar9;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f508d0; end: 106f50a73; -[SCSpectaclesPrimaryCameraMediaMetadataDemuxer runWithInputData:completion:] */

undefined *
FUN_106f508d0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined **ppuStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c112d00();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,0,puVar2,0);
  }
  else {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110e8f4d8;
    func_0x00010c112d00(puVar1);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,unaff_x22,0,0);
    _objc_release(param_4);
    param_4 = unaff_x22;
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106f50a74;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pppuVar4 = &ppuStack_90;
    pcStack_78 = FUN_106f50ae4;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e8f498;
    lVar8 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_80 = &puStack_60;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_98 = FUN_106f50b54;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_a0 = &ppuStack_80;
      _objc_retain(lVar8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar2 = (undefined *)pppuVar4;
      _objc_opt_isKindOfClass(pppuVar4,puVar1);
      puVar1 = (undefined *)pppuVar4;
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(pppuVar4);
      puVar2 = puVar1;
      func_0x00010c094fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))(lVar8,0,puVar2,0);
        _objc_release(lVar8);
      }
      else {
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110e8f498;
        puVar3 = PTR_PTR_1126d3550;
        _objc_alloc();
        puVar2 = puVar1;
        func_0x00010c094fa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03cdc0();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_e0 = puVar3;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
        _objc_release(lVar8);
        _objc_release(puVar9);
        _objc_release(puVar3);
        unaff_x22 = puVar2;
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
        return puVar1;
      }
      ___stack_chk_fail();
      pcStack_f8 = FUN_106f50d2c;
      lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_110 = &PTR____CFConstantStringClassReference_110e8f418;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_100 = &pppuStack_a0;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
        ___stack_chk_fail();
        pppuVar4 = &ppuStack_130;
        pcStack_118 = FUN_106f50d9c;
        lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_130 = &PTR____CFConstantStringClassReference_110e8f478;
        lVar8 = 1;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_120 = &pppuStack_100;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
          ___stack_chk_fail();
          pcStack_138 = FUN_106f50e0c;
          lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_140 = &pppuStack_120;
          _objc_retain(lVar8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3508;
          _objc_opt_class(PTR_PTR_1126d3508);
          puVar3 = (undefined *)pppuVar4;
          _objc_opt_isKindOfClass(pppuVar4,puVar1);
          puVar2 = (undefined *)pppuVar4;
          if (((ulong)puVar3 & 1) == 0) {
            puVar2 = (undefined *)0x0;
          }
          _objc_retain(puVar2);
          _objc_release(pppuVar4);
          puVar1 = puVar2;
          func_0x00010c29f880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar1 == (undefined *)0x0) {
            puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar8 + 0x10))(lVar8,0,puVar1,0);
            _objc_release(lVar8);
            puVar3 = puVar1;
          }
          else {
            ppuStack_188 = &PTR____CFConstantStringClassReference_110e8f478;
            puVar3 = PTR_PTR_1126d3550;
            _objc_alloc();
            puVar1 = puVar2;
            func_0x00010c29f880();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c03cdc0();
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_180 = puVar3;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
            _objc_release(lVar8);
            _objc_release(puVar9);
            _objc_release(puVar3);
            unaff_x22 = puVar1;
          }
          _objc_release(puVar1);
          puVar1 = puVar2;
          _objc_release(puVar2);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
            return puVar1;
          }
          ___stack_chk_fail();
          pcStack_198 = FUN_106f50fe4;
          lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e8f418;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_1a0 = &pppuStack_140;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
            ___stack_chk_fail();
            pppuVar4 = &ppuStack_1d0;
            pcStack_1b8 = FUN_106f51054;
            lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e8f4b8;
            puVar9 = (undefined *)0x1;
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pppuStack_1c0 = &pppuStack_1a0;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
              ___stack_chk_fail();
              pcStack_1d8 = FUN_106f510c4;
              lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_200 = unaff_x22;
              puStack_1f8 = puVar3;
              puStack_1f0 = puVar2;
              lStack_1e8 = lVar8;
              pppuStack_1e0 = &pppuStack_1c0;
              _objc_retain(puVar9);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3508;
              _objc_opt_class(PTR_PTR_1126d3508);
              puVar2 = (undefined *)pppuVar4;
              _objc_opt_isKindOfClass(pppuVar4,puVar1);
              puVar1 = (undefined *)pppuVar4;
              if (((ulong)puVar2 & 1) == 0) {
                puVar1 = (undefined *)0x0;
              }
              _objc_retain(puVar1);
              _objc_release(pppuVar4);
              puVar2 = puVar1;
              func_0x00010c123cc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar2 == (undefined *)0x0) {
                puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar2;
                (**(code **)(puVar9 + 0x10))(puVar9,0,puVar2,0);
                puVar3 = puVar9;
              }
              else {
                ppuStack_218 = &PTR____CFConstantStringClassReference_110e8f4b8;
                puVar2 = puVar1;
                func_0x00010c123cc0();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                puStack_210 = puVar2;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = (undefined *)0x0;
                (**(code **)(puVar9 + 0x10))(puVar9,puVar3,0,0);
                _objc_release(puVar9);
              }
              _objc_release(puVar3);
              _objc_release(puVar2);
              puVar2 = puVar1;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
                ___stack_chk_fail();
                ppuVar5 = &puStack_250;
                pcStack_228 = FUN_106f51264;
                puStack_240 = puVar1;
                puStack_238 = puVar9;
                pppuStack_230 = &pppuStack_1e0;
                _objc_retain(puVar7);
                puStack_248 = PTR_PTR_1126f7ee8;
                puStack_250 = puVar2;
                _objc_msgSendSuper2(&puStack_250,PTR_s_init_1125d9248);
                if (ppuVar5 != (undefined **)0x0) {
                  _objc_retain(puVar7);
                  uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
                  *(undefined **)((long)ppuVar5 + 8) = puVar7;
                  _objc_release(uVar6);
                }
                _objc_release(puVar7);
                return (undefined *)ppuVar5;
              }
              return puVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f50a74; end: 106f50ae3; -[SCSpectaclesLensMetadataMediaMetadataDemuxer inputDataKeys] */

undefined * FUN_106f50a74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 ***pppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_40;
    pcStack_28 = FUN_106f50ae4;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f498;
    lVar8 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_106f50b54;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_50 = &puStack_30;
      _objc_retain(lVar8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar3 = (undefined *)pppuVar2;
      _objc_opt_isKindOfClass(pppuVar2,puVar1);
      puVar1 = (undefined *)pppuVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(pppuVar2);
      puVar3 = puVar1;
      func_0x00010c094fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))(lVar8,0,puVar3,0);
        _objc_release(lVar8);
      }
      else {
        ppuStack_98 = &PTR____CFConstantStringClassReference_110e8f498;
        puVar4 = PTR_PTR_1126d3550;
        _objc_alloc();
        puVar3 = puVar1;
        func_0x00010c094fa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03cdc0();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_90 = puVar4;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
        _objc_release(lVar8);
        _objc_release(puVar9);
        _objc_release(puVar4);
        unaff_x22 = puVar3;
      }
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return puVar1;
      }
      ___stack_chk_fail();
      pcStack_a8 = FUN_106f50d2c;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8f418;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_b0 = &ppuStack_50;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pppuVar2 = &ppuStack_e0;
        pcStack_c8 = FUN_106f50d9c;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110e8f478;
        lVar8 = 1;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_d0 = &pppuStack_b0;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
          ___stack_chk_fail();
          pcStack_e8 = FUN_106f50e0c;
          lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_f0 = &pppuStack_d0;
          _objc_retain(lVar8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3508;
          _objc_opt_class(PTR_PTR_1126d3508);
          puVar4 = (undefined *)pppuVar2;
          _objc_opt_isKindOfClass(pppuVar2,puVar1);
          puVar3 = (undefined *)pppuVar2;
          if (((ulong)puVar4 & 1) == 0) {
            puVar3 = (undefined *)0x0;
          }
          _objc_retain(puVar3);
          _objc_release(pppuVar2);
          puVar1 = puVar3;
          func_0x00010c29f880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar1 == (undefined *)0x0) {
            puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar8 + 0x10))(lVar8,0,puVar1,0);
            _objc_release(lVar8);
            puVar4 = puVar1;
          }
          else {
            ppuStack_138 = &PTR____CFConstantStringClassReference_110e8f478;
            puVar4 = PTR_PTR_1126d3550;
            _objc_alloc();
            puVar1 = puVar3;
            func_0x00010c29f880();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c03cdc0();
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_130 = puVar4;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
            _objc_release(lVar8);
            _objc_release(puVar9);
            _objc_release(puVar4);
            unaff_x22 = puVar1;
          }
          _objc_release(puVar1);
          puVar1 = puVar3;
          _objc_release(puVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
            return puVar1;
          }
          ___stack_chk_fail();
          pcStack_148 = FUN_106f50fe4;
          lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_160 = &PTR____CFConstantStringClassReference_110e8f418;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_150 = &pppuStack_f0;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
            ___stack_chk_fail();
            pppuVar2 = &ppuStack_180;
            pcStack_168 = FUN_106f51054;
            lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_180 = &PTR____CFConstantStringClassReference_110e8f4b8;
            puVar9 = (undefined *)0x1;
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pppuStack_170 = &pppuStack_150;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
              ___stack_chk_fail();
              pcStack_188 = FUN_106f510c4;
              lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_1b0 = unaff_x22;
              puStack_1a8 = puVar4;
              puStack_1a0 = puVar3;
              lStack_198 = lVar8;
              pppuStack_190 = &pppuStack_170;
              _objc_retain(puVar9);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3508;
              _objc_opt_class(PTR_PTR_1126d3508);
              puVar3 = (undefined *)pppuVar2;
              _objc_opt_isKindOfClass(pppuVar2,puVar1);
              puVar1 = (undefined *)pppuVar2;
              if (((ulong)puVar3 & 1) == 0) {
                puVar1 = (undefined *)0x0;
              }
              _objc_retain(puVar1);
              _objc_release(pppuVar2);
              puVar3 = puVar1;
              func_0x00010c123cc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar3 == (undefined *)0x0) {
                puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar3;
                (**(code **)(puVar9 + 0x10))(puVar9,0,puVar3,0);
                puVar4 = puVar9;
              }
              else {
                ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e8f4b8;
                puVar3 = puVar1;
                func_0x00010c123cc0();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                puStack_1c0 = puVar3;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = (undefined *)0x0;
                (**(code **)(puVar9 + 0x10))(puVar9,puVar4,0,0);
                _objc_release(puVar9);
              }
              _objc_release(puVar4);
              _objc_release(puVar3);
              puVar3 = puVar1;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
                ___stack_chk_fail();
                ppuVar5 = &puStack_200;
                pcStack_1d8 = FUN_106f51264;
                puStack_1f0 = puVar1;
                puStack_1e8 = puVar9;
                pppuStack_1e0 = &pppuStack_190;
                _objc_retain(puVar7);
                puStack_1f8 = PTR_PTR_1126f7ee8;
                puStack_200 = puVar3;
                _objc_msgSendSuper2(&puStack_200,PTR_s_init_1125d9248);
                if (ppuVar5 != (undefined **)0x0) {
                  _objc_retain(puVar7);
                  uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
                  *(undefined **)((long)ppuVar5 + 8) = puVar7;
                  _objc_release(uVar6);
                }
                _objc_release(puVar7);
                return (undefined *)ppuVar5;
              }
              return puVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f50ae4; end: 106f50b53; -[SCSpectaclesLensMetadataMediaMetadataDemuxer outputDataKeys] */

undefined * FUN_106f50ae4(void)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f498;
  lVar8 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_106f50b54;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_30 = &stack0xfffffffffffffff0;
    _objc_retain(lVar8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3508;
    _objc_opt_class(PTR_PTR_1126d3508);
    puVar3 = (undefined *)pppuVar2;
    _objc_opt_isKindOfClass(pppuVar2,puVar1);
    puVar1 = (undefined *)pppuVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(pppuVar2);
    puVar3 = puVar1;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar8 + 0x10))(lVar8,0,puVar3,0);
      _objc_release(lVar8);
    }
    else {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e8f498;
      puVar4 = PTR_PTR_1126d3550;
      _objc_alloc();
      puVar3 = puVar1;
      func_0x00010c094fa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03cdc0();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar4;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
      _objc_release(lVar8);
      _objc_release(puVar9);
      _objc_release(puVar4);
      unaff_x22 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar1;
    }
    ___stack_chk_fail();
    pcStack_88 = FUN_106f50d2c;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8f418;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_90 = &puStack_30;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pppuVar2 = &ppuStack_c0;
      pcStack_a8 = FUN_106f50d9c;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8f478;
      lVar8 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_b0 = &ppuStack_90;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106f50e0c;
        lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_d0 = &pppuStack_b0;
        _objc_retain(lVar8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3508;
        _objc_opt_class(PTR_PTR_1126d3508);
        puVar4 = (undefined *)pppuVar2;
        _objc_opt_isKindOfClass(pppuVar2,puVar1);
        puVar3 = (undefined *)pppuVar2;
        if (((ulong)puVar4 & 1) == 0) {
          puVar3 = (undefined *)0x0;
        }
        _objc_retain(puVar3);
        _objc_release(pppuVar2);
        puVar1 = puVar3;
        func_0x00010c29f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar1 == (undefined *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar8 + 0x10))(lVar8,0,puVar1,0);
          _objc_release(lVar8);
          puVar4 = puVar1;
        }
        else {
          ppuStack_118 = &PTR____CFConstantStringClassReference_110e8f478;
          puVar4 = PTR_PTR_1126d3550;
          _objc_alloc();
          puVar1 = puVar3;
          func_0x00010c29f880();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c03cdc0();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_110 = puVar4;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
          _objc_release(lVar8);
          _objc_release(puVar9);
          _objc_release(puVar4);
          unaff_x22 = puVar1;
        }
        _objc_release(puVar1);
        puVar1 = puVar3;
        _objc_release(puVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
          return puVar1;
        }
        ___stack_chk_fail();
        pcStack_128 = FUN_106f50fe4;
        lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_140 = &PTR____CFConstantStringClassReference_110e8f418;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_130 = &pppuStack_d0;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
          ___stack_chk_fail();
          pppuVar2 = &ppuStack_160;
          pcStack_148 = FUN_106f51054;
          lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_160 = &PTR____CFConstantStringClassReference_110e8f4b8;
          puVar9 = (undefined *)0x1;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_150 = &pppuStack_130;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
            ___stack_chk_fail();
            pcStack_168 = FUN_106f510c4;
            lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_190 = unaff_x22;
            puStack_188 = puVar4;
            puStack_180 = puVar3;
            lStack_178 = lVar8;
            pppuStack_170 = &pppuStack_150;
            _objc_retain(puVar9);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3508;
            _objc_opt_class(PTR_PTR_1126d3508);
            puVar3 = (undefined *)pppuVar2;
            _objc_opt_isKindOfClass(pppuVar2,puVar1);
            puVar1 = (undefined *)pppuVar2;
            if (((ulong)puVar3 & 1) == 0) {
              puVar1 = (undefined *)0x0;
            }
            _objc_retain(puVar1);
            _objc_release(pppuVar2);
            puVar3 = puVar1;
            func_0x00010c123cc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 == (undefined *)0x0) {
              puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar3;
              (**(code **)(puVar9 + 0x10))(puVar9,0,puVar3,0);
              puVar4 = puVar9;
            }
            else {
              ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e8f4b8;
              puVar3 = puVar1;
              func_0x00010c123cc0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_1a0 = puVar3;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = (undefined *)0x0;
              (**(code **)(puVar9 + 0x10))(puVar9,puVar4,0,0);
              _objc_release(puVar9);
            }
            _objc_release(puVar4);
            _objc_release(puVar3);
            puVar3 = puVar1;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
              ___stack_chk_fail();
              ppuVar5 = &puStack_1e0;
              pcStack_1b8 = FUN_106f51264;
              puStack_1d0 = puVar1;
              puStack_1c8 = puVar9;
              pppuStack_1c0 = &pppuStack_170;
              _objc_retain(puVar7);
              puStack_1d8 = PTR_PTR_1126f7ee8;
              puStack_1e0 = puVar3;
              _objc_msgSendSuper2(&puStack_1e0,PTR_s_init_1125d9248);
              if (ppuVar5 != (undefined **)0x0) {
                _objc_retain(puVar7);
                uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
                *(undefined **)((long)ppuVar5 + 8) = puVar7;
                _objc_release(uVar6);
              }
              _objc_release(puVar7);
              return (undefined *)ppuVar5;
            }
            return puVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f50b54; end: 106f50d2b; -[SCSpectaclesLensMetadataMediaMetadataDemuxer runWithInputData:completion:] */

undefined * FUN_106f50b54(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,0,puVar2,0);
    _objc_release(param_4);
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e8f498;
    puVar3 = PTR_PTR_1126d3550;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cdc0();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar9,0,0);
    _objc_release(param_4);
    _objc_release(puVar9);
    _objc_release(puVar3);
    unaff_x22 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_106f50d2c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e8f418;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pppuVar4 = &ppuStack_a0;
      pcStack_88 = FUN_106f50d9c;
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8f478;
      lVar8 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_90 = &puStack_70;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_106f50e0c;
        lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_b0 = &ppuStack_90;
        _objc_retain(lVar8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3508;
        _objc_opt_class(PTR_PTR_1126d3508);
        puVar3 = (undefined *)pppuVar4;
        _objc_opt_isKindOfClass(pppuVar4,puVar1);
        puVar2 = (undefined *)pppuVar4;
        if (((ulong)puVar3 & 1) == 0) {
          puVar2 = (undefined *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(pppuVar4);
        puVar1 = puVar2;
        func_0x00010c29f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar1 == (undefined *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar8 + 0x10))(lVar8,0,puVar1,0);
          _objc_release(lVar8);
          puVar3 = puVar1;
        }
        else {
          ppuStack_f8 = &PTR____CFConstantStringClassReference_110e8f478;
          puVar3 = PTR_PTR_1126d3550;
          _objc_alloc();
          puVar1 = puVar2;
          func_0x00010c29f880();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c03cdc0();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_f0 = puVar3;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
          _objc_release(lVar8);
          _objc_release(puVar9);
          _objc_release(puVar3);
          unaff_x22 = puVar1;
        }
        _objc_release(puVar1);
        puVar1 = puVar2;
        _objc_release(puVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
          return puVar1;
        }
        ___stack_chk_fail();
        pcStack_108 = FUN_106f50fe4;
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_120 = &PTR____CFConstantStringClassReference_110e8f418;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_110 = &pppuStack_b0;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
          ___stack_chk_fail();
          pppuVar4 = &ppuStack_140;
          pcStack_128 = FUN_106f51054;
          lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_140 = &PTR____CFConstantStringClassReference_110e8f4b8;
          puVar9 = (undefined *)0x1;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_130 = &pppuStack_110;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
            ___stack_chk_fail();
            pcStack_148 = FUN_106f510c4;
            lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_170 = unaff_x22;
            puStack_168 = puVar3;
            puStack_160 = puVar2;
            lStack_158 = lVar8;
            pppuStack_150 = &pppuStack_130;
            _objc_retain(puVar9);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3508;
            _objc_opt_class(PTR_PTR_1126d3508);
            puVar2 = (undefined *)pppuVar4;
            _objc_opt_isKindOfClass(pppuVar4,puVar1);
            puVar1 = (undefined *)pppuVar4;
            if (((ulong)puVar2 & 1) == 0) {
              puVar1 = (undefined *)0x0;
            }
            _objc_retain(puVar1);
            _objc_release(pppuVar4);
            puVar2 = puVar1;
            func_0x00010c123cc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar2 == (undefined *)0x0) {
              puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar2;
              (**(code **)(puVar9 + 0x10))(puVar9,0,puVar2,0);
              puVar3 = puVar9;
            }
            else {
              ppuStack_188 = &PTR____CFConstantStringClassReference_110e8f4b8;
              puVar2 = puVar1;
              func_0x00010c123cc0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_180 = puVar2;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = (undefined *)0x0;
              (**(code **)(puVar9 + 0x10))(puVar9,puVar3,0,0);
              _objc_release(puVar9);
            }
            _objc_release(puVar3);
            _objc_release(puVar2);
            puVar2 = puVar1;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
              ___stack_chk_fail();
              ppuVar5 = &puStack_1c0;
              pcStack_198 = FUN_106f51264;
              puStack_1b0 = puVar1;
              puStack_1a8 = puVar9;
              pppuStack_1a0 = &pppuStack_150;
              _objc_retain(puVar7);
              puStack_1b8 = PTR_PTR_1126f7ee8;
              puStack_1c0 = puVar2;
              _objc_msgSendSuper2(&puStack_1c0,PTR_s_init_1125d9248);
              if (ppuVar5 != (undefined **)0x0) {
                _objc_retain(puVar7);
                uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
                *(undefined **)((long)ppuVar5 + 8) = puVar7;
                _objc_release(uVar6);
              }
              _objc_release(puVar7);
              return (undefined *)ppuVar5;
            }
            return puVar2;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 106f50d2c; end: 106f50d9b; -[SCSpectaclesVioDataMediaMetadataDemuxer inputDataKeys] */

undefined * FUN_106f50d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_40;
    pcStack_28 = FUN_106f50d9c;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f478;
    lVar8 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_106f50e0c;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_50 = &puStack_30;
      _objc_retain(lVar8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar3 = (undefined *)pppuVar2;
      _objc_opt_isKindOfClass(pppuVar2,puVar1);
      puVar4 = (undefined *)pppuVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(pppuVar2);
      puVar1 = puVar4;
      func_0x00010c29f880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))(lVar8,0,puVar1,0);
        _objc_release(lVar8);
        puVar3 = puVar1;
      }
      else {
        ppuStack_98 = &PTR____CFConstantStringClassReference_110e8f478;
        puVar3 = PTR_PTR_1126d3550;
        _objc_alloc();
        puVar1 = puVar4;
        func_0x00010c29f880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03cdc0();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_90 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
        _objc_release(lVar8);
        _objc_release(puVar9);
        _objc_release(puVar3);
        unaff_x22 = puVar1;
      }
      _objc_release(puVar1);
      puVar1 = puVar4;
      _objc_release(puVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return puVar1;
      }
      ___stack_chk_fail();
      pcStack_a8 = FUN_106f50fe4;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8f418;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_b0 = &ppuStack_50;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pppuVar2 = &ppuStack_e0;
        pcStack_c8 = FUN_106f51054;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110e8f4b8;
        puVar9 = (undefined *)0x1;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_d0 = &pppuStack_b0;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
          ___stack_chk_fail();
          pcStack_e8 = FUN_106f510c4;
          lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_110 = unaff_x22;
          puStack_108 = puVar3;
          puStack_100 = puVar4;
          lStack_f8 = lVar8;
          pppuStack_f0 = &pppuStack_d0;
          _objc_retain(puVar9);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3508;
          _objc_opt_class(PTR_PTR_1126d3508);
          puVar4 = (undefined *)pppuVar2;
          _objc_opt_isKindOfClass(pppuVar2,puVar1);
          puVar1 = (undefined *)pppuVar2;
          if (((ulong)puVar4 & 1) == 0) {
            puVar1 = (undefined *)0x0;
          }
          _objc_retain(puVar1);
          _objc_release(pppuVar2);
          puVar4 = puVar1;
          func_0x00010c123cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar4 == (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            (**(code **)(puVar9 + 0x10))(puVar9,0,puVar4,0);
            puVar3 = puVar9;
          }
          else {
            ppuStack_128 = &PTR____CFConstantStringClassReference_110e8f4b8;
            puVar4 = puVar1;
            func_0x00010c123cc0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_120 = puVar4;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = (undefined *)0x0;
            (**(code **)(puVar9 + 0x10))(puVar9,puVar3,0,0);
            _objc_release(puVar9);
          }
          _objc_release(puVar3);
          _objc_release(puVar4);
          puVar4 = puVar1;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
            ___stack_chk_fail();
            ppuVar5 = &puStack_160;
            pcStack_138 = FUN_106f51264;
            puStack_150 = puVar1;
            puStack_148 = puVar9;
            pppuStack_140 = &pppuStack_f0;
            _objc_retain(puVar7);
            puStack_158 = PTR_PTR_1126f7ee8;
            puStack_160 = puVar4;
            _objc_msgSendSuper2(&puStack_160,PTR_s_init_1125d9248);
            if (ppuVar5 != (undefined **)0x0) {
              _objc_retain(puVar7);
              uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
              *(undefined **)((long)ppuVar5 + 8) = puVar7;
              _objc_release(uVar6);
            }
            _objc_release(puVar7);
            return (undefined *)ppuVar5;
          }
          return puVar4;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f50d9c; end: 106f50e0b; -[SCSpectaclesVioDataMediaMetadataDemuxer outputDataKeys] */

undefined * FUN_106f50d9c(void)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f478;
  lVar8 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_106f50e0c;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_30 = &stack0xfffffffffffffff0;
    _objc_retain(lVar8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3508;
    _objc_opt_class(PTR_PTR_1126d3508);
    puVar3 = (undefined *)pppuVar2;
    _objc_opt_isKindOfClass(pppuVar2,puVar1);
    puVar4 = (undefined *)pppuVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(pppuVar2);
    puVar1 = puVar4;
    func_0x00010c29f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar8 + 0x10))(lVar8,0,puVar1,0);
      _objc_release(lVar8);
      puVar3 = puVar1;
    }
    else {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e8f478;
      puVar3 = PTR_PTR_1126d3550;
      _objc_alloc();
      puVar1 = puVar4;
      func_0x00010c29f880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03cdc0();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar8 + 0x10))(lVar8,puVar9,0,0);
      _objc_release(lVar8);
      _objc_release(puVar9);
      _objc_release(puVar3);
      unaff_x22 = puVar1;
    }
    _objc_release(puVar1);
    puVar1 = puVar4;
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar1;
    }
    ___stack_chk_fail();
    pcStack_88 = FUN_106f50fe4;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8f418;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_90 = &puStack_30;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pppuVar2 = &ppuStack_c0;
      pcStack_a8 = FUN_106f51054;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8f4b8;
      puVar9 = (undefined *)0x1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_b0 = &ppuStack_90;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106f510c4;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_f0 = unaff_x22;
        puStack_e8 = puVar3;
        puStack_e0 = puVar4;
        lStack_d8 = lVar8;
        pppuStack_d0 = &pppuStack_b0;
        _objc_retain(puVar9);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3508;
        _objc_opt_class(PTR_PTR_1126d3508);
        puVar4 = (undefined *)pppuVar2;
        _objc_opt_isKindOfClass(pppuVar2,puVar1);
        puVar1 = (undefined *)pppuVar2;
        if (((ulong)puVar4 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(pppuVar2);
        puVar4 = puVar1;
        func_0x00010c123cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          (**(code **)(puVar9 + 0x10))(puVar9,0,puVar4,0);
          puVar3 = puVar9;
        }
        else {
          ppuStack_108 = &PTR____CFConstantStringClassReference_110e8f4b8;
          puVar4 = puVar1;
          func_0x00010c123cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_100 = puVar4;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined *)0x0;
          (**(code **)(puVar9 + 0x10))(puVar9,puVar3,0,0);
          _objc_release(puVar9);
        }
        _objc_release(puVar3);
        _objc_release(puVar4);
        puVar4 = puVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          ppuVar5 = &puStack_140;
          pcStack_118 = FUN_106f51264;
          puStack_130 = puVar1;
          puStack_128 = puVar9;
          pppuStack_120 = &pppuStack_d0;
          _objc_retain(puVar7);
          puStack_138 = PTR_PTR_1126f7ee8;
          puStack_140 = puVar4;
          _objc_msgSendSuper2(&puStack_140,PTR_s_init_1125d9248);
          if (ppuVar5 != (undefined **)0x0) {
            _objc_retain(puVar7);
            uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
            *(undefined **)((long)ppuVar5 + 8) = puVar7;
            _objc_release(uVar6);
          }
          _objc_release(puVar7);
          return (undefined *)ppuVar5;
        }
        return puVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f50e0c; end: 106f50fe3; -[SCSpectaclesVioDataMediaMetadataDemuxer runWithInputData:completion:] */

undefined * FUN_106f50e0c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x22;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c29f880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,0,puVar2,0);
    _objc_release(param_4);
    puVar3 = puVar2;
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e8f478;
    puVar3 = PTR_PTR_1126d3550;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x00010c29f880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cdc0();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar8,0,0);
    _objc_release(param_4);
    _objc_release(puVar8);
    _objc_release(puVar3);
    unaff_x22 = puVar2;
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_106f50fe4;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e8f418;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pppuVar4 = &ppuStack_a0;
      pcStack_88 = FUN_106f51054;
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8f4b8;
      puVar8 = (undefined *)0x1;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_90 = &puStack_70;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_106f510c4;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_d0 = unaff_x22;
        puStack_c8 = puVar3;
        puStack_c0 = puVar1;
        lStack_b8 = param_4;
        pppuStack_b0 = &ppuStack_90;
        _objc_retain(puVar8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3508;
        _objc_opt_class(PTR_PTR_1126d3508);
        puVar2 = (undefined *)pppuVar4;
        _objc_opt_isKindOfClass(pppuVar4,puVar1);
        puVar1 = (undefined *)pppuVar4;
        if (((ulong)puVar2 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(pppuVar4);
        puVar2 = puVar1;
        func_0x00010c123cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          (**(code **)(puVar8 + 0x10))(puVar8,0,puVar2,0);
          puVar3 = puVar8;
        }
        else {
          ppuStack_e8 = &PTR____CFConstantStringClassReference_110e8f4b8;
          puVar2 = puVar1;
          func_0x00010c123cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_e0 = puVar2;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined *)0x0;
          (**(code **)(puVar8 + 0x10))(puVar8,puVar3,0,0);
          _objc_release(puVar8);
        }
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = puVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
          ___stack_chk_fail();
          ppuVar5 = &puStack_120;
          pcStack_f8 = FUN_106f51264;
          puStack_110 = puVar1;
          puStack_108 = puVar8;
          pppuStack_100 = &pppuStack_b0;
          _objc_retain(puVar7);
          puStack_118 = PTR_PTR_1126f7ee8;
          puStack_120 = puVar2;
          _objc_msgSendSuper2(&puStack_120,PTR_s_init_1125d9248);
          if (ppuVar5 != (undefined **)0x0) {
            _objc_retain(puVar7);
            uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
            *(undefined **)((long)ppuVar5 + 8) = puVar7;
            _objc_release(uVar6);
          }
          _objc_release(puVar7);
          return (undefined *)ppuVar5;
        }
        return puVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106f50fe4; end: 106f51053; -[SCSpectaclesRecordedLensIdMediaMetadataDemuxer inputDataKeys] */

undefined * FUN_106f50fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_40;
    pcStack_28 = FUN_106f51054;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f4b8;
    puVar8 = (undefined *)0x1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_106f510c4;
      lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_50 = &puStack_30;
      _objc_retain(puVar8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3508;
      _objc_opt_class(PTR_PTR_1126d3508);
      puVar3 = (undefined *)pppuVar2;
      _objc_opt_isKindOfClass(pppuVar2,puVar1);
      puVar1 = (undefined *)pppuVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(pppuVar2);
      puVar3 = puVar1;
      func_0x00010c123cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (**(code **)(puVar8 + 0x10))(puVar8,0,puVar3,0);
        puVar4 = puVar8;
      }
      else {
        ppuStack_88 = &PTR____CFConstantStringClassReference_110e8f4b8;
        puVar3 = puVar1;
        func_0x00010c123cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_80 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined *)0x0;
        (**(code **)(puVar8 + 0x10))(puVar8,puVar4,0,0);
        _objc_release(puVar8);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        ppuVar5 = &puStack_c0;
        pcStack_98 = FUN_106f51264;
        puStack_b0 = puVar1;
        puStack_a8 = puVar8;
        pppuStack_a0 = &ppuStack_50;
        _objc_retain(puVar7);
        puStack_b8 = PTR_PTR_1126f7ee8;
        puStack_c0 = puVar3;
        _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
        if (ppuVar5 != (undefined **)0x0) {
          _objc_retain(puVar7);
          uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
          *(undefined **)((long)ppuVar5 + 8) = puVar7;
          _objc_release(uVar6);
        }
        _objc_release(puVar7);
        return (undefined *)ppuVar5;
      }
      return puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f51054; end: 106f510c3; -[SCSpectaclesRecordedLensIdMediaMetadataDemuxer outputDataKeys] */

undefined * FUN_106f51054(void)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f4b8;
  puVar8 = (undefined *)0x1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_28 = FUN_106f510c4;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_30 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar3 = (undefined *)pppuVar2;
  _objc_opt_isKindOfClass(pppuVar2,puVar1);
  puVar1 = (undefined *)pppuVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(pppuVar2);
  puVar3 = puVar1;
  func_0x00010c123cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (**(code **)(puVar8 + 0x10))(puVar8,0,puVar3,0);
    puVar4 = puVar8;
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e8f4b8;
    puVar3 = puVar1;
    func_0x00010c123cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x0;
    (**(code **)(puVar8 + 0x10))(puVar8,puVar4,0,0);
    _objc_release(puVar8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_a0;
  pcStack_78 = FUN_106f51264;
  puStack_90 = puVar1;
  puStack_88 = puVar8;
  ppuStack_80 = &puStack_30;
  _objc_retain(puVar7);
  puStack_98 = PTR_PTR_1126f7ee8;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar7;
    _objc_release(uVar6);
  }
  _objc_release(puVar7);
  return (undefined *)ppuVar5;
}



/* Entry: 106f510c4; end: 106f51263; -[SCSpectaclesRecordedLensIdMediaMetadataDemuxer runWithInputData:completion:] */

undefined *
FUN_106f510c4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3508;
  _objc_opt_class(PTR_PTR_1126d3508);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c123cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (**(code **)(param_4 + 0x10))(param_4,0,puVar2,0);
    puVar3 = param_4;
  }
  else {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110e8f4b8;
    puVar2 = puVar1;
    func_0x00010c123cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x0;
    (**(code **)(param_4 + 0x10))(param_4,puVar3,0,0);
    _objc_release(param_4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_80;
  pcStack_58 = FUN_106f51264;
  puStack_70 = puVar1;
  puStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_78 = PTR_PTR_1126f7ee8;
  puStack_80 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined **)((long)ppuVar4 + 8) = puVar6;
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  return (undefined *)ppuVar4;
}



/* Entry: 106f51264; end: 106f512d7; -[SCSpectaclesPngDepthDirectory initWithDirectoryPath:] */

undefined1 * FUN_106f51264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7ee8;
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



/* Entry: 106f512d8; end: 106f5136f; -[SCSpectaclesPngDepthDirectory dataPathForIndex:] */

void FUN_106f512d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25ce00(uVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f51370; end: 106f5141b; -[SCSpectaclesPngDepthDirectory moveToPath:] */

void FUN_106f51370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d1560();
  _objc_retain(0);
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(0);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5141c; end: 106f51427; -[SCSpectaclesPngDepthDirectory .cxx_destruct] */

void FUN_106f5141c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f51428; end: 106f5149b; -[SCSpectaclesPngDepthDirectoryDataType initWithKey:] */

undefined1 * FUN_106f51428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7ef0;
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



/* Entry: 106f5149c; end: 106f514c3; -[SCSpectaclesPngDepthDirectoryDataType key] */

void FUN_106f5149c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f514c4; end: 106f514cf; -[SCSpectaclesPngDepthDirectoryDataType dataClass] */

void FUN_106f514c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d3540);
  return;
}



/* Entry: 106f514d0; end: 106f5151b; -[SCSpectaclesPngDepthDirectoryDataType dataWithPath:] */

void FUN_106f514d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3540;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00cac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f5151c; end: 106f51527; -[SCSpectaclesPngDepthDirectoryDataType persistData:toPath:] */

void FUN_106f5151c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d18b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_moveToPath__112612040,param_4);
  return;
}



/* Entry: 106f51528; end: 106f51533; -[SCSpectaclesPngDepthDirectoryDataType .cxx_destruct] */

void FUN_106f51528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f51534; end: 106f515bf; -[SCSpectaclesRectificationConfigMuxer inputDataKeys] */

undefined1 * FUN_106f51534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e8f4d8;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e8f578;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f598;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pppuVar5 = &ppuStack_50;
    pcStack_38 = FUN_106f515c0;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e8f5b8;
    lVar7 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      pcStack_58 = FUN_106f51630;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_60 = &puStack_40;
      _objc_retain(pppuVar5);
      _objc_retain(lVar7);
      puVar9 = (undefined1 *)pppuVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010c067fc0();
      _objc_release(puVar9);
      if (puVar2 < (undefined1 *)0x3) {
        puVar9 = (undefined1 *)pppuVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = (undefined1 *)0x0;
      }
      ppuStack_98 = &PTR____CFConstantStringClassReference_110e8f5b8;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar9;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      uVar8 = 0;
      (**(code **)(lVar7 + 0x10))(lVar7,puVar1);
      _objc_release(lVar7);
      _objc_release(puVar1);
      _objc_release(puVar9);
      puVar2 = (undefined1 *)pppuVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        ppuVar3 = &puStack_e0;
        pcStack_a8 = FUN_106f51770;
        puStack_d0 = puVar1;
        puStack_c8 = puVar9;
        lStack_c0 = lVar7;
        puStack_b8 = (undefined1 *)pppuVar5;
        pppuStack_b0 = &ppuStack_60;
        _objc_retain(uVar6);
        puStack_d8 = PTR_PTR_1126f7ef8;
        puStack_e0 = puVar2;
        _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
        if (ppuVar3 != (undefined1 **)0x0) {
          _objc_retain(uVar6);
          uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
          *(undefined8 *)((long)ppuVar3 + 0x10) = uVar6;
          _objc_release(uVar4);
          *(undefined8 *)((long)ppuVar3 + 8) = uVar8;
        }
        _objc_release(uVar6);
        return (undefined1 *)ppuVar3;
      }
      return puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106f515c0; end: 106f5162f; -[SCSpectaclesRectificationConfigMuxer outputDataKeys] */

undefined1 * FUN_106f515c0(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar5 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f5b8;
  lVar7 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_28 = FUN_106f51630;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_30 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar5);
  _objc_retain(lVar7);
  puVar9 = (undefined1 *)pppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c067fc0();
  _objc_release(puVar9);
  if (puVar2 < (undefined1 *)0x3) {
    puVar9 = (undefined1 *)pppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = (undefined1 *)0x0;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e8f5b8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  uVar8 = 0;
  (**(code **)(lVar7 + 0x10))(lVar7,puVar1);
  _objc_release(lVar7);
  _objc_release(puVar1);
  _objc_release(puVar9);
  puVar2 = (undefined1 *)pppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_b0;
  pcStack_78 = FUN_106f51770;
  puStack_a0 = puVar1;
  puStack_98 = puVar9;
  lStack_90 = lVar7;
  puStack_88 = (undefined1 *)pppuVar5;
  ppuStack_80 = &puStack_30;
  _objc_retain(uVar6);
  puStack_a8 = PTR_PTR_1126f7ef8;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined1 **)0x0) {
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined8 *)((long)ppuVar3 + 0x10) = uVar6;
    _objc_release(uVar4);
    *(undefined8 *)((long)ppuVar3 + 8) = uVar8;
  }
  _objc_release(uVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 106f51630; end: 106f5176f; -[SCSpectaclesRectificationConfigMuxer runWithInputData:completion:] */

undefined1 * FUN_106f51630(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c067fc0();
  _objc_release(puVar7);
  if (puVar1 < (undefined1 *)0x3) {
    puVar7 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e8f5b8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  uVar6 = 0;
  (**(code **)(param_4 + 0x10))(param_4,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_90;
  pcStack_58 = FUN_106f51770;
  puStack_80 = puVar2;
  puStack_78 = puVar7;
  lStack_70 = param_4;
  puStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  puStack_88 = PTR_PTR_1126f7ef8;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined1 **)0x0) {
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined8 *)((long)ppuVar3 + 0x10) = uVar5;
    _objc_release(uVar4);
    *(undefined8 *)((long)ppuVar3 + 8) = uVar6;
  }
  _objc_release(uVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 106f51770; end: 106f517f3; -[SCSpectaclesRectificationConfigPackager initWithSnap:camera:] */

undefined1 *
FUN_106f51770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7ef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f517f4; end: 106f517ff; -[SCSpectaclesRectificationConfigPackager inputDataKeys] */

undefined * FUN_106f517f4(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f51800; end: 106f5183f; -[SCSpectaclesRectificationConfigPackager _outputLutKey] */

void FUN_106f51800(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(ulong *)(param_1 + 8) < 3) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_1109850e8)[*(ulong *)(param_1 + 8)];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f51840; end: 106f518cb; -[SCSpectaclesRectificationConfigPackager outputDataKeys] */

void FUN_106f51840(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be6e980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar3);
  func_0x00010be6e980();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3570;
  func_0x00010bfe0c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2,0,0);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f518cc; end: 106f519c3; -[SCSpectaclesRectificationConfigPackager runWithInputData:completion:] */

void FUN_106f518cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010be6e980();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3570;
  func_0x00010bfe0c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,puVar2,0,0);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f519c4; end: 106f519cf; -[SCSpectaclesRectificationConfigPackager .cxx_destruct] */

void FUN_106f519c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f519d0; end: 106f51a73; -[SCSpectaclesSkyClassifierFetcher initWithSimpleContentFetcher:temporaryFileWriter:] */

undefined1 *
FUN_106f519d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7f00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f51a74; end: 106f51a7f; -[SCSpectaclesSkyClassifierFetcher inputDataKeys] */

undefined * FUN_106f51a74(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f51a80; end: 106f51aef; -[SCSpectaclesSkyClassifierFetcher outputDataKeys] */

void FUN_106f51a80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  long lStack_78;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar7 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f3f8;
  uVar11 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar7);
  _objc_retain(uVar11);
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b17d8;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010c248460();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003a80();
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1c5440(puVar3);
  _objc_initWeak(auStack_88,puVar1);
  uVar6 = *(undefined8 *)(puVar1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_88;
  _objc_copyWeak(auStack_90);
  _objc_retain(uVar11);
  func_0x00010c13e600(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(puVar10);
  puVar8 = puVar10;
  func_0x00010bfcaaa0();
  puVar9 = (undefined1 *)((long)pppuVar7 + 0x28);
  _objc_loadWeakRetained(puVar9);
  if (puVar8 == (undefined1 *)0x0) {
    func_0x00010be27580();
  }
  else {
    func_0x00010be27660();
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106f51af0; end: 106f51cff; -[SCSpectaclesSkyClassifierFetcher runWithInputData:completion:] */

void FUN_106f51af0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c248460();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003a80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1c5440(puVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_68;
  _objc_copyWeak(auStack_70);
  _objc_retain(param_4);
  func_0x00010c13e600(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar7);
  puVar6 = puVar7;
  func_0x00010bfcaaa0();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  if (puVar6 == (undefined1 *)0x0) {
    func_0x00010be27580();
  }
  else {
    func_0x00010be27660();
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f51d00; end: 106f51d6b;  */

void FUN_106f51d00(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be27580();
  }
  else {
    func_0x00010be27660();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f51d6c; end: 106f51fe3; -[SCSpectaclesSkyClassifierFetcher _handleContentAvailableWithResult:completion:] */

void FUN_106f51d6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bfcc500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = 0;
  uVar3 = uVar2;
  func_0x00010c2bda80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_90;
  _objc_retain(lStack_90);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar4 == 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e8f3f8;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_80 = uVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x0;
  }
  else {
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uStack_70 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e8f378;
    lStack_60 = lVar4;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = (undefined *)0x0;
  }
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106f51fe4;
  puStack_b0 = &UNK_11084a9e8;
  puStack_a8 = puVar5;
  puStack_a0 = puVar6;
  uStack_98 = param_4;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_c8);
  _objc_release(puStack_a0);
  _objc_release(puStack_a8);
  _objc_release(uStack_98);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_3 + 0x30);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f51ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x10))
              (lVar4,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28),0);
    return;
  }
  return;
}



/* Entry: 106f51fe4; end: 106f52003;  */

void FUN_106f51fe4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f51ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0);
    return;
  }
  return;
}



/* Entry: 106f52004; end: 106f5214f; -[SCSpectaclesSkyClassifierFetcher _handleContentErrorWithResult:completion:] */

void FUN_106f52004(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long in_x3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e8f398;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106f52150;
  puStack_60 = &UNK_11084aaa8;
  puStack_58 = puVar2;
  lStack_50 = in_x3;
  _objc_retain(puVar2);
  _objc_retain(in_x3);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(puStack_58);
  _objc_release(lStack_50);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(in_x3 + 0x28);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f5216c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,0,*(undefined8 *)(in_x3 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 106f52150; end: 106f52173;  */

void FUN_106f52150(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f5216c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 106f52174; end: 106f521a3; -[SCSpectaclesSkyClassifierFetcher .cxx_destruct] */

void FUN_106f52174(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


