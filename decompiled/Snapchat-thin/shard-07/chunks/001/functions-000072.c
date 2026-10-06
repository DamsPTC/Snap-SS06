/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105157330; end: 105157337;  */

void FUN_105157330(void)

{
  return;
}



/* Entry: 105157338; end: 105157387; -[SCSendToListsSectionDataProvider _clearListSelection] */

void FUN_105157338(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x40) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x40) = 2;
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105157388; end: 10515739f; -[SCSendToListsSectionDataProvider dataProviderDelegate] */

void FUN_105157388(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051573a0; end: 1051573ab; -[SCSendToListsSectionDataProvider setDataProviderDelegate:] */

void FUN_1051573a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 1051573ac; end: 1051573b3; -[SCSendToListsSectionDataProvider sectionDataModel] */

undefined8 FUN_1051573ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1051573b4; end: 1051573bb; -[SCSendToListsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1051573b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1051573bc; end: 105157507; -[SCSendToListsSectionDataProvider .cxx_destruct] */

void FUN_1051573bc(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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



/* Entry: 105157508; end: 1051575e3; -[SCSendToListsSectionDescriptor initWithContextualListSelectAllEnabled:sendToExperimentConfiguration:sendToUIConfiguration:selectAllDisabledIdentifiers:] */

undefined1 *
FUN_105157508(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6748;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 1051575e4; end: 1051579cf; -[SCSendToListsSectionDescriptor sectionDescriptorForQuery:] */

void FUN_1051575e4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
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
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b16f8;
  _objc_alloc();
  func_0x00010c028e00();
  puVar4 = puVar3;
  func_0x0001059dab5c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b53c8;
  _objc_opt_class(PTR_PTR_1126b53c8);
  ppuVar8 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar7);
  ppuVar1 = ppuVar5;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1051579d0;
  uStack_88 = 0x1051579e0;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1051579d0;
  uStack_b8 = 0x1051579e0;
  _objc_retain(puVar4);
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1051579d0;
  uStack_e8 = 0x1051579e0;
  uStack_e0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  puStack_b0 = puVar4;
  if (ppuVar1 == (undefined **)0x0) {
    puVar7 = puVar4;
    func_0x000106c9d408(puVar4,0,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c11da20(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110f12d98;
    func_0x000106c9c378(&PTR____CFConstantStringClassReference_110f12d98,ppuVar5,puVar7,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0bea00(ppuVar5);
    ppuVar8 = (undefined **)(ulong)*(byte *)(puStack_120 + 3);
    if ((*(byte *)(param_1 + 8) & *(byte *)(puStack_120 + 3) & 1) != 0) {
      ppuVar5 = *(undefined ***)(param_1 + 0x20);
      func_0x00010bf4b900();
      ppuVar8 = ppuVar5;
    }
    puVar7 = (undefined *)puStack_d0[5];
    uVar9 = puStack_100[5];
    if (((ulong)ppuVar8 & 1) == 0) {
      func_0x0001059dab74();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = (undefined **)0x0;
    }
    ppuVar6 = (undefined **)0x0;
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dc7738;
    }
    func_0x000106c9d408(puVar7,uVar9,ppuVar5,ppuVar6,1);
    _objc_retainAutoreleasedReturnValue();
    if (((ulong)ppuVar8 & 1) == 0) {
      _objc_release(ppuVar5);
    }
    ppuVar8 = (undefined **)puStack_a0[5];
    cVar2 = *(char *)(puStack_120 + 3);
    _objc_retain(ppuVar8);
    if (cVar2 == '\x01') {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f12db8;
      ppuVar6 = ppuVar8;
      func_0x00010bfda7c0();
      if ((int)ppuVar6 == 0) {
        func_0x00010c25cde0(&PTR____CFConstantStringClassReference_110f12db8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(ppuVar8);
        ppuVar5 = ppuVar8;
      }
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f12d98;
      _objc_retain(&PTR____CFConstantStringClassReference_110f12d98);
    }
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar5;
    func_0x000106c9c378(ppuVar5,puStack_a0[5],puVar7,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar5);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_128,8);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(puStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 1051579d0; end: 1051579e7;  */

void FUN_1051579d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051579e8; end: 105157ab3;  */

void FUN_1051579e8(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)param_3;
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    _objc_release(uVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105157ab4; end: 105157aef; -[SCSendToListsSectionDescriptor .cxx_destruct] */

void FUN_105157ab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105157af0; end: 105157c0b; -[SCSendToListsSectionViewModelSource initWithFriendmojiPresenter:messagingExperimentService:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_105157af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126e6750;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    func_0x000108faa718(param_6);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105157c0c; end: 105157cd3; -[SCSendToListsSectionViewModelSource selectionListsSnapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105157c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar3 = &puStack_80;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90da0();
  _objc_release(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105157cd4;
  puStack_68 = &UNK_11086c3d8;
  uStack_48 = (undefined1)uVar2;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = uVar4;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105157cd4; end: 105157e4f;  */

void FUN_105157cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010901e254(param_2,3);
  uVar5 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    _objc_release(uVar5);
    uVar5 = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x38);
    _objc_release(uVar5);
    uVar5 = 3;
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
  }
  uVar4 = 2;
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  uVar2 = param_2;
  func_0x000105e55ddc(*(undefined8 *)(param_1 + 0x30),param_2,uVar4,0,0,uVar3,param_3,0,0,param_4,
                      &PTR____CFConstantStringClassReference_110daafd8,param_5,
                      *(undefined8 *)(param_1 + 0x28),6,uVar5,1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105157e50; end: 105157f1b; -[SCSendToListsSectionViewModelSource selectionGroupViewModelGeneratorForSectionIdentifier:] */

void FUN_105157e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105157f1c;
  puStack_68 = &UNK_11086c408;
  uStack_48 = 1;
  uStack_60 = uVar2;
  uStack_58 = param_3;
  uStack_50 = uVar3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  _objc_retainBlock(&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105157f1c; end: 105158057;  */

void FUN_105157f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb97a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c07be00();
  uVar1 = param_2;
  func_0x000105e54ea4(uVar4,param_2,uVar2,param_3,param_4,param_5,
                      &PTR____CFConstantStringClassReference_110daafd8,param_6,uVar3,0x1b);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105158058; end: 10515809f; -[SCSendToListsSectionViewModelSource .cxx_destruct] */

void FUN_105158058(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051580a0; end: 1051580cb; +[SCGrapheneListsSectionMetric selectTap] */

void FUN_1051580a0(void)

{
  _objc_alloc(PTR_PTR_1126b53f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051580cc; end: 10515816b; -[SCGrapheneListsSectionMetric description] */

void FUN_1051580cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7758;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc7758,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e6758;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10515816c; end: 1051582af; -[SCGrapheneRegistry listsSectionGraphene] */

void FUN_10515816c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1051581f4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9480 != -1) {
    func_0x00010002a2fc(0x1136b9480,&puStack_48);
  }
  uVar1 = uRam00000001136b9478;
  _objc_retain(uRam00000001136b9478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051582b0; end: 10515879f; -[SCSendToListsHeaderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051582b0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  lVar25 = param_1 + _DAT_11271d884;
  lVar29 = lVar25;
  _objc_loadWeakRetained();
  lVar1 = lVar29;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c247a40();
  _objc_release(lVar1);
  _objc_release(lVar29);
  if (lVar2 != 0x38) {
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b5440;
    _objc_alloc();
    lVar29 = param_1 + _DAT_11271d888;
    _objc_loadWeakRetained();
    lVar4 = lVar29;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11271d88c;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11271d890;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = (long)_DAT_11271d894;
    lVar7 = param_1 + lVar27;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1 + lVar27;
    _objc_loadWeakRetained();
    lVar9 = lVar27;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = (long)_DAT_11271d898;
    lVar10 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c22d820();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar12 = lVar28;
    func_0x00010c22d860();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11271d89c;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c15d320();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_11271d8a0;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_11271d8a4;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_11271d8a8;
    _objc_loadWeakRetained();
    lVar20 = lVar25;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c15d5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0497e0();
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar28);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar27);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar29);
    lVar29 = (long)_DAT_11271d8b0;
    _objc_retain(puVar3);
    uVar23 = *(undefined8 *)(param_1 + lVar29);
    *(undefined **)(param_1 + lVar29) = puVar3;
    _objc_release(uVar23);
    puVar24 = PTR_PTR_1126b5448;
    _objc_alloc(PTR_PTR_1126b5448);
    func_0x00010c004900();
    lVar29 = param_1 + _DAT_11271d8b4;
    _objc_loadWeakRetained(lVar29);
    lVar1 = lVar29;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(lVar29);
    _objc_loadWeakRetained();
    lVar29 = lVar25;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar25);
    lVar1 = lVar29;
    func_0x00010010fab4(lVar29,PTR_DAT_1126a4f20);
    lVar25 = lVar29;
    if ((int)lVar1 == 0) {
      lVar25 = 0;
    }
    _objc_retain(lVar25);
    _objc_release(lVar29);
    if (lVar25 == 0) {
      func_0x00010c250840(puVar3);
    }
    else {
      puVar26 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar23 = *(undefined8 *)(param_1 + _DAT_11271d8b8);
      *(undefined **)(param_1 + _DAT_11271d8b8) = puVar26;
      _objc_release(uVar23);
      func_0x00010c07ab20(lVar29);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar29;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar1);
      _objc_release(lVar29);
    }
    puVar26 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar26);
    _objc_release(lVar25);
    _objc_release(puVar24);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 1051587a0; end: 1051587d7;  */

void FUN_1051587a0(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c250850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_startSession_112671c38);
    return;
  }
  return;
}



/* Entry: 1051587d8; end: 10515882f; -[SCSendToListsHeaderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051587d8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_11271d8b0));
  puStack_28 = PTR_PTR_1126e6760;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105158830; end: 10515894f; -[SCSendToListsHeaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105158830(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d8ac,0);
  _objc_destroyWeak(param_1 + _DAT_11271d8a8);
  _objc_storeStrong(param_1 + _DAT_11271d8d0,0);
  _objc_destroyWeak(param_1 + _DAT_11271d8cc);
  _objc_destroyWeak(param_1 + _DAT_11271d898);
  _objc_destroyWeak(param_1 + _DAT_11271d89c);
  _objc_destroyWeak(param_1 + _DAT_11271d8a4);
  _objc_destroyWeak(param_1 + _DAT_11271d8c8);
  _objc_destroyWeak(param_1 + _DAT_11271d8c4);
  _objc_destroyWeak(param_1 + _DAT_11271d8c0);
  _objc_destroyWeak(param_1 + _DAT_11271d894);
  _objc_destroyWeak(param_1 + _DAT_11271d888);
  _objc_destroyWeak(param_1 + _DAT_11271d88c);
  _objc_destroyWeak(param_1 + _DAT_11271d890);
  _objc_destroyWeak(param_1 + _DAT_11271d8bc);
  _objc_destroyWeak(param_1 + _DAT_11271d8a0);
  _objc_destroyWeak(param_1 + _DAT_11271d8b4);
  _objc_destroyWeak(param_1 + _DAT_11271d884);
  _objc_storeStrong(param_1 + _DAT_11271d8b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d8b8,0);
  return;
}



/* Entry: 105158950; end: 105158baf;  */

undefined * FUN_105158950(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_1);
      }
      uVar2 = *(undefined8 *)(lVar10 * 8);
      func_0x000108ef7580(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 == 0) {
        puVar9 = (undefined *)0x0;
        lVar1 = param_1;
        goto LAB_105158b54;
      }
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  do {
    lVar1 = param_2;
    if (lVar5 == 0) {
      puVar9 = (undefined *)0x1;
LAB_105158b54:
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return puVar9;
      }
      ___stack_chk_fail();
      _objc_retain();
      func_0x000100504554(lVar6,&PTR___NSConcreteGlobalBlock_11086c440);
      lVar1 = param_1;
      func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_11086c460);
      _objc_release(param_1);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010bff4000();
      func_0x00010befa160();
      puVar7 = puVar9;
      func_0x00010bf51e00(puVar9);
      _objc_release(puVar9);
      _objc_release(lVar1);
      _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return puVar7;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_2);
      }
      uVar2 = *(undefined8 *)(lVar11 * 8);
      func_0x000108ef8240(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 == 0) {
        puVar9 = (undefined *)0x0;
        goto LAB_105158b54;
      }
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105158bb0; end: 105158c53;  */

void FUN_105158bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11086c440);
  uVar1 = param_1;
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_11086c460);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  func_0x00010befa160();
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105158c54; end: 105158c63;  */

void FUN_105158c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03d4e0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105158c64; end: 105158d0b;  */

void FUN_105158c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  func_0x00010bd86420(param_2,&PTR___NSConcreteGlobalBlock_11086c4a0);
  uVar1 = param_1;
  func_0x00010bd86420(param_1,&PTR___NSConcreteGlobalBlock_11086c4e0);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4020();
  func_0x00010befa160();
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105158d0c; end: 105158d1b;  */

undefined1 * FUN_105158d0c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar11 = PTR_PTR_1126b3560;
  _objc_alloc();
  lVar1 = param_2;
  func_0x000108ef7580(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010c01bce0();
  puStack_140 = puVar2;
  _objc_release(lVar13);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_138 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    puVar11 = (undefined *)*puStack_120;
    do {
      lVar13 = 0;
      do {
        if ((undefined *)*puStack_120 != puVar11) {
          _objc_enumerationMutation(param_2);
        }
        lVar12 = *(long *)(lStack_128 + lVar13 * 8);
        puVar3 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        lVar4 = lVar12;
        func_0x00010c2923e0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar3);
        _objc_release(lVar4);
        lVar4 = lVar12;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        if (lVar5 == 0) {
          func_0x00010c294420(lVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(lVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar4);
        puVar6 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        func_0x00010c01bce0();
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        _objc_release(lVar12);
        _objc_release(puVar3);
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_2);
  puVar6 = PTR_PTR_1126b3568;
  _objc_alloc();
  puVar3 = puStack_140;
  puVar9 = puStack_140;
  puVar10 = puVar2;
  func_0x00010c03d400();
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar1 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  plVar7 = &lStack_180;
  puStack_158 = puVar3;
  puStack_148 = &UNK_108ef78a4;
  puStack_170 = puVar6;
  puStack_168 = puVar2;
  puStack_160 = puVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puStack_178 = PTR_PTR_1126ff280;
  lStack_180 = lVar1;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar7 != (long *)0x0) {
    _objc_retain(puVar9);
    uVar8 = *(undefined8 *)((long)plVar7 + 8);
    *(undefined **)((long)plVar7 + 8) = puVar9;
    _objc_release(uVar8);
    _objc_retain(puVar10);
    uVar8 = *(undefined8 *)((long)plVar7 + 0x10);
    *(undefined **)((long)plVar7 + 0x10) = puVar10;
    _objc_release(uVar8);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  return (undefined1 *)plVar7;
}



/* Entry: 105158d1c; end: 1051590e7; -[SCSendToSharedCarouselController initWithSnapchattersDataFetcher:groupsDataFetcher:userSession:displayNameProvider:usernameProvider:shortcutsDataFetcher:shortcutsInteractionMutator:sendToLogger:grapheneRegistry:circumstanceEngine:shortcutsCarouselScopeServices:shortcutsCarouselScopeExposer:sessionId:] */

undefined8 *
FUN_105158d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_70 = PTR_PTR_1126e6768;
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
    _objc_retain(param_15);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_12);
  }
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



/* Entry: 1051590e8; end: 105159127;  */

void FUN_1051590e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc77b8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105159128; end: 105159433; -[SCSendToSharedCarouselController setUpWithSendToTracker:uiContainer:viewUpdaterDelegate:] */

void FUN_105159128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_storeWeak(param_1 + 0x88,param_3);
  _objc_storeWeak(param_1 + 0x90,param_5);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126af4a8;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105159434;
  puStack_90 = &UNK_110849710;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1051594e0;
  puStack_b8 = &UNK_11084d688;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0311a0();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d42e0();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b5458;
  _objc_alloc(PTR_PTR_1126b5458);
  func_0x00010c00f920();
  lVar3 = param_1;
  func_0x00010be5ce00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf24780(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60));
  func_0x00010bec8420(param_1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_d8);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105159434; end: 105159563;  */

void FUN_105159434(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b5450;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_alloc();
    func_0x00010c0263e0();
    _objc_release(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar1;
    _objc_release(uVar2);
    func_0x00010c194da0(*(undefined8 *)(param_1 + 0x98));
    lVar3 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c286440();
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105159564; end: 1051595b3;  */

void FUN_105159564(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf3b600(*(undefined8 *)(param_1 + 0x98));
    lVar1 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c286440();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051595b4; end: 1051595ff; -[SCSendToSharedCarouselController startSession] */

void FUN_1051595b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR_PTR_1126b5460;
  func_0x00010c250980(PTR_PTR_1126b5460,param_2,*(undefined8 *)(param_1 + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105159600; end: 105159653; -[SCSendToSharedCarouselController end] */

void FUN_105159600(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf6f4a0(*(undefined8 *)(param_1 + 0xa0),param_2,0);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105159654; end: 1051596f3; -[SCSendToSharedCarouselController viewWillDisappear] */

void FUN_105159654(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010bf51e00(uVar1);
    func_0x00010c289ec0(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xb8),PTR_s_removeAllObjects_112628590);
    return;
  }
  return;
}



/* Entry: 1051596f4; end: 10515991b; -[SCSendToSharedCarouselController carouselDidSelectShortcutWithIdentifier:name:shortcutType:] */

void FUN_1051596f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  if (param_3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10515991c;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar5);
    _objc_destroyWeak(auStack_50);
  }
  else {
    puVar1 = PTR_PTR_1126b5468;
    func_0x00010c23cee0(PTR_PTR_1126b5468);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c09a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    _objc_copyWeak(auStack_78,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar5);
    lVar3 = param_3;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xb8));
      _objc_release(puVar4);
    }
    lVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar3 != 0) {
      func_0x00010be30120(param_1);
    }
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10515991c; end: 10515997b;  */

void FUN_10515991c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515997c; end: 105159a2f; -[SCSendToSharedCarouselController carouselDidDoubleTapShortcutWithIdentifier:name:shortcutType:wasAlreadySelected:] */

void FUN_10515997c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5468;
  _objc_retain(param_3);
  func_0x00010bf883c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09a640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010be30120(param_1,param_2,param_3,0,&PTR____CFConstantStringClassReference_110dc77f8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105159a30; end: 105159a33; -[SCSendToSharedCarouselController carouselDidUpdateRegisteredPlugins:] */

void FUN_105159a30(void)

{
  return;
}



/* Entry: 105159a34; end: 105159adb; -[SCSendToSharedCarouselController carouselDidResetPicker] */

void FUN_105159a34(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105159adc; end: 105159b23;  */

void FUN_105159adc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde0060();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105159b24; end: 105159c77; -[SCSendToSharedCarouselController _subscribeToSendToEventsWithTracker:] */

void FUN_105159b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010bf9a080(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105159c78; end: 105159cbf;  */

void FUN_105159c78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fde0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105159cc0; end: 105159e03; -[SCSendToSharedCarouselController _handleSendToEvent:] */

void FUN_105159cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105159e04;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105159e0c;
  puStack_58 = &UNK_110850cc8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105159e14;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105159e1c;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105159e24;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105159e2c;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105159e34;
  puStack_120 = &UNK_110842e18;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c1600(param_3,param_2,0,0,0,0,0,&puStack_48,&puStack_70,0,0,0,0,0,&puStack_98,
                      &puStack_c0,&puStack_e8,&puStack_110,&puStack_138,0,0,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 105159e04; end: 105159e3b;  */

void FUN_105159e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde0050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearCarouselSelection_1125559b0);
  return;
}



/* Entry: 105159e3c; end: 105159f13; -[SCSendToSharedCarouselController carouselDidUpdateDisplayedShortcuts:] */

void FUN_105159e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105159f14; end: 105159f7b;  */

void FUN_105159f14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xb0) = uVar3;
    _objc_release(uVar2);
    func_0x00010be58a60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bde07a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105159f7c; end: 10515a023; -[SCSendToSharedCarouselController _clearCarouselSelection] */

void FUN_105159f7c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10515a024; end: 10515a04f;  */

void FUN_10515a024(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515a050; end: 10515a0b3; -[SCSendToSharedCarouselController _clearCarouselSelectionOnPerformer] */

void FUN_10515a050(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    _objc_release();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    puVar1 = PTR_PTR_1126b5460;
    func_0x00010bf3c040(PTR_PTR_1126b5460);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10515a0b4; end: 10515a0e3; -[SCSendToSharedCarouselController _hideCarousel] */

void FUN_10515a0b4(long param_1)

{
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c286440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515a0e4; end: 10515a117; -[SCSendToSharedCarouselController _showCarousel] */

void FUN_10515a0e4(long param_1)

{
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c286440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515a118; end: 10515a5ab; -[SCSendToSharedCarouselController _selectListWithIdentifier:] */

void FUN_10515a118(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    puVar6 = *(undefined **)(param_1 + 0xb0);
    _objc_retain(puVar6);
    puVar1 = puVar6;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar7 = *plStack_150;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_150 != lVar7) {
            _objc_enumerationMutation(puVar6);
          }
          puVar5 = *(undefined **)(lStack_158 + (long)puVar8 * 8);
          puVar2 = puVar5;
          func_0x00010c22d640();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar5);
            _objc_release(puVar6);
            if (puVar5 == (undefined *)0x0) goto LAB_10515a520;
            puVar1 = puVar5;
            func_0x00010c082600();
            uStack_190 = 0;
            uStack_180 = 0x3032000000;
            pcStack_178 = FUN_10515a5ac;
            uStack_170 = 0x10515a5bc;
            uStack_168 = 0;
            uStack_1c0 = 0;
            uStack_1b0 = 0x3032000000;
            pcStack_1a8 = FUN_10515a5ac;
            uStack_1a0 = 0x10515a5bc;
            uStack_198 = 0;
            puVar6 = puVar5;
            puStack_1b8 = &uStack_1c0;
            puStack_188 = &uStack_190;
            func_0x00010c155de0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1e0 = 0xc2000000;
            pcStack_1d8 = FUN_10515a5c4;
            puStack_1d0 = &UNK_110842b58;
            puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_208 = 0xc2000000;
            uStack_200 = 0x10515a5fc;
            puStack_1f8 = &UNK_110842b58;
            puStack_1f0 = &uStack_1c0;
            puStack_1c8 = &uStack_190;
            func_0x00010c0bd960();
            _objc_release(puVar6);
            puVar6 = (undefined *)puStack_1b8[5];
            if (puVar6 == (undefined *)0x0) {
              puVar6 = puVar5;
              func_0x00010c2711a0(puVar5);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              _objc_retain(puVar6);
            }
            puStack_238 = &uStack_240;
            uStack_240 = 0;
            uStack_230 = 0x3032000000;
            pcStack_228 = FUN_10515a5ac;
            uStack_220 = 0x10515a5bc;
            uStack_218 = 0;
            puVar8 = puVar5;
            func_0x00010bfe5400(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0be560();
            _objc_release(puVar8);
            puVar8 = puVar6;
            if (puStack_238[5] != 0 && ((ulong)puVar1 & 1) == 0) {
              puVar1 = puVar5;
              func_0x00010c2711a0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if (((ulong)puVar2 & 1) == 0) {
                uStack_118 = puStack_238[5];
                puVar1 = puVar5;
                func_0x00010c2711a0();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_110 = puVar1;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar2;
                func_0x00010bf446e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar6);
                _objc_release(puVar2);
                _objc_release(puVar1);
              }
            }
            lVar7 = param_1 + 0x88;
            _objc_loadWeakRetained(lVar7);
            puVar1 = PTR_PTR_1126b50d0;
            puVar6 = puVar5;
            func_0x00010c22d640(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c158dc0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf8de60(lVar7);
            _objc_release(puVar1);
            _objc_release(puVar6);
            _objc_release(lVar7);
            puVar1 = puVar5;
            func_0x00010c22d640();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(param_1 + 0xa8);
            *(undefined **)(param_1 + 0xa8) = puVar1;
            _objc_release(uVar4);
            __Block_object_dispose(&uStack_240,8);
            _objc_release(uStack_218);
            _objc_release(puVar8);
            __Block_object_dispose(&uStack_1c0,8);
            _objc_release(uStack_198);
            __Block_object_dispose(&uStack_190,8);
            _objc_release(uStack_168);
            puVar6 = puVar5;
            goto LAB_10515a518;
          }
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar1 = puVar6;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
LAB_10515a518:
    _objc_release(puVar6);
  }
LAB_10515a520:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1c0,8);
    lVar7 = 8;
    __Block_object_dispose(&uStack_190);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 10515a5ac; end: 10515a5c3;  */

void FUN_10515a5ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10515a5c4; end: 10515a66b;  */

void FUN_10515a5c4(long param_1,undefined8 param_2)

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



/* Entry: 10515a66c; end: 10515a6d7; -[SCSendToSharedCarouselController _clearListSelection] */

void FUN_10515a66c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b50d0;
  func_0x00010bf3b800(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10515a6d8; end: 10515a723; -[SCSendToSharedCarouselController _clearListsSelectionIfNecessaryWithShortcuts:] */

void FUN_10515a6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar1 = param_1, func_0x00010be9df60(param_1,param_2,param_3), (int)lVar1 != 0)) {
    func_0x00010bde0780(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10515a724; end: 10515a887; -[SCSendToSharedCarouselController _selectedListIsRemovedFromUpdatedShortcuts:selectedListId:] */

uint FUN_10515a724(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined1 *)0x0) {
    uVar5 = 1;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar6 = *plStack_110;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = *(ulong *)(lStack_118 + (long)puVar7 * 8);
          func_0x00010c22d640();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          puVar4 = (undefined8 *)param_4;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((uVar3 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10515a82c;
          }
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        puVar1 = param_3;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    uVar5 = 1;
LAB_10515a82c:
    _objc_release(param_3);
    puVar7 = (undefined1 *)puVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar1 = puVar7;
  func_0x00010c0720c0(puVar7,param_2,&PTR____CFConstantStringClassReference_110dbb718);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = puVar7;
    func_0x00010c0720c0(puVar7,param_2,&PTR____CFConstantStringClassReference_110dbbaf8);
    uVar5 = (uint)puVar1 ^ 1;
  }
  else {
    uVar5 = 0;
  }
  _objc_release(puVar7);
  return uVar5;
}



/* Entry: 10515a888; end: 10515a8e7; -[SCSendToSharedCarouselController _selectAllListRecipientsEnabledWithShortcutId:] */

uint FUN_10515a888(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbb718);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbbaf8);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10515a8e8; end: 10515aaa7; -[SCSendToSharedCarouselController _handleShortcutSelectionWithIdentifier:forceSelection:logContext:] */

void FUN_10515a8e8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be9d700();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22d840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    uVar3 = uVar4;
    uStack_60 = param_4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10515aaa8; end: 10515aaff;  */

void FUN_10515aaa8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515ab00; end: 10515ad6b; -[SCSendToSharedCarouselController _toggleAllListRecipientsWithShortcuts:shortcutId:forceSelection:] */

void FUN_10515ab00(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **unaff_x25;
  long lVar8;
  long lVar9;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar7 = *(undefined ***)(lStack_128 + lVar9 * 8);
        unaff_x25 = ppuVar7;
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x25);
        if ((int)ppuVar2 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c22d6a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c268560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_initWeak(auStack_138,param_1);
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_10515ad6c;
          puStack_160 = &UNK_11086c530;
          unaff_x25 = &puStack_178;
          param_2 = auStack_138;
          _objc_copyWeak(auStack_148,param_2);
          _objc_retain(param_4);
          uVar4 = uVar5;
          uStack_158 = param_4;
          ppuStack_150 = ppuVar7;
          uStack_140 = param_5;
          func_0x00010c25ff60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(uVar4);
          _objc_release(uStack_158);
          _objc_destroyWeak(auStack_148);
          _objc_destroyWeak(auStack_138);
          _objc_release(uVar5);
          goto LAB_10515acf4;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_10515acf4:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x25 + 6);
    _objc_destroyWeak(auStack_138);
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar1 = param_3 + 0x30;
    _objc_loadWeakRetained(lVar1);
    puVar6 = param_2;
    func_0x00010c122f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c082600(*(undefined8 *)(param_3 + 0x28));
    func_0x00010becc960(lVar1);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10515ad6c; end: 10515adef;  */

void FUN_10515ad6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010c122f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c082600(*(undefined8 *)(param_1 + 0x28));
  func_0x00010becc960(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10515adf0; end: 10515b057; -[SCSendToSharedCarouselController _toggleAllListRecipientsWithShortcutRecipients:shortcutId:isContextual:forceSelection:] */

void FUN_10515adf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      func_0x00010c0c0000(uVar8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if ((puVar5 != (undefined *)0x0) ||
     (puVar5 = puVar3, func_0x00010bf529e0(), puVar5 != (undefined *)0x0)) {
    uVar8 = param_1;
    func_0x00010be9e260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becc9c0(param_1);
    _objc_release(uVar8);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 10515b058; end: 10515b073;  */

void FUN_10515b058(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 10515b074; end: 10515b1e3; -[SCSendToSharedCarouselController _toggleAllListRecipientsWithSnapchatterUserIds:groups:source:forceSelection:] */

void FUN_10515b074(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10515b1e4; end: 10515b23b;  */

void FUN_10515b1e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515b23c; end: 10515b3bf; -[SCSendToSharedCarouselController _setSelectionTrackerWithSnapchatters:groups:source:forceSelection:] */

void FUN_10515b23c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010901f964(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_105158bb0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = param_4;
  FUN_105158950(param_4,param_3,lVar4);
  if ((param_6 == 0) || ((uVar5 & 1) == 0)) {
    uVar6 = param_3;
    FUN_105158c64(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb980();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a6a0();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10515b3c0; end: 10515b673; -[SCSendToSharedCarouselController _selectionGroupsWithGroupIds:] */

void FUN_10515b3c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar12;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
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
  _objc_retain(param_3);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  puVar10 = param_3;
  func_0x00010bff4000();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010bf51e00();
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = param_3;
    puStack_138 = puVar1;
    if (lVar6 == 0) {
      lVar11 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = lVar11;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
    }
    else {
      _objc_retain(lVar6);
      unaff_x23 = lVar6;
    }
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar6 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = lVar6;
    func_0x00010bfc22c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(unaff_x24);
    puVar10 = &uStack_130;
    lVar6 = unaff_x24;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar4 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(unaff_x24);
          }
          uVar12 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          uVar7 = uVar12;
          func_0x00010bfceb20(uVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf4b900();
          _objc_release(uVar7);
          if ((int)puVar3 != 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010c2923e0(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108ef14b4(uVar12,uVar7,unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_138);
            _objc_release(uVar12);
            _objc_release(uVar7);
          }
          lVar11 = lVar11 + 1;
        } while (lVar6 != lVar11);
        puVar10 = &uStack_130;
        lVar6 = unaff_x24;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(unaff_x24);
    puVar1 = puStack_138;
    puVar5 = puStack_138;
    func_0x00010bf51e00();
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    param_3 = puStack_140;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_10515b674;
    lStack_180 = unaff_x24;
    lStack_178 = unaff_x23;
    puStack_170 = puVar5;
    puStack_168 = puVar2;
    puStack_160 = puVar1;
    puStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    _objc_initWeak(auStack_188,puVar8);
    puVar1 = puVar10;
    func_0x00010c15ab20(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf6d420();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_190,auStack_188);
    puVar5 = puVar9;
    func_0x00010c0b8600(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_190);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_188);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10515b674; end: 10515b7a3; -[SCSendToSharedCarouselController _mapSelectionTrackerToRecipientChanges:] */

void FUN_10515b674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c15ab20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6d420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10515b7a4; end: 10515ba37;  */

void FUN_10515b7a4(long param_1,long param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
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
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (*(undefined ***)(param_1 + 0xa8) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0xa8);
    }
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_2);
    param_3 = &uStack_130;
    lStack_138 = param_2;
    func_0x00010bf52a60();
    if (lStack_138 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_2);
          }
          uVar13 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          puVar3 = PTR_PTR_1126b5470;
          _objc_alloc(PTR_PTR_1126b5470);
          uVar4 = uVar13;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar13;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = param_2;
          func_0x00010c0e00e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          func_0x00010c03d4c0(puVar3);
          func_0x00010befa120(puVar2);
          _objc_release(puVar3);
          _objc_release(lVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar13);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          lVar12 = lVar12 + 1;
        } while (lStack_138 != lVar12);
        param_3 = &uStack_130;
        lStack_138 = param_2;
        func_0x00010bf52a60();
      } while (lStack_138 != 0);
    }
    _objc_release(param_2);
    puVar3 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  _objc_release();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    puVar10 = param_3;
    func_0x00010bf529e0();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar10 != (undefined8 *)0x0) {
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_10515bbc4;
      puStack_1c0 = &UNK_11086c5b0;
      puVar10 = param_3;
      lStack_1b8 = param_2;
      func_0x000100504554(param_3,&puStack_1d8);
      puVar2 = PTR_PTR_1126ae6b8;
      puStack_200 = puVar3;
      uStack_1f8 = 0xc2000000;
      pcStack_1f0 = FUN_10515bca0;
      puStack_1e8 = &UNK_11086c610;
      _objc_retain(param_3);
      puStack_1e0 = param_3;
      func_0x00010bf41860(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_208,param_2);
      _objc_copyWeak(auStack_210,auStack_208);
      puVar3 = puVar2;
      func_0x00010c25ff60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_210);
      _objc_destroyWeak(auStack_208);
      _objc_release(puVar2);
      _objc_release(puStack_1e0);
      _objc_release(puVar10);
    }
    _objc_release(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10515ba38; end: 10515bbc3; -[SCSendToSharedCarouselController _logShortcutsDataModelAsLists:] */

void FUN_10515ba38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10515bbc4;
    puStack_60 = &UNK_11086c5b0;
    lVar1 = param_3;
    uStack_58 = param_1;
    func_0x000100504554(param_3,&puStack_78);
    puVar2 = PTR_PTR_1126ae6b8;
    puStack_a0 = puVar3;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10515bca0;
    puStack_88 = &UNK_11086c610;
    _objc_retain(param_3);
    lStack_80 = param_3;
    func_0x00010bf41860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_a8,param_1);
    _objc_copyWeak(auStack_b0,auStack_a8);
    puVar3 = puVar2;
    func_0x00010c25ff60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puVar2);
    _objc_release(lStack_80);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10515bbc4; end: 10515bc9f;  */

void FUN_10515bbc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar5;
  func_0x00010c22d6a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10515bca0; end: 10515bd9b;  */

void FUN_10515bca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(param_2);
  func_0x00010bf97e80(uVar4);
  puVar3 = PTR_PTR_1126b5480;
  _objc_alloc(PTR_PTR_1126b5480);
  func_0x00010c05aba0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10515bd9c; end: 10515c0e7;  */

/* WARNING: Possible PIC construction at 0x00010515c044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010515c048) */
/* WARNING: Removing unreachable block (ram,0x00010515c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010515c0c8) */
/* WARNING: Removing unreachable block (ram,0x00010515c0e0) */
/* WARNING: Removing unreachable block (ram,0x00010515c094) */

void FUN_10515bd9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_88;
  
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar4 = lVar2;
  func_0x00010c122f00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0();
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(puVar3);
      _objc_retain(puVar5);
      func_0x00010c0c0000(uVar8);
      _objc_release(puVar5);
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b5478;
  _objc_alloc(PTR_PTR_1126b5478);
  uVar8 = param_2;
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026340(0,puVar3);
  _objc_release(uVar6);
  _objc_release(uVar8);
  func_0x00010c082600();
  lVar4 = 0x28;
  if ((int)param_2 == 0) {
    lVar4 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_addObject__11259c1f0,puVar3);
  return;
}



/* Entry: 10515c0e8; end: 10515c117;  */

void FUN_10515c0e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 10515c118; end: 10515c1eb;  */

void FUN_10515c118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c2921a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be300(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf4f760(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183680(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10515c1ec; end: 10515c31b; -[SCSendToSharedCarouselController .cxx_destruct] */

void FUN_10515c1ec(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
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



/* Entry: 10515c31c; end: 10515c38f; -[SCSendToSharedCarouselExtension initWithController:] */

undefined1 * FUN_10515c31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6770;
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



/* Entry: 10515c390; end: 10515c3b7; -[SCSendToSharedCarouselExtension headerBottomAccessoryViewUpdater] */

void FUN_10515c390(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10515c3b8; end: 10515c3c3; -[SCSendToSharedCarouselExtension .cxx_destruct] */

void FUN_10515c3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515c3c4; end: 10515c453; -[SCSendToListWrapperView initWithListPickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10515c3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e6778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271d938;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515c454; end: 10515c46f; -[SCSendToListWrapperView clearIntrinisicContentSizeCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515c454(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_11271d93c;
  uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  return;
}



/* Entry: 10515c470; end: 10515c4c7; -[SCSendToListWrapperView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515c470(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6778;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271d938));
  return;
}



/* Entry: 10515c4c8; end: 10515c53b; -[SCSendToListWrapperView intrinsicContentSize] */

/* WARNING: Possible PIC construction at 0x00010515c518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010515c51c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515c4c8(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  
  if ((*(byte *)(param_1 + _DAT_11271d940) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271d938);
  }
  else {
    dVar3 = ((double *)(param_1 + _DAT_11271d93c))[1];
    bVar1 = false;
    if ((*(double *)(param_1 + _DAT_11271d93c) == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(dVar3) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = dVar3 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar1) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271d938);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10515c53c; end: 10515c54b; -[SCSendToListWrapperView enableIntrinsicContentSizeCaching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10515c53c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271d940);
}



/* Entry: 10515c54c; end: 10515c55b; -[SCSendToListWrapperView setEnableIntrinsicContentSizeCaching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515c54c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271d940) = param_3;
  return;
}



/* Entry: 10515c55c; end: 10515c56f; -[SCSendToListWrapperView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515c55c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d938,0);
  return;
}



/* Entry: 10515c570; end: 10515c59b; +[SCGrapheneListsHeaderMetric singleTap] */

void FUN_10515c570(void)

{
  _objc_alloc(PTR_PTR_1126b5468);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515c59c; end: 10515c5c7; +[SCGrapheneListsHeaderMetric doubleTap] */

void FUN_10515c59c(void)

{
  _objc_alloc(PTR_PTR_1126b5468);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515c5c8; end: 10515c667; -[SCGrapheneListsHeaderMetric description] */

void FUN_10515c5c8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7818;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc7818,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e6780;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10515c668; end: 10515c7b3; -[SCGrapheneRegistry listsHeaderGraphene] */

void FUN_10515c668(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10515c6f0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9490 != -1) {
    func_0x00010002a2fc(0x1136b9490,&puStack_48);
  }
  uVar1 = uRam00000001136b9488;
  _objc_retain(uRam00000001136b9488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10515c7b4; end: 10515c85f; -[SCSendToListsAvailable initWithUserGenerated:contextual:] */

undefined1 *
FUN_10515c7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6788;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515c860; end: 10515c883; -[SCSendToListsAvailable copyWithZone:] */

undefined8 FUN_10515c860(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10515c884; end: 10515c8f7; -[SCSendToListsAvailable hash] */

undefined8 * FUN_10515c884(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10515c978:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10515c984;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10515c984;
        }
        goto LAB_10515c978;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10515c984:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10515c8f8; end: 10515c99f; -[SCSendToListsAvailable isEqual:] */

long FUN_10515c8f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10515c978:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10515c984;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10515c984;
        }
        goto LAB_10515c978;
      }
    }
    lVar3 = 0;
  }
LAB_10515c984:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10515c9a0; end: 10515c9a7; -[SCSendToListsAvailable userGenerated] */

undefined8 FUN_10515c9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


