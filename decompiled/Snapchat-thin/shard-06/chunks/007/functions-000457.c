/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cbcdbc; end: 104cbcdd3;  */

void FUN_104cbcdbc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae4b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae4b8,
                      &PTR____CFConstantStringClassReference_110dae4d8,0);
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



/* Entry: 104cbcdd4; end: 104cbd17f; -[SCNGOEmailEntryFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbcdd4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126aeff8;
  _objc_alloc();
  lVar13 = (long)_DAT_1127104fc;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c15f680();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar14);
  lVar6 = lVar14;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf64dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f400(puVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  lVar14 = (long)_DAT_112710500;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar9;
  _objc_release(uVar12);
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf4e080();
  _objc_release(lVar2);
  if (lVar4 == 3) {
    puVar10 = PTR_PTR_1126af000;
    _objc_alloc(PTR_PTR_1126af000);
    lVar2 = param_1 + _DAT_112710504;
    _objc_loadWeakRetained(lVar2);
    lVar7 = lVar2;
    func_0x00010c2970e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112710508;
    _objc_loadWeakRetained(lVar4);
    lVar3 = lVar4;
    func_0x00010bf9c540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffef00(puVar10);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar2);
    puVar11 = PTR_PTR_1126af008;
    func_0x00010c0f5460(PTR_PTR_1126af008);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010c263200(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126af010;
    _objc_alloc(PTR_PTR_1126af010);
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c150e00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11271050c;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c113f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c042460(puVar11);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(uVar12);
    param_1 = param_1 + lVar13;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    puVar10 = PTR_PTR_1126af018;
    _objc_alloc(PTR_PTR_1126af018);
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c150e00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112710510;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0423c0(puVar10);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(uVar12);
    puVar9 = (undefined *)(param_1 + lVar13);
    _objc_loadWeakRetained(puVar9);
    puVar11 = puVar9;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
  }
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cbd180; end: 104cbd25f; -[SCNGOEmailEntryFeatureEntryPoint end] */

void FUN_104cbd180(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104cbd208;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  puStack_50 = PTR_PTR_1126e3ae8;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cbd260; end: 104cbd263;  */

void FUN_104cbd260(void)

{
  return;
}



/* Entry: 104cbd264; end: 104cbd2cf; -[SCNGOEmailEntryFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbd264(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112710508);
  _objc_destroyWeak(param_1 + _DAT_112710504);
  _objc_destroyWeak(param_1 + _DAT_11271050c);
  _objc_destroyWeak(param_1 + _DAT_112710510);
  _objc_destroyWeak(param_1 + _DAT_1127104fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710500,0);
  return;
}



/* Entry: 104cbd2d0; end: 104cbd3e7; -[SCNGOEmailEntryBusinessLogic initWithEmail:service:delegate:datasource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cbd2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e3af0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112710514;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710518;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271051c),param_5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710520) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112710524),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cbd3e8; end: 104cbd523; -[SCNGOEmailEntryBusinessLogic handleAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbd3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112710528) = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104cbd524;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104cbd52c;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104cbd534;
  puStack_80 = &UNK_1108450c8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104cbd540;
  puStack_a8 = &UNK_1108450c8;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x104cbd54c;
  puStack_d0 = &UNK_110841f20;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104cbd558;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104cbd560;
  puStack_120 = &UNK_1108480c8;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_104cbd5b8;
  puStack_148 = &UNK_1108480f8;
  lStack_140 = param_1;
  lStack_118 = param_1;
  lStack_f0 = param_1;
  lStack_c8 = param_1;
  lStack_a0 = param_1;
  lStack_78 = param_1;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0c0600(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160);
  return;
}



/* Entry: 104cbd524; end: 104cbd55f;  */

void FUN_104cbd524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__emailSubmitted_11255f730);
  return;
}



/* Entry: 104cbd560; end: 104cbd5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbd560(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_11271051c;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8d920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cbd5b8; end: 104cbd5c3;  */

void FUN_104cbd5b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__selectLink__112585020,param_2);
  return;
}



/* Entry: 104cbd5c4; end: 104cbd64b; -[SCNGOEmailEntryBusinessLogic _selectLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbd5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271051c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf8d8c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cbd64c; end: 104cbd793; -[SCNGOEmailEntryBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbd64c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_PTR_1126af020;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112710514);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271052c);
  lVar4 = param_1;
  func_0x00010be34e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be34e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bdd99c0(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710530);
  uVar2 = *(undefined1 *)(param_1 + _DAT_112710528);
  func_0x00010beb5bc0();
  func_0x00010beb33e0();
  lVar7 = param_1;
  func_0x00010beb66c0();
  func_0x00010bde87e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f340(puVar3,param_2,uVar8,uVar9,lVar4,lVar5,lVar6,uVar1,uVar2,(char)lVar7,param_1);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cbd794; end: 104cbd80f; -[SCNGOEmailEntryBusinessLogic _shouldShowBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cbd794(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710524;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c233300();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 104cbd810; end: 104cbd88b; -[SCNGOEmailEntryBusinessLogic _shouldDisplayOneTLButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cbd810(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710524;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c22f280();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 104cbd88c; end: 104cbd907; -[SCNGOEmailEntryBusinessLogic _shouldShowSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cbd88c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710524;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c234520();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 104cbd908; end: 104cbd98b; -[SCNGOEmailEntryBusinessLogic _headerTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbd908(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710524;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfe0140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104cbd98c; end: 104cbda0f; -[SCNGOEmailEntryBusinessLogic _headerSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbd98c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710524;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfdffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104cbda10; end: 104cbdacb; -[SCNGOEmailEntryBusinessLogic _continueButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbda10(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710524;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010b75e3a4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf4fb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      func_0x00010b75e3a4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      uVar1 = uVar2;
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104cbdacc; end: 104cbdc5f; -[SCNGOEmailEntryBusinessLogic _emailSubmitted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbdacc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010be3f5e0();
  if ((int)lVar1 == 0) {
    func_0x000104cc30c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + _DAT_11271052c);
    *(long *)(param_1 + _DAT_11271052c) = lVar1;
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112710530) = 1;
    lVar2 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112710518);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104cbdc60;
    puStack_70 = &UNK_110848128;
    lStack_68 = lVar2;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010c25f0c0(uVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar2);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 104cbdc60; end: 104cbdd1f;  */

void FUN_104cbdc60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cbdd20;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104cbdd20; end: 104cbdd53;  */

void FUN_104cbdd20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be07620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cbdd54; end: 104cbde13;  */

void FUN_104cbdd54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cbde14;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104cbde14; end: 104cbde47;  */

void FUN_104cbde14(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be07600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cbde48; end: 104cbdeff; -[SCNGOEmailEntryBusinessLogic _emailSubmitSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbde48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + _DAT_112710530) = 0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126af028;
  _objc_alloc(PTR_PTR_1126af028);
  func_0x00010c03fb20();
  _objc_release(param_3);
  param_1 = param_1 + _DAT_11271051c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf8d820();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cbdf00; end: 104cbdfef; -[SCNGOEmailEntryBusinessLogic _emailSubmitFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbdf00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112710530) = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104cbdfb4;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104cbdff0;
  puStack_58 = &UNK_110848188;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0bfae0(param_3,param_2,&puStack_48,&puStack_70);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 104cbdff0; end: 104cbe08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbdff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271052c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271052c) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11271051c;
  _objc_loadWeakRetained(lVar1);
  _objc_release(param_2);
  func_0x00010bf8d800(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cbe090; end: 104cbe0c3; -[SCNGOEmailEntryBusinessLogic _exit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe090(long param_1)

{
  param_1 = param_1 + _DAT_11271051c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf8d7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cbe0c4; end: 104cbe103; -[SCNGOEmailEntryBusinessLogic _1TLCheckboxToggled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe0c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112710520) = param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cbe104; end: 104cbe17b; -[SCNGOEmailEntryBusinessLogic _switchButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe104(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271051c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf8d940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104cbe17c; end: 104cbe2eb; -[SCNGOEmailEntryBusinessLogic _emailDomainUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe17c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + _DAT_112710514);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d0a0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + _DAT_112710528) = 1;
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    lVar2 = lVar4;
    func_0x00010c11f420(lVar4,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
    if (lVar2 == 0x7fffffffffffffff) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dae518);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = lVar4;
      func_0x00010c260c20(lVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        *(undefined1 *)(param_1 + _DAT_112710528) = 1;
      }
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dae518);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
  }
  func_0x00010be07660(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cbe2ec; end: 104cbe3bf; -[SCNGOEmailEntryBusinessLogic _emailUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112710514;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271052c);
  *(undefined8 *)(param_1 + _DAT_11271052c) = 0;
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11271051c;
  uVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf8d960();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cbe3c0; end: 104cbe413; -[SCNGOEmailEntryBusinessLogic _canContinue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cbe3c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271052c);
  func_0x00010c08fa60();
  if ((lVar1 == 0) && ((*(byte *)(param_1 + _DAT_112710530) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be3f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCurrentEmailValid_11256d718);
    return param_1;
  }
  return 0;
}



/* Entry: 104cbe414; end: 104cbe4bb; -[SCNGOEmailEntryBusinessLogic _isCurrentEmailValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104cbe414(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271051c;
  uVar2 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  iVar1 = _DAT_112710514;
  if ((uVar3 & 1) != 0) {
    uVar2 = param_1 + lVar5;
    _objc_loadWeakRetained();
    iVar1 = _DAT_112710514;
    uVar3 = uVar2;
    func_0x00010bf8d900();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      return (undefined *)0x1;
    }
  }
  puVar4 = PTR_PTR_1126af038;
                    /* WARNING: Could not recover jumptable at 0x00010c2967b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af038,PTR_s_validate__112683410,*(undefined8 *)(param_1 + iVar1));
  return puVar4;
}



/* Entry: 104cbe4bc; end: 104cbe523; -[SCNGOEmailEntryBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe4bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112710524);
  _objc_storeStrong(param_1 + _DAT_11271052c,0);
  _objc_storeStrong(param_1 + _DAT_112710514,0);
  _objc_destroyWeak(param_1 + _DAT_11271051c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710518,0);
  return;
}



/* Entry: 104cbe524; end: 104cbe617; -[SCNGOEmailEntryLoginViewController initWithScreen:privacyPolicyViewFactory:oAuthTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cbe524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3af8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112710534;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710538;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271053c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cbe618; end: 104cbe61f; -[SCNGOEmailEntryLoginViewController pageViewName] */

undefined8 FUN_104cbe618(void)

{
  return 0x59;
}



/* Entry: 104cbe620; end: 104cbe627; -[SCNGOEmailEntryLoginViewController prefersStatusBarHidden] */

undefined8 FUN_104cbe620(void)

{
  return 1;
}



/* Entry: 104cbe628; end: 104cbe6d7; -[SCNGOEmailEntryLoginViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe628(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710534);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cbe6d8; end: 104cbe71f;  */

void FUN_104cbe6d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cbe720; end: 104cbea0f; -[SCNGOEmailEntryLoginViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbe720(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112710540;
  uVar2 = *(ulong *)(param_1 + lVar6);
  func_0x00010c071ae0(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112710544);
    uVar2 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288720(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf2c700();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c09cb40();
      bVar1 = (uVar2 & 1) != 0;
      bVar5 = !bVar1;
      uVar3 = 0xd5;
      if (!bVar1) {
        uVar3 = 0xd4;
      }
      uVar7 = 0xd4;
      if (!bVar1) {
        uVar7 = 0xd5;
      }
    }
    else {
      bVar5 = false;
      bVar1 = true;
      uVar7 = 0xd4;
      uVar3 = 0xd5;
    }
    lVar6 = (long)_DAT_112710548;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,bVar5);
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_11271054c),param_2,bVar1);
    lVar9 = (long)_DAT_112710550;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar8,param_2,puVar4);
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar3,param_2,puVar4,0);
    _objc_release(puVar4);
    uVar2 = param_3;
    func_0x00010c09cb40(param_3);
    func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
    uVar2 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112710554;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010bf98d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)puVar4 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710558),param_2,1);
      lVar9 = (long)_DAT_11271055c;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,0);
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      uVar2 = param_3;
      func_0x00010bf98d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099980(uVar3,param_2,uVar2);
      _objc_release(uVar2);
      uVar3 = 0xc2;
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710558),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271055c),param_2,1);
      uVar2 = param_3;
      func_0x00010bf2c700();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_3;
        func_0x00010c09cb40();
        uVar3 = 0xe2;
        if ((int)uVar2 != 0) {
          uVar3 = 0xe3;
        }
      }
      else {
        uVar3 = 0xe3;
      }
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cbea10; end: 104cbea5f; -[SCNGOEmailEntryLoginViewController viewDidLoad] */

void FUN_104cbea10(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3af8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0d80(param_1);
  func_0x00010beae7a0(param_1);
  return;
}



/* Entry: 104cbea60; end: 104cbeafb; -[SCNGOEmailEntryLoginViewController _setupObserver] */

void FUN_104cbea60(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cbeafc; end: 104cbeb3b; -[SCNGOEmailEntryLoginViewController _keyboardWillHide:] */

/* WARNING: Possible PIC construction at 0x000104cbeb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cbeb24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbeafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112710544),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 104cbeb3c; end: 104cbeb7b; -[SCNGOEmailEntryLoginViewController _keyboardWillShow:] */

/* WARNING: Possible PIC construction at 0x000104cbeb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cbeb64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbeb3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112710544),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 104cbeb7c; end: 104cbebd7; -[SCNGOEmailEntryLoginViewController _setupUI] */

void FUN_104cbeb7c(undefined8 param_1)

{
  func_0x00010beaadc0();
  func_0x00010beae680(param_1);
  func_0x00010beabca0(param_1);
  func_0x00010beafc40(param_1);
  func_0x00010beac4e0(param_1);
  func_0x00010beaefa0(param_1);
  func_0x00010bdc7320(param_1);
  func_0x00010beac6a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 104cbebd8; end: 104cbefc3; -[SCNGOEmailEntryLoginViewController _setupBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbebd8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 **ppuStack_420;
  code *pcStack_418;
  undefined8 uStack_408;
  undefined *puStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 **ppuStack_360;
  code *pcStack_358;
  undefined *puStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c20eaa0(param_1,param_2,2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf14800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6de0();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar26 = (long)_DAT_112710564;
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26),param_2,0);
  puVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = *(undefined **)(param_1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_a0 = puVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  func_0x00010bf493a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  puStack_b0 = puVar2;
  puStack_90 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  uStack_c0 = uVar24;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  func_0x00010bf493a0(uVar24,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + lVar26);
  uStack_d0 = uVar24;
  uStack_88 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_e8 = puVar3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  func_0x00010bf493a0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + lVar26);
  puStack_80 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = *(undefined **)(param_1 + lVar26);
  puStack_78 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_f0);
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_release(uStack_d0);
  _objc_release(puStack_c8);
  _objc_release(puStack_b8);
  _objc_release(uStack_c0);
  _objc_release(puStack_b0);
  _objc_release(puStack_a8);
  _objc_release(puStack_98);
  puVar12 = puStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_104cbefc4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = (undefined *)(long)_DAT_11271053c;
  lVar26 = *(long *)(puVar12 + (long)puVar25);
  puStack_150 = puVar6;
  puStack_148 = puVar5;
  puStack_140 = puVar10;
  puStack_138 = puVar2;
  puStack_130 = puVar1;
  puStack_128 = puVar4;
  puStack_120 = puVar3;
  puStack_118 = puVar11;
  puStack_110 = param_1;
  puStack_108 = puVar7;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010bf529e0();
  puVar7 = (undefined *)0x0;
  if (lVar26 != 0) {
    puVar1 = PTR_PTR_1126af040;
    _objc_alloc();
    func_0x00010c046520();
    puVar2 = PTR_PTR_1126af048;
    puStack_198 = puVar1;
    _objc_alloc();
    func_0x00010c0306a0();
    lVar26 = (long)_DAT_112710568;
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    *(undefined **)(puVar12 + lVar26) = puVar2;
    _objc_release(uVar24);
    func_0x00010c20eaa0(*(undefined8 *)(puVar12 + lVar26),param_2,0);
    func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar26),param_2,0);
    puVar1 = puVar12;
    func_0x00010c29bf00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    uStack_1b0 = uVar24;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar1;
    func_0x00010bf493c0(0x4030000000000000,uVar24,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar12 + lVar26);
    uStack_1c0 = uVar24;
    lStack_1a0 = lVar26;
    uStack_170 = uVar24;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    uStack_1d0 = uVar8;
    func_0x00010c29bf00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc030000000000000,uVar8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar12 + lVar26);
    uStack_168 = uVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010c29bf00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar9;
    func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_160 = uVar24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_170,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar24);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1a8);
    _objc_release(uStack_1b0);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_opt_new();
    lVar26 = (long)_DAT_112710550;
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    *(undefined **)(puVar12 + lVar26) = puVar1;
    _objc_release(uVar24);
    uVar9 = *(undefined8 *)(puVar12 + lVar26);
    func_0x00010c271420(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar9;
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar24;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar9,param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar24);
    _objc_release(uVar9);
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar24,param_2,puVar1);
    _objc_release(puVar1);
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar24,param_2,puVar1,0);
    _objc_release(puVar1);
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    func_0x00010c08c0e0(uVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x403a000000000000);
    _objc_release(uVar24);
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    func_0x00010c08c0e0(uVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar24);
    uVar8 = *(undefined8 *)(puVar12 + lVar26);
    func_0x000104cc30f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar8,param_2,uVar24,0);
    _objc_release(uVar24);
    func_0x00010befbd60(*(undefined8 *)(puVar12 + lVar26),param_2,puVar12,PTR_s__usePhone_112525b48,
                        0x40);
    puVar1 = puVar12;
    func_0x00010c29bf00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar26),param_2,0);
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)(puVar12 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    uStack_1b0 = uVar24;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar1;
    func_0x00010bf493c0(0x4030000000000000,uVar24,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = *(undefined **)(puVar12 + lVar26);
    uStack_1c0 = uVar24;
    uStack_190 = uVar24;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar2;
    func_0x00010bf493c0(0xc030000000000000,puVar2,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(puVar12 + lVar26);
    puStack_188 = puVar25;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = *(undefined **)(puVar12 + lStack_1a0);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010bf493c0(0xc030000000000000,puVar10,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = *(undefined **)(puVar12 + lVar26);
    puStack_180 = puVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010bf49420(0x404a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_178 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_190,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar3);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar25);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1a8);
    _objc_release(uStack_1b0);
    puVar7 = puStack_198;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_104cbf630;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR_PTR_1126aec40;
  puStack_230 = puVar6;
  puStack_228 = puVar5;
  puStack_220 = puVar10;
  puStack_218 = puVar2;
  puStack_210 = puVar1;
  puStack_208 = puVar4;
  puStack_200 = puVar3;
  puStack_1f8 = puVar11;
  puStack_1f0 = puVar12;
  puStack_1e8 = puVar25;
  ppuStack_1e0 = &puStack_100;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710548;
  uVar24 = *(undefined8 *)(puVar7 + lVar26);
  *(undefined **)(puVar7 + lVar26) = puVar13;
  _objc_release(uVar24);
  func_0x00010c16e480(*(undefined8 *)(puVar7 + lVar26),param_2,0xd4,0);
  uVar24 = *(undefined8 *)(puVar7 + lVar26);
  func_0x00010c216380(uVar24,param_2,0xd5,0);
  uVar8 = *(undefined8 *)(puVar7 + lVar26);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar8,param_2,uVar24,0);
  _objc_release(uVar24);
  func_0x00010befbd60(*(undefined8 *)(puVar7 + lVar26),param_2,puVar7,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  puVar1 = puVar7;
  func_0x00010c29bf00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(puVar7 + lVar26),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(puVar7 + lVar26),param_2,1);
  puStack_2a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar24 = *(undefined8 *)(puVar7 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  lStack_280 = uVar24;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_278 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_288 = puVar1;
  func_0x00010bf493c0(0x4030000000000000,uVar24,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar7 + lVar26);
  puStack_290 = (undefined *)uVar24;
  uStack_258 = uVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  uStack_2a0 = uVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_298 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b0 = puVar1;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar7 + lVar26);
  uStack_250 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c29bf00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar14;
  func_0x00010bf49520(0xc047000000000000,uVar14,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar7 + lVar26);
  uStack_248 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar7 + _DAT_112710550);
  func_0x00010c274200(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf49520(0xc030000000000000,uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_240 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_258,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2a8,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar24);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(puStack_2b0);
  _objc_release(puStack_298);
  _objc_release(uStack_2a0);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(puStack_278);
  _objc_release(lStack_280);
  puVar1 = PTR_PTR_1126af050;
  _objc_alloc();
  func_0x00010c030dc0();
  lVar26 = (long)_DAT_112710544;
  uVar24 = *(undefined8 *)(puVar7 + lVar26);
  *(undefined **)(puVar7 + lVar26) = puVar1;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(puVar7 + lVar26),param_2,0);
  puVar1 = puVar7;
  func_0x00010c29bf00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puStack_290 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)(puVar7 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  lStack_280 = lVar17;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_278 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_288 = puVar1;
  func_0x00010bf493a0(lVar17,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar7 + lVar26);
  lStack_270 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar7 + lVar26);
  uStack_268 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar14;
  func_0x00010bf493c0(0xc020000000000000,uVar14,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_260 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_270,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_290,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar24);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(lVar17);
  _objc_release(puStack_288);
  _objc_release(puStack_278);
  lVar26 = lStack_280;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_104cbfb90;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___UIButton_1126aec48;
  uStack_310 = uVar8;
  puStack_308 = puVar6;
  puStack_300 = puVar1;
  uStack_2f8 = uVar14;
  uStack_2f0 = uVar9;
  lStack_2e8 = lVar17;
  puStack_2e0 = puVar10;
  uStack_2d8 = uVar24;
  puStack_2d0 = puVar2;
  puStack_2c8 = puVar7;
  ppuStack_2c0 = &ppuStack_1e0;
  _objc_opt_new();
  lVar29 = (long)_DAT_112710560;
  uVar24 = *(undefined8 *)(lVar26 + lVar29);
  *(undefined **)(lVar26 + lVar29) = puVar11;
  _objc_release(uVar24);
  uVar9 = *(undefined8 *)(lVar26 + lVar29);
  func_0x00010c271420(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar9;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar24;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar9,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar24);
  _objc_release(uVar9);
  uVar24 = *(undefined8 *)(lVar26 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar24,param_2,puVar1);
  _objc_release(puVar1);
  uVar24 = *(undefined8 *)(lVar26 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar24,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar24 = *(undefined8 *)(lVar26 + lVar29);
  func_0x000104cc3108();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar24,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar26 + lVar29),param_2,lVar26,
                      PTR_s__signInAnotherWayButtonTapped_112525b50,0x40);
  lVar17 = lVar26;
  func_0x00010c29bf00(lVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar29),param_2,0);
  uVar8 = *(undefined8 *)(lVar26 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar26 + _DAT_112710548);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar8;
  func_0x00010bf49520(0xc020000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar26 + _DAT_11271054c);
  *(undefined8 *)(lVar26 + _DAT_11271054c) = uVar24;
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  puStack_348 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = *(long *)(lVar26 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar26;
  lStack_340 = lVar18;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4030000000000000,lVar18,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar26 + lVar29);
  lStack_330 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar26;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar9;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar26 + lVar29);
  uStack_328 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar26 + _DAT_112710544);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf49520(0xc030000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_320 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_330,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_348,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar24);
  _objc_release(lVar28);
  _objc_release(lVar19);
  _objc_release(uVar9);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lStack_338);
  lVar26 = lStack_340;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_104cbff68;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126af058;
  uStack_3b0 = uVar24;
  lStack_3a8 = lVar28;
  lStack_3a0 = lVar19;
  uStack_398 = uVar14;
  uStack_390 = uVar9;
  lStack_388 = lVar18;
  lStack_380 = lVar17;
  puStack_378 = puVar1;
  uStack_370 = uVar8;
  uStack_368 = uVar15;
  ppuStack_360 = &ppuStack_2c0;
  _objc_opt_new();
  lVar28 = (long)_DAT_11271055c;
  uVar24 = *(undefined8 *)(lVar26 + lVar28);
  *(undefined **)(lVar26 + lVar28) = puVar2;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar26 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar26 + lVar28),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar28),param_2,0);
  lVar18 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar18),param_2,*(undefined8 *)(lVar26 + lVar28));
  puStack_400 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar19 = *(long *)(lVar26 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar26;
  lStack_3e8 = lVar19;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_3e0 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_3f0 = lVar17;
  func_0x00010bf493c0(0x4030000000000000,lVar19,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar26 + lVar28);
  lStack_3f8 = lVar19;
  lStack_3d8 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar26;
  uStack_408 = uVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar26 + lVar28);
  uStack_3d0 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar26 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar14;
  func_0x00010bf493c0(0x4020000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar26 + lVar18);
  uStack_3c8 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar26 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010bf49460(uVar16,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_3c0 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_3d8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_400,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar20);
  _objc_release(uVar16);
  _objc_release(uVar24);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(uStack_408);
  _objc_release(lStack_3f8);
  _objc_release(lStack_3f0);
  _objc_release(lStack_3e0);
  lVar26 = lStack_3e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_418 = FUN_104cc0284;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = *(undefined8 *)(lVar26 + _DAT_112710538);
  uStack_470 = uVar9;
  lStack_468 = lVar19;
  uStack_460 = uVar14;
  lStack_458 = lVar17;
  puStack_450 = puVar1;
  uStack_448 = uVar8;
  uStack_440 = uVar16;
  uStack_438 = uVar24;
  uStack_430 = uVar20;
  uStack_428 = uVar15;
  ppuStack_420 = &ppuStack_360;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar21;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710558;
  uVar8 = *(undefined8 *)(lVar26 + lVar27);
  *(undefined8 *)(lVar26 + lVar27) = uVar24;
  _objc_release(uVar8);
  _objc_release(uVar21);
  lVar29 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar29),param_2,*(undefined8 *)(lVar26 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(lVar26 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar26;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar15;
  func_0x00010bf493c0(0x4030000000000000,uVar15,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar26 + lVar27);
  uStack_498 = uVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar26;
  func_0x00010c29bf00(lVar26);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010bf493c0(0xc030000000000000,uVar16,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar26 + lVar27);
  uStack_490 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar26 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar20;
  func_0x00010bf493c0(0x4020000000000000,uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar26 + lVar29);
  uStack_488 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar26 + lVar27);
  func_0x00010bf1ff80(uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar22;
  func_0x00010bf493a0(uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_480 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_498,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar9);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar8);
  _objc_release(lVar18);
  _objc_release(lVar28);
  _objc_release(uVar16);
  _objc_release(uVar24);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(uVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x402c000000000000,0x404a000000000000);
  func_0x00010c1ba3a0(puVar1,param_2,puVar2);
  func_0x00010c1ba3c0(puVar1,param_2,3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cbefc4; end: 104cbf62f; -[SCNGOEmailEntryLoginViewController _setupOAuthListViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbefc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 unaff_x21;
  long lVar20;
  undefined8 unaff_x22;
  long lVar21;
  long unaff_x23;
  long lVar22;
  undefined *unaff_x24;
  long unaff_x25;
  long lVar23;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 **ppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined *puStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_11271053c;
  lVar1 = *(long *)(param_1 + lVar19);
  func_0x00010bf529e0();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126af040;
    _objc_alloc();
    func_0x00010c046520();
    puVar3 = PTR_PTR_1126af048;
    puStack_a8 = puVar2;
    _objc_alloc();
    func_0x00010c0306a0();
    lVar20 = (long)_DAT_112710568;
    uVar18 = *(undefined8 *)(param_1 + lVar20);
    *(undefined **)(param_1 + lVar20) = puVar3;
    _objc_release(uVar18);
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar20),param_2,0);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
    lVar19 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar19);
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    uStack_c0 = uVar18;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_b8 = lVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar19;
    func_0x00010bf493c0(0x4030000000000000,uVar18,param_2,lVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar20);
    uStack_d0 = uVar18;
    lStack_b0 = lVar20;
    uStack_80 = uVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    uStack_e0 = uVar4;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc030000000000000,uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar20);
    uStack_78 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar20;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar5;
    func_0x00010bf493c0(0xc030000000000000,uVar5,param_2,lVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d8,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar18);
    _objc_release(lVar13);
    _objc_release(lVar22);
    _objc_release(lVar20);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(lVar19);
    _objc_release(uStack_e0);
    _objc_release(uStack_d0);
    _objc_release(lStack_c8);
    _objc_release(lStack_b8);
    _objc_release(uStack_c0);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_opt_new();
    lVar1 = (long)_DAT_112710550;
    uVar18 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar2;
    _objc_release(uVar18);
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c271420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar5;
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar18;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar5,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar18);
    _objc_release(uVar5);
    uVar18 = *(undefined8 *)(param_1 + lVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar18,param_2,puVar2);
    _objc_release(puVar2);
    uVar18 = *(undefined8 *)(param_1 + lVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar18,param_2,puVar2,0);
    _objc_release(puVar2);
    uVar18 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x403a000000000000);
    _objc_release(uVar18);
    uVar18 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar18);
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x000104cc30f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar4,param_2,uVar18,0);
    _objc_release(uVar18);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar1),param_2,param_1,PTR_s__usePhone_112525b48,
                        0x40);
    lVar19 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar19);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar1),param_2,0);
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    uStack_c0 = uVar18;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_b8 = lVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar19;
    func_0x00010bf493c0(0x4030000000000000,uVar18,param_2,lVar19);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = *(long *)(param_1 + lVar1);
    uStack_d0 = uVar18;
    uStack_a0 = uVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = unaff_x25;
    func_0x00010bf493c0(0xc030000000000000,unaff_x25,param_2,unaff_x28);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = *(undefined8 *)(param_1 + lVar1);
    lStack_98 = lVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = *(undefined8 *)(param_1 + lStack_b0);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x26;
    func_0x00010bf493c0(0xc030000000000000,unaff_x26,param_2,unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(param_1 + lVar1);
    uStack_90 = unaff_x22;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_1;
    func_0x00010bf49420(0x404a000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = unaff_x23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d8,param_2,unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(param_1);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x26);
    _objc_release(lVar19);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x25);
    _objc_release(uStack_d0);
    _objc_release(lStack_c8);
    _objc_release(lStack_b8);
    _objc_release(uStack_c0);
    puVar2 = puStack_a8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_104cbf630;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aec40;
  lStack_140 = unaff_x28;
  lStack_138 = unaff_x27;
  uStack_130 = unaff_x26;
  lStack_128 = unaff_x25;
  puStack_120 = unaff_x24;
  lStack_118 = unaff_x23;
  uStack_110 = unaff_x22;
  uStack_108 = unaff_x21;
  lStack_100 = param_1;
  lStack_f8 = lVar19;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112710548;
  uVar18 = *(undefined8 *)(puVar2 + lVar19);
  *(undefined **)(puVar2 + lVar19) = puVar3;
  _objc_release(uVar18);
  func_0x00010c16e480(*(undefined8 *)(puVar2 + lVar19),param_2,0xd4,0);
  uVar18 = *(undefined8 *)(puVar2 + lVar19);
  func_0x00010c216380(uVar18,param_2,0xd5,0);
  uVar4 = *(undefined8 *)(puVar2 + lVar19);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4,param_2,uVar18,0);
  _objc_release(uVar18);
  func_0x00010befbd60(*(undefined8 *)(puVar2 + lVar19),param_2,puVar2,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  puVar3 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar3);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar19),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar19),param_2,1);
  puStack_1b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar18 = *(undefined8 *)(puVar2 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  lStack_190 = uVar18;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar3;
  func_0x00010bf493c0(0x4030000000000000,uVar18,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar2 + lVar19);
  puStack_1a0 = (undefined *)uVar18;
  uStack_168 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uStack_1b0 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar3;
  func_0x00010bf493c0(0xc030000000000000,uVar5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar2 + lVar19);
  uStack_160 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar6;
  func_0x00010bf49520(0xc047000000000000,uVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + lVar19);
  uStack_158 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + _DAT_112710550);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49520(0xc030000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_150 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_168,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1b8,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar18);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puStack_188);
  _objc_release(lStack_190);
  puVar3 = PTR_PTR_1126af050;
  _objc_alloc();
  func_0x00010c030dc0();
  lVar19 = (long)_DAT_112710544;
  uVar18 = *(undefined8 *)(puVar2 + lVar19);
  *(undefined **)(puVar2 + lVar19) = puVar3;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar19),param_2,0);
  puVar3 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar3);
  puStack_1a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(puVar2 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  lStack_190 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar3;
  func_0x00010bf493a0(lVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar2 + lVar19);
  lStack_180 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar2 + lVar19);
  uStack_178 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493c0(0xc020000000000000,uVar6,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_170 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_180,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a0,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(puStack_198);
  _objc_release(puStack_188);
  lVar19 = lStack_190;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_104cbfb90;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIButton_1126aec48;
  uStack_220 = uVar18;
  puStack_218 = puVar10;
  puStack_210 = puVar3;
  uStack_208 = uVar6;
  uStack_200 = uVar5;
  lStack_1f8 = lVar1;
  puStack_1f0 = puVar7;
  uStack_1e8 = uVar4;
  puStack_1e0 = puVar11;
  puStack_1d8 = puVar2;
  ppuStack_1d0 = &puStack_f0;
  _objc_opt_new();
  lVar23 = (long)_DAT_112710560;
  uVar18 = *(undefined8 *)(lVar19 + lVar23);
  *(undefined **)(lVar19 + lVar23) = puVar12;
  _objc_release(uVar18);
  uVar5 = *(undefined8 *)(lVar19 + lVar23);
  func_0x00010c271420(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar5;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar18;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar18);
  _objc_release(uVar5);
  uVar18 = *(undefined8 *)(lVar19 + lVar23);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar18,param_2,puVar2);
  _objc_release(puVar2);
  uVar18 = *(undefined8 *)(lVar19 + lVar23);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar18,param_2,puVar2,0);
  _objc_release(puVar2);
  uVar18 = *(undefined8 *)(lVar19 + lVar23);
  func_0x000104cc3108();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar18,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(lVar19 + lVar23),param_2,lVar19,
                      PTR_s__signInAnotherWayButtonTapped_112525b50,0x40);
  lVar1 = lVar19;
  func_0x00010c29bf00(lVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar19 + lVar23),param_2,0);
  uVar4 = *(undefined8 *)(lVar19 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar19 + _DAT_112710548);
  func_0x00010c274200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf49520(0xc020000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar19 + _DAT_11271054c);
  *(undefined8 *)(lVar19 + _DAT_11271054c) = uVar18;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puStack_258 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = *(long *)(lVar19 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  lStack_250 = lVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4030000000000000,lVar13,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar19 + lVar23);
  lStack_240 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar5;
  func_0x00010bf493c0(0xc030000000000000,uVar5,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar19 + lVar23);
  uStack_238 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar19 + _DAT_112710544);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf49520(0xc030000000000000,uVar6,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_230 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_240,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_258,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(lVar22);
  _objc_release(lVar20);
  _objc_release(uVar5);
  _objc_release(lVar13);
  _objc_release(lVar1);
  _objc_release(lStack_248);
  lVar19 = lStack_250;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_104cbff68;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126af058;
  uStack_2c0 = uVar18;
  lStack_2b8 = lVar22;
  lStack_2b0 = lVar20;
  uStack_2a8 = uVar6;
  uStack_2a0 = uVar5;
  lStack_298 = lVar13;
  lStack_290 = lVar1;
  puStack_288 = puVar2;
  uStack_280 = uVar4;
  uStack_278 = uVar8;
  ppuStack_270 = &ppuStack_1d0;
  _objc_opt_new();
  lVar22 = (long)_DAT_11271055c;
  uVar18 = *(undefined8 *)(lVar19 + lVar22);
  *(undefined **)(lVar19 + lVar22) = puVar3;
  _objc_release(uVar18);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar19 + lVar22),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar19 + lVar22),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(lVar19 + lVar22),param_2,0);
  lVar13 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar19 + lVar13),param_2,*(undefined8 *)(lVar19 + lVar22));
  puStack_310 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = *(long *)(lVar19 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  lStack_2f8 = lVar20;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_2f0 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_300 = lVar1;
  func_0x00010bf493c0(0x4030000000000000,lVar20,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar19 + lVar22);
  lStack_308 = lVar20;
  lStack_2e8 = lVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  uStack_318 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar5,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar19 + lVar22);
  uStack_2e0 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar19 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar6;
  func_0x00010bf493c0(0x4020000000000000,uVar6,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar19 + lVar13);
  uStack_2d8 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar19 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf49460(uVar9,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2d0 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_2e8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_310,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar20);
  _objc_release(lVar1);
  _objc_release(uStack_318);
  _objc_release(lStack_308);
  _objc_release(lStack_300);
  _objc_release(lStack_2f0);
  lVar19 = lStack_2f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_104cc0284;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(undefined8 *)(lVar19 + _DAT_112710538);
  uStack_380 = uVar5;
  lStack_378 = lVar20;
  uStack_370 = uVar6;
  lStack_368 = lVar1;
  puStack_360 = puVar2;
  uStack_358 = uVar4;
  uStack_350 = uVar9;
  uStack_348 = uVar18;
  uStack_340 = uVar14;
  uStack_338 = uVar8;
  ppuStack_330 = &ppuStack_270;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112710558;
  uVar4 = *(undefined8 *)(lVar19 + lVar21);
  *(undefined8 *)(lVar19 + lVar21) = uVar18;
  _objc_release(uVar4);
  _objc_release(uVar15);
  lVar23 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar19 + lVar23),param_2,*(undefined8 *)(lVar19 + lVar21));
  func_0x00010c219b60(*(undefined8 *)(lVar19 + lVar21),param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(lVar19 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar8;
  func_0x00010bf493c0(0x4030000000000000,uVar8,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar19 + lVar21);
  uStack_3a8 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar19;
  func_0x00010c29bf00(lVar19);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar19 + lVar21);
  uStack_3a0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar19 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010bf493c0(0x4020000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar19 + lVar23);
  uStack_398 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar19 + lVar21);
  func_0x00010bf1ff80(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_390 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_3a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(lVar13);
  _objc_release(lVar22);
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(lVar20);
  _objc_release(lVar1);
  _objc_release(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x402c000000000000,0x404a000000000000);
  func_0x00010c1ba3a0(puVar2,param_2,puVar3);
  func_0x00010c1ba3c0(puVar2,param_2,3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cbf630; end: 104cbfb8f; -[SCNGOEmailEntryLoginViewController _setupContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbf630(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112710548;
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar13);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar17),param_2,0xd4,0);
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c216380(uVar13,param_2,0xd5,0);
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar14,param_2,uVar13,0);
  _objc_release(uVar13);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar17),param_2,param_1,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar17),param_2,1);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_b0 = uVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar2;
  func_0x00010bf493c0(0x4030000000000000,uVar13,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  puStack_c0 = (undefined *)uVar13;
  uStack_88 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d0 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf49520(0xc047000000000000,uVar4,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112710550);
  func_0x00010c274200(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bf49520(0xc030000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_e0);
  _objc_release(lStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_c0);
  _objc_release(lStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_b0);
  puVar1 = PTR_PTR_1126af050;
  _objc_alloc();
  func_0x00010c030dc0();
  lVar15 = (long)_DAT_112710544;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar7 = *(long *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_b0 = lVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar2;
  func_0x00010bf493a0(lVar7,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  lStack_a0 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493c0(0xc020000000000000,uVar4,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar7);
  _objc_release(lStack_b8);
  _objc_release(lStack_a8);
  lVar15 = lStack_b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_104cbfb90;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
  uStack_140 = uVar13;
  lStack_138 = lVar17;
  lStack_130 = lVar2;
  uStack_128 = uVar4;
  uStack_120 = uVar3;
  lStack_118 = lVar7;
  puStack_110 = puVar1;
  uStack_108 = uVar14;
  lStack_100 = lVar18;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar19 = (long)_DAT_112710560;
  uVar13 = *(undefined8 *)(lVar15 + lVar19);
  *(undefined **)(lVar15 + lVar19) = puVar8;
  _objc_release(uVar13);
  uVar3 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar3,param_2,uVar14);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar3);
  uVar13 = *(undefined8 *)(lVar15 + lVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar13,param_2,puVar1);
  _objc_release(puVar1);
  uVar13 = *(undefined8 *)(lVar15 + lVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar13,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar13 = *(undefined8 *)(lVar15 + lVar19);
  func_0x000104cc3108();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar13,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar15 + lVar19),param_2,lVar15,
                      PTR_s__signInAnotherWayButtonTapped_112525b50,0x40);
  lVar2 = lVar15;
  func_0x00010c29bf00(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(lVar15 + lVar19),param_2,0);
  uVar14 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar15 + _DAT_112710548);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010bf49520(0xc020000000000000,uVar14,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar15 + _DAT_11271054c);
  *(undefined8 *)(lVar15 + _DAT_11271054c) = uVar13;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar14);
  puStack_178 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar7 = *(long *)(lVar15 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  lStack_170 = lVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4030000000000000,lVar7,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar15 + lVar19);
  lStack_160 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar15 + lVar19);
  uStack_158 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar15 + _DAT_112710544);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf49520(0xc030000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_150 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_160,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_178,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lStack_168);
  lVar15 = lStack_170;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_104cbff68;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126af058;
  uStack_1e0 = uVar13;
  lStack_1d8 = lVar18;
  lStack_1d0 = lVar17;
  uStack_1c8 = uVar4;
  uStack_1c0 = uVar3;
  lStack_1b8 = lVar7;
  lStack_1b0 = lVar2;
  puStack_1a8 = puVar1;
  uStack_1a0 = uVar14;
  uStack_198 = uVar5;
  ppuStack_190 = &puStack_f0;
  _objc_opt_new();
  lVar18 = (long)_DAT_11271055c;
  uVar13 = *(undefined8 *)(lVar15 + lVar18);
  *(undefined **)(lVar15 + lVar18) = puVar8;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar15 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar15 + lVar18),param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar15 + lVar18),param_2,0);
  lVar7 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar15 + lVar7),param_2,*(undefined8 *)(lVar15 + lVar18));
  puStack_230 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)(lVar15 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  lStack_218 = lVar17;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_210 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_220 = lVar2;
  func_0x00010bf493c0(0x4030000000000000,lVar17,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar15 + lVar18);
  lStack_228 = lVar17;
  lStack_208 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  uStack_238 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar15 + lVar18);
  uStack_200 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar15 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493c0(0x4020000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar15 + lVar7);
  uStack_1f8 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar15 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf49460(uVar6,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1f0 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_208,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_230,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(uStack_238);
  _objc_release(lStack_228);
  _objc_release(lStack_220);
  _objc_release(lStack_210);
  lVar15 = lStack_218;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_104cc0284;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(lVar15 + _DAT_112710538);
  uStack_2a0 = uVar3;
  lStack_298 = lVar17;
  uStack_290 = uVar4;
  lStack_288 = lVar2;
  puStack_280 = puVar1;
  uStack_278 = uVar14;
  uStack_270 = uVar6;
  uStack_268 = uVar13;
  uStack_260 = uVar9;
  uStack_258 = uVar5;
  ppuStack_250 = &ppuStack_190;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112710558;
  uVar14 = *(undefined8 *)(lVar15 + lVar16);
  *(undefined8 *)(lVar15 + lVar16) = uVar13;
  _objc_release(uVar14);
  _objc_release(uVar10);
  lVar19 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar15 + lVar19),param_2,*(undefined8 *)(lVar15 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(lVar15 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar15 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493c0(0x4030000000000000,uVar5,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar15 + lVar16);
  uStack_2c8 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  func_0x00010c29bf00(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf493c0(0xc030000000000000,uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar15 + lVar16);
  uStack_2c0 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar15 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf493c0(0x4020000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar15 + lVar19);
  uStack_2b8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar15 + lVar16);
  func_0x00010bf1ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2b0 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_2c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar14);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x402c000000000000,0x404a000000000000);
  func_0x00010c1ba3a0(puVar1,param_2,puVar8);
  func_0x00010c1ba3c0(puVar1,param_2,3);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cbfb90; end: 104cbff67; -[SCNGOEmailEntryLoginViewController _setupSignInAnotherWayButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbfb90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  lVar19 = (long)_DAT_112710560;
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar14);
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c271420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar2);
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar14,param_2,puVar1);
  _objc_release(puVar1);
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar14,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  func_0x000104cc3108();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar14,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar19),param_2,param_1,
                      PTR_s__signInAnotherWayButtonTapped_112525b50,0x40);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710548);
  func_0x00010c274200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf49520(0xc020000000000000,uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11271054c);
  *(undefined8 *)(param_1 + _DAT_11271054c) = uVar14;
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_90 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4030000000000000,lVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  lStack_80 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493c0(0xc030000000000000,uVar2,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112710544);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bf49520(0xc030000000000000,uVar15,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lStack_88);
  lVar19 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_104cbff68;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126af058;
  uStack_100 = uVar14;
  lStack_f8 = lVar18;
  lStack_f0 = lVar8;
  uStack_e8 = uVar15;
  uStack_e0 = uVar2;
  lStack_d8 = lVar5;
  lStack_d0 = lVar3;
  puStack_c8 = puVar1;
  uStack_c0 = uVar4;
  uStack_b8 = uVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar18 = (long)_DAT_11271055c;
  uVar14 = *(undefined8 *)(lVar19 + lVar18);
  *(undefined **)(lVar19 + lVar18) = puVar7;
  _objc_release(uVar14);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar19 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar19 + lVar18),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar19 + lVar18),param_2,0);
  lVar5 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar19 + lVar5),param_2,*(undefined8 *)(lVar19 + lVar18));
  puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar19 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar19;
  lStack_138 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar3;
  func_0x00010bf493c0(0x4030000000000000,lVar8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar19 + lVar18);
  lStack_148 = lVar8;
  lStack_128 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar19;
  uStack_158 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar19 + lVar18);
  uStack_120 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar19 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010bf493c0(0x4020000000000000,uVar15,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar19 + lVar5);
  uStack_118 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar19 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf49460(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_128,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_150,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(uStack_158);
  _objc_release(lStack_148);
  _objc_release(lStack_140);
  _objc_release(lStack_130);
  lVar18 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_104cc0284;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(lVar18 + _DAT_112710538);
  uStack_1c0 = uVar2;
  lStack_1b8 = lVar8;
  uStack_1b0 = uVar15;
  lStack_1a8 = lVar3;
  puStack_1a0 = puVar1;
  uStack_198 = uVar4;
  uStack_190 = uVar9;
  uStack_188 = uVar14;
  uStack_180 = uVar10;
  uStack_178 = uVar6;
  ppuStack_170 = &puStack_b0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112710558;
  uVar4 = *(undefined8 *)(lVar18 + lVar17);
  *(undefined8 *)(lVar18 + lVar17) = uVar14;
  _objc_release(uVar4);
  _objc_release(uVar11);
  lVar16 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar18 + lVar16),param_2,*(undefined8 *)(lVar18 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(lVar18 + lVar17),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf493c0(0x4030000000000000,uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar18 + lVar17);
  uStack_1e8 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c29bf00(lVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar18 + lVar17);
  uStack_1e0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar18 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf493c0(0x4020000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar18 + lVar16);
  uStack_1d8 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1d0 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1e8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(uVar9);
  _objc_release(uVar14);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(uVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x402c000000000000,0x404a000000000000);
  func_0x00010c1ba3a0(puVar1,param_2,puVar7);
  func_0x00010c1ba3c0(puVar1,param_2,3);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cbff68; end: 104cc0283; -[SCNGOEmailEntryLoginViewController _setupErrorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbff68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af058;
  _objc_opt_new();
  lVar18 = (long)_DAT_11271055c;
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar14);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar18),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  lVar19 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar19),param_2,*(undefined8 *)(param_1 + lVar18));
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_98 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar4;
  func_0x00010bf493c0(0x4030000000000000,lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  lStack_a8 = lVar3;
  lStack_88 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_b8 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf493c0(0x4020000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010bf49460(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(uStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar18 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104cc0284;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(lVar18 + _DAT_112710538);
  uStack_120 = uVar5;
  lStack_118 = lVar3;
  uStack_110 = uVar6;
  lStack_108 = lVar4;
  puStack_100 = puVar1;
  uStack_f8 = uVar15;
  uStack_f0 = uVar8;
  uStack_e8 = uVar14;
  uStack_e0 = uVar9;
  uStack_d8 = uVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112710558;
  uVar15 = *(undefined8 *)(lVar18 + lVar17);
  *(undefined8 *)(lVar18 + lVar17) = uVar14;
  _objc_release(uVar15);
  _objc_release(uVar10);
  lVar16 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(lVar18 + lVar16),param_2,*(undefined8 *)(lVar18 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(lVar18 + lVar17),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar18;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bf493c0(0x4030000000000000,uVar7,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar18 + lVar17);
  uStack_148 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c29bf00(lVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010bf493c0(0xc030000000000000,uVar8,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar18 + lVar17);
  uStack_140 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar18 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf493c0(0x4020000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar18 + lVar16);
  uStack_138 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_148,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x402c000000000000,0x404a000000000000);
  func_0x00010c1ba3a0(puVar1,param_2,puVar2);
  func_0x00010c1ba3c0(puVar1,param_2,3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cc0284; end: 104cc0557; -[SCNGOEmailEntryLoginViewController _setupPolicyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc0284(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710538);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112710558;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined8 *)(param_1 + lVar18) = uVar2;
  _objc_release(uVar16);
  _objc_release(uVar1);
  lVar17 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar17),param_2,*(undefined8 *)(param_1 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493c0(0x4030000000000000,uVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0xc030000000000000,uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112710554);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010bf493c0(0x4020000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar15,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar15,param_2,puVar14);
  _objc_release(puVar14);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar15,param_2,puVar14);
  _objc_release(puVar14);
  puVar14 = puVar15;
  func_0x00010c08c0e0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar14);
  puVar14 = puVar15;
  func_0x00010c08c0e0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar14);
  puVar14 = puVar15;
  func_0x00010c08c0e0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar14);
  puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x402c000000000000,0x404a000000000000);
  func_0x00010c1ba3a0(puVar15,param_2,puVar14);
  func_0x00010c1ba3c0(puVar15,param_2,3);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 104cc0558; end: 104cc0693; -[SCNGOEmailEntryLoginViewController _createTextViewWithGerenalSettings] */

void FUN_104cc0558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x402c000000000000,0x404a000000000000);
  func_0x00010c1ba3a0(puVar1,param_2,puVar2);
  func_0x00010c1ba3c0(puVar1,param_2,3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cc0694; end: 104cc0c67; -[SCNGOEmailEntryLoginViewController _setupEmailEntryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc0694(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = param_1;
  func_0x00010bdf4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_112710554;
  uVar25 = *(undefined8 *)(param_1 + lVar29);
  *(long *)(param_1 + lVar29) = lVar27;
  _objc_release(uVar25);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar29));
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104cc3138();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c16b680(uVar7);
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar7;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar28);
  _objc_release(uVar25);
  _objc_release(uVar7);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c16d0c0(*(undefined8 *)(param_1 + lVar29));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar29));
  lVar26 = (long)_DAT_112710564;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29));
  uVar30 = 0x4071800000000000;
  func_0x00010bdc5bc0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar8;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar11;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493c0(uVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar28);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(lVar27);
  _objc_release(uVar9);
  _objc_release(uVar25);
  _objc_release(uVar8);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar29));
  puVar5 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar2 = puVar5;
  func_0x00010c219b60();
  func_0x000104cc3120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5);
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar26));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar18 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar25);
  _objc_release(puVar6);
  _objc_release(puVar19);
  _objc_release(lVar10);
  _objc_release(lVar27);
  _objc_release(puVar18);
  _objc_release(puVar5);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar4);
  uVar25 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493c0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar1);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + _DAT_112710554),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 104cc0c68; end: 104cc0e9b; -[SCNGOEmailEntryLoginViewController _addLaunchGhost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc0c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  func_0x00010c219b60(puVar3);
  uVar13 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493c0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + _DAT_112710554),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 104cc0e9c; end: 104cc0eab; -[SCNGOEmailEntryLoginViewController _signInAnotherWayButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc0e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112710554),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 104cc0eac; end: 104cc0ef7; -[SCNGOEmailEntryLoginViewController _usePhone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc0eac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710534);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c2655a0(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc0ef8; end: 104cc0f43; -[SCNGOEmailEntryLoginViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc0ef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710534);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c25ed20(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc0f44; end: 104cc0fbb; -[SCNGOEmailEntryLoginViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cc0f44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710540);
  func_0x00010bf2c700();
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112710534);
    puVar2 = PTR_PTR_1126af070;
    func_0x00010c25ed20(PTR_PTR_1126af070);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 104cc0fbc; end: 104cc0fc3; -[SCNGOEmailEntryLoginViewController textFieldShouldBeginEditing:] */

undefined8 FUN_104cc0fbc(void)

{
  return 1;
}



/* Entry: 104cc0fc4; end: 104cc1043; -[SCNGOEmailEntryLoginViewController textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc0fc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af070;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710534);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710554);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2856e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cc1044; end: 104cc10bb; -[SCNGOEmailEntryLoginViewController emailDomainSuggestionScrollView:didSelectPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc1044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af070;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710534);
  func_0x00010bfbb800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2856c0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cc10bc; end: 104cc110b; -[SCNGOEmailEntryLoginViewController oAuthListView:didSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc10bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710534);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c159c00(PTR_PTR_1126af070,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc110c; end: 104cc1177; -[SCNGOEmailEntryLoginViewController _adaptiveTopOffset:] */

double FUN_104cc110c(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  dVar2 = (param_4 / 852.0) * (param_4 / 852.0);
  dVar3 = 1.0;
  if (dVar2 <= 1.0) {
    dVar3 = dVar2;
  }
  return param_1 * dVar3;
}



/* Entry: 104cc1178; end: 104cc1277; -[SCNGOEmailEntryLoginViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc1178(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710558,0);
  _objc_storeStrong(param_1 + _DAT_11271053c,0);
  _objc_storeStrong(param_1 + _DAT_112710568,0);
  _objc_storeStrong(param_1 + _DAT_112710544,0);
  _objc_storeStrong(param_1 + _DAT_11271055c,0);
  _objc_storeStrong(param_1 + _DAT_112710540,0);
  _objc_storeStrong(param_1 + _DAT_11271054c,0);
  _objc_storeStrong(param_1 + _DAT_112710538,0);
  _objc_storeStrong(param_1 + _DAT_112710550,0);
  _objc_storeStrong(param_1 + _DAT_112710548,0);
  _objc_storeStrong(param_1 + _DAT_112710560,0);
  _objc_storeStrong(param_1 + _DAT_112710554,0);
  _objc_storeStrong(param_1 + _DAT_112710564,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710534,0);
  return;
}



/* Entry: 104cc1278; end: 104cc1333; -[SCNGOEmailEntryViewController initWithScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cc1278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3b00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271056c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710570;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cc1334; end: 104cc133b; -[SCNGOEmailEntryViewController pageViewName] */

undefined8 FUN_104cc1334(void)

{
  return 0x59;
}



/* Entry: 104cc133c; end: 104cc138b; -[SCNGOEmailEntryViewController viewDidLoad] */

void FUN_104cc133c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104cc138c; end: 104cc13bf; -[SCNGOEmailEntryViewController viewWillAppear:] */

void FUN_104cc138c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3b00;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 104cc13c0; end: 104cc1437; -[SCNGOEmailEntryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc13c0(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3b00;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710570);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112710574));
  return;
}



/* Entry: 104cc1438; end: 104cc14e7; -[SCNGOEmailEntryViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc1438(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271056c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cc14e8; end: 104cc152f;  */

void FUN_104cc14e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc1530; end: 104cc1873; -[SCNGOEmailEntryViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc1530(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112710578;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271057c);
    lVar4 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288720(uVar2,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf2c700(param_3);
    lVar5 = (long)_DAT_112710580;
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    lVar4 = param_3;
    func_0x00010c09cb40(param_3);
    func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    lVar4 = param_3;
    func_0x00010c09cb40(param_3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_112710584),param_2,(uint)lVar4 ^ 1);
    lVar4 = param_3;
    func_0x00010c22f260();
    if ((int)lVar4 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710588),param_2,1);
    }
    else {
      lVar4 = param_3;
      func_0x00010c06b180(param_3);
      func_0x00010c1749e0(*(undefined8 *)(param_1 + _DAT_112710588),param_2,lVar4);
    }
    lVar6 = (long)_DAT_112710574;
    uVar3 = *(ulong *)(param_1 + lVar6);
    func_0x00010c26bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(uVar3);
    if ((uVar1 & 1) == 0) {
      lVar4 = param_3;
      func_0x00010bf8d6c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010bf98d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      func_0x00010c161240(*(undefined8 *)(param_1 + lVar6),param_2,0);
      uVar2 = 1;
    }
    else {
      lVar4 = param_3;
      func_0x00010bf98d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161240(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
      _objc_release(lVar4);
      uVar2 = 4;
    }
    func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
    lVar4 = param_3;
    func_0x00010c2319c0();
    if ((int)lVar4 != 0) {
      func_0x00010c0d13c0(*(undefined8 *)(param_1 + lVar6));
    }
    lVar4 = param_3;
    func_0x00010c233300();
    if ((int)lVar4 != 0) {
      func_0x00010c18f820(*(undefined8 *)(param_1 + _DAT_11271058c),param_2,2);
    }
    lVar4 = param_3;
    func_0x00010c234520();
    if ((int)lVar4 == 0) {
      func_0x00010c161160(*(undefined8 *)(param_1 + lVar6),param_2,0);
    }
    else {
      func_0x000104cc30d8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161160(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010bfe0100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_3;
      func_0x00010bfe0100(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(*(undefined8 *)(param_1 + _DAT_11271058c),param_2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010bfdff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_3;
      func_0x00010bfdff80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20f6c0(*(undefined8 *)(param_1 + _DAT_11271058c),param_2,lVar4);
      _objc_release(lVar4);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    lVar4 = param_3;
    func_0x00010bf4fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar2,param_2,lVar4,0);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc1874; end: 104cc2d13; -[SCNGOEmailEntryViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc1874(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar36);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126af078;
  _objc_opt_new();
  puVar1 = PTR_PTR_1126af080;
  _objc_opt_new();
  lVar36 = (long)_DAT_11271058c;
  uVar35 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar1;
  _objc_release(uVar35);
  func_0x00010c18f820(*(undefined8 *)(param_1 + lVar36),param_2,0);
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c20f6c0(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar36),param_2,param_1);
  func_0x00010c187440(puVar2,param_2,*(undefined8 *)(param_1 + lVar36));
  lVar36 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar36);
  func_0x00010c219b60(puVar2,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar37;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_98 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  puStack_90 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar36 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar36);
  func_0x00010c219b60(puVar3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_b0 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  puStack_a8 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar5);
  puVar1 = PTR_PTR_1126af050;
  _objc_alloc();
  func_0x00010c030dc0();
  lVar36 = (long)_DAT_11271057c;
  uVar35 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar1;
  _objc_release(uVar35);
  func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(param_1 + lVar36));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar36);
  uStack_c8 = uVar30;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar36);
  uStack_c0 = uVar35;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar18;
  func_0x00010bf493c0(0xc020000000000000,uVar18,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar29;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar29);
  _objc_release(puVar10);
  _objc_release(uVar18);
  _objc_release(uVar35);
  _objc_release(puVar5);
  _objc_release(uVar17);
  _objc_release(uVar30);
  _objc_release(puVar6);
  _objc_release(uVar16);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_112710580;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar35);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar37),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar37),param_2,
                      &PTR____CFConstantStringClassReference_110dae558);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar37),param_2,param_1,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(param_1 + lVar37));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar16;
  func_0x00010bf493c0(0x4038000000000000,uVar16,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar37);
  uStack_e0 = uVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar17;
  func_0x00010bf493c0(0xc038000000000000,uVar17,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar37);
  uStack_d8 = uVar35;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c274200(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar18;
  func_0x00010bf493c0(0xc030000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar30);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar35);
  _objc_release(puVar5);
  _objc_release(uVar17);
  _objc_release(uVar29);
  _objc_release(puVar6);
  _objc_release(uVar16);
  puVar1 = PTR_PTR_1126af088;
  _objc_opt_new();
  lVar36 = (long)_DAT_112710588;
  uVar35 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar1;
  _objc_release(uVar35);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar36),param_2,param_1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110dae578);
  func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(param_1 + lVar36));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar17 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar17;
  func_0x00010bf49520(0xc048000000000000,uVar17,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar36);
  uStack_100 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar36);
  uStack_f8 = uVar29;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar19;
  func_0x00010bf493c0(0xc030000000000000,uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar36);
  uStack_f0 = uVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar21;
  func_0x00010bf493c0(0x4030000000000000,uVar21,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar35;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar35);
  _objc_release(puVar6);
  _objc_release(uVar21);
  _objc_release(uVar30);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar29);
  _objc_release(puVar9);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(puVar5);
  _objc_release(uVar17);
  puVar22 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar36);
  puVar1 = puVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar37;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar1;
  func_0x00010bf493e0(0x3fc5555560000000,puVar1,param_2,lVar36);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar36);
  _objc_release(lVar37);
  _objc_release(puVar1);
  func_0x00010c1e3380(0x43790000,puVar23);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar10 = puVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar22;
  puStack_120 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar22;
  puStack_118 = puVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_110 = puVar14;
  puStack_108 = puVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(puVar15);
  _objc_release(puVar28);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar13 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_new();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar36);
  func_0x00010c219b60(puVar13,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  puStack_140 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar37;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,lVar36);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar13;
  puStack_138 = puVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010bf493a0(puVar25,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  puStack_130 = puVar26;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar14;
  func_0x00010bf49500(puVar14,param_2,puVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_128 = puVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_140,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar14);
  _objc_release(puVar26);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(lVar36);
  _objc_release(lVar37);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar37 = (long)_DAT_112710584;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar35);
  func_0x00010befbb60(puVar13,param_2,*(undefined8 *)(param_1 + lVar37));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37),param_2,0);
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010bfe0660(puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar35;
  func_0x00010bf493a0(uVar35,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar35);
  func_0x00010c1e3380(0x437a0000,uVar29);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar19 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar37);
  uStack_170 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar20;
  func_0x00010bf493c0(0x4038000000000000,uVar20,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar37);
  uStack_168 = uVar30;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar21;
  func_0x00010bf493c0(0xc038000000000000,uVar21,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar37);
  uStack_160 = uVar35;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar31;
  func_0x00010bf493a0(uVar31,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar37);
  uStack_158 = uVar18;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar32;
  func_0x00010bf493c0(0xc048000000000000,uVar32,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_150 = uVar17;
  uStack_148 = uVar29;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_170,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar17);
  _objc_release(puVar14);
  _objc_release(uVar32);
  _objc_release(uVar18);
  _objc_release(puVar15);
  _objc_release(uVar31);
  _objc_release(uVar35);
  _objc_release(puVar5);
  _objc_release(uVar21);
  _objc_release(uVar30);
  _objc_release(puVar6);
  _objc_release(uVar20);
  _objc_release(uVar16);
  _objc_release(puVar9);
  _objc_release(uVar19);
  puVar5 = PTR_PTR_1126af0a0;
  _objc_alloc();
  uVar35 = *(undefined8 *)PTR__UITextContentTypeEmailAddress_110345dd8;
  puVar1 = puVar5;
  FUN_104cc30a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051880(puVar5,param_2,uVar35,puVar1,0);
  lVar36 = (long)_DAT_112710574;
  uVar35 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar5;
  _objc_release(uVar35);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar36),param_2,param_1);
  func_0x00010c213300(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110dadab8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar37),param_2,*(undefined8 *)(param_1 + lVar36));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar18 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar36);
  uStack_190 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar36);
  uStack_188 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar31;
  func_0x00010bf493a0(uVar31,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar36);
  uStack_180 = uVar30;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493a0(uVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_178 = uVar35;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_190,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar30);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar16);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar17);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar29);
  _objc_release(puVar13);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar35 = *(undefined8 *)(puVar2 + _DAT_11271056c);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c25ed20(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar35,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc2d14; end: 104cc2d5f; -[SCNGOEmailEntryViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2d14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271056c);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c25ed20(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc2d60; end: 104cc2dd7; -[SCNGOEmailEntryViewController emailDomainSuggestionScrollView:didSelectPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af070;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271056c);
  func_0x00010bfbb800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2856c0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cc2dd8; end: 104cc2e23; -[SCNGOEmailEntryViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2dd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271056c);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010bf9b400(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc2e24; end: 104cc2e9b; -[SCNGOEmailEntryViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cc2e24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710578);
  func_0x00010bf2c700();
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271056c);
    puVar2 = PTR_PTR_1126af070;
    func_0x00010c25ed20(PTR_PTR_1126af070);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 104cc2e9c; end: 104cc2f13; -[SCNGOEmailEntryViewController textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af070;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271056c);
  func_0x00010c26bea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2856e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc2f14; end: 104cc2f5f; -[SCNGOEmailEntryViewController accessoryButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2f14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271056c);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c2655a0(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc2f60; end: 104cc2fab; -[SCNGOEmailEntryViewController accessoryTextLinkPressedWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271056c);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c158da0(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc2fac; end: 104cc2ff7; -[SCNGOEmailEntryViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271056c);
  puVar1 = PTR_PTR_1126af070;
  func_0x00010c272580(PTR_PTR_1126af070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc2ff8; end: 104cc30a7; -[SCNGOEmailEntryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc2ff8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271057c,0);
  _objc_storeStrong(param_1 + _DAT_11271058c,0);
  _objc_storeStrong(param_1 + _DAT_112710584,0);
  _objc_storeStrong(param_1 + _DAT_112710570,0);
  _objc_storeStrong(param_1 + _DAT_112710588,0);
  _objc_storeStrong(param_1 + _DAT_112710580,0);
  _objc_storeStrong(param_1 + _DAT_112710578,0);
  _objc_storeStrong(param_1 + _DAT_112710574,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271056c,0);
  return;
}



/* Entry: 104cc30a8; end: 104cc314f;  */

void FUN_104cc30a8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dadab8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dadab8,
                      &PTR____CFConstantStringClassReference_110dae598,0);
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



/* Entry: 104cc3150; end: 104cc319b; +[SCNGOEmailEntryAction exit] */

void FUN_104cc3150(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc319c; end: 104cc3207; +[SCNGOEmailEntryAction selectLinkWithUrl:] */

void FUN_104cc319c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc3208; end: 104cc3273; +[SCNGOEmailEntryAction selectedOAuthWithOAuthType:] */

void FUN_104cc3208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc3274; end: 104cc32bb; +[SCNGOEmailEntryAction submit] */

void FUN_104cc3274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc32bc; end: 104cc3307; +[SCNGOEmailEntryAction switchButtonTapped] */

void FUN_104cc32bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc3308; end: 104cc3363; +[SCNGOEmailEntryAction toggle1TLCheckboxWithSelected:] */

void FUN_104cc3308(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x20] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc3364; end: 104cc33cb; +[SCNGOEmailEntryAction updateEmailDomainWithEmailDomain:] */

void FUN_104cc3364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc33cc; end: 104cc3437; +[SCNGOEmailEntryAction updateEmailWithEmail:] */

void FUN_104cc33cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af070;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc3438; end: 104cc345b; -[SCNGOEmailEntryAction copyWithZone:] */

undefined8 FUN_104cc3438(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cc345c; end: 104cc34ef; -[SCNGOEmailEntryAction hash] */

void FUN_104cc345c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126e3b08;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc34f0; end: 104cc3533; -[SCNGOEmailEntryAction internalInit] */

void FUN_104cc34f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3b08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc3534; end: 104cc362b; -[SCNGOEmailEntryAction isEqual:] */

long FUN_104cc3534(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104cc3604:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cc3610;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_104cc3610;
            }
            goto LAB_104cc3604;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104cc3610:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cc362c; end: 104cc37f3; -[SCNGOEmailEntryAction matchSubmit:exit:updateEmailDomain:updateEmail:toggle1TLCheckbox:switchButtonTapped:selectedOAuth:selectLink:] */

void FUN_104cc362c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (1 < lVar2) {
      if (lVar2 == 2) {
        if (param_5 == 0) goto LAB_104cc379c;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        pcVar3 = *(code **)(param_5 + 0x10);
        lVar2 = param_5;
      }
      else {
        if ((lVar2 != 3) || (param_6 == 0)) goto LAB_104cc379c;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        pcVar3 = *(code **)(param_6 + 0x10);
        lVar2 = param_6;
      }
LAB_104cc3798:
      (*pcVar3)(lVar2,uVar1);
      goto LAB_104cc379c;
    }
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_104cc379c;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_104cc379c;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (5 < lVar2) {
      if (lVar2 == 6) {
        if (param_9 == 0) goto LAB_104cc379c;
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        pcVar3 = *(code **)(param_9 + 0x10);
        lVar2 = param_9;
      }
      else {
        if ((lVar2 != 7) || (param_10 == 0)) goto LAB_104cc379c;
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        pcVar3 = *(code **)(param_10 + 0x10);
        lVar2 = param_10;
      }
      goto LAB_104cc3798;
    }
    if (lVar2 == 4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,*(undefined1 *)(param_1 + 0x20));
      }
      goto LAB_104cc379c;
    }
    if ((lVar2 != 5) || (param_8 == 0)) goto LAB_104cc379c;
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar2 = param_8;
  }
  (*pcVar3)(lVar2);
LAB_104cc379c:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc37f4; end: 104cc383b; -[SCNGOEmailEntryAction .cxx_destruct] */

void FUN_104cc37f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cc383c; end: 104cc39cf; -[SCNGOEmailEntryViewModel initWithEmail:errorMessage:headerTitle:headerSubtitle:canContinue:loading:shouldMoveCursorToStart:is1TLCheckboxSelected:shouldShowBackButton:shouldDisplay1TL:shouldShowSwitchButton:continueButtonTitle:] */

undefined8 *
FUN_104cc383c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined1 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e3b10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._3_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104cc39d0; end: 104cc39f3; -[SCNGOEmailEntryViewModel copyWithZone:] */

undefined8 FUN_104cc39d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cc39f4; end: 104cc3acb; -[SCNGOEmailEntryViewModel hash] */

undefined8 * FUN_104cc39f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_68 = (ulong)uVar1 & 0xff;
  uStack_60 = uVar10 >> 0x10 & 0xff;
  uStack_58 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_50 = (ulong)uVar8;
  uStack_48 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_88;
  uStack_30 = uVar2;
  func_0x000100505190(puVar4,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_104cc3c04:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104cc3c10;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
            (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
           (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
          ((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
           (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))))))) &&
        (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) &&
       (*(char *)((long)puVar4 + 0xe) == *(char *)((long)param_3 + 0xe))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[4];
          if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[5];
            if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              puVar7 = (undefined8 *)puVar4[6];
              if (puVar7 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_104cc3c10;
              }
              goto LAB_104cc3c04;
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_104cc3c10:
  _objc_release(param_3);
  return puVar7;
}


