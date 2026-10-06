/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f521a4; end: 106f5237f; -[SCSpectaclesAuxiliaryMetadataGraphFactory initWithCacheDirectory:encryptedContentManager:cloudFS:networker:simpleContentFetcher:temporaryFileWriter:performer:] */

undefined1 *
FUN_106f521a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f7f08;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d3578;
    _objc_alloc();
    func_0x00010c034c00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d3580;
    _objc_alloc();
    func_0x00010c034960();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f52380; end: 106f52437; -[SCSpectaclesAuxiliaryMetadataGraphFactory graphForId:builder:] */

void FUN_106f52380(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0dff20(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar1 = param_4;
    (**(code **)(param_4 + 0x10))(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18),param_2,lVar1,param_3);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f52438; end: 106f52497; -[SCSpectaclesAuxiliaryMetadataGraphFactory createGlobalGraph] */

void FUN_106f52438(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106f52498;
  puStack_20 = &UNK_110985118;
  uStack_18 = param_1;
  func_0x00010bfcdd20(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f3d8,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f52498; end: 106f525bf;  */

void FUN_106f52498(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000106f538bc();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d3588;
  _objc_alloc();
  func_0x00010c0468c0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_48 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126d3590;
  _objc_alloc();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  uStack_50 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  ppuVar9 = &PTR____CFConstantStringClassReference_110e8f3d8;
  func_0x00010c034ca0();
  _objc_release(puVar4);
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_58 = FUN_106f525c0;
    puStack_80 = puVar4;
    puStack_78 = puVar3;
    puStack_70 = puVar5;
    puStack_68 = puVar2;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(uVar8);
    _objc_retain(ppuVar9);
    uVar7 = uVar8;
    func_0x00010c0c5180(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106f526a4;
    puStack_a0 = &UNK_110985148;
    uStack_98 = uVar8;
    ppuStack_90 = ppuVar9;
    puStack_88 = puVar6;
    _objc_retain(ppuVar9);
    _objc_retain(uVar8);
    func_0x00010bfcdd20(puVar6,param_2,uVar7,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuStack_90);
    _objc_release(uStack_98);
    _objc_release(ppuVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar5 = puVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f525c0; end: 106f526a3; -[SCSpectaclesAuxiliaryMetadataGraphFactory createAssetGraphForSnap:media:] */

void FUN_106f525c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f526a4;
  puStack_50 = &UNK_110985148;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfcdd20(param_1,param_2,uVar1,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f526a4; end: 106f5280b;  */

void FUN_106f526a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3598;
  _objc_alloc();
  func_0x00010c046fc0();
  puVar2 = PTR_PTR_1126d3590;
  _objc_alloc();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000106f53904();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  puVar7 = puVar2;
  uVar8 = uVar3;
  func_0x00010c034ca0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_78 = FUN_106f5280c;
    puStack_a0 = puVar2;
    uStack_98 = uVar3;
    puStack_90 = puVar7;
    puStack_88 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(uVar9);
    _objc_retain(uVar8);
    uVar4 = uVar9;
    func_0x000109023b84(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106f528f0;
    puStack_c0 = &UNK_110985148;
    uStack_b8 = uVar8;
    puStack_b0 = puVar5;
    uStack_a8 = uVar9;
    _objc_retain(uVar9);
    _objc_retain(uVar8);
    func_0x00010bfcdd20(puVar5,param_2,uVar4,&puStack_d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_a8);
    _objc_release(uStack_b8);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    puVar7 = puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f5280c; end: 106f528ef; -[SCSpectaclesAuxiliaryMetadataGraphFactory createDeviceGraphForSnap:assetMetadataGraph:] */

void FUN_106f5280c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000109023b84(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f528f0;
  puStack_50 = &UNK_110985148;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfcdd20(param_1,param_2,uVar1,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f528f0; end: 106f52be3;  */

void FUN_106f528f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d35a0;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017e20(puVar1,param_2,uVar10,puVar11);
  puStack_d8 = puVar1;
  _objc_release();
  func_0x000106f53904();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  puStack_a8 = puVar11;
  FUN_106f5394c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_a0 = puVar1;
  FUN_106f53974();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_98 = puVar2;
  func_0x000106f53a9c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_90 = puVar3;
  func_0x000106f53ae4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  puStack_88 = puVar4;
  func_0x000106f53b2c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  puStack_80 = puVar5;
  func_0x000106f53b74();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar11);
  puVar1 = PTR_PTR_1126d35a8;
  _objc_alloc_init();
  puVar11 = PTR_PTR_1126d35b0;
  puStack_c8 = puVar1;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d35b8;
  puStack_c0 = puVar11;
  _objc_alloc();
  func_0x00010c003d20();
  puVar3 = PTR_PTR_1126d35b8;
  puStack_b8 = puVar2;
  _objc_alloc();
  func_0x00010c003d20();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c8,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar1);
  puVar11 = PTR_PTR_1126d3590;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x000109023b84();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_d8;
  puStack_d0 = puStack_d8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  uVar9 = uVar10;
  func_0x00010c034ca0();
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puStack_100 = puVar1;
    pcStack_e8 = FUN_106f52be4;
    puStack_110 = puVar4;
    puStack_108 = puVar7;
    puStack_f8 = puVar11;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(lVar12);
    _objc_retain(uVar9);
    lVar8 = lVar12;
    func_0x00010b5fa088();
    if (lVar8 == 10) {
      lVar8 = lVar12;
      func_0x00010c0c5180(lVar12);
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_106f52ce0;
      puStack_130 = &UNK_110985148;
      _objc_retain(uVar9);
      uStack_128 = uVar9;
      puStack_120 = puVar2;
      _objc_retain(lVar12);
      lStack_118 = lVar12;
      func_0x00010bfcdd20(puVar2,param_2,lVar8,&puStack_148);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lStack_118);
      _objc_release(uStack_128);
      _objc_release(lVar8);
      puVar11 = puVar2;
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    _objc_release(uVar9);
    _objc_release(lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106f52be4; end: 106f52cdf; -[SCSpectaclesAuxiliaryMetadataGraphFactory createGraphForSnap:asset:] */

void FUN_106f52be4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b5fa088();
  if (lVar1 == 10) {
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f52ce0;
    puStack_50 = &UNK_110985148;
    _objc_retain(param_4);
    uStack_48 = param_4;
    uStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfcdd20(param_1,param_2,lVar1,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(uStack_48);
    _objc_release(lVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f52ce0; end: 106f52d47;  */

void FUN_106f52ce0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d3538;
    func_0x00010bf0b9a0(PTR_PTR_1126d3538);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdee420(uVar1,param_2,*(undefined8 *)(param_1 + 0x30),puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f52d48; end: 106f52e43; -[SCSpectaclesAuxiliaryMetadataGraphFactory createGraphForSnap:imageData:] */

void FUN_106f52d48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b5fa088();
  if (lVar1 == 9) {
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f52e44;
    puStack_50 = &UNK_110985148;
    _objc_retain(param_4);
    uStack_48 = param_4;
    uStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfcdd20(param_1,param_2,lVar1,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(uStack_48);
    _objc_release(lVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f52e44; end: 106f52eab;  */

void FUN_106f52e44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d3538;
    func_0x00010bfe7360(PTR_PTR_1126d3538);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdee420(uVar1,param_2,*(undefined8 *)(param_1 + 0x30),puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f52eac; end: 106f53837; -[SCSpectaclesAuxiliaryMetadataGraphFactory _createGraphForSnap:media:] */

void FUN_106f52eac(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uStack_278;
  undefined8 uStack_270;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf564c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf54a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55d00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d35a0;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017e20();
  puVar5 = PTR_PTR_1126d35a0;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017e20();
  puVar7 = PTR_PTR_1126d35a0;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017e20();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release();
  func_0x000106f538bc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x000106f53904();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_106f5394c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_106f539bc();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  FUN_106f539e4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  FUN_106f53a54();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x000106f53a9c();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000106f53ae4();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x000106f53b2c();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x000106f53b74();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  FUN_106f53a2c();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x000106f53bbc();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x000106f53c04();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x000106f53c4c();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126d35c0;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126d35c8;
  _objc_alloc_init();
  puVar5 = PTR_PTR_1126d35d0;
  _objc_alloc_init();
  puVar6 = PTR_PTR_1126d35d8;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126d35e0;
  _objc_alloc();
  func_0x00010c046e00();
  puVar8 = PTR_PTR_1126d35e0;
  _objc_alloc();
  func_0x00010c046e00();
  puVar10 = PTR_PTR_1126d35e8;
  _objc_alloc_init();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar19 = param_3;
  func_0x00010b5fa088();
  if ((uVar19 < 0xd) && ((1L << (uVar19 & 0x3f) & 0x1566U) != 0)) {
    func_0x000106f53c94();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar19;
    func_0x000106f53cdc();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x000106f53d24();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x000106f53d6c();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x000106f53db4();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar27;
    func_0x000106f53dfc();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x000106f53ed4();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    FUN_106f53f1c();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x000106f53f44();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar19);
    puVar3 = PTR_PTR_1126d35f0;
    _objc_alloc();
    func_0x00010c046f20();
    puVar4 = PTR_PTR_1126d35f8;
    _objc_alloc();
    func_0x00010c047020();
    puVar5 = PTR_PTR_1126d3600;
    _objc_alloc();
    func_0x00010c0341c0();
    puVar6 = PTR_PTR_1126d3600;
    _objc_alloc();
    func_0x00010c0341c0();
    puVar7 = PTR_PTR_1126d3608;
    _objc_alloc();
    func_0x00010c0341a0();
    puVar8 = PTR_PTR_1126d3608;
    _objc_alloc();
    func_0x00010c0341a0();
    uStack_278 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    func_0x000106f53e44();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar19;
    func_0x000106f53e8c();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x000106f53ed4();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    FUN_106f53f1c();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x000106f53f44();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar19);
    puVar3 = PTR_PTR_1126d3610;
    _objc_alloc();
    func_0x00010c028ec0();
    puVar4 = PTR_PTR_1126d3618;
    _objc_alloc();
    func_0x00010c0341a0();
    puVar5 = PTR_PTR_1126d3618;
    _objc_alloc();
    func_0x00010c0341a0();
    uStack_278 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d3590;
  _objc_alloc();
  uVar19 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar18;
  func_0x00010bf09f80(puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar11;
  func_0x00010bf09f80(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034ca0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar19);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(puVar11);
  _objc_release(puVar18);
  _objc_release(puVar9);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106f53838; end: 106f5394b; -[SCSpectaclesAuxiliaryMetadataGraphFactory .cxx_destruct] */

void FUN_106f53838(long param_1)

{
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



/* Entry: 106f5394c; end: 106f53973;  */

void FUN_106f5394c(void)

{
  _objc_alloc(PTR_PTR_1126d3628);
  func_0x00010c020a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f53974; end: 106f539bb;  */

void FUN_106f53974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3630;
  _objc_alloc(PTR_PTR_1126d3630);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c020ac0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f458,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f539bc; end: 106f539e3;  */

void FUN_106f539bc(void)

{
  _objc_alloc(PTR_PTR_1126d3628);
  func_0x00010c020a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f539e4; end: 106f53a2b;  */

void FUN_106f539e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3620;
  _objc_alloc(PTR_PTR_1126d3620);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c020ac0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f4b8,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f53a2c; end: 106f53a53;  */

void FUN_106f53a2c(void)

{
  _objc_alloc(PTR_PTR_1126d3628);
  func_0x00010c020a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f53a54; end: 106f53f1b;  */

void FUN_106f53a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3630;
  _objc_alloc(PTR_PTR_1126d3630);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c020ac0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f4d8,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f53f1c; end: 106f53f6b;  */

void FUN_106f53f1c(void)

{
  _objc_alloc(PTR_PTR_1126d3648);
  func_0x00010c020a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f53f6c; end: 106f5406f; -[LCVImage pngData] */

void FUN_106f53f6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar1 = param_1;
  _CGColorSpaceCreateDeviceGray();
  uVar2 = param_1;
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _CGDataProviderCreateWithCFData();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2a5040(param_1);
  lVar6 = (long)(int)uVar2;
  uVar2 = param_1;
  func_0x00010bfe0640(param_1);
  func_0x00010c2536e0(param_1);
  _CGImageCreate(lVar6,(long)(int)uVar2,0x10,0x10,(long)(int)param_1,uVar1,0x1000,uVar3,0,0,0);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(lVar6);
  _CGDataProviderRelease(uVar3);
  _CGColorSpaceRelease(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f54070; end: 106f5416f; -[SCSpectaclesAuxiliaryContentLoader initWithDataObjectContext:encryptedContentManager:networker:] */

undefined1 *
FUN_106f54070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7f10;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f54170; end: 106f541c7; -[SCSpectaclesAuxiliaryContentLoader invalidate] */

void FUN_106f54170(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106f541c8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 106f541c8; end: 106f541cf;  */

void FUN_106f541c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be098b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endCurrentSession_11255ffc8);
  return;
}



/* Entry: 106f541d0; end: 106f5437f; -[SCSpectaclesAuxiliaryContentLoader loadSnapId:depthFileHandler:depthPart:progress:completion:] */

void FUN_106f541d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f54380; end: 106f5483f;  */

void FUN_106f54380(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
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
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af4d0;
  if (lVar1 == 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    puVar3 = PTR_PTR_1126d3650;
    func_0x00010bf2f680(PTR_PTR_1126d3650);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar3);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (puVar3 == (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x38);
      puVar4 = PTR_PTR_1126d3650;
      func_0x00010c108f20(PTR_PTR_1126d3650);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar4);
    }
    else {
      func_0x00010be098a0(lVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = uVar5;
      _objc_release();
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_106f54840;
      uStack_80 = 0x106f54850;
      puStack_78 = (undefined *)0x0;
      uStack_d0 = 0;
      uStack_c0 = 0x3032000000;
      pcStack_b8 = FUN_106f54840;
      uStack_b0 = 0x106f54850;
      uStack_a8 = 0;
      puStack_f8 = &uStack_100;
      uStack_100 = 0;
      uStack_f0 = 0x3032000000;
      pcStack_e8 = FUN_106f54840;
      uStack_e0 = 0x106f54850;
      uStack_d8 = 0;
      puStack_118 = &uStack_120;
      uStack_120 = 0;
      uStack_110 = 0x2020000000;
      uStack_108 = 0;
      puStack_148 = &uStack_150;
      uStack_150 = 0;
      uStack_140 = 0x3032000000;
      pcStack_138 = FUN_106f54840;
      uStack_130 = 0x106f54850;
      uStack_128 = 0;
      puStack_c8 = &uStack_d0;
      puStack_98 = &uStack_a0;
      _dispatch_group_create();
      _dispatch_group_enter();
      uVar7 = *(undefined8 *)(lVar1 + 0x10);
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_106f54858;
      puStack_170 = &UNK_110985248;
      puStack_160 = &uStack_a0;
      puStack_158 = &uStack_d0;
      _objc_retain(uVar2);
      uStack_168 = uVar2;
      func_0x00010c135a80(uVar7);
      _objc_release(uVar5);
      _dispatch_group_enter(uVar2);
      puStack_1c0 = puVar4;
      uStack_1b8 = 0xc2000000;
      uStack_1b0 = 0x106f548e8;
      puStack_1a8 = &UNK_110985278;
      _objc_copyWeak(auStack_190,param_1 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uStack_1a0 = uVar5;
      _objc_retain(uVar7);
      puStack_200 = puVar4;
      uStack_1f8 = 0xc2000000;
      pcStack_1f0 = FUN_106f54960;
      puStack_1e8 = &UNK_1109852a8;
      puStack_1d8 = &uStack_100;
      puStack_1d0 = &uStack_120;
      puStack_1c8 = &uStack_150;
      uStack_198 = uVar7;
      _objc_retain(uVar2);
      uStack_1e0 = uVar2;
      func_0x00010be4d0e0(lVar1);
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_278 = puVar4;
      uStack_270 = 0xc2000000;
      pcStack_268 = FUN_106f54a08;
      puStack_260 = &UNK_1109852d8;
      _objc_copyWeak(auStack_210,param_1 + 0x48);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar7);
      puStack_238 = &uStack_100;
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      uStack_240 = uVar7;
      _objc_retain(uVar8);
      uStack_208 = *(undefined8 *)(param_1 + 0x50);
      puStack_230 = &uStack_a0;
      puStack_228 = &uStack_d0;
      puStack_220 = &uStack_120;
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      uStack_258 = uVar8;
      _objc_retain(uVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uStack_250 = uVar9;
      _objc_retain(uVar7);
      puStack_218 = &uStack_150;
      uStack_248 = uVar7;
      func_0x000100bc0718(uVar2,uVar5,&puStack_278);
      _objc_release(uVar5);
      _objc_release(uStack_248);
      _objc_release(uStack_250);
      _objc_release(uStack_258);
      _objc_release(uStack_240);
      _objc_destroyWeak(auStack_210);
      _objc_release(uStack_1e0);
      _objc_release(uStack_198);
      _objc_release(uStack_1a0);
      _objc_destroyWeak(auStack_190);
      _objc_release(uStack_168);
      _objc_release(uVar2);
      __Block_object_dispose(&uStack_150,8);
      _objc_release(uStack_128);
      __Block_object_dispose(&uStack_120,8);
      __Block_object_dispose(&uStack_100,8);
      _objc_release(uStack_d8);
      __Block_object_dispose(&uStack_d0,8);
      _objc_release(uStack_a8);
      __Block_object_dispose(&uStack_a0,8);
      puVar4 = puStack_78;
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 106f54840; end: 106f54857;  */

void FUN_106f54840(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f54858; end: 106f5495f;  */

void FUN_106f54858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f54960; end: 106f54a07;  */

void FUN_106f54960(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_3;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f54a08; end: 106f54b47;  */

void FUN_106f54a08(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126d3650;
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    func_0x00010bf2f680(PTR_PTR_1126d3650);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
  }
  else {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0) {
      func_0x00010beeb9c0(lVar2);
      goto LAB_106f54b34;
    }
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) == '\x01') {
      lVar4 = *(long *)(param_1 + 0x38);
      func_0x00010bf9ef80(PTR_PTR_1126d3650);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010c0720c0();
      lVar4 = *(long *)(param_1 + 0x38);
      puVar3 = PTR_PTR_1126d3650;
      if (iVar1 == 0) {
        func_0x00010bf2f680(PTR_PTR_1126d3650);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c108f20();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
  }
  _objc_release(puVar3);
LAB_106f54b34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106f54b48; end: 106f54c63;  */

void FUN_106f54b48(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 106f54c64; end: 106f54d3b; -[SCSpectaclesAuxiliaryContentLoader cancelLoadSnapId:] */

void FUN_106f54c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f54d3c; end: 106f54d83;  */

void FUN_106f54d3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(lVar1 + 0x28));
    if ((int)uVar2 != 0) {
      func_0x00010be098a0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f54d84; end: 106f54dbb; -[SCSpectaclesAuxiliaryContentLoader _endCurrentSession] */

void FUN_106f54d84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f54dbc; end: 106f54f43; -[SCSpectaclesAuxiliaryContentLoader _loadDepthForSnapId:depthPart:progress:completion:] */

void FUN_106f54dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(puVar1);
  uStack_60 = param_4;
  _objc_retain(param_5);
  func_0x00010be4df40(param_1);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106f54f44; end: 106f55217;  */

void FUN_106f54f44(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
LAB_106f54fd0:
    lVar8 = *(long *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    pcVar7 = *(code **)(lVar3 + 0x10);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0720c0();
    puVar4 = PTR_PTR_1126b4960;
    if ((uVar2 & 1) == 0) goto LAB_106f54fd0;
    if (param_5 == 0) {
      if ((param_3 == 0) || ((param_4 == 0 && (*(long *)(param_1 + 0x48) == 1)))) {
        lVar8 = *(long *)(param_1 + 0x30);
        puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))(lVar8,0,param_2,puVar10);
      }
      else {
        lVar8 = param_3;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar8 = param_4;
        }
        lVar3 = lVar8;
        _objc_retain(lVar8);
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf58760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        uVar5 = *(undefined8 *)(lVar1 + 0x30);
        *(undefined **)(lVar1 + 0x30) = puVar4;
        _objc_release(uVar5);
        _objc_release(lVar3);
        func_0x00010c0d0c40(*(undefined8 *)(lVar1 + 0x30));
        puVar4 = PTR_PTR_1126b7f68;
        func_0x00010c22b6a0(PTR_PTR_1126b7f68);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(lVar1 + 0x20);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
        func_0x00010c11de00(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = *(undefined **)(param_1 + 0x30);
        _objc_retain(puVar10);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar9);
        func_0x00010c25f660(puVar4);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(puVar4);
        _objc_release(uVar9);
      }
      _objc_release(puVar10);
      goto LAB_106f54fe4;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    pcVar7 = *(code **)(lVar3 + 0x10);
    lVar8 = param_5;
  }
  (*pcVar7)(lVar3,0,0,lVar8);
LAB_106f54fe4:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f55218; end: 106f55243;  */

void FUN_106f55218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000106f5522c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4,0,0);
  return;
}



/* Entry: 106f55244; end: 106f55573; -[SCSpectaclesAuxiliaryContentLoader _loadMetadataURLForSnapId:completion:] */

void FUN_106f55244(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010c0c7520();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d2c48;
    _objc_alloc();
    func_0x00010c010420();
    puStack_90 = puVar4;
  }
  else {
    puVar4 = puVar2;
    func_0x00010c0c7520();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar4;
  }
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_98 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010801e908();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_initWeak(auStack_a0,param_1);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  ppuVar9 = &PTR____CFConstantStringClassReference_110e87d78;
  func_0x00010c25f400(uVar11);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(ppuVar9);
  lVar6 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    puVar4 = PTR_PTR_1126d2c50;
    _objc_alloc(PTR_PTR_1126d2c50);
    func_0x00010c0206e0();
    puVar2 = puVar4;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar3 = puVar5;
    func_0x00010c2490e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar7 = puVar5;
    func_0x00010c2496c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010be41f00(lVar6);
    lVar10 = *(long *)(param_3 + 0x28);
    lVar8 = lVar6;
    func_0x00010be41f00(lVar6);
    (**(code **)(lVar10 + 0x10))(lVar10,lVar8,puVar2,puVar3,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 106f55574; end: 106f556db;  */

void FUN_106f55574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d2c50;
    _objc_alloc(PTR_PTR_1126d2c50);
    func_0x00010c0206e0();
    puVar3 = puVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar5 = puVar4;
    func_0x00010c2490e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar6 = puVar4;
    func_0x00010c2496c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010be41f00(lVar1);
    lVar8 = *(long *)(param_1 + 0x28);
    lVar7 = lVar1;
    func_0x00010be41f00(lVar1);
    (**(code **)(lVar8 + 0x10))(lVar8,lVar7,puVar3,puVar5,0);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f556dc; end: 106f556f7;  */

void FUN_106f556dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106f556f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,param_3);
  return;
}



/* Entry: 106f556f8; end: 106f5582f; -[SCSpectaclesAuxiliaryContentLoader _isMetadataPreparedForSnap:] */

undefined1 * FUN_106f556f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x21;
  ulong unaff_x22;
  long lVar5;
  long lVar6;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  ppuVar3 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  puStack_120 = (undefined *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_d8;
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    unaff_x21 = lVar6;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(ulong *)(lStack_118 + lVar6 * 8);
        func_0x00010bf0ddc0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = unaff_x22;
        ppuVar3 = &PTR____CFConstantStringClassReference_110e8f198;
        func_0x00010c0720c0();
        _objc_release(unaff_x22);
        if ((uVar1 & 1) != 0) {
          puVar4 = (undefined1 *)0x1;
          goto LAB_106f557ec;
        }
        lVar6 = lVar6 + 1;
      } while (unaff_x21 != lVar6);
      puVar2 = auStack_d8;
      unaff_x21 = param_3;
      ppuVar3 = &puStack_120;
      func_0x00010bf52a60(param_3,param_2,&puStack_120,puVar2,0x10);
    } while (unaff_x21 != 0);
  }
  puVar4 = (undefined1 *)0x0;
LAB_106f557ec:
  lVar6 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106f55830;
  uStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  puStack_140 = puVar4;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_106f558c4;
  puStack_160 = &UNK_110984ed0;
  puStack_158 = puVar2;
  _objc_retain(puVar2);
  func_0x00010be4df40(lVar6,param_2,ppuVar3,&puStack_178);
  _objc_release(puStack_158);
  _objc_release(puVar2);
  return puVar2;
}



/* Entry: 106f55830; end: 106f558c3; -[SCSpectaclesAuxiliaryContentLoader loadPrimaryDepthAvailabilityForSnapId:completion:] */

void FUN_106f55830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106f558c4;
  puStack_40 = &UNK_110984ed0;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010be4df40(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106f558c4; end: 106f5596f;  */

void FUN_106f558c4(long param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    if (param_3 == 0) {
      if (param_2 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 3;
    }
    lVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    lVar3 = param_5;
  }
  (*pcVar4)(lVar1,uVar2,lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f55970; end: 106f55f73; -[SCSpectaclesAuxiliaryContentLoader _writeDownloadedDepthData:depthFileHandler:depthPart:withKey:IV:completion:] */

/* WARNING: Removing unreachable block (ram,0x000106f55b20) */

void FUN_106f55970(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_4;
  func_0x00010bf57680();
  _objc_retain(0);
  if ((uVar2 & 1) == 0) {
    puVar7 = PTR_PTR_1126d3650;
    func_0x00010c108f20();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_8 + 0x10))(param_8,puVar7);
    goto LAB_106f55f00;
  }
  puVar7 = param_3;
  func_0x00010c156c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0eec80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b9fb0;
  _objc_alloc();
  func_0x00010c008480();
  _objc_retain();
  uVar2 = uVar3;
  if (param_5 == 1) {
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  if (puVar4 == (undefined *)0x0) {
LAB_106f55b90:
    puVar5 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    func_0x00010c008480();
    _objc_retain(0);
    if (puVar5 != (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c27f220();
      _objc_retain(0);
      _objc_release(0);
      _objc_release(puVar6);
      if ((int)puVar13 != 0) {
        _objc_release(0);
      }
    }
    _objc_release(puVar5);
    _objc_release(0);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c27f220();
    _objc_retain(0);
    _objc_release(0);
    _objc_release(puVar5);
    if (((ulong)puVar6 & 1) == 0) goto LAB_106f55b90;
  }
  if (param_5 == 1) {
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf4dfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(puVar5);
    _objc_retain(puVar6);
    puVar5 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar14 = *(undefined8 *)((long)puVar13 * 8);
        uVar3 = uVar2;
        func_0x00010c25ce00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_4;
        func_0x00010c0eec80(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0899c0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c25ce00(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        _objc_release(uVar9);
        _objc_release(uVar8);
        puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d1560();
        _objc_retain(0);
        _objc_release(0);
        _objc_release(puVar11);
        _objc_release(uVar10);
        _objc_release(uVar3);
        puVar13 = puVar13 + 1;
      } while (puVar5 != puVar13);
      puVar5 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    _objc_retain(0);
    _objc_release(0);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(0);
  }
  puVar5 = PTR_PTR_1126d3650;
  func_0x00010bf6dd20(PTR_PTR_1126d3650);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_8 + 0x10))(param_8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(uVar2);
LAB_106f55f00:
  _objc_release(puVar7);
  _objc_release(0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x30,0);
    _objc_storeStrong(param_3 + 0x28,0);
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
  return;
}



/* Entry: 106f55f74; end: 106f55fd3; -[SCSpectaclesAuxiliaryContentLoader .cxx_destruct] */

void FUN_106f55f74(long param_1)

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



/* Entry: 106f55fd4; end: 106f56a87; +[SCPbSpectaclesDepthMetadata depthMetadataFromDepthFrameData:] */

undefined1 *
FUN_106f55fd4(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  float fVar13;
  double dVar14;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined1 *puStack_530;
  undefined *puStack_528;
  undefined1 *puStack_520;
  code *pcStack_518;
  undefined *puStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [768];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc_init();
  puVar1 = param_2;
  func_0x00010c2709e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f900(param_4);
  func_0x00010befc800(puVar1);
  _objc_release(puVar1);
  puVar8 = PTR_PTR_1126d3658;
  _objc_alloc_init();
  func_0x00010c26f900(param_4);
  func_0x00010c215dc0(puVar8);
  puVar2 = param_4;
  func_0x00010bf99900(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141420();
  func_0x00010c1ee5c0(puVar8);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf99900(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fc7c0();
  func_0x00010c1dbe20(puVar8);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf99900(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beda0();
  func_0x00010c227880(puVar8);
  _objc_release(puVar2);
  puVar1 = param_2;
  func_0x00010bf0dda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_508 = puVar8;
  func_0x00010befa120();
  _objc_release(puVar1);
  puVar2 = param_4;
  func_0x00010c140760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5040();
  puVar1 = param_2;
  func_0x00010c140780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c140760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  puVar1 = param_2;
  func_0x00010c140780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c140760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3520();
  puVar1 = param_2;
  func_0x00010c140780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e020(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c140760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113980();
  puVar1 = param_2;
  func_0x00010c140780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3300(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c140760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1139a0();
  puVar1 = param_2;
  func_0x00010c140780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3320(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  puVar2 = param_4;
  func_0x00010c140760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *plStack_3b0;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_3b0 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(undefined8 *)(lStack_3b8 + (long)puVar12 * 8);
        puVar1 = param_2;
        func_0x00010c140780(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c08e5c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80(uVar9);
        func_0x00010befc800(puVar4);
        _objc_release(puVar4);
        _objc_release(puVar1);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  uVar9 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  puVar2 = param_4;
  func_0x00010c140760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1409e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *plStack_3f0;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_3f0 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar10 = *(undefined8 *)(lStack_3f8 + (long)puVar12 * 8);
        puVar1 = param_2;
        func_0x00010c140780(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c140a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80(uVar10);
        func_0x00010befc800(puVar4);
        _objc_release(puVar4);
        _objc_release(puVar1);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar2 = param_4;
  func_0x00010bf6dc00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5040();
  puVar1 = param_2;
  func_0x00010bf6dc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf6dc00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  puVar1 = param_2;
  func_0x00010bf6dc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf6dc00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3520();
  puVar1 = param_2;
  func_0x00010bf6dc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e020(uVar9);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf6dc00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113980();
  puVar1 = param_2;
  func_0x00010bf6dc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3300(uVar9);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf6dc00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1139a0();
  puVar1 = param_2;
  func_0x00010bf6dc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3320(uVar9);
  _objc_release(puVar1);
  _objc_release(puVar2);
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  puVar2 = param_4;
  func_0x00010bf6dc00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *plStack_430;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_430 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(undefined8 *)(lStack_438 + (long)puVar12 * 8);
        puVar1 = param_2;
        func_0x00010bf6dc20(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c08e5c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80(uVar9);
        func_0x00010befc800(puVar4);
        _objc_release(puVar4);
        _objc_release(puVar1);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  plStack_470 = (long *)0x0;
  puVar2 = param_4;
  func_0x00010bf6dc00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1409e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *plStack_470;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_470 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(undefined8 *)(lStack_478 + (long)puVar12 * 8);
        puVar1 = param_2;
        func_0x00010bf6dc20(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c140a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80(uVar9);
        func_0x00010befc800(puVar4);
        _objc_release(puVar4);
        _objc_release(puVar1);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126d3660;
  _objc_alloc_init();
  func_0x00010c26f900(param_4);
  func_0x00010c215dc0(puVar2);
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  puVar3 = param_4;
  func_0x00010beffa40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    lVar11 = *plStack_4b0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_4b0 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(undefined8 *)(lStack_4b8 + (long)puVar8 * 8);
        puVar5 = puVar2;
        func_0x00010beffa60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80(uVar9);
        func_0x00010befc800(puVar5);
        _objc_release(puVar5);
        puVar8 = puVar8 + 1;
      } while (puVar12 != puVar8);
      puVar12 = puVar3;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar1 = param_2;
  func_0x00010beffaa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126d3668;
  _objc_alloc_init();
  func_0x00010c1b2ce0();
  dVar14 = 0.0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  lStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  plStack_4f0 = (long *)0x0;
  puVar12 = param_4;
  func_0x00010bfeac60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = auStack_380;
  uVar9 = 0x10;
  puVar5 = puVar12;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar11 = *plStack_4f0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        fVar13 = SUB84(dVar14,0);
        if (*plStack_4f0 != lVar11) {
          _objc_enumerationMutation(puVar12);
        }
        uVar9 = *(undefined8 *)(lStack_4f8 + (long)puVar8 * 8);
        puVar6 = puVar3;
        func_0x00010bfeac80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80(uVar9);
        dVar14 = (double)fVar13;
        func_0x00010befc800(dVar14,puVar6);
        _objc_release(puVar6);
        puVar8 = puVar8 + 1;
      } while (puVar5 != puVar8);
      puVar1 = auStack_380;
      uVar9 = 0x10;
      puVar5 = puVar12;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar12);
  puVar4 = param_2;
  func_0x00010bfeaca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  puVar12 = PTR_PTR_1126d3670;
  _objc_alloc_init();
  func_0x00010c26f900(param_4);
  func_0x00010c215dc0(puVar12);
  puVar5 = param_4;
  func_0x00010bf6de00();
  if ((puVar5 == (undefined *)0x0) || (puVar5 == (undefined *)0x1)) {
    func_0x00010c1e6280(puVar12);
  }
  puVar4 = param_2;
  func_0x00010bf6de20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar12;
  func_0x00010befa120();
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_508);
  puVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_560;
    pcStack_518 = FUN_106f56a88;
    puStack_550 = puVar12;
    puStack_548 = puVar3;
    puStack_540 = puVar2;
    puStack_538 = puVar8;
    puStack_530 = param_2;
    puStack_528 = param_4;
    puStack_520 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_retain(puVar1);
    _objc_retain(uVar9);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puStack_558 = PTR_PTR_1126f7f18;
    puStack_560 = puVar5;
    _objc_msgSendSuper2(&puStack_560,PTR_s_init_1125d9248);
    if (ppuVar7 != (undefined **)0x0) {
      _objc_retain(puVar6);
      uVar10 = *(undefined8 *)((long)ppuVar7 + 0x10);
      *(undefined **)((long)ppuVar7 + 0x10) = puVar6;
      _objc_release(uVar10);
      _objc_retain(puVar1);
      uVar10 = *(undefined8 *)((long)ppuVar7 + 0x18);
      *(undefined1 **)((long)ppuVar7 + 0x18) = puVar1;
      _objc_release(uVar10);
      puVar8 = PTR_PTR_1126ae790;
      _objc_alloc();
      func_0x00010c021520();
      uVar10 = *(undefined8 *)((long)ppuVar7 + 8);
      *(undefined **)((long)ppuVar7 + 8) = puVar8;
      _objc_release(uVar10);
      puVar8 = PTR_PTR_1126d3678;
      _objc_alloc();
      func_0x00010c008880();
      uVar10 = *(undefined8 *)((long)ppuVar7 + 0x20);
      *(undefined **)((long)ppuVar7 + 0x20) = puVar8;
      _objc_release(uVar10);
    }
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(uVar9);
    _objc_release(puVar1);
    _objc_release(puVar6);
    return (undefined1 *)ppuVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return param_2;
}



/* Entry: 106f56a88; end: 106f56bcf; -[SCSpectaclesLabsCVAuxiliaryContentProvider initWithSimpleContentFetcher:temporaryFileWriter:dataObjectContext:encryptedContentManager:networker:] */

undefined1 *
FUN_106f56a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f7f18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3678;
    _objc_alloc();
    func_0x00010c008880();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f56bd0; end: 106f56bd7; -[SCSpectaclesLabsCVAuxiliaryContentProvider invalidate] */

void FUN_106f56bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 106f56bd8; end: 106f56e07; -[SCSpectaclesLabsCVAuxiliaryContentProvider requestSkyClassifierWithCompletion:] */

void FUN_106f56bd8(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined **unaff_x23;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c23e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b08b0;
    func_0x00010bf33760();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b17d8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b19f8;
    func_0x00010c248460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003a80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c1c5440(puVar3);
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106f56e08;
    puStack_70 = &UNK_1108af6f0;
    unaff_x23 = &puStack_88;
    param_2 = auStack_58;
    _objc_copyWeak(auStack_60);
    _objc_retain(param_3);
    lStack_68 = param_3;
    func_0x00010c13e600(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else if (param_3 != 0) {
    param_2 = (undefined1 *)0x1;
    (**(code **)(param_3 + 0x10))(param_3,1,0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar7 = param_2;
  func_0x00010bfcaaa0();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  if (puVar7 == (undefined1 *)0x0) {
    func_0x00010be30580();
  }
  else {
    func_0x00010be30560();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f56e08; end: 106f56e73;  */

void FUN_106f56e08(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be30580();
  }
  else {
    func_0x00010be30560();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f56e74; end: 106f57103; -[SCSpectaclesLabsCVAuxiliaryContentProvider _handleSkyClassifierWithResult:completion:] */

void FUN_106f56e74(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = param_3;
  func_0x00010bfcc500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = 0;
  uVar5 = uVar2;
  func_0x00010c2bda80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_90;
  _objc_retain(lStack_90);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar4 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uStack_80 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e8f378;
    lStack_70 = lVar4;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_initWeak(auStack_98,param_1);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106f57104;
  puStack_c8 = &UNK_110866a30;
  _objc_copyWeak(auStack_a8,auStack_98);
  _objc_retain(uVar5);
  uStack_c0 = uVar5;
  _objc_retain(param_4);
  uStack_b0 = param_4;
  uStack_a0 = lVar4 == 0;
  _objc_retain(puVar7);
  puStack_b8 = puVar7;
  func_0x000100162d98("APPSTORE",&puStack_e0);
  _objc_release(puStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar4 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar2);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar5);
    lVar6 = *(long *)(param_3 + 0x30);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))
                (lVar6,*(undefined1 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106f57104; end: 106f5716b;  */

void FUN_106f57104(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar4;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))
                (lVar3,*(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f5716c; end: 106f572b7; -[SCSpectaclesLabsCVAuxiliaryContentProvider _handleSkyClassifierErrorWithResult:completion:] */

void FUN_106f5716c(void)

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
  pcStack_68 = FUN_106f572b8;
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
                    /* WARNING: Could not recover jumptable at 0x000106f572d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,0,*(undefined8 *)(in_x3 + 0x20));
    return;
  }
  return;
}



/* Entry: 106f572b8; end: 106f572d7;  */

void FUN_106f572b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f572d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 106f572d8; end: 106f572ff; -[SCSpectaclesLabsCVAuxiliaryContentProvider skyClassifierPath] */

void FUN_106f572d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f57300; end: 106f573cf; -[SCSpectaclesLabsCVAuxiliaryContentProvider extractLookupTableFromCalibrationFile:forContentOfType:completion:] */

void FUN_106f57300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c1366c0(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106f573d0;
  puStack_68 = &UNK_110845188;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106f573d0; end: 106f576af;  */

void FUN_106f573d0(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  float fVar13;
  double dVar14;
  
  puVar1 = PTR_PTR_1126d3558;
  _objc_alloc();
  func_0x00010c0114c0();
  puVar2 = PTR_PTR_1126d3560;
  _objc_alloc_init(PTR_PTR_1126d3560);
  puVar3 = puVar1;
  func_0x00010bf9ec20();
  _objc_retain(0);
  if (((ulong)puVar3 & 1) == 0) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0,0,0);
  }
  else {
    puVar3 = PTR_PTR_1126d3568;
    _objc_alloc();
    func_0x00010bfe41c0(puVar2);
    dVar14 = (double)param_1;
    puVar4 = puVar2;
    func_0x00010c08e860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08e3c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf51e00();
    puVar8 = puVar2;
    func_0x00010c08e860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2a5040();
    puVar10 = puVar2;
    func_0x00010c08e860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfe0640();
    func_0x00010bffaf60(dVar14,(double)(int)puVar9,(double)(int)puVar11);
    fVar13 = SUB84(dVar14,0);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126d3568;
    _objc_alloc(PTR_PTR_1126d3568);
    func_0x00010bfe41c0(puVar2);
    puVar5 = puVar2;
    func_0x00010c140ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c140860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf51e00();
    puVar9 = puVar2;
    func_0x00010c140ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2a5040();
    puVar11 = puVar2;
    func_0x00010c140ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfe0640();
    func_0x00010bffaf60((double)fVar13,(double)(int)puVar10,(double)(int)puVar12,puVar4);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0,puVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106f576b0; end: 106f576b7; -[SCSpectaclesLabsCVAuxiliaryContentProvider loadPrimaryDepthAvailabilityForSnapId:completion:] */

void FUN_106f576b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadPrimaryDepthAvailabilityForS_1126049e0);
  return;
}



/* Entry: 106f576b8; end: 106f576bf; -[SCSpectaclesLabsCVAuxiliaryContentProvider downloadDepthForSnapId:depthFileHandler:depthPart:progress:completion:] */

void FUN_106f576b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadSnapId_depthFileHandler_dept_112604a80);
  return;
}



/* Entry: 106f576c0; end: 106f576c7; -[SCSpectaclesLabsCVAuxiliaryContentProvider cancelDepthDownloadForSnapId:] */

void FUN_106f576c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelLoadSnapId__1125a9340);
  return;
}



/* Entry: 106f576c8; end: 106f576cb; -[SCSpectaclesLabsCVAuxiliaryContentProvider _showMessage:] */

void FUN_106f576c8(void)

{
  return;
}



/* Entry: 106f576cc; end: 106f576e3; +[SCSpectaclesLabsCVAuxiliaryContentProvider _lcvCameraFromStereoCamera:] */

undefined8 FUN_106f576cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 != 1) {
    uVar1 = 2;
  }
  if (param_3 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106f576e4; end: 106f57af7; -[SCSpectaclesLabsCVAuxiliaryContentProvider extractDepthFromContentFile:primaryCamera:calibrationFile:imuFile:extractBothSides:depthFileHandler:completion:] */

void FUN_106f576e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined1 param_7,undefined8 param_8,long param_9
                  )

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_9;
  _objc_retain();
  if (param_6 == 0) {
    func_0x00010beb9da0(param_1);
    puVar4 = PTR_PTR_1126d3650;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9ef80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,puVar4);
    _objc_release(puVar4);
  }
  else {
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106f57af8;
    uStack_88 = 0x106f57b08;
    puStack_80 = (undefined *)0x0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x2020000000;
    uStack_b0 = 0;
    puStack_a0 = &uStack_a8;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106f57b10;
    puStack_e8 = &UNK_11084fa08;
    puStack_d0 = &uStack_a8;
    _objc_retain(param_6);
    lStack_e0 = param_6;
    _objc_retain(lVar1);
    lStack_d8 = lVar1;
    func_0x00010007380c(uVar2,&puStack_100);
    _objc_release(uVar2);
    _dispatch_group_enter(lVar1);
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar4;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_106f57b60;
    puStack_120 = &UNK_11084fa08;
    puStack_108 = &uStack_c8;
    _objc_retain(param_8);
    uStack_118 = param_8;
    _objc_retain(lVar1);
    lStack_110 = lVar1;
    func_0x00010007380c(uVar2,&puStack_138);
    _objc_release(uVar2);
    uStack_158 = 0;
    uStack_148 = 0x2020000000;
    uStack_140 = 0;
    puStack_150 = &uStack_158;
    _dispatch_group_enter(lVar1);
    puStack_188 = puVar4;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_106f57bc8;
    puStack_170 = &UNK_110943a18;
    puStack_160 = &uStack_158;
    _objc_retain(lVar1);
    lStack_168 = lVar1;
    func_0x00010c1366c0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = puVar4;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_106f57bdc;
    puStack_1e0 = &UNK_1109853b8;
    puStack_1b0 = &uStack_a8;
    puStack_1a8 = &uStack_c8;
    puStack_1a0 = &uStack_158;
    lStack_1d8 = param_1;
    _objc_retain(param_9);
    lStack_1b8 = param_9;
    _objc_retain(param_5);
    uStack_1d0 = param_5;
    _objc_retain(param_3);
    uStack_1c8 = param_3;
    uStack_198 = param_4;
    _objc_retain(param_8);
    uStack_1c0 = param_8;
    uStack_190 = param_7;
    func_0x000100bc0718(lVar1,uVar2,&puStack_1f8);
    _objc_release(uVar2);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1d0);
    _objc_release(lStack_1b8);
    _objc_release(lStack_168);
    __Block_object_dispose(&uStack_158,8);
    _objc_release(lStack_110);
    _objc_release(uStack_118);
    _objc_release(lStack_d8);
    _objc_release(lStack_e0);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_a8,8);
    puVar3 = puStack_80;
  }
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106f57af8; end: 106f57b0f;  */

void FUN_106f57af8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f57b10; end: 106f57b5f;  */

void FUN_106f57b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d3680;
  func_0x00010be37e60(PTR_PTR_1126d3680,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f57b60; end: 106f57bc7;  */

void FUN_106f57b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = 0;
  func_0x00010bf57680(uVar2,param_2,&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  return;
}



/* Entry: 106f57bc8; end: 106f57bdb;  */

void FUN_106f57bc8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f57bdc; end: 106f57e47;  */

/* WARNING: Removing unreachable block (ram,0x000106f57d58) */

void FUN_106f57bdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) == '\x01')) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) & 1) != 0)) {
    lVar3 = param_1;
    _objc_autoreleasePoolPush();
    puVar2 = PTR_PTR_1126d3558;
    _objc_alloc(PTR_PTR_1126d3558);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23e740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0114e0(puVar2);
    _objc_release(uVar4);
    func_0x00010c1ab520(puVar2);
    _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be49ce0();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    func_0x00010bf9eca0(puVar2);
    _objc_retain(0);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_autoreleasePoolPop(lVar3);
    lVar3 = *(long *)(param_1 + 0x40);
    puVar2 = PTR_PTR_1126d3650;
    func_0x00010bf6dd20(PTR_PTR_1126d3650);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
    _objc_release(0);
    return;
  }
  func_0x00010beb9da0(*(undefined8 *)(param_1 + 0x20),param_2,
                      &PTR____CFConstantStringClassReference_110e8f7b8);
  puVar2 = PTR_PTR_1126d3650;
  lVar3 = *(long *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c108f20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f57e48; end: 106f57e5f;  */

void FUN_106f57e48(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beebb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__writePictureFrameData_primaryCa_112598880,
             param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f57e60; end: 106f57edb;  */

void FUN_106f57e60(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 106f57edc; end: 106f5803f; -[SCSpectaclesLabsCVAuxiliaryContentProvider _writePictureFrameData:primaryCamera:depthFileHandler:] */

void FUN_106f57edc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d3548;
  func_0x00010bf6dda0(PTR_PTR_1126d3548,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c112d00();
  lVar1 = 1;
  if (lVar3 == 1) {
    lVar1 = 2;
  }
  if (lVar1 == param_4) {
    puVar4 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    func_0x00010c2bdba0(param_5,param_2,puVar4,&uStack_48);
    _objc_release(puVar4);
  }
  lVar3 = param_3;
  func_0x00010bf6dba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c102980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda60(param_5,param_2,lVar5,lVar1,0,0);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf85080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c102980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda60(param_5,param_2,lVar5,lVar1,1,0);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106f58040; end: 106f58467; +[SCSpectaclesLabsCVAuxiliaryContentProvider _imuDataRawWithContentsOfFile:] */

void FUN_106f58040(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_6 == (undefined8 *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lStack_188 = 0;
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64aa0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = lStack_188;
    _objc_retain(lStack_188);
    if (puVar1 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126d2f60;
      _objc_alloc();
      func_0x00010c02f940();
      puVar9 = PTR_PTR_1126d3688;
      _objc_alloc_init();
      lStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      plStack_1c0 = (long *)0x0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      puVar3 = puVar2;
      func_0x00010bfeae00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar12 = *plStack_1c0;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_1c0 != lVar12) {
              _objc_enumerationMutation(puVar3);
            }
            lVar10 = *(long *)(lStack_1c8 + (long)puVar8 * 8);
            puVar5 = PTR_PTR_1126d3690;
            _objc_alloc_init();
            lVar6 = lVar10;
            func_0x00010c2709c0(lVar10);
            dVar13 = (double)lVar6 / 1000.0;
            func_0x00010c215dc0(dVar13,puVar5);
            func_0x00010c141cc0(lVar10);
            puVar7 = puVar5;
            func_0x00010c141cc0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c227500((float)dVar13);
            _objc_release(puVar7);
            func_0x00010c141cc0(lVar10);
            fVar15 = (float)param_2;
            puVar7 = puVar5;
            func_0x00010c141cc0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2276e0(fVar15);
            _objc_release(puVar7);
            func_0x00010c141cc0(lVar10);
            dVar13 = (double)(ulong)(uint)(float)param_3;
            puVar7 = puVar5;
            func_0x00010c141cc0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c227900(dVar13);
            _objc_release(puVar7);
            func_0x00010beec920(lVar10);
            puVar7 = puVar5;
            func_0x00010beec920(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c227500((float)dVar13);
            _objc_release(puVar7);
            func_0x00010beec920(lVar10);
            fVar15 = (float)param_2;
            puVar7 = puVar5;
            func_0x00010beec920();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2276e0(fVar15);
            _objc_release(puVar7);
            func_0x00010beec920(lVar10);
            fVar15 = (float)param_3;
            puVar7 = puVar5;
            func_0x00010beec920(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c227900(fVar15);
            _objc_release(puVar7);
            puVar7 = puVar9;
            func_0x00010bfeace0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar8 = puVar8 + 1;
          } while (puVar4 != puVar8);
          puVar4 = puVar3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      param_1 = 0.0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      lStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      puVar3 = puVar2;
      func_0x00010c270a40();
      _objc_retainAutoreleasedReturnValue();
      param_6 = &uStack_210;
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar12 = *plStack_200;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_200 != lVar12) {
              _objc_enumerationMutation(puVar3);
            }
            lVar10 = *(long *)(lStack_208 + (long)puVar8 * 8);
            puVar5 = PTR_PTR_1126d3698;
            _objc_alloc_init();
            lVar6 = lVar10;
            func_0x00010c24fb20(lVar10);
            func_0x00010c215f20((double)lVar6 / 1000.0,puVar5);
            func_0x00010bf94e80(lVar10);
            param_1 = (double)lVar10 / 1000.0;
            func_0x00010c215de0(param_1,puVar5);
            puVar7 = puVar9;
            func_0x00010c299c20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar8 = puVar8 + 1;
          } while (puVar4 != puVar8);
          param_6 = &uStack_210;
          puVar4 = puVar3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_6);
    puVar1 = PTR_PTR_1126d36a0;
    _objc_alloc();
    func_0x00010c0529e0(0);
    _objc_opt_class();
    func_0x00010be37e60();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR_PTR_1126d36a8;
      _objc_alloc_init();
      puVar3 = PTR_PTR_1126d36b0;
      func_0x00010bf9eee0(param_1,param_2,0x4055400000000000,param_3);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if ((int)puVar3 == 0) {
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = puVar2;
        func_0x00010c24d0a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf0a0e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar14 = 0;
        puVar4 = puVar2;
        func_0x00010c24d0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        while (puVar3 != (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(puVar4);
            }
            uVar11 = *(undefined8 *)((long)puVar8 * 8);
            puVar5 = PTR_PTR_1126d36a0;
            _objc_alloc(PTR_PTR_1126d36a0);
            func_0x00010c2709c0(uVar11);
            func_0x00010c24d080(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0529e0(uVar14,puVar5);
            _objc_release(uVar11);
            func_0x00010befa120(puVar9);
            _objc_release(puVar5);
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
          puVar3 = puVar4;
          func_0x00010bf52a60();
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar2);
    }
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(param_6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      _objc_storeStrong(param_6 + 5,0);
      _objc_storeStrong(param_6 + 4,0);
      _objc_storeStrong(param_6 + 3,0);
      _objc_storeStrong(param_6 + 2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_6 + 1,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106f58468; end: 106f5872f; -[SCSpectaclesLabsCVAuxiliaryContentProvider stabilizationFramesFromIMUFile:contentSize:focalLength:] */

void FUN_106f58468(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126d36a0;
  _objc_alloc();
  func_0x00010c0529e0(0);
  _objc_opt_class();
  func_0x00010be37e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126d36a8;
    _objc_alloc_init();
    puVar4 = PTR_PTR_1126d36b0;
    func_0x00010bf9eee0(param_1,param_2,0x4055400000000000,param_3);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if ((int)puVar4 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = puVar3;
      func_0x00010c24d0a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar11 = 0;
      puVar5 = puVar3;
      func_0x00010c24d0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar5);
          }
          uVar10 = *(undefined8 *)((long)puVar9 * 8);
          puVar6 = PTR_PTR_1126d36a0;
          _objc_alloc(PTR_PTR_1126d36a0);
          func_0x00010c2709c0(uVar10);
          func_0x00010c24d080(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0529e0(uVar11,puVar6);
          _objc_release(uVar10);
          func_0x00010befa120(puVar7);
          _objc_release(puVar6);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_6 + 0x28,0);
  _objc_storeStrong(param_6 + 0x20,0);
  _objc_storeStrong(param_6 + 0x18,0);
  _objc_storeStrong(param_6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_6 + 8,0);
  return;
}



/* Entry: 106f58730; end: 106f58783; -[SCSpectaclesLabsCVAuxiliaryContentProvider .cxx_destruct] */

void FUN_106f58730(long param_1)

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



/* Entry: 106f58784; end: 106f58833; -[SCSpectaclesAuxiliaryContentDeviceEntry initWithCoder:] */

undefined1 * FUN_106f58784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7f20;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f58834; end: 106f58893; -[SCSpectaclesAuxiliaryContentDeviceEntry encodeWithCoder:] */

void FUN_106f58834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e190d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e8f7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f58894; end: 106f5889b; -[SCSpectaclesAuxiliaryContentDeviceEntry serialNumber] */

undefined8 FUN_106f58894(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f5889c; end: 106f588a3; -[SCSpectaclesAuxiliaryContentDeviceEntry setSerialNumber:] */

void FUN_106f5889c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f588a4; end: 106f588ab; -[SCSpectaclesAuxiliaryContentDeviceEntry calibrationPath] */

undefined8 FUN_106f588a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f588ac; end: 106f588b3; -[SCSpectaclesAuxiliaryContentDeviceEntry setCalibrationPath:] */

void FUN_106f588ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f588b4; end: 106f588e3; -[SCSpectaclesAuxiliaryContentDeviceEntry .cxx_destruct] */

void FUN_106f588b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f588e4; end: 106f58a87; -[SCSpectaclesAuxiliaryContentMediaEntry initWithCoder:] */

undefined1 * FUN_106f588e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    uVar4 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar4;
    uVar4 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar4;
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 0x40) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87080();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
      *(undefined **)((long)puVar1 + 0x40) = puVar2;
      _objc_release(uVar4);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f58a88; end: 106f58b73; -[SCSpectaclesAuxiliaryContentMediaEntry encodeWithCoder:] */

void FUN_106f58a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbb378);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e8f7f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e8a398);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e8f818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110e8f838);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110e8f858);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e8f878);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e8f898);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e8f8b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f58b74; end: 106f58baf; -[SCSpectaclesAuxiliaryContentMediaEntry isValid] */

bool FUN_106f58b74(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c112d00();
  if (lVar2 == 0) {
    func_0x00010bfb2960(param_1);
    bVar1 = param_1 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106f58bb0; end: 106f58bb7; -[SCSpectaclesAuxiliaryContentMediaEntry mediaId] */

undefined8 FUN_106f58bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f58bb8; end: 106f58bbf; -[SCSpectaclesAuxiliaryContentMediaEntry setMediaId:] */

void FUN_106f58bb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f58bc0; end: 106f58bc7; -[SCSpectaclesAuxiliaryContentMediaEntry primaryCamera] */

undefined8 FUN_106f58bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f58bc8; end: 106f58bcf; -[SCSpectaclesAuxiliaryContentMediaEntry setPrimaryCamera:] */

void FUN_106f58bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106f58bd0; end: 106f58bd7; -[SCSpectaclesAuxiliaryContentMediaEntry flightMode] */

undefined8 FUN_106f58bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f58bd8; end: 106f58bdf; -[SCSpectaclesAuxiliaryContentMediaEntry setFlightMode:] */

void FUN_106f58bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106f58be0; end: 106f58be7; -[SCSpectaclesAuxiliaryContentMediaEntry depthPath] */

undefined8 FUN_106f58be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f58be8; end: 106f58bef; -[SCSpectaclesAuxiliaryContentMediaEntry setDepthPath:] */

void FUN_106f58be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f58bf0; end: 106f58bf7; -[SCSpectaclesAuxiliaryContentMediaEntry secondaryDepthDownloaded] */

undefined1 FUN_106f58bf0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106f58bf8; end: 106f58bff; -[SCSpectaclesAuxiliaryContentMediaEntry setSecondaryDepthDownloaded:] */

void FUN_106f58bf8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106f58c00; end: 106f58c07; -[SCSpectaclesAuxiliaryContentMediaEntry depthExtractionFailed] */

undefined1 FUN_106f58c00(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106f58c08; end: 106f58c0f; -[SCSpectaclesAuxiliaryContentMediaEntry setDepthExtractionFailed:] */

void FUN_106f58c08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106f58c10; end: 106f58c17; -[SCSpectaclesAuxiliaryContentMediaEntry imuPath] */

undefined8 FUN_106f58c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f58c18; end: 106f58c1f; -[SCSpectaclesAuxiliaryContentMediaEntry setImuPath:] */

void FUN_106f58c18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f58c20; end: 106f58c27; -[SCSpectaclesAuxiliaryContentMediaEntry metadataPath] */

undefined8 FUN_106f58c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


