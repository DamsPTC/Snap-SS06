/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c9bf68; end: 106c9bf6f; -[SCSelectionSectionDataProvider subscription] */

undefined8 FUN_106c9bf68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106c9bf70; end: 106c9bf77; -[SCSelectionSectionDataProvider containerCellViewModels] */

undefined8 FUN_106c9bf70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106c9bf78; end: 106c9bf7f; -[SCSelectionSectionDataProvider setContainerCellViewModels:] */

void FUN_106c9bf78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106c9bf80; end: 106c9bf87; -[SCSelectionSectionDataProvider dataLoadingStatus] */

undefined8 FUN_106c9bf80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106c9bf88; end: 106c9bf8f; -[SCSelectionSectionDataProvider setDataLoadingStatus:] */

void FUN_106c9bf88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 106c9bf90; end: 106c9c033; -[SCSelectionSectionDataProvider .cxx_destruct] */

void FUN_106c9bf90(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106c9c034; end: 106c9c11b;  */

void FUN_106c9c034(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  FUN_106c9d504(uVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  uVar4 = param_2;
  func_0x00010bf34020(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bffd260(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c9c11c; end: 106c9c127; -[SCSelectionSectionDefaultDescriptor initWithTitle:subtitle:sendToExperimentConfiguration:] */

void FUN_106c9c11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0537b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTitle_subtitle_sectionEx_1125f27f0,param_3,param_4,0,param_5);
  return;
}



/* Entry: 106c9c128; end: 106c9c223; -[SCSelectionSectionDefaultDescriptor initWithTitle:subtitle:sectionExpansionModel:sendToExperimentConfiguration:] */

undefined1 *
FUN_106c9c128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f6138;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
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



/* Entry: 106c9c224; end: 106c9c32f; -[SCSelectionSectionDefaultDescriptor sectionDescriptorForIdentifier:query:] */

void FUN_106c9c224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  FUN_106c9d38c(lVar1,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    lVar5 = lVar1;
    func_0x000106c9c838();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar5);
  }
  uVar2 = param_4;
  func_0x00010c11da20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_106c9c378(param_3,uVar2,lVar1,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c9c330; end: 106c9c377; -[SCSelectionSectionDefaultDescriptor .cxx_destruct] */

void FUN_106c9c330(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c9c378; end: 106c9c553;  */

void FUN_106c9c378(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x4010000000;
  pcStack_88 = "";
  uStack_78 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uStack_80 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uStack_68 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar3 = param_3;
  func_0x00010c06ef40();
  puVar2 = puStack_98;
  if ((uVar3 & 1) == 0) {
    puVar1 = puStack_98 + 4;
    puStack_98[5] = 0;
    *puVar1 = 0x3ff0000000000000;
    puVar2[7] = 0;
    puVar2[6] = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0x3ff0000000000000;
  }
  else {
    puVar1 = puStack_98 + 4;
    puStack_98[5] = 0;
    *puVar1 = 0xbff0000000000000;
    puVar2[7] = 0;
    puVar2[6] = 0x4018000000000000;
    uVar3 = param_3;
    func_0x00010beed3c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bc600();
    _objc_release(uVar3);
    uVar8 = puStack_98[4];
    uVar7 = puStack_98[5];
    uVar5 = puStack_98[6];
    uVar6 = puStack_98[7];
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(param_3);
  uVar4 = param_1;
  FUN_106c9c554(uVar8,uVar7,uVar5,uVar6,param_1,param_2,param_3,param_4,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c9c554; end: 106c9c6bf;  */

void FUN_106c9c554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b5240;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c043240();
  _objc_release(param_7);
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar2);
  _objc_release(param_8);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c9c6c0; end: 106c9c7e3;  */

void FUN_106c9c6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b5240;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c043240();
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b4890;
  _objc_alloc(PTR_PTR_1126b4890);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0x4020000000000000,0x402c000000000000,0x4030000000000000,0x4014000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0435a0(0x4008000000000000,0,puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c9c7e4; end: 106c9c807;  */

void FUN_106c9c7e4(void)

{
  return;
}



/* Entry: 106c9c808; end: 106c9c867;  */

void FUN_106c9c808(void)

{
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c9c868; end: 106c9c86f; -[SCSelectionSectionDefaultIndexer indexingItemForSectionIdentifier:] */

undefined8 FUN_106c9c868(void)

{
  return 0;
}



/* Entry: 106c9c870; end: 106c9ca23;  */

undefined1 * FUN_106c9c870(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        ppuStack_138 = *(undefined ***)(lStack_128 + lVar12 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uStack_140 = param_2;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  ppuStack_138 = &PTR____CFConstantStringClassReference_110dbf518;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_140 = param_2;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010befa120(puVar1);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_180;
  pcStack_148 = FUN_106c9ca24;
  puStack_170 = puVar3;
  puStack_168 = puVar1;
  uStack_160 = param_2;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  puStack_178 = PTR_PTR_1126f6140;
  lStack_180 = lVar2;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    puVar1 = puVar6;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)plVar4 + 8);
    *(undefined **)((long)plVar4 + 8) = puVar1;
    _objc_release(uVar9);
    puVar5 = puVar7;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)plVar4 + 0x10);
    *(undefined1 **)((long)plVar4 + 0x10) = puVar5;
    _objc_release(uVar9);
    uVar9 = uVar8;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)plVar4 + 0x18);
    *(undefined8 *)((long)plVar4 + 0x18) = uVar9;
    _objc_release(uVar10);
  }
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return (undefined1 *)plVar4;
}



/* Entry: 106c9ca24; end: 106c9cafb; -[SCSelectionSectionDataModel initWithSectionIdentifier:query:sectionHeaderViewModel:] */

undefined1 *
FUN_106c9ca24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f6140;
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



/* Entry: 106c9cafc; end: 106c9cb1f; -[SCSelectionSectionDataModel copyWithZone:] */

undefined8 FUN_106c9cafc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c9cb20; end: 106c9cb9f; -[SCSelectionSectionDataModel hash] */

undefined8 * FUN_106c9cb20(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c9cc38:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c9cc44;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106c9cc44;
          }
          goto LAB_106c9cc38;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c9cc44:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c9cba0; end: 106c9cc5f; -[SCSelectionSectionDataModel isEqual:] */

long FUN_106c9cba0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c9cc38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c9cc44;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106c9cc44;
          }
          goto LAB_106c9cc38;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c9cc44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c9cc60; end: 106c9cc67; -[SCSelectionSectionDataModel sectionIdentifier] */

undefined8 FUN_106c9cc60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c9cc68; end: 106c9cc6f; -[SCSelectionSectionDataModel query] */

undefined8 FUN_106c9cc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c9cc70; end: 106c9cc77; -[SCSelectionSectionDataModel sectionHeaderViewModel] */

undefined8 FUN_106c9cc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c9cc78; end: 106c9ccb3; -[SCSelectionSectionDataModel .cxx_destruct] */

void FUN_106c9cc78(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c9ccb4; end: 106c9cd27; -[SCGrapheneSelectionSectionMetric2 init] */

undefined1 * FUN_106c9ccb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c9cd28; end: 106c9cf13;  */

void FUN_106c9cd28(long param_1,undefined8 *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
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
  puVar5 = param_2;
  _objc_retain(param_3);
  uVar4 = SUB81(puVar5,0);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f3cc40a;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f3cc40f;
    }
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc415;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11096e968;
    param_2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096e968,&uStack_98,param_4);
    puStack_80 = param_2;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    puVar5 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      uVar4 = SUB81(puVar1,0);
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  puVar1 = param_3;
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
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_106c9cf14;
  puStack_d0 = param_2;
  puStack_c8 = puVar5;
  puStack_c0 = puVar1;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c15a7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc0000000;
  pcStack_e8 = FUN_106c9d02c;
  puStack_e0 = &UNK_1108ec870;
  puVar1 = puVar2;
  uStack_d8 = uVar4;
  func_0x000100504554(puVar2,&puStack_f8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  func_0x00010c043e40();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c9cf14; end: 106c9d02b;  */

void FUN_106c9cf14(ulong param_1,undefined1 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  uVar2 = uVar3;
  func_0x00010c15a7c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_106c9d02c;
  puStack_40 = &UNK_1108ec870;
  uVar3 = uVar2;
  uStack_38 = param_2;
  func_0x000100504554(uVar2,&puStack_58);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  func_0x00010c043e40();
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c9d02c; end: 106c9d0df;  */

void FUN_106c9d02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5650;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c15a7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c247520(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c043e20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c9d0e0; end: 106c9d14b;  */

void FUN_106c9d0e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2680;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c052bc0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c2688;
  func_0x00010bf8ea80(PTR_PTR_1126c2688,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c9d14c; end: 106c9d38b;  */

void FUN_106c9d14c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_4);
  ppuVar5 = (undefined **)0x0;
  if (param_3 < 2) {
    if (param_3 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db73b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db73b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c102040();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c14d100(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      puVar7 = PTR_PTR_1126d1ee0;
      func_0x00010bf25c00(PTR_PTR_1126d1ee0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106c9d264;
    }
    ppuVar6 = (undefined **)0x0;
    puVar7 = (undefined *)0x0;
    if (param_3 != 1) goto LAB_106c9d264;
    ppuVar5 = &PTR____CFConstantStringClassReference_110db73b8;
  }
  else if (param_3 == 2) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e81a38;
  }
  else if (param_3 == 3) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e81a58;
  }
  else {
    ppuVar6 = (undefined **)0x0;
    puVar7 = (undefined *)0x0;
    if (param_3 != 4) goto LAB_106c9d264;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e81a78;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d1ee0;
  func_0x00010bf25c00(PTR_PTR_1126d1ee0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)0x0;
LAB_106c9d264:
  puVar2 = PTR_PTR_1126b55e0;
  _objc_alloc(PTR_PTR_1126b55e0);
  func_0x00010c019300();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c9d38c; end: 106c9d407;  */

void FUN_106c9d38c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b55e0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c019300();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c9d408; end: 106c9d503;  */

void FUN_106c9d408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126d1ee0;
  func_0x00010bf25c00(PTR_PTR_1126d1ee0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b55e0;
  _objc_alloc(PTR_PTR_1126b55e0);
  func_0x00010c019300();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c9d504; end: 106c9d793;  */

void FUN_106c9d504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_PTR_1126b53f0;
  _objc_retain();
  func_0x00010c159140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_106c9cf14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b52c0;
  _objc_alloc();
  func_0x00010bfcf7e0();
  func_0x00010bf9e0a0();
  func_0x00010bf34120();
  uVar2 = param_2;
  func_0x00010bf33820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c08ddc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0cd300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c279320();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bfecc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107020(param_2);
  uVar11 = param_1;
  func_0x00010bf01b40(param_2);
  uVar12 = uVar11;
  func_0x00010c06ef40();
  uVar10 = param_2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229f80();
  func_0x00010bf20580();
  func_0x00010c239300();
  func_0x00010c0b4e80(param_2);
  uVar13 = uVar12;
  func_0x00010bf52600(param_2);
  func_0x00010c271760();
  _objc_release(param_2);
  func_0x00010c0192e0(param_1,uVar11,uVar12,uVar13,puVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c9d794; end: 106c9d807; -[SCShortcutsDataPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_106c9d794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6150;
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



/* Entry: 106c9d808; end: 106c9d80f; -[SCShortcutsDataPluginScope plugInRegistry] */

undefined8 FUN_106c9d808(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c9d810; end: 106c9d81b; -[SCShortcutsDataPluginScope .cxx_destruct] */

void FUN_106c9d810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c9d81c; end: 106c9d88f; -[UNISCSTRSendToRankingService initWithUnifiedGrpcService:] */

undefined1 * FUN_106c9d81c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6158;
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



/* Entry: 106c9d890; end: 106c9d973; -[UNISCSTRSendToRankingService getCandidateFeaturesWithRequest:callOptionsBuilder:handler:] */

void FUN_106c9d890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0c20;
  _objc_opt_class(PTR_PTR_1126c0c20);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e81ab8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c9d974; end: 106c9da57; -[UNISCSTRSendToRankingService getSuggestionsWithRequest:callOptionsBuilder:handler:] */

void FUN_106c9d974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1ee8;
  _objc_opt_class(PTR_PTR_1126d1ee8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e81ad8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c9da58; end: 106c9db3b; -[UNISCSTRSendToRankingService getCandidateFeaturesByContextWithRequest:callOptionsBuilder:handler:] */

void FUN_106c9da58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0c28;
  _objc_opt_class(PTR_PTR_1126c0c28);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e81af8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c9db3c; end: 106c9db47; -[UNISCSTRSendToRankingService .cxx_destruct] */

void FUN_106c9db3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c9db48; end: 106c9db53; +[SCCCreateRemoteFeaturesPersistenceService modulePath] */

undefined ** FUN_106c9db48(void)

{
  return &PTR____CFConstantStringClassReference_110e81b18;
}



/* Entry: 106c9db54; end: 106c9db57; +[SCCCreateRemoteFeaturesPersistenceService asyncStrictMode] */

undefined8 FUN_106c9db54(void)

{
  return 0;
}



/* Entry: 106c9db58; end: 106c9db9b; -[SCCCreateRemoteFeaturesPersistenceService createRemoteFeaturesPersistenceService] */

void FUN_106c9db58(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c9db9c; end: 106c9dc1b; +[SCCCreateRemoteFeaturesPersistenceService invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_106c9db9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000106c9e4b0();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e3ec();
  func_0x000106c9e4c0();
  func_0x000106c9e3fc();
  func_0x000106c9e54c();
  func_0x000106c9e4d4();
  func_0x000106c9e4dc();
  func_0x000106c9e3dc();
  func_0x000106c9e4b8();
  return;
}



/* Entry: 106c9dc1c; end: 106c9dc8b;  */

void FUN_106c9dc1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0c18;
  func_0x00010bfbc0e0(PTR_PTR_1126c0c18,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e4c8(*(undefined8 *)(param_1 + 0x28));
  func_0x000106c9e450();
  func_0x000106c9e3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c9dc8c; end: 106c9dca7; +[SCCCreateRemoteFeaturesPersistenceService valdiMarshallableObjectDescriptor] */

void FUN_106c9dc8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11096ea60;
  param_1[1] = &PTR_DAT_11096ea90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106c9dca8; end: 106c9dcab; +[SCCSendToRankingFeatureValueKeys modulePath] */

undefined ** FUN_106c9dca8(void)

{
  return &PTR____CFConstantStringClassReference_110e81b38;
}



/* Entry: 106c9dcac; end: 106c9dcaf; +[SCCSendToRankingFeatureValueKeys asyncStrictMode] */

undefined8 FUN_106c9dcac(void)

{
  return 0;
}



/* Entry: 106c9dcb0; end: 106c9dcf3; -[SCCSendToRankingFeatureValueKeys featureValueKeys] */

void FUN_106c9dcb0(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c9dcf4; end: 106c9dd73; +[SCCSendToRankingFeatureValueKeys invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_106c9dcf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000106c9e4b0();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e3ec();
  func_0x000106c9e4c0();
  func_0x000106c9e3fc();
  func_0x000106c9e54c();
  func_0x000106c9e4d4();
  func_0x000106c9e4dc();
  func_0x000106c9e3dc();
  func_0x000106c9e4b8();
  return;
}



/* Entry: 106c9dd74; end: 106c9dde3;  */

void FUN_106c9dd74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1ef0;
  func_0x00010bfbc0e0(PTR_PTR_1126d1ef0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e4c8(*(undefined8 *)(param_1 + 0x28));
  func_0x000106c9e450();
  func_0x000106c9e3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c9dde4; end: 106c9ddf7; +[SCCSendToRankingFeatureValueKeys valdiMarshallableObjectDescriptor] */

void FUN_106c9dde4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11096eaa0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106c9ddf8; end: 106c9ddfb; +[SCCSendToRankingRankSubjects modulePath] */

undefined ** FUN_106c9ddf8(void)

{
  return &PTR____CFConstantStringClassReference_110e81b38;
}



/* Entry: 106c9ddfc; end: 106c9ddff; +[SCCSendToRankingRankSubjects asyncStrictMode] */

undefined8 FUN_106c9ddfc(void)

{
  return 0;
}



/* Entry: 106c9de00; end: 106c9de73; -[SCCSendToRankingRankSubjects rankSubjectsWithSubjects:context:] */

void FUN_106c9de00(long param_1)

{
  func_0x000106c9e4b0();
  func_0x000106c9e3fc();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e3dc();
  func_0x000106c9e4b8();
  func_0x000106c9e3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c9de74; end: 106c9dfab; +[SCCSendToRankingRankSubjects invokeWithJSRuntimeProvider:subjects:context:completionHandler:] */

void FUN_106c9de74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000106c9e4b0();
  func_0x000106c9e3fc();
  func_0x000106c9e448();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000106c9e3ec();
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106c9df38;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = lVar1;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  func_0x000106c9e448();
  func_0x000106c9e3fc();
  func_0x000106c9e4c0();
  func_0x000106c9e490();
  func_0x00010bf85140(param_3,param_2,auStack_70);
  func_0x000106c9e544();
  func_0x000106c9e53c();
  func_0x000106c9e4d4();
  func_0x000106c9e4dc();
  func_0x000106c9e3e4();
  func_0x000106c9e4b8();
  func_0x000106c9e3dc();
  func_0x000106c9e450();
  return;
}



/* Entry: 106c9dfac; end: 106c9dfc7; +[SCCSendToRankingRankSubjects valdiMarshallableObjectDescriptor] */

void FUN_106c9dfac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11096ead0;
  param_1[1] = &PTR_DAT_11096eb00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106c9dfc8; end: 106c9dfcb; +[SCCSendToRankingRankSubjectsOptimizedWithCallback modulePath] */

undefined ** FUN_106c9dfc8(void)

{
  return &PTR____CFConstantStringClassReference_110e81b38;
}



/* Entry: 106c9dfcc; end: 106c9dfcf; +[SCCSendToRankingRankSubjectsOptimizedWithCallback asyncStrictMode] */

undefined8 FUN_106c9dfcc(void)

{
  return 0;
}



/* Entry: 106c9dfd0; end: 106c9e01b; -[SCCSendToRankingRankSubjectsOptimizedWithCallback rankSubjectsOptimizedWithCallbackWithSubjectProvider:context:remoteStoreSource:callback:] */

void FUN_106c9dfd0(void)

{
  func_0x000106c9e474();
  func_0x000106c9e448();
  func_0x000106c9e490();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e458();
  func_0x000106c9e3dc();
  func_0x000106c9e3e4();
  func_0x000106c9e450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106c9e01c; end: 106c9e0c7; +[SCCSendToRankingRankSubjectsOptimizedWithCallback invokeWithJSRuntimeProvider:subjectProvider:context:remoteStoreSource:callback:completionHandler:] */

void FUN_106c9e01c(void)

{
  long unaff_x23;
  undefined8 uStack_50;
  
  func_0x000106c9e428();
  func_0x000106c9e3fc();
  func_0x000106c9e448();
  func_0x000106c9e490();
  (**(code **)(unaff_x23 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e3ec();
  func_0x000106c9e404(FUN_106c9e0c8);
  func_0x000106c9e448();
  func_0x000106c9e3fc();
  func_0x000106c9e4c0();
  _objc_retain(unaff_x23);
  func_0x000106c9e558();
  _objc_release(uStack_50);
  func_0x000106c9e544();
  func_0x000106c9e53c();
  func_0x000106c9e4d4();
  func_0x000106c9e4dc();
  func_0x000106c9e450();
  func_0x000106c9e3e4();
  func_0x000106c9e4b8();
  func_0x000106c9e3dc();
  _objc_release(unaff_x23);
  return;
}



/* Entry: 106c9e0c8; end: 106c9e11b;  */

void FUN_106c9e0c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1f00;
  func_0x00010bfbc0e0(PTR_PTR_1126d1f00,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e498();
  func_0x000106c9e524();
  func_0x000106c9e3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c9e11c; end: 106c9e13f; +[SCCSendToRankingRankSubjectsOptimizedWithCallback valdiMarshallableObjectDescriptor] */

void FUN_106c9e11c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11096eb50;
  param_1[1] = &PTR_DAT_11096eb80;
  param_1[2] = &PTR_DAT_11096eb20;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106c9e140; end: 106c9e16f;  */

undefined8 FUN_106c9e140(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],*(undefined4 *)(param_2 + 3),param_2[4]);
  return 0;
}



/* Entry: 106c9e170; end: 106c9e1e3;  */

void FUN_106c9e170(undefined8 param_1)

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
  pcStack_38 = FUN_106c9e384;
  puStack_30 = &UNK_11096ecf0;
  uStack_28 = param_1;
  func_0x000106c9e4c0();
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  func_0x000106c9e4d4();
  func_0x000106c9e3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106c9e1e4; end: 106c9e1e7; +[SCCSendToRankingRankSubjectsWithCallback modulePath] */

undefined ** FUN_106c9e1e4(void)

{
  return &PTR____CFConstantStringClassReference_110e81b38;
}



/* Entry: 106c9e1e8; end: 106c9e1eb; +[SCCSendToRankingRankSubjectsWithCallback asyncStrictMode] */

undefined8 FUN_106c9e1e8(void)

{
  return 0;
}



/* Entry: 106c9e1ec; end: 106c9e237; -[SCCSendToRankingRankSubjectsWithCallback rankSubjectsWithCallbackWithSubjects:context:remoteStoreSource:callback:] */

void FUN_106c9e1ec(void)

{
  func_0x000106c9e474();
  func_0x000106c9e448();
  func_0x000106c9e490();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e458();
  func_0x000106c9e3dc();
  func_0x000106c9e3e4();
  func_0x000106c9e450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106c9e238; end: 106c9e2e3; +[SCCSendToRankingRankSubjectsWithCallback invokeWithJSRuntimeProvider:subjects:context:remoteStoreSource:callback:completionHandler:] */

void FUN_106c9e238(void)

{
  long unaff_x23;
  undefined8 uStack_50;
  
  func_0x000106c9e428();
  func_0x000106c9e3fc();
  func_0x000106c9e448();
  func_0x000106c9e490();
  (**(code **)(unaff_x23 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e3ec();
  func_0x000106c9e404(FUN_106c9e2e4);
  func_0x000106c9e448();
  func_0x000106c9e3fc();
  func_0x000106c9e4c0();
  _objc_retain(unaff_x23);
  func_0x000106c9e558();
  _objc_release(uStack_50);
  func_0x000106c9e544();
  func_0x000106c9e53c();
  func_0x000106c9e4d4();
  func_0x000106c9e4dc();
  func_0x000106c9e450();
  func_0x000106c9e3e4();
  func_0x000106c9e4b8();
  func_0x000106c9e3dc();
  _objc_release(unaff_x23);
  return;
}



/* Entry: 106c9e2e4; end: 106c9e337;  */

void FUN_106c9e2e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1f08;
  func_0x00010bfbc0e0(PTR_PTR_1126d1f08,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c9e498();
  func_0x000106c9e524();
  func_0x000106c9e3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c9e338; end: 106c9e35b; +[SCCSendToRankingRankSubjectsWithCallback valdiMarshallableObjectDescriptor] */

void FUN_106c9e338(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11096ebd8;
  param_1[1] = &PTR_DAT_11096ec08;
  param_1[2] = &PTR_DAT_11096eba8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106c9e35c; end: 106c9e36f; +[SCCSendToRankingRankedRecipientsDataStore valdiMarshallableObjectDescriptor] */

void FUN_106c9e35c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11096ec30;
  param_1[1] = &PTR_s_SCBridgeObservable_11096ec90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106c9e370; end: 106c9e383; +[SCCSendToRankingSendToRankingSubjectProvider valdiMarshallableObjectDescriptor] */

void FUN_106c9e370(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11096ecb0;
  param_1[1] = &PTR_DAT_11096ece0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106c9e384; end: 106c9e3b7;  */

void FUN_106c9e384(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106c9e3b8; end: 106c9e563;  */

void FUN_106c9e3b8(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 2;
  return;
}



/* Entry: 106c9e564; end: 106c9e74b; -[SCContextPostSnapDataCleanUpJobEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9e564(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar2,param_2,puVar3);
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar4 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1c35c0();
  func_0x00010c1edae0(puVar4,param_2,0x3c);
  func_0x00010c1ed860(puVar1,param_2,puVar4);
  puVar5 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar6 = puVar5;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf06200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf06200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  func_0x00010c1b66e0(puVar1,param_2,puVar5);
  func_0x00010c198180(puVar1,param_2,3);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110e81b58);
  func_0x00010c1b6780(puVar1,param_2,0);
  param_1 = param_1 + _DAT_11275bc20;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c9e74c; end: 106c9e783; -[SCContextPostSnapDataCleanUpJobEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9e74c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275bc24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275bc20);
  return;
}



/* Entry: 106c9e784; end: 106c9e79f;  */

void FUN_106c9e784(void)

{
  _objc_opt_new(PTR_PTR_1126d1f18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c9e7a0; end: 106c9ec73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9e7a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126d1f20;
    _objc_alloc(PTR_PTR_1126d1f20);
    lVar2 = lVar1 + _DAT_11275bc2c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = lVar1 + _DAT_11275bc34;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d780(puVar7,param_2,lVar3,uVar6,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c9ec74; end: 106c9ed9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9ec74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126d1f60;
    _objc_alloc(PTR_PTR_1126d1f60);
    lVar2 = lVar1 + _DAT_11275bc2c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = lVar1 + _DAT_11275bc34;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_11275bc38;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c0e1300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d760(puVar9,param_2,lVar3,uVar8,lVar5,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c9ed9c; end: 106c9edf7; -[SCContextPostSnapDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9ed9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275bc38);
  _objc_destroyWeak(param_1 + _DAT_11275bc34);
  _objc_destroyWeak(param_1 + _DAT_11275bc30);
  _objc_destroyWeak(param_1 + _DAT_11275bc2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275bc28);
  return;
}



/* Entry: 106c9edf8; end: 106c9ef87; -[SCContextPostSnapSendingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9edf8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126d1f70;
  _objc_alloc();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11275bc50;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010c293740(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11275bc4c;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010bf50180(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11275bc44;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bf50600(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11275bc48;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010beedde0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d4c0();
  lVar9 = (long)_DAT_11275bc3c;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bf186b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar9),PTR_s_beginObservingDataUpdates_1125a3b50);
  return;
}



/* Entry: 106c9ef88; end: 106c9efdf; -[SCContextPostSnapSendingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9ef88(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf94e40(*(undefined8 *)(param_1 + _DAT_11275bc3c));
  puStack_28 = PTR_PTR_1126f6160;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c9efe0; end: 106c9f04b; -[SCContextPostSnapSendingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c9efe0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275bc50);
  _objc_destroyWeak(param_1 + _DAT_11275bc4c);
  _objc_destroyWeak(param_1 + _DAT_11275bc48);
  _objc_destroyWeak(param_1 + _DAT_11275bc44);
  _objc_destroyWeak(param_1 + _DAT_11275bc40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275bc3c,0);
  return;
}



/* Entry: 106c9f04c; end: 106c9f093; -[SCContextPostSnapFeedCameraV2ActionFilter initWithFilterTargetType:] */

void FUN_106c9f04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106c9f094; end: 106c9f29f; -[SCContextPostSnapFeedCameraV2ActionFilter filterActions:] */

undefined * FUN_106c9f094(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
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
  puVar7 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010beef4c0();
  if (puVar1 == (undefined8 *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010beef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = &uStack_130;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 == (undefined8 *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      lVar10 = *plStack_120;
      do {
        puVar7 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(puVar1);
          }
          uVar9 = *(undefined8 *)(lStack_128 + (long)puVar7 * 8);
          uVar3 = uVar9;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010beeed20();
          if ((int)uVar4 == 0x14) {
            uVar4 = uVar9;
            func_0x00010beedca0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf2b900();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_1;
            func_0x00010bde7a00(param_1,param_2,uVar5);
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar3);
            if ((uVar6 & 1) != 0) {
              puVar8 = PTR_PTR_1126d1f78;
              func_0x00010c0cb140(PTR_PTR_1126d1f78);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar9);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar2;
              func_0x00010c162160(puVar8,param_2,puVar2);
              _objc_release(puVar2);
              goto LAB_106c9f250;
            }
          }
          else {
            _objc_release(uVar3);
          }
          puVar7 = (undefined8 *)((long)puVar7 + 1);
        } while (puVar2 != puVar7);
        puVar7 = &uStack_130;
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,puVar7,auStack_f0,0x10);
      } while (puVar2 != (undefined8 *)0x0);
      puVar8 = (undefined *)0x0;
    }
LAB_106c9f250:
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    if (param_3[1] == 1) {
      param_3 = puVar7;
      func_0x00010bfd6580(puVar7);
    }
    else if (param_3[1] == 0) {
      param_3 = puVar7;
      func_0x00010bfd67c0(puVar7);
    }
    _objc_release(puVar7);
    return (undefined *)(ulong)((uint)param_3 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 106c9f2a0; end: 106c9f2fb; -[SCContextPostSnapFeedCameraV2ActionFilter _containsTargetContextInfo:] */

uint FUN_106c9f2a0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    param_1 = param_3;
    func_0x00010bfd6580(param_3);
  }
  else if (*(long *)(param_1 + 8) == 0) {
    param_1 = param_3;
    func_0x00010bfd67c0(param_3);
  }
  _objc_release(param_3);
  return (uint)param_1 & 1;
}



/* Entry: 106c9f2fc; end: 106c9f36f; -[SCContextPostSnapFeedCompositeFilter initWithFilters:] */

undefined1 * FUN_106c9f2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6170;
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



/* Entry: 106c9f370; end: 106c9f49f; -[SCContextPostSnapFeedCompositeFilter filterActions:] */

void FUN_106c9f370(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 8);
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
      lVar3 = *(long *)(lVar6 * 8);
      func_0x00010bfad7e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) goto LAB_106c9f454;
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  lVar3 = 0;
LAB_106c9f454:
  _objc_release(lVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106c9f4a0; end: 106c9f4ab; -[SCContextPostSnapFeedCompositeFilter .cxx_destruct] */

void FUN_106c9f4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c9f4ac; end: 106c9f747; -[SCContextPostSnapFeedLensActionFilter filterActions:] */

void FUN_106c9f4ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  long lVar14;
  undefined8 *unaff_x25;
  undefined8 uVar15;
  undefined8 *unaff_x26;
  undefined8 *puVar16;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_3;
  _objc_retain(param_3);
  puVar16 = param_3;
  func_0x00010beef4c0();
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puStack_138 = param_3;
    func_0x00010beef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = &uStack_130;
    puVar16 = param_3;
    func_0x00010bf52a60();
    if (puVar16 == (undefined8 *)0x0) {
      unaff_x21 = (undefined8 *)0x0;
      unaff_x20 = (undefined8 *)0x0;
      unaff_x22 = (undefined8 *)0x0;
    }
    else {
      unaff_x21 = (undefined8 *)0x0;
      unaff_x20 = (undefined8 *)0x0;
      unaff_x22 = (undefined8 *)0x0;
      unaff_x28 = *plStack_120;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x25 = *(undefined8 **)(lStack_128 + (long)puVar13 * 8);
          unaff_x26 = unaff_x25;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010beeed20();
          _objc_release(unaff_x26);
          if ((int)unaff_x27 == 0xe) {
            puVar1 = unaff_x25;
            FUN_1070bb004();
            if ((int)puVar1 == 0) {
              if (unaff_x22 == (undefined8 *)0x0) {
                _objc_retain(unaff_x25);
                unaff_x22 = unaff_x25;
              }
            }
            else {
              _objc_retain(unaff_x25);
              _objc_release(unaff_x20);
              unaff_x20 = unaff_x25;
            }
          }
          else {
            unaff_x26 = unaff_x25;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010beeed20();
            _objc_release(unaff_x26);
            if ((int)unaff_x27 == 0x1c) {
              _objc_retain(unaff_x25);
              _objc_release(unaff_x21);
              unaff_x21 = unaff_x25;
            }
          }
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar16 != puVar13);
        puVar13 = &uStack_130;
        puVar16 = param_3;
        func_0x00010bf52a60();
      } while (puVar16 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    unaff_x24 = unaff_x20;
    if (unaff_x22 != (undefined8 *)0x0) {
      unaff_x24 = unaff_x22;
    }
    _objc_retain(unaff_x24);
    if (unaff_x24 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      puVar16 = (undefined8 *)PTR_PTR_1126d1f78;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = unaff_x25;
      func_0x00010c162160(puVar16);
      _objc_release(unaff_x25);
      if (unaff_x21 != (undefined8 *)0x0) {
        unaff_x25 = puVar16;
        func_0x00010beef4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = unaff_x21;
        func_0x00010befa120();
        _objc_release(unaff_x25);
      }
    }
    param_3 = puStack_138;
    _objc_release(unaff_x24);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(unaff_x22);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_106c9f748;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar13;
    lStack_1a0 = unaff_x28;
    puStack_198 = unaff_x27;
    puStack_190 = unaff_x26;
    puStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    puStack_178 = puVar16;
    puStack_170 = unaff_x22;
    puStack_168 = unaff_x21;
    puStack_160 = unaff_x20;
    puStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar13);
    uVar11 = SUB84(puVar1,0);
    puVar16 = puVar13;
    func_0x00010beef4c0();
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      unaff_x20 = puVar13;
      func_0x00010beef4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = SUB84(&uStack_270,0);
      puVar1 = unaff_x20;
      func_0x00010bf52a60();
      puVar16 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        lVar14 = *plStack_260;
        do {
          puVar16 = (undefined8 *)0x0;
          do {
            if (*plStack_260 != lVar14) {
              _objc_enumerationMutation(unaff_x20);
            }
            uVar15 = *(undefined8 *)(lStack_268 + (long)puVar16 * 8);
            uVar2 = uVar15;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010beeed20();
            _objc_release(uVar2);
            if ((int)uVar3 == 0x1c) {
              puVar16 = (undefined8 *)PTR_PTR_1126d1f78;
              func_0x00010c0cb140(PTR_PTR_1126d1f78);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126b5b00;
              _objc_opt_new();
              puVar5 = PTR_PTR_1126d1f80;
              _objc_opt_new();
              puVar6 = PTR_PTR_1126d1f88;
              _objc_opt_new();
              puVar7 = PTR_PTR_1126b6248;
              puStack_278 = puVar6;
              _objc_opt_new();
              puVar8 = PTR_PTR_1126b5c68;
              func_0x00010c0d2940(PTR_PTR_1126b5c68);
              _objc_retainAutoreleasedReturnValue();
              puStack_288 = puVar7;
              func_0x00010c161fe0(puVar7);
              _objc_release(puVar8);
              uVar2 = uVar15;
              func_0x00010beedca0(uVar15);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c2472a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c247160();
              func_0x00010c218f80(puVar6);
              _objc_release(uVar3);
              _objc_release(uVar2);
              puStack_280 = puVar5;
              func_0x00010c1c9bc0(puVar5);
              puStack_290 = puVar4;
              func_0x00010c1776a0(puVar4);
              func_0x00010c1c76a0(puVar4);
              puVar5 = PTR_PTR_1126c94a0;
              func_0x00010c0cb140(PTR_PTR_1126c94a0);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126c94a8;
              func_0x00010c0cb140(PTR_PTR_1126c94a8);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar15;
              func_0x00010beedca0(uVar15);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c2472a0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar3;
              func_0x00010beff2c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c195b20(puVar6);
              _objc_release(uVar9);
              _objc_release(uVar3);
              _objc_release(uVar2);
              func_0x00010c16a7a0(puVar5);
              puVar7 = PTR_PTR_1126c94a8;
              func_0x00010c0cb140(PTR_PTR_1126c94a8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1befc0();
              func_0x00010c1dc9c0(puVar5);
              func_0x00010bf51e00(uVar15);
              puVar4 = puStack_290;
              func_0x00010c161620();
              func_0x00010c1a9680(uVar15);
              puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf0a100();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar8;
              func_0x00010c162160(puVar16);
              uVar11 = SUB84(puVar12,0);
              _objc_release(puVar8);
              _objc_release(uVar15);
              _objc_release(puVar7);
              _objc_release(puVar6);
              _objc_release(puVar5);
              _objc_release(puStack_288);
              _objc_release(puStack_278);
              _objc_release(puStack_280);
              _objc_release(puVar4);
              goto LAB_106c9fa9c;
            }
            puVar16 = (undefined8 *)((long)puVar16 + 1);
          } while (puVar1 != puVar16);
          uVar11 = SUB84(&uStack_270,0);
          puVar1 = unaff_x20;
          func_0x00010bf52a60();
        } while (puVar1 != (undefined8 *)0x0);
        puVar16 = (undefined8 *)0x0;
      }
LAB_106c9fa9c:
      _objc_release(unaff_x20);
    }
    puVar1 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      ppuVar10 = &puStack_2c0;
      pcStack_298 = FUN_106c9faf4;
      puStack_2b8 = PTR_PTR_1126f6178;
      puStack_2c0 = puVar1;
      puStack_2b0 = unaff_x20;
      puStack_2a8 = puVar13;
      ppuStack_2a0 = &puStack_150;
      _objc_msgSendSuper2(&puStack_2c0,PTR_s_init_1125d9248);
      if (ppuVar10 != (undefined8 **)0x0) {
        *(undefined4 *)((long)ppuVar10 + 8) = uVar11;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106c9f748; end: 106c9faf3; -[SCContextPostSnapFeedMusicFilter filterActions:] */

void FUN_106c9f748(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  uVar11 = (undefined4)lVar1;
  lVar1 = param_3;
  func_0x00010beef4c0();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x20 = param_3;
    func_0x00010beef4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = SUB84(&uStack_130,0);
    lVar1 = unaff_x20;
    func_0x00010bf52a60();
    puVar13 = (undefined *)0x0;
    if (lVar1 != 0) {
      lVar14 = *plStack_120;
      do {
        lVar16 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(unaff_x20);
          }
          uVar15 = *(undefined8 *)(lStack_128 + lVar16 * 8);
          uVar2 = uVar15;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010beeed20();
          _objc_release(uVar2);
          if ((int)uVar3 == 0x1c) {
            puVar13 = PTR_PTR_1126d1f78;
            func_0x00010c0cb140(PTR_PTR_1126d1f78);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126b5b00;
            _objc_opt_new();
            puVar5 = PTR_PTR_1126d1f80;
            _objc_opt_new();
            puVar6 = PTR_PTR_1126d1f88;
            _objc_opt_new();
            puVar7 = PTR_PTR_1126b6248;
            puStack_138 = puVar6;
            _objc_opt_new();
            puVar8 = PTR_PTR_1126b5c68;
            func_0x00010c0d2940(PTR_PTR_1126b5c68);
            _objc_retainAutoreleasedReturnValue();
            puStack_148 = puVar7;
            func_0x00010c161fe0(puVar7);
            _objc_release(puVar8);
            uVar2 = uVar15;
            func_0x00010beedca0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c2472a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c247160();
            func_0x00010c218f80(puVar6);
            _objc_release(uVar3);
            _objc_release(uVar2);
            puStack_140 = puVar5;
            func_0x00010c1c9bc0(puVar5);
            puStack_150 = puVar4;
            func_0x00010c1776a0(puVar4);
            func_0x00010c1c76a0(puVar4);
            puVar5 = PTR_PTR_1126c94a0;
            func_0x00010c0cb140(PTR_PTR_1126c94a0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126c94a8;
            func_0x00010c0cb140(PTR_PTR_1126c94a8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar15;
            func_0x00010beedca0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c2472a0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar3;
            func_0x00010beff2c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c195b20(puVar6);
            _objc_release(uVar9);
            _objc_release(uVar3);
            _objc_release(uVar2);
            func_0x00010c16a7a0(puVar5);
            puVar7 = PTR_PTR_1126c94a8;
            func_0x00010c0cb140(PTR_PTR_1126c94a8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1befc0();
            func_0x00010c1dc9c0(puVar5);
            func_0x00010bf51e00(uVar15);
            puVar4 = puStack_150;
            func_0x00010c161620();
            func_0x00010c1a9680(uVar15);
            puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf0a100();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar8;
            func_0x00010c162160(puVar13);
            uVar11 = SUB84(puVar12,0);
            _objc_release(puVar8);
            _objc_release(uVar15);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puStack_148);
            _objc_release(puStack_138);
            _objc_release(puStack_140);
            _objc_release(puVar4);
            goto LAB_106c9fa9c;
          }
          lVar16 = lVar16 + 1;
        } while (lVar1 != lVar16);
        uVar11 = SUB84(&uStack_130,0);
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      puVar13 = (undefined *)0x0;
    }
LAB_106c9fa9c:
    _objc_release(unaff_x20);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  plVar10 = &lStack_180;
  pcStack_158 = FUN_106c9faf4;
  puStack_178 = PTR_PTR_1126f6178;
  lStack_180 = lVar1;
  lStack_170 = unaff_x20;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar10 != (long *)0x0) {
    *(undefined4 *)((long)plVar10 + 8) = uVar11;
  }
  return;
}



/* Entry: 106c9faf4; end: 106c9fb3b; -[SCContextPostSnapFeedPassthroughFilter initWithActionCase:] */

void FUN_106c9faf4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106c9fb3c; end: 106c9fceb; -[SCContextPostSnapFeedPassthroughFilter filterActions:] */

undefined1 * FUN_106c9fb3c(long param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *unaff_x20;
  undefined *puVar11;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *puVar12;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *puVar13;
  long unaff_x26;
  undefined *puVar14;
  undefined *unaff_x27;
  ulong unaff_x28;
  long lVar15;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  ulong uStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar11 = param_3;
  func_0x00010beef4c0();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x20 = param_3;
    func_0x00010beef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = unaff_x20;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      unaff_x26 = *plStack_120;
      do {
        unaff_x27 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x26) {
            _objc_enumerationMutation(unaff_x20);
          }
          unaff_x23 = *(undefined8 *)(lStack_128 + (long)unaff_x27 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010beeed20();
          uVar1 = *(uint *)(param_1 + 8);
          unaff_x28 = (ulong)uVar1;
          _objc_release(unaff_x24);
          if ((uint)unaff_x25 == uVar1) {
            puVar11 = PTR_PTR_1126d1f78;
            func_0x00010c0cb140();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf0a100();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = (undefined8 *)unaff_x22;
            func_0x00010c162160(puVar11);
            _objc_release(unaff_x22);
            goto LAB_106c9fc94;
          }
          unaff_x27 = unaff_x27 + 1;
        } while (puVar10 != unaff_x27);
        puVar10 = unaff_x20;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x22 = (undefined *)0x0;
      } while (puVar10 != (undefined *)0x0);
    }
    puVar11 = (undefined *)0x0;
LAB_106c9fc94:
    _objc_release(unaff_x20);
    puVar10 = (undefined *)puVar8;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_138 = FUN_106c9fcec;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_190 = unaff_x28;
  puStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = puVar11;
  puStack_150 = unaff_x20;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puVar4 = puVar10;
  func_0x00010beef4c0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puVar11;
    puVar11 = (undefined *)0x0;
  }
  else {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    puVar4 = puVar10;
    func_0x00010beef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010bf52a60();
    if (puVar11 == (undefined *)0x0) {
      unaff_x20 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
      unaff_x22 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
LAB_106c9ff64:
      _objc_release(puVar4);
    }
    else {
      puStack_268 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
      unaff_x20 = (undefined *)0x0;
      lVar15 = *plStack_250;
      puStack_270 = puVar10;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar15) {
            _objc_enumerationMutation(puVar4);
          }
          puVar13 = *(undefined **)(lStack_258 + (long)puVar10 * 8);
          puVar5 = puVar13;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010beeed20();
          puVar2 = unaff_x20;
          if ((int)puVar6 == 0x46) {
            puVar6 = puVar13;
            func_0x00010c25e260();
            _objc_release(puVar5);
            puVar5 = puVar12;
            puVar14 = puStack_268;
            puVar3 = puVar13;
            if ((int)puVar6 != 2) goto LAB_106c9fdf4;
LAB_106c9fe64:
            puStack_268 = puVar3;
            unaff_x20 = puVar2;
            _objc_retain(puVar13);
            _objc_release(puVar14);
            puVar12 = puVar5;
          }
          else {
            _objc_release(puVar5);
LAB_106c9fdf4:
            puVar5 = puVar13;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010beeed20();
            _objc_release(puVar5);
            puVar5 = puVar13;
            puVar14 = puVar12;
            puVar3 = puStack_268;
            if ((int)puVar6 == 0xe) goto LAB_106c9fe64;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010beeed20();
            _objc_release(puVar5);
            puVar2 = puVar13;
            puVar5 = puVar12;
            puVar14 = unaff_x20;
            puVar3 = puStack_268;
            if ((int)puVar6 == 0x1c) goto LAB_106c9fe64;
          }
          puVar10 = puVar10 + 1;
        } while (puVar11 != puVar10);
        puVar11 = puVar4;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
      _objc_release(puVar4);
      unaff_x22 = puStack_268;
      puVar11 = (undefined *)0x0;
      puVar10 = puStack_270;
      if ((puStack_268 != (undefined *)0x0) && (puVar12 != (undefined *)0x0)) {
        puVar11 = PTR_PTR_1126d1f78;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = unaff_x22;
        func_0x00010beedca0(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c161620(puVar12);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162160(puVar11);
        _objc_release(puVar10);
        puVar10 = puStack_270;
        if (unaff_x20 != (undefined *)0x0) {
          puVar4 = puVar11;
          func_0x00010beef4a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          goto LAB_106c9ff64;
        }
      }
    }
    _objc_release(unaff_x20);
    _objc_release(puVar12);
    _objc_release(unaff_x22);
  }
  puVar12 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_2b0;
    pcStack_278 = FUN_106c9ffe0;
    puStack_2a8 = PTR_PTR_1126f6180;
    puStack_2b0 = puVar12;
    puStack_2a0 = unaff_x22;
    puStack_298 = puVar4;
    puStack_290 = unaff_x20;
    puStack_288 = puVar10;
    ppuStack_280 = &puStack_140;
    _objc_msgSendSuper2(&puStack_2b0,PTR_s_init_1125d9248);
    if (ppuVar7 != (undefined **)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      uVar9 = *(undefined8 *)((long)ppuVar7 + 0x10);
      *(undefined **)((long)ppuVar7 + 0x10) = puVar10;
      _objc_release(uVar9);
      puVar10 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520();
      uVar9 = *(undefined8 *)((long)ppuVar7 + 8);
      *(undefined **)((long)ppuVar7 + 8) = puVar10;
      _objc_release(uVar9);
      _objc_release(puVar11);
    }
    return (undefined1 *)ppuVar7;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 106c9fcec; end: 106c9ffdf; -[SCContextPostSnapFeedPromptLensFilter filterActions:] */

undefined1 * FUN_106c9fcec(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *unaff_x21;
  long unaff_x22;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar9 = param_3;
  func_0x00010beef4c0();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_106c9ff98;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  unaff_x21 = param_3;
  func_0x00010beef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = unaff_x21;
  func_0x00010bf52a60();
  if (puVar9 == (undefined *)0x0) {
    unaff_x20 = 0;
    lVar8 = 0;
    unaff_x22 = 0;
    puVar9 = (undefined *)0x0;
LAB_106c9ff64:
    _objc_release(unaff_x21);
  }
  else {
    lStack_138 = 0;
    lVar8 = 0;
    unaff_x20 = 0;
    lVar12 = *plStack_120;
    puStack_140 = param_3;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(unaff_x21);
        }
        lVar10 = *(long *)(lStack_128 + (long)puVar7 * 8);
        lVar3 = lVar10;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010beeed20();
        lVar1 = unaff_x20;
        if ((int)lVar4 == 0x46) {
          lVar4 = lVar10;
          func_0x00010c25e260();
          _objc_release(lVar3);
          lVar3 = lVar8;
          lVar11 = lStack_138;
          lVar2 = lVar10;
          if ((int)lVar4 != 2) goto LAB_106c9fdf4;
LAB_106c9fe64:
          lStack_138 = lVar2;
          unaff_x20 = lVar1;
          _objc_retain(lVar10);
          _objc_release(lVar11);
          lVar8 = lVar3;
        }
        else {
          _objc_release(lVar3);
LAB_106c9fdf4:
          lVar3 = lVar10;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010beeed20();
          _objc_release(lVar3);
          lVar3 = lVar10;
          lVar11 = lVar8;
          lVar2 = lStack_138;
          if ((int)lVar4 == 0xe) goto LAB_106c9fe64;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010beeed20();
          _objc_release(lVar3);
          lVar1 = lVar10;
          lVar3 = lVar8;
          lVar11 = unaff_x20;
          lVar2 = lStack_138;
          if ((int)lVar4 == 0x1c) goto LAB_106c9fe64;
        }
        puVar7 = puVar7 + 1;
      } while (puVar9 != puVar7);
      puVar9 = unaff_x21;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
    _objc_release(unaff_x21);
    unaff_x22 = lStack_138;
    puVar9 = (undefined *)0x0;
    param_3 = puStack_140;
    if ((lStack_138 != 0) && (lVar8 != 0)) {
      puVar9 = PTR_PTR_1126d1f78;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = unaff_x22;
      func_0x00010beedca0(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161620(lVar8);
      _objc_release(lVar12);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162160(puVar9);
      _objc_release(puVar7);
      param_3 = puStack_140;
      if (unaff_x20 != 0) {
        unaff_x21 = puVar9;
        func_0x00010beef4a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        goto LAB_106c9ff64;
      }
    }
  }
  _objc_release(unaff_x20);
  _objc_release(lVar8);
  _objc_release(unaff_x22);
LAB_106c9ff98:
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar5 = &puStack_180;
    pcStack_148 = FUN_106c9ffe0;
    puStack_178 = PTR_PTR_1126f6180;
    puStack_180 = puVar7;
    lStack_170 = unaff_x22;
    puStack_168 = unaff_x21;
    lStack_160 = unaff_x20;
    puStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_180,PTR_s_init_1125d9248);
    if (ppuVar5 != (undefined **)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
      *(undefined **)((long)ppuVar5 + 0x10) = puVar9;
      _objc_release(uVar6);
      puVar9 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520();
      uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
      *(undefined **)((long)ppuVar5 + 8) = puVar9;
      _objc_release(uVar6);
      _objc_release(puVar7);
    }
    return (undefined1 *)ppuVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 106c9ffe0; end: 106ca00ab; -[SCContextPostSnapChatResetTracker init] */

undefined1 * FUN_106c9ffe0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f6180;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ca00ac; end: 106ca013f; -[SCContextPostSnapChatResetTracker onConversationsReset:] */

void FUN_106ca00ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106ca0140;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(param_3);
  return;
}


