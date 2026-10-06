/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e47ab0; end: 106e47c4f; -[SCSearchServicesCSLIndex initWithCorpusType:tagsProvider:] */

undefined8 *
FUN_106e47ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7398;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_3;
    uVar4 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c1544a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126d2cf0;
    func_0x00010bfc1d60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_68,auStack_58);
    uVar4 = uVar2;
    uStack_60 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar4;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106e47c50; end: 106e47d53;  */

void FUN_106e47c50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    func_0x00010c0c0800(param_2);
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e47d54; end: 106e47d57;  */

void FUN_106e47d54(void)

{
  return;
}



/* Entry: 106e47d58; end: 106e47d8b; -[SCSearchServicesCSLIndex _trieOptions] */

void FUN_106e47d58(void)

{
  _objc_alloc(PTR_PTR_1126d2cf8);
  func_0x00010c010f80(0x4024000000000000,0x3ff0000000000000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e47d8c; end: 106e47e07; -[SCSearchServicesCSLIndex _stickerOptionsForFilePaths:] */

void FUN_106e47d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2d00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c154480(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04a6a0(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e47e08; end: 106e47eff; -[SCSearchServicesCSLIndex _optionsForIndexType:filePaths:] */

void FUN_106e47e08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126d2d08;
  _objc_retain(param_4);
  _objc_alloc(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dec718;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e88d38;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e88d18;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  uVar4 = param_1;
  func_0x00010becfa00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec2ae0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c05a580(puVar3,param_2,param_3 - 3U < 0xfffffffffffffffe,ppuVar2,uVar4,param_1);
  _objc_release(ppuVar2);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e47f00; end: 106e47fcb; -[SCSearchServicesCSLIndex done:] */

void FUN_106e47f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106e47f8c;
  puStack_30 = &UNK_11097f7c0;
  lStack_28 = param_1;
  func_0x00010c0bfa60(param_3,param_2,&puStack_48,&PTR___NSConcreteGlobalBlock_11097f810);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 106e47fcc; end: 106e47fd7;  */

undefined ** FUN_106e47fcc(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c94f0;
}



/* Entry: 106e47fd8; end: 106e47fff; -[SCSearchServicesCSLIndex indexCreationObservable] */

void FUN_106e47fd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e48000; end: 106e48007; -[SCSearchServicesCSLIndex index] */

undefined8 FUN_106e48000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e48008; end: 106e4800f; -[SCSearchServicesCSLIndex corpus] */

undefined8 FUN_106e48008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e48010; end: 106e48057; -[SCSearchServicesCSLIndex .cxx_destruct] */

void FUN_106e48010(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e48058; end: 106e481f7; -[SCSearchServicesClientImpl initWithIndexFactory:flavorContext:] */

undefined8 *
FUN_106e48058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f73a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 2) = param_4;
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106e481f8;
    puStack_88 = &UNK_110854530;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e481f8; end: 106e48277;  */

void FUN_106e481f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfa7a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e48278; end: 106e48337; -[SCSearchServicesClientImpl searchWithQuery:resultTypes:] */

void FUN_106e48278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106e48338;
  puStack_50 = &UNK_11097f870;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e48338; end: 106e483fb;  */

void FUN_106e48338(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c153220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13caa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  (**(code **)(param_2 + 0x10))(param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106e483fc; end: 106e48403;  */

void FUN_106e483fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_items_1125fee00);
  return;
}



/* Entry: 106e48404; end: 106e48523; -[SCSearchServicesClientImpl searchServiceWithQuery:resultTypes:] */

void FUN_106e48404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf189a0(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uStack_40 = param_4;
  _objc_copyWeak(auStack_48,auStack_38);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e48524; end: 106e486d7;  */

void FUN_106e48524(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c153220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13caa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106e486d8;
  puStack_80 = &UNK_110842c58;
  _objc_copyWeak(auStack_78,param_1 + 0x30);
  lVar6 = lVar5;
  func_0x00010bf87460(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,param_1 + 0x30);
  lVar7 = lVar6;
  func_0x00010bf87420(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a0);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 106e486d8; end: 106e4877f;  */

void FUN_106e486d8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e48780; end: 106e488cb; -[SCSearchServicesClientImpl beginSearchTraceWtihTag:] */

void FUN_106e48780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dea0();
    _objc_release(puVar1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dea0();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e88d78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf17b60(puVar1,param_2,puVar2);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e88d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf17b60(puVar1,param_2,puVar2);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e488cc; end: 106e4891b; -[SCSearchServicesClientImpl fetchIndex] */

void FUN_106e488cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf568e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e4891c; end: 106e4896b; -[SCSearchServicesClientImpl fetchService] */

void FUN_106e4891c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf58c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e4896c; end: 106e489e3; -[SCSearchServicesClientImpl resultCorpusOptionsToEntityTypes:] */

void FUN_106e4896c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if ((param_3 >> 1 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9508);
  }
  if ((param_3 >> 2 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9520);
  }
  if ((param_3 >> 3 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9538);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e489e4; end: 106e48a1f; -[SCSearchServicesClientImpl .cxx_destruct] */

void FUN_106e489e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e48a20; end: 106e48af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e48a20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2d10;
    _objc_alloc(PTR_PTR_1126d2d10);
    lVar1 = param_1 + _DAT_11275fa68;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c1544e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11275fa6c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050540(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e48af8; end: 106e48b3b; -[SCSearchServicesImplServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e48af8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275fa6c);
  _objc_destroyWeak(param_1 + _DAT_11275fa68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fa64);
  return;
}



/* Entry: 106e48b3c; end: 106e48bdf; -[SCSearchServicesIndexFactoryImpl initWithTagsProvider:circumstanceEngine:] */

undefined1 *
FUN_106e48b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f73a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e48be0; end: 106e48c17; -[SCSearchServicesIndexFactoryImpl creativeToolsIndexForCorpuses:] */

void FUN_106e48be0(void)

{
  _objc_alloc(PTR_PTR_1126d2d20);
  func_0x00010c006000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e48c18; end: 106e48c47; -[SCSearchServicesIndexFactoryImpl .cxx_destruct] */

void FUN_106e48c18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e48c48; end: 106e48f0f; -[SCSearchServicesIndexImpl initWithCorpuses:tagsProvider:circumstanceEngine:] */

undefined8 *
FUN_106e48c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f73b0;
  puVar5 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_3;
    _objc_retain(param_4);
    uVar2 = puVar5[2];
    puVar5[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar5[3];
    puVar5[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar5[0xd];
    puVar5[0xd] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = puVar5[0xe];
    puVar5[0xe] = puVar3;
    _objc_release(uVar2);
    func_0x00010c184700(puVar5[0xe]);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar5[4];
    puVar5[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar5[5];
    puVar5[5] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar5[4];
    _objc_retain(param_5);
    _objc_retain(puVar5);
    func_0x00010c0f7fc0(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar5[10];
    puVar5[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar5[0xb];
    puVar5[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar5[0xc];
    puVar5[0xc] = puVar3;
    _objc_release(uVar2);
    func_0x00010bead280(puVar5);
    _objc_release(puVar5);
    _objc_release(param_5);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  iVar1 = (int)*(undefined8 *)(param_4 + 0x20);
  func_0x00010c067f00();
  if (iVar1 < 1) {
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x70);
    *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x70) = 0;
    _objc_release(uVar2);
  }
  else {
    func_0x00010c184700(*(undefined8 *)(*(long *)(param_4 + 0x28) + 0x70));
  }
  puVar5 = *(undefined8 **)(param_4 + 0x20);
  func_0x00010c067f00();
  *(long *)(*(long *)(param_4 + 0x28) + 0x48) = (long)(int)puVar5;
  return puVar5;
}



/* Entry: 106e48f10; end: 106e48ff7;  */

void FUN_106e48f10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e88db8,100,0);
  if ((int)uVar1 < 1) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70) = 0;
    _objc_release(uVar2);
  }
  else {
    func_0x00010c184700(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70),param_2,uVar1 & 0xffffffff
                       );
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e88dd8,0,0);
  *(long *)(*(long *)(param_1 + 0x28) + 0x48) = (long)(int)uVar2;
  return;
}



/* Entry: 106e48ff8; end: 106e4904b;  */

void FUN_106e48ff8(void)

{
  _objc_opt_new(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e4904c; end: 106e490ff; -[SCSearchServicesIndexImpl _setupIndexes] */

void FUN_106e4904c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = (uint)*(ulong *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d2d28;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    _objc_alloc();
    func_0x00010c005fe0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar3);
    uVar2 = (uint)*(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126d2d28;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    PTR_PTR_1126d2d28 = puVar1;
    _objc_alloc();
    func_0x00010c005fe0();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar3);
    uVar2 = (uint)*(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126d2d28;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    PTR_PTR_1126d2d28 = puVar1;
    _objc_alloc();
    func_0x00010c005fe0();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  PTR_PTR_1126d2d28 = puVar1;
  return;
}



/* Entry: 106e49100; end: 106e492d7; -[SCSearchServicesIndexImpl performCTQueryWithText:completionBlock:] */

void FUN_106e49100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be82a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  lVar3 = *(long *)(param_1 + 0x70);
  _objc_retain(lVar3);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106e492d8;
      puStack_68 = &UNK_11084a9e8;
      _objc_retain(param_4);
      lStack_60 = lVar3;
      uStack_50 = param_4;
      _objc_retain(lVar1);
      lStack_58 = lVar1;
      func_0x00010c0f7fc0(uVar4);
      _objc_release(lStack_58);
      _objc_release(uStack_50);
      goto LAB_106e49274;
    }
  }
  _objc_copyWeak(auStack_88,auStack_48);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  func_0x00010be71120(param_1);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_88);
LAB_106e49274:
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e492d8; end: 106e4931f;  */

void FUN_106e492d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dff20(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e49320; end: 106e493ef;  */

void FUN_106e49320(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010bdfb180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010c1d0560();
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar3);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106e493f0; end: 106e4949f; -[SCSearchServicesIndexImpl clearCachedStickerSearchResults] */

void FUN_106e493f0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x70) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106e494a0; end: 106e494cb;  */

void FUN_106e494a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e494cc; end: 106e494db; -[SCSearchServicesIndexImpl _clearCachedStickerSearchResults] */

void FUN_106e494cc(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x70),PTR_s_removeAllObjects_112628590);
    return;
  }
  return;
}



/* Entry: 106e494dc; end: 106e498b7; -[SCSearchServicesIndexImpl _deserializeCTResults:] */

void FUN_106e494dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 uVar9;
  undefined *unaff_x24;
  long lVar10;
  long lVar11;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
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
  lStack_140 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_148 = puVar1;
  _objc_retain(param_3);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar10 = *(long *)(lStack_128 + lVar8 * 8);
        unaff_x23 = lVar10;
        func_0x00010bf87800();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = unaff_x23;
        func_0x00010c08fa60();
        _objc_release(unaff_x23);
        unaff_x24 = (undefined *)0x0;
        if (lVar3 != 0) {
          unaff_x24 = PTR_PTR_1126b37c0;
          _objc_alloc();
          lVar3 = lVar10;
          func_0x00010bf87800(lVar10);
          _objc_retainAutoreleasedReturnValue();
          lStack_138 = 0;
          func_0x00010c008360();
          unaff_x23 = lStack_138;
          _objc_retain(lStack_138);
          _objc_release(lVar3);
          if (unaff_x23 == 0) {
            lVar3 = lVar10;
            func_0x00010bf52680();
            if (lVar3 == 2) {
              uVar4 = *(undefined8 *)(lStack_140 + 0x50);
              func_0x00010c269d40(uVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = unaff_x24;
              func_0x00010c2434c0(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar4;
              func_0x00010bf96e20(uVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar1);
              _objc_release(uVar4);
              puVar1 = PTR_PTR_1126baa60;
              _objc_alloc();
              uVar4 = uVar9;
              func_0x00010c2434e0(uVar9);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              lVar3 = lVar10;
              func_0x00010bf52680();
              if (lVar3 == 1) {
                uVar4 = *(undefined8 *)(lStack_140 + 0x58);
                func_0x00010c269d40(uVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = unaff_x24;
                func_0x00010bf8e2c0(unaff_x24);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar4;
                func_0x00010bf96e20(uVar4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar1);
                _objc_release(uVar4);
                puVar1 = PTR_PTR_1126baa60;
                _objc_alloc();
                uVar4 = uVar9;
                func_0x00010bfe1140(uVar9);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010bf52680();
                if (lVar10 != 0) goto LAB_106e49818;
                uVar4 = *(undefined8 *)(lStack_140 + 0x60);
                func_0x00010c269d40(uVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = unaff_x24;
                func_0x00010bf1c2e0(unaff_x24);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar4;
                func_0x00010bf96e20(uVar4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar1);
                _objc_release(uVar4);
                puVar1 = PTR_PTR_1126baa60;
                _objc_alloc();
                uVar4 = uVar9;
                func_0x00010bf41a00(uVar9);
                _objc_retainAutoreleasedReturnValue();
              }
            }
            func_0x00010c01fe20();
            _objc_release(uVar4);
            _objc_release(uVar9);
            if (puVar1 != (undefined *)0x0) {
              func_0x00010befa120(puStack_148);
              _objc_release(puVar1);
            }
          }
LAB_106e49818:
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar1 = puStack_148;
  puVar5 = puStack_148;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puStack_178 = puVar1;
  pcStack_158 = FUN_106e498b8;
  puStack_190 = unaff_x24;
  lStack_188 = unaff_x23;
  uStack_180 = unaff_x22;
  puStack_170 = puVar5;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  lVar11 = lVar2;
  func_0x00010be82a00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar11 == 0) || (lVar8 = lVar11, func_0x00010c08fa60(), lVar8 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar7 + 0x10))(puVar7,puVar1);
    _objc_release(puVar1);
  }
  else {
    _objc_initWeak(auStack_198,lVar2);
    uVar9 = *(undefined8 *)(lVar2 + 0x20);
    _objc_copyWeak(auStack_1a0,auStack_198);
    _objc_retain(puVar7);
    _objc_retain(lVar11);
    _objc_retain(puVar6);
    func_0x00010c0f7fc0(uVar9);
    _objc_release(puVar6);
    _objc_release(lVar11);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
  }
  _objc_release(lVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 106e498b8; end: 106e49a37; -[SCSearchServicesIndexImpl _peformQueryWithText:completionBlock:] */

void FUN_106e498b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be82a00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar3);
    _objc_release(puVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(lVar1);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e49a38; end: 106e49d53;  */

void FUN_106e49a38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    lVar3 = *(long *)(lVar1 + 0x30);
    if (lVar3 != 0) {
      func_0x00010bfec9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x30);
        func_0x00010bfeca80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
    }
    lVar3 = *(long *)(lVar1 + 0x40);
    if (lVar3 != 0) {
      func_0x00010bfec9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x40);
        func_0x00010bfeca80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
    }
    lVar3 = *(long *)(lVar1 + 0x38);
    if (lVar3 != 0) {
      func_0x00010bfec9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x38);
        func_0x00010bfeca80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
    }
    puVar6 = puVar2;
    func_0x00010bf529e0();
    puVar7 = PTR_PTR_1126ae6b8;
    if (puVar6 == (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0x38);
      lVar3 = lVar1;
      func_0x00010be724c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar8 + 0x10))(lVar8,lVar3);
      _objc_release(lVar3);
    }
    else {
      _objc_copyWeak(auStack_68,param_1 + 0x40);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar10);
      func_0x00010bf41860(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
      _objc_retain(uVar5);
      puVar7 = puVar6;
      func_0x00010c25ff60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7e00(uVar4);
      _objc_release(puVar7);
      _objc_release(uVar5);
      _objc_release(puVar6);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106e49d54; end: 106e49d9b;  */

void FUN_106e49d54(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be724c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e49d9c; end: 106e49da7;  */

void FUN_106e49d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e49da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106e49da8; end: 106e49edf; -[SCSearchServicesIndexImpl indexCreationObservable] */

void FUN_106e49da8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bffc4a0();
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    func_0x00010bfeca80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    func_0x00010bfeca80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    func_0x00010bfeca80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8,param_2,puVar1,&PTR___NSConcreteGlobalBlock_11097f9c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e49ee0; end: 106e4a013;  */

undefined ** FUN_106e49ee0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
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
  
  ppuVar5 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  puStack_120 = (undefined *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  puVar11 = auStack_d8;
  lVar8 = param_2;
  func_0x00010bf52a60();
  if (lVar8 == 0) {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9550;
  }
  else {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        iVar1 = (int)*(undefined8 *)(lStack_118 + lVar14 * 8);
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9550;
        func_0x00010c071f40();
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9568;
        if (iVar1 == 0) goto LAB_106e49fc8;
        lVar14 = lVar14 + 1;
      } while (lVar8 != lVar14);
      puVar11 = auStack_d8;
      lVar8 = param_2;
      ppuVar5 = &puStack_120;
      func_0x00010bf52a60();
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9550;
    } while (lVar8 != 0);
  }
LAB_106e49fc8:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar11);
    _objc_retain(ppuVar5);
    func_0x00010c2a4be0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010bf44700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d2d30;
    _objc_alloc();
    func_0x00010c050500();
    puVar4 = PTR_PTR_1126d2d38;
    _objc_alloc();
    func_0x00010c012b40();
    _objc_release(puVar11);
    puVar6 = PTR_PTR_1126d2d40;
    _objc_alloc(PTR_PTR_1126d2d40);
    puVar12 = (undefined *)0x1;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012b60(puVar6);
    _objc_release(puVar7);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar8 = *(long *)(param_2 + 0x30);
    func_0x00010bfec9e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar8 != 0) && (uVar15 = *(ulong *)(param_2 + 8), _objc_release(), (uVar15 & 1) != 0)) {
      lVar8 = param_2;
      puVar12 = puVar6;
      func_0x00010be95940(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar3);
      _objc_release(lVar8);
    }
    lVar8 = *(long *)(param_2 + 0x40);
    func_0x00010bfec9e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar8 != 0) &&
       (uVar16 = *(undefined8 *)(param_2 + 8), _objc_release(), ((uint)uVar16 >> 2 & 1) != 0)) {
      lVar8 = param_2;
      puVar12 = puVar6;
      func_0x00010be95940(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar3);
      _objc_release(lVar8);
    }
    lVar8 = *(long *)(param_2 + 0x38);
    func_0x00010bfec9e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar8 != 0) &&
       (uVar16 = *(undefined8 *)(param_2 + 8), _objc_release(), ((uint)uVar16 >> 1 & 1) != 0)) {
      lVar8 = param_2;
      puVar12 = puVar6;
      func_0x00010be95940(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar3);
      _objc_release(lVar8);
    }
    ppuVar10 = *(undefined ***)(param_2 + 0x68);
    ppuVar9 = ppuVar3;
    func_0x00010c246cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(ppuVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      _objc_retain(ppuVar10);
      _objc_retain(puVar12);
      ppuVar5 = ppuVar10;
      func_0x00010bfec9e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
      func_0x00010c153240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(ppuVar5);
      _objc_retain(ppuVar10);
      ppuVar9 = ppuVar3;
      func_0x00010c0bfa60(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(ppuVar10);
      _objc_release(ppuVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    return ppuVar9;
  }
  return ppuVar3;
}



/* Entry: 106e4a014; end: 106e4a2eb; -[SCSearchServicesIndexImpl _performQuery:originalText:] */

void FUN_106e4a014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf44700(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e2c558);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bfaea40(uVar11,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d2d30;
  _objc_alloc();
  func_0x00010c050500();
  puVar2 = PTR_PTR_1126d2d38;
  _objc_alloc();
  func_0x00010c012b40();
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126d2d40;
  _objc_alloc(PTR_PTR_1126d2d40);
  puVar9 = (undefined *)0x1;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012b60(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x00010bfec9e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 != 0) && (uVar10 = *(ulong *)(param_1 + 8), _objc_release(), (uVar10 & 1) != 0)) {
    lVar6 = param_1;
    puVar9 = puVar4;
    func_0x00010be95940(param_1,param_2,*(undefined8 *)(param_1 + 0x30),puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5,param_2,lVar6);
    _objc_release(lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010bfec9e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 != 0) &&
     (uVar11 = *(undefined8 *)(param_1 + 8), _objc_release(), ((uint)uVar11 >> 2 & 1) != 0)) {
    lVar6 = param_1;
    puVar9 = puVar4;
    func_0x00010be95940(param_1,param_2,*(undefined8 *)(param_1 + 0x40),puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5,param_2,lVar6);
    _objc_release(lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x00010bfec9e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 != 0) &&
     (uVar11 = *(undefined8 *)(param_1 + 8), _objc_release(), ((uint)uVar11 >> 1 & 1) != 0)) {
    lVar6 = param_1;
    puVar9 = puVar4;
    func_0x00010be95940(param_1,param_2,*(undefined8 *)(param_1 + 0x38),puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5,param_2,lVar6);
    _objc_release(lVar6);
  }
  puVar8 = *(undefined **)(param_1 + 0x68);
  puVar7 = puVar5;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_68 = FUN_106e4a2ec;
    puStack_90 = puVar2;
    puStack_88 = puVar1;
    uStack_80 = uVar3;
    puStack_78 = puVar7;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puVar1 = puVar8;
    func_0x00010bfec9e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c153240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106e4a3d8;
    puStack_a0 = &UNK_11097fa10;
    puStack_98 = puVar8;
    _objc_retain(puVar8);
    puVar7 = puVar2;
    func_0x00010c0bfa60(puVar2,param_2,&puStack_b8,&PTR___NSConcreteGlobalBlock_11097fa40);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_98);
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106e4a2ec; end: 106e4a4ef; -[SCSearchServicesIndexImpl _resultDocsForIndex:query:] */

void FUN_106e4a2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfec9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106e4a3d8;
  puStack_40 = &UNK_11097fa10;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010c0bfa60(uVar2,param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_11097fa40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e4a4f0; end: 106e4a5bb;  */

void FUN_106e4a4f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d2d48;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bf87640(param_3);
  func_0x00010c150c20(param_3);
  func_0x00010bf52680(*(undefined8 *)(param_2 + 0x28));
  uVar2 = param_3;
  func_0x00010bf87820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00d7a0(param_1,puVar1);
  func_0x00010befa120(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e4a5bc; end: 106e4a5c7;  */

undefined * FUN_106e4a5bc(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106e4a5c8; end: 106e4a6ef; -[SCSearchServicesIndexImpl _processedTextWithText:] */

void FUN_106e4a5c8(undefined **param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0b5ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar2 = param_1;
    func_0x00010be8dba0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010becb640(param_1,param_2,ppuVar2);
    if (((int)ppuVar3 == 0) && (param_1[9] != (undefined *)0x2)) {
      puVar4 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
      func_0x00010c11bb40(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b740();
      ppuVar5 = ppuVar2;
      func_0x00010bf44700(ppuVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(puVar4);
    }
    else {
      _objc_retain(ppuVar2);
      ppuVar3 = ppuVar2;
    }
    _objc_release(ppuVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106e4a6f0; end: 106e4a75b; -[SCSearchServicesIndexImpl _textHasPunctuationsOnly:] */

undefined * FUN_106e4a6f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c080400();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 106e4a75c; end: 106e4a87f; -[SCSearchServicesIndexImpl _removeTrailingSpaces:] */

void FUN_106e4a75c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60(param_3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar1 * 2 + 0xfU & 0xfffffffffffffff0);
  func_0x00010bfc38e0(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  for (; PTR__OBJC_CLASS___NSCharacterSet_1126af030 = puVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    func_0x00010c2a4be0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf359c0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) break;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  }
  lVar1 = param_3;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 0x10,0);
  return;
}



/* Entry: 106e4a880; end: 106e4a927; -[SCSearchServicesIndexImpl .cxx_destruct] */

void FUN_106e4a880(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e4a928; end: 106e4aa27; -[SCSearchUIServicesImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4a928(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2d50;
  _objc_alloc(PTR_PTR_1126d2d50);
  func_0x00010c042b80();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11275fab0));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e4aa28; end: 106e4aa93;  */

void FUN_106e4aa28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bded920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e4aa94; end: 106e4ad27; -[SCSearchUIServicesImplEntryPoint _createFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4aa94(long param_1,undefined8 param_2)

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
  undefined8 uVar20;
  
  puVar1 = PTR_PTR_1126d2d58;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275fab4;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11275fab8;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11275fabc;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_11275fac0;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11275fac4;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_11275fac8;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11275facc;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_11275fad0;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_11275fad4;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_11275fad8;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11275fadc;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_11275fae0;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_11275fae4;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_11275fae8;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_11275faec;
  _objc_loadWeakRetained();
  lVar17 = param_1 + _DAT_11275faf0;
  _objc_loadWeakRetained();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11275faf4);
  lVar18 = param_1 + _DAT_11275fb00;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_11275faf8;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11275fafc;
  _objc_loadWeakRetained();
  func_0x00010c05fb40(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,
                      lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,uVar20,lVar18,lVar19,param_1);
  _objc_release(param_1);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
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
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e4ad28; end: 106e4ad47; -[SCSearchUIServicesImplEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4ad28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275fafc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e4ad48; end: 106e4ad5b; -[SCSearchUIServicesImplEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4ad48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275fafc,param_3);
  return;
}



/* Entry: 106e4ad5c; end: 106e4ae7f; -[SCSearchUIServicesImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4ad5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275fb00);
  _objc_storeStrong(param_1 + _DAT_11275faf4,0);
  _objc_destroyWeak(param_1 + _DAT_11275fafc);
  _objc_destroyWeak(param_1 + _DAT_11275faf8);
  _objc_destroyWeak(param_1 + _DAT_11275fad0);
  _objc_destroyWeak(param_1 + _DAT_11275faf0);
  _objc_destroyWeak(param_1 + _DAT_11275faec);
  _objc_destroyWeak(param_1 + _DAT_11275fae8);
  _objc_destroyWeak(param_1 + _DAT_11275fae4);
  _objc_destroyWeak(param_1 + _DAT_11275fae0);
  _objc_destroyWeak(param_1 + _DAT_11275fadc);
  _objc_destroyWeak(param_1 + _DAT_11275fad8);
  _objc_destroyWeak(param_1 + _DAT_11275fad4);
  _objc_destroyWeak(param_1 + _DAT_11275facc);
  _objc_destroyWeak(param_1 + _DAT_11275fac8);
  _objc_destroyWeak(param_1 + _DAT_11275fac4);
  _objc_destroyWeak(param_1 + _DAT_11275fac0);
  _objc_destroyWeak(param_1 + _DAT_11275fabc);
  _objc_destroyWeak(param_1 + _DAT_11275fab8);
  _objc_destroyWeak(param_1 + _DAT_11275fab4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275fab0,0);
  return;
}



/* Entry: 106e4ae80; end: 106e4b2c3; -[SCSearchUIUserSearchingFactoryImpl initWithValdiBlizzardLoggingServices:valdiCOFStoresServices:composerNetworkingBridgeServices:composerPeopleBridgeUserInfoServices:composerPeopleBridgeFriendServices:composerPeopleBridgeGroupServices:composerPeopleBridgeFriendmojiServices:composerPeopleBridgeContactServices:storiesPlaybackServices:composerStoriesServices:userActionHandlerServices:mapPersonLocationServices:storiesServices:friendsFeedServices:composerCoreUIServices:navigationServices:chatCameraScopeExposer:chatCameraScopeServices:sharingExperimentServices:composerServices:] */

undefined8 *
FUN_106e4ae80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126f73b8;
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
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
  }
  _objc_release(param_22);
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



/* Entry: 106e4b2c4; end: 106e4bdff; -[SCSearchUIUserSearchingFactoryImpl create:] */

void FUN_106e4b2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 *puVar40;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar7 = *(long *)(param_1 + 0x28);
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  (**(code **)(lVar7 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfcf320();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x38);
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b1548;
  _objc_alloc(PTR_PTR_1126b1548);
  func_0x00010c046040();
  lVar7 = lVar10;
  (**(code **)(lVar10 + 0x10))(lVar10,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(lVar10);
  lVar12 = *(long *)(param_1 + 0x28);
  func_0x00010c261ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b1538;
  _objc_alloc(PTR_PTR_1126b1538);
  func_0x00010c033420();
  lVar10 = lVar12;
  (**(code **)(lVar12 + 0x10))(lVar12,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(lVar12);
  puVar11 = PTR_PTR_1126b6500;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c12a480(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d0c0();
  _objc_release(uVar5);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf450c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b1678;
  _objc_alloc();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106e4be00;
  puStack_98 = &UNK_110867030;
  uStack_90 = uVar13;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c017a80();
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c291060();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b1678;
  _objc_alloc();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x106e4be70;
  puStack_c8 = &UNK_110867030;
  uStack_c0 = uVar15;
  _objc_copyWeak(auStack_b8,auStack_80);
  func_0x00010c017a80();
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1d860();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b1530;
  _objc_alloc();
  func_0x00010c0460e0();
  lVar19 = *(long *)(param_1 + 0x28);
  func_0x00010bfebe60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar19;
  (**(code **)(lVar19 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  puVar20 = PTR_PTR_1126b6420;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c258580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cf60();
  _objc_release(uVar5);
  puVar21 = PTR_PTR_1126b64c8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfb9e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfb9ca0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfb9fa0(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0162a0();
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar5);
  uVar23 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar5;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar23);
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar23);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf3f640();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar27 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf3f720();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106e4bef8;
  puStack_f0 = &UNK_11089afa0;
  puVar28 = PTR_PTR_1126ae6b8;
  uStack_e8 = uVar27;
  func_0x00010bf6ab80();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b1540;
  _objc_alloc();
  puVar37 = PTR_PTR_1126ae6b8;
  _objc_opt_new();
  func_0x00010bffae80();
  _objc_release(puVar37);
  lVar30 = *(long *)(param_1 + 0x90);
  func_0x00010bf4a820();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar30;
  (**(code **)(lVar30 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar30);
  puVar32 = PTR_PTR_1126b13d8;
  _objc_alloc();
  puVar37 = PTR_PTR_1126ae6b8;
  _objc_opt_new();
  func_0x00010bffaea0();
  _objc_release(puVar37);
  lVar30 = *(long *)(param_1 + 0x90);
  func_0x00010bf49be0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar30;
  (**(code **)(lVar30 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar30);
  puVar34 = PTR_PTR_1126d2d60;
  _objc_alloc();
  lVar35 = lVar8;
  func_0x00010c269d40(lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar9;
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar10;
  func_0x00010c269d40(lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar28;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf45060();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8920();
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(puVar37);
  _objc_release(lVar19);
  _objc_release(lVar30);
  _objc_release(uVar5);
  _objc_release(lVar36);
  _objc_release(uVar23);
  _objc_release(lVar35);
  func_0x00010c17df40(puVar34);
  uVar23 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar34);
  _objc_release(uVar5);
  _objc_release(uVar23);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar38 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c295440(uVar38);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar38;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar5;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_110,auStack_80);
    _objc_opt_class(PTR_PTR_1126b6490);
    uVar39 = uVar23;
    func_0x00010c0b7ac0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199960(puVar34);
    _objc_release(uVar39);
    _objc_release(uVar23);
    _objc_release(uVar5);
    _objc_release(uVar38);
    _objc_destroyWeak(auStack_110);
  }
  puVar37 = PTR_PTR_1126b64f8;
  _objc_alloc(PTR_PTR_1126b64f8);
  func_0x00010c033320();
  puVar40 = auStack_80;
  _objc_loadWeakRetained(puVar40);
  func_0x00010c1e1580(puVar37);
  _objc_release(puVar40);
  func_0x00010c176be0(puVar34);
  _objc_release(puVar37);
  _objc_release(lVar33);
  _objc_release(puVar32);
  _objc_release(lVar31);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(lVar12);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar13);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar34);
  return;
}



/* Entry: 106e4be00; end: 106e4bef7;  */

void FUN_106e4be00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar2 = uVar1;
  func_0x00010c101180(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e4bef8; end: 106e4bfb3;  */

void FUN_106e4bef8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e4bfb4; end: 106e4c0bb; -[SCSearchUIUserSearchingFactoryImpl .cxx_destruct] */

void FUN_106e4bfb4(long param_1)

{
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



/* Entry: 106e4c0bc; end: 106e4c23f; -[SCUniversalSearchServiceProvider provide] */

void FUN_106e4c0bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e4c240;
  puStack_68 = &UNK_11097fa90;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d2d70;
  _objc_alloc(PTR_PTR_1126d2d70);
  func_0x00010c042960();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e4c240; end: 106e4c2ab;  */

void FUN_106e4c240(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf58a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e4c2ac; end: 106e4c357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4c2ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d2d68;
    _objc_alloc(PTR_PTR_1126d2d68);
    lVar2 = lVar1 + _DAT_11275fb78;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000980(puVar4,param_2,lVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e4c358; end: 106e4c38f;  */

void FUN_106e4c358(void)

{
  _objc_alloc(PTR_PTR_1126d2d78);
  func_0x00010c01d860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e4c390; end: 106e4c883; -[SCUniversalSearchServiceProvider createSearchDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4c390(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  
  lVar1 = param_1 + _DAT_11275fb54;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275fb58;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf3f720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010bf6ab80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1540;
  _objc_alloc();
  puVar6 = PTR_PTR_1126ae6b8;
  _objc_opt_new(PTR_PTR_1126ae6b8);
  func_0x00010bffae80();
  _objc_release(puVar6);
  lVar18 = (long)_DAT_11275fb5c;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf4a820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  (**(code **)(lVar7 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b13d8;
  _objc_alloc();
  puVar10 = PTR_PTR_1126ae6b8;
  _objc_opt_new(PTR_PTR_1126ae6b8);
  func_0x00010bffaea0();
  _objc_release(puVar10);
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar1 = lVar18;
  func_0x00010bf49be0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar18);
  lVar1 = param_1 + _DAT_11275fb60;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar1 = param_1 + _DAT_11275fb64;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar18;
  (**(code **)(lVar18 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275fb68;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010bfcf320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275fb6c;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b1548;
  _objc_alloc(PTR_PTR_1126b1548);
  func_0x00010c046040();
  lVar14 = lVar12;
  (**(code **)(lVar12 + 0x10))(lVar12,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11275fb70;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar13 = PTR_PTR_1126d2d80;
  _objc_alloc();
  lVar1 = lVar11;
  func_0x00010c269d40(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar18;
  func_0x00010c269d40(lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c272120(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8c00();
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar12);
  _objc_release(lVar14);
  _objc_release(lVar18);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106e4c884; end: 106e4c8db;  */

void FUN_106e4c884(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e4c8dc; end: 106e4c973; -[SCUniversalSearchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4c8dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275fb70);
  _objc_destroyWeak(param_1 + _DAT_11275fb6c);
  _objc_destroyWeak(param_1 + _DAT_11275fb5c);
  _objc_destroyWeak(param_1 + _DAT_11275fb68);
  _objc_destroyWeak(param_1 + _DAT_11275fb64);
  _objc_destroyWeak(param_1 + _DAT_11275fb60);
  _objc_destroyWeak(param_1 + _DAT_11275fb58);
  _objc_destroyWeak(param_1 + _DAT_11275fb54);
  _objc_destroyWeak(param_1 + _DAT_11275fb78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fb74);
  return;
}



/* Entry: 106e4c974; end: 106e4cb33; -[SCContactAccessButtonComposerView initWithFrame:contactSyncer:contactUserStoreRefreshTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e4c974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f73c0;
  puVar1 = &uStack_70;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d2d88;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275fb7c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275fb7c) = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_78,puVar1);
    puVar2 = PTR_PTR_1126d2d90;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf49ba0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9300(puVar1);
    _objc_release(puVar2);
    lVar4 = (long)_DAT_11275fb80;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11275fb84;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 106e4cb34; end: 106e4cb7b;  */

void FUN_106e4cb34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c122120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e4cb7c; end: 106e4cb87; -[SCContactAccessButtonComposerView initWithFrame:] */

void FUN_106e4cb7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_contactSyncer_cont_1125e2a28,0,0);
  return;
}



/* Entry: 106e4cb88; end: 106e4cf53; -[SCContactAccessButtonComposerView addToViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4cb88(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar22;
  long lVar23;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bfe46c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7700(param_3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfe46c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfe46c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bfe46c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bfe46c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bfe46c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bfe46c0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar22);
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
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bfe46c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77e80();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1e64f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275fb7c),PTR_s_setQueryString__112657360);
  return;
}



/* Entry: 106e4cf54; end: 106e4cf63; -[SCContactAccessButtonComposerView composer_applyQueryString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4cf54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e64f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275fb7c),PTR_s_setQueryString__112657360);
  return;
}



/* Entry: 106e4cf64; end: 106e4cf9b; -[SCContactAccessButtonComposerView composer_applyOnUserSelectedContact:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4cf64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275fb88);
  *(undefined8 *)(param_1 + _DAT_11275fb88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e4cf9c; end: 106e4d34b; -[SCContactAccessButtonComposerView receiveContacts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4cf9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_140 [8];
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
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar1;
  func_0x00010bfcccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa0820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar2 = lVar1;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = lVar1;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        puVar9 = PTR_PTR_1126aed98;
        uVar6 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        func_0x00010c296d80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010bf5f320();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb5d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar10);
        _objc_release(uVar6);
        puVar7 = puVar9;
        func_0x00010c08fa60();
        if (puVar7 != (undefined *)0x0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(puVar9);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_initWeak(auStack_138,param_1);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11275fb80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar12 = auStack_138;
  _objc_copyWeak(auStack_140);
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  func_0x00010c265d40(uVar10);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar12);
  if (puVar12 == (undefined1 *)0x0) {
    lVar1 = param_3 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar10 = *(undefined8 *)(lVar1 + _DAT_11275fb84);
      plVar11 = (long *)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar10);
      _objc_release();
      func_0x00010b97f424();
      func_0x00010b97f738();
      uVar10 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010bf529e0(uVar10);
      func_0x00010b9a14b8(plVar11,uVar10);
      func_0x00010bf97e80(*(undefined8 *)(param_3 + 0x28));
      func_0x00010c0f9540(*(undefined8 *)(lVar1 + _DAT_11275fb88));
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 106e4d34c; end: 106e4d49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4d34c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_11275fb84);
      plVar2 = (long *)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
      _objc_release();
      func_0x00010b97f424();
      func_0x00010b97f738();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf529e0(uVar3);
      func_0x00010b9a14b8(plVar2,uVar3);
      func_0x00010bf97e80(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c0f9540(*(undefined8 *)(lVar1 + _DAT_11275fb88));
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e4d4a0; end: 106e4d4e7;  */

void FUN_106e4d4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  
  func_0x00010b97f738(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010b9a168c(lVar2,*(undefined4 *)(param_1 + 0x28),param_3);
  if ((*(byte *)(*(long *)(lVar2 + 8) + 8) & 1) != 0) {
    return;
  }
  func_0x00010b9a0084(&stack0xffffffffffffffd8);
  func_0x00010b981e8c(&stack0xffffffffffffffd8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b97f3e8);
  (*pcVar1)();
}



/* Entry: 106e4d4e8; end: 106e4d563; +[SCContactAccessButtonComposerView bindAttributes:] */

void FUN_106e4d4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a140(param_3,param_2,&PTR____CFConstantStringClassReference_110e88e18,1,
                      &PTR___NSConcreteGlobalBlock_11097fb60,&PTR___NSConcreteGlobalBlock_11097fba0)
  ;
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e88e38,
                      &PTR___NSConcreteGlobalBlock_11097fbe0,&PTR___NSConcreteGlobalBlock_11097fc20)
  ;
  func_0x00010c1c3fa0(param_3,param_2,&PTR___NSConcreteGlobalBlock_11097fc40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e4d564; end: 106e4d57f;  */

undefined8 FUN_106e4d564(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf45340(param_2);
  return 1;
}



/* Entry: 106e4d580; end: 106e4d59b;  */

void FUN_106e4d580(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf45350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_composer_applyQueryString__1125aee78,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106e4d59c; end: 106e4d65f;  */

undefined1  [16]
FUN_106e4d59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_PTR_1126b6490;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0,0,param_1,param_2);
  uVar2 = param_4;
  func_0x00010c25d740(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf45340(puVar1);
  _objc_release(uVar2);
  func_0x00010c23d5a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 106e4d660; end: 106e4d6d3; -[SCContactAccessButtonComposerView sizeThatFits:] */

undefined1  [16] FUN_106e4d660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bfe46c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d5a0(param_1,param_2);
  _objc_release(uVar1);
  _objc_release(param_3);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 106e4d6d4; end: 106e4d6e3; -[SCContactAccessButtonComposerView hostingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4d6d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11275fb8c,1);
  return;
}



/* Entry: 106e4d6e4; end: 106e4d6ef; -[SCContactAccessButtonComposerView setHostingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4d6e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106e4d6f0; end: 106e4d75f; -[SCContactAccessButtonComposerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e4d6f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275fb8c,0);
  _objc_storeStrong(param_1 + _DAT_11275fb84,0);
  _objc_storeStrong(param_1 + _DAT_11275fb80,0);
  _objc_storeStrong(param_1 + _DAT_11275fb88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275fb7c,0);
  return;
}



/* Entry: 106e4d760; end: 106e4d83f;  */

void FUN_106e4d760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfac740(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_48);
  func_0x00010c2682e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106e4d840(auStack_68);
  FUN_106e4d8c4(param_1,auStack_48,auStack_68);
  FUN_106e4d974(auStack_68);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  _objc_release(uVar1);
  FUN_106e4d994();
  return;
}



/* Entry: 106e4d840; end: 106e4d8c3;  */

void FUN_106e4d840(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  _objc_retain();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_106e4fdd0(&uStack_40,param_2);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x0001000e30f4(&uStack_40);
  }
  FUN_106e4d994();
  return;
}



/* Entry: 106e4d8c4; end: 106e4d903;  */

undefined8 * FUN_106e4d8c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_106e4d904(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 106e4d904; end: 106e4d933;  */

undefined1 * FUN_106e4d904(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_106e4d934();
  return param_1;
}



/* Entry: 106e4d934; end: 106e4d973;  */

void FUN_106e4d934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 106e4d974; end: 106e4d993;  */

void FUN_106e4d974(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001000e30f4();
  }
  return;
}



/* Entry: 106e4d994; end: 106e4d99b;  */

void FUN_106e4d994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4d99c; end: 106e4da37;  */

long FUN_106e4d99c(double param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  _objc_retain();
  if ((bRam0000000113187d78 & 1) == 0) {
    iVar1 = 0x13187d78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      lVar2 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      lRam0000000113187d70 = lVar2;
      ___cxa_guard_release(0x113187d78);
    }
  }
  func_0x00010c26f320(param_2);
  lVar2 = lRam0000000113187d70;
  _objc_release(param_2);
  return lVar2 + (long)(param_1 * 1000000.0);
}



/* Entry: 106e4da38; end: 106e4daa7;  */

void FUN_106e4da38(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = PTR_PTR_1126d2d98;
  _objc_alloc(PTR_PTR_1126d2d98);
  puVar3 = param_1 + 2;
  uVar1 = *param_1;
  FUN_106e4daa8(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030400(puVar2,param_2,uVar1,puVar3);
  FUN_106e4db44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e4daa8; end: 106e4db43;  */

void FUN_106e4daa8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000113187d88 & 1) == 0) {
    iVar1 = 0x13187d88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      lVar2 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      lRam0000000113187d80 = lVar2;
      ___cxa_guard_release(0x113187d88);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(*param_1 - lRam0000000113187d80) / 1000000.0,
             PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}


