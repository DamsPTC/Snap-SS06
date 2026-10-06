/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062a0450; end: 1062a047f; -[SCContextSpotlightHeaderParams setLogger:] */

void FUN_1062a0450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062a0480; end: 1062a0487; -[SCContextSpotlightHeaderParams title] */

undefined8 FUN_1062a0480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062a0488; end: 1062a048f; -[SCContextSpotlightHeaderParams setTitle:] */

void FUN_1062a0488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a0490; end: 1062a0497; -[SCContextSpotlightHeaderParams subtitle] */

undefined8 FUN_1062a0490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062a0498; end: 1062a049f; -[SCContextSpotlightHeaderParams setSubtitle:] */

void FUN_1062a0498(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a04a0; end: 1062a04a7; -[SCContextSpotlightHeaderParams action] */

undefined8 FUN_1062a04a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062a04a8; end: 1062a04af; -[SCContextSpotlightHeaderParams setAction:] */

void FUN_1062a04a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a04b0; end: 1062a04b7; -[SCContextSpotlightHeaderParams isOfficial] */

undefined1 FUN_1062a04b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1062a04b8; end: 1062a04bf; -[SCContextSpotlightHeaderParams setIsOfficial:] */

void FUN_1062a04b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1062a04c0; end: 1062a04c7; -[SCContextSpotlightHeaderParams image] */

undefined8 FUN_1062a04c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1062a04c8; end: 1062a04f7; -[SCContextSpotlightHeaderParams setImage:] */

void FUN_1062a04c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062a04f8; end: 1062a050f; -[SCContextSpotlightHeaderParams operaPage] */

void FUN_1062a04f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062a0510; end: 1062a051b; -[SCContextSpotlightHeaderParams setOperaPage:] */

void FUN_1062a0510(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1062a051c; end: 1062a0523; -[SCContextSpotlightHeaderParams subscriptionParams] */

undefined8 FUN_1062a051c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1062a0524; end: 1062a052b; -[SCContextSpotlightHeaderParams setSubscriptionParams:] */

void FUN_1062a0524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a052c; end: 1062a0533; -[SCContextSpotlightHeaderParams remixParams] */

undefined8 FUN_1062a052c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1062a0534; end: 1062a053b; -[SCContextSpotlightHeaderParams setRemixParams:] */

void FUN_1062a0534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a053c; end: 1062a0543; -[SCContextSpotlightHeaderParams lensParams] */

undefined8 FUN_1062a053c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1062a0544; end: 1062a054b; -[SCContextSpotlightHeaderParams setLensParams:] */

void FUN_1062a0544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a054c; end: 1062a05d7; -[SCContextSpotlightHeaderParams .cxx_destruct] */

void FUN_1062a054c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 1062a05d8; end: 1062a06b7; -[SCContextSpotlightSoundEntryParams copyWithZone:] */

undefined8 FUN_1062a05d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf53900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184c60(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c246fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206960(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdda20(param_1);
  func_0x00010c1a7180(uVar1,param_2,uVar2);
  func_0x00010c230c60(param_1);
  func_0x00010c200720(uVar1,param_2,param_1);
  return uVar1;
}



/* Entry: 1062a06b8; end: 1062a06bf; -[SCContextSpotlightSoundEntryParams title] */

undefined8 FUN_1062a06b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062a06c0; end: 1062a06c7; -[SCContextSpotlightSoundEntryParams setTitle:] */

void FUN_1062a06c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a06c8; end: 1062a06cf; -[SCContextSpotlightSoundEntryParams coverView] */

undefined8 FUN_1062a06c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062a06d0; end: 1062a06ff; -[SCContextSpotlightSoundEntryParams setCoverView:] */

void FUN_1062a06d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062a0700; end: 1062a0707; -[SCContextSpotlightSoundEntryParams soundAction] */

undefined8 FUN_1062a0700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062a0708; end: 1062a070f; -[SCContextSpotlightSoundEntryParams setSoundAction:] */

void FUN_1062a0708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a0710; end: 1062a0717; -[SCContextSpotlightSoundEntryParams hasTrendingMusic] */

undefined1 FUN_1062a0710(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1062a0718; end: 1062a071f; -[SCContextSpotlightSoundEntryParams setHasTrendingMusic:] */

void FUN_1062a0718(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1062a0720; end: 1062a0727; -[SCContextSpotlightSoundEntryParams shouldHideForSpotlightOriginalSound] */

undefined1 FUN_1062a0720(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1062a0728; end: 1062a072f; -[SCContextSpotlightSoundEntryParams setShouldHideForSpotlightOriginalSound:] */

void FUN_1062a0728(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1062a0730; end: 1062a076b; -[SCContextSpotlightSoundEntryParams .cxx_destruct] */

void FUN_1062a0730(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1062a076c; end: 1062a0873; -[SCContextSpotlightSubcriptionActionsParams copyWithZone:] */

undefined8 FUN_1062a076c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0520(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c260880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f560(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf5b380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185be0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c25fd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f3e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0ea8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5540(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1062a0874; end: 1062a087b; -[SCContextSpotlightSubcriptionActionsParams logger] */

undefined8 FUN_1062a0874(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062a087c; end: 1062a08ab; -[SCContextSpotlightSubcriptionActionsParams setLogger:] */

void FUN_1062a087c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062a08ac; end: 1062a08b3; -[SCContextSpotlightSubcriptionActionsParams subscriptionParams] */

undefined8 FUN_1062a08ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062a08b4; end: 1062a08bb; -[SCContextSpotlightSubcriptionActionsParams setSubscriptionParams:] */

void FUN_1062a08b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a08bc; end: 1062a08c3; -[SCContextSpotlightSubcriptionActionsParams creatorDisplayName] */

undefined8 FUN_1062a08bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062a08c4; end: 1062a08cb; -[SCContextSpotlightSubcriptionActionsParams setCreatorDisplayName:] */

void FUN_1062a08c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a08cc; end: 1062a08d3; -[SCContextSpotlightSubcriptionActionsParams subscribeAvatarButtonParams] */

undefined8 FUN_1062a08cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062a08d4; end: 1062a08db; -[SCContextSpotlightSubcriptionActionsParams setSubscribeAvatarButtonParams:] */

void FUN_1062a08d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a08dc; end: 1062a08f3; -[SCContextSpotlightSubcriptionActionsParams operaPage] */

void FUN_1062a08dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062a08f4; end: 1062a08ff; -[SCContextSpotlightSubcriptionActionsParams setOperaPage:] */

void FUN_1062a08f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1062a0900; end: 1062a094f; -[SCContextSpotlightSubcriptionActionsParams .cxx_destruct] */

void FUN_1062a0900(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062a0950; end: 1062a0b03; -[SCContextSpotlightHeroContextCardProvider initWithSpotlightParamsObservable:dataFetcher:boostCoordinator:performer:storiesConfigProvider:circumstanceEngine:] */

undefined1 *
FUN_1062a0950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f0b38;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be12fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010be351a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd4280(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062a0b04; end: 1062a0bfb;  */

uint FUN_1062a0b04(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (uVar1 == 2) {
    uVar6 = 1;
    uVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c24aec0();
    if (uVar2 != 0) {
      uVar2 = uVar1;
      func_0x00010c24aea0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c07a1c0();
      uVar6 = (uint)uVar5 ^ 1;
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 1062a0bfc; end: 1062a0c23; -[SCContextSpotlightHeroContextCardProvider heroContextCardDataModelObservable] */

void FUN_1062a0bfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062a0c24; end: 1062a0d43; -[SCContextSpotlightHeroContextCardProvider _bindHeroContextCardsFromObservable:] */

void FUN_1062a0c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc();
  func_0x00010c060400();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1062a0d44; end: 1062a0d93;  */

void FUN_1062a0d44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a0d94; end: 1062a0e63; -[SCContextSpotlightHeroContextCardProvider _fetchParamsResponseFromRawParams:] */

void FUN_1062a0d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c2656e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062a0e64; end: 1062a10b3;  */

void FUN_1062a0e64(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *unaff_x21;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
LAB_1062a1054:
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_2;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010c24afc0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae720;
    _objc_opt_class();
    puVar2 = puVar3;
    _objc_opt_isKindOfClass();
    puVar4 = puVar3;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    unaff_x21 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (unaff_x21 == (undefined *)0x0) {
      unaff_x21 = *(undefined **)(param_1 + 0x38);
      puVar4 = param_2;
      func_0x00010c160280(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaa640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (unaff_x21 == (undefined *)0x0) goto LAB_1062a1054;
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1062a10b4;
    puStack_60 = &UNK_110898ec8;
    _objc_retain(param_2);
    puVar2 = unaff_x21;
    puStack_58 = param_2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = param_2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_58);
    _objc_release(unaff_x21);
  }
  _objc_release(param_1);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_88 = FUN_1062a10b4;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b0 = puVar4;
    puStack_a8 = unaff_x21;
    lStack_a0 = param_1;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_1062a120c;
    uStack_d0 = 0x1062a121c;
    uStack_c0 = *(undefined8 *)(puVar2 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c0d3c80();
    puStack_c8 = puVar2;
    _objc_release(puVar4);
    func_0x00010c0c0800(puVar1);
    puVar4 = (undefined *)puStack_e8[5];
    func_0x00010bf51e00(puVar4);
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(puStack_c8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      lVar5 = 8;
      __Block_object_dispose(&uStack_f0);
      __Unwind_Resume();
      *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062a10b4; end: 1062a120b;  */

void FUN_1062a10b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1062a120c;
  uStack_50 = 0x1062a121c;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  puStack_48 = puVar2;
  _objc_release(puVar1);
  func_0x00010c0c0800(param_2);
  uVar3 = puStack_68[5];
  func_0x00010bf51e00(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_70);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1062a120c; end: 1062a123f;  */

void FUN_1062a120c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1062a1240; end: 1062a130f; -[SCContextSpotlightHeroContextCardProvider _heroContextParamsWithSpotlightParamsObservable:] */

void FUN_1062a1240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c2656e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062a1310; end: 1062a152b;  */

void FUN_1062a1310(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar6 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93c8;
  _objc_opt_class(PTR_PTR_1126c93c8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar7 = lVar5;
  func_0x00010be804e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_retain(lVar7);
  lVar5 = lVar7;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar5 != 0) {
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar7);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar6;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  uVar4 = uVar3;
  lVar9 = lVar7;
  func_0x00010be137a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    _objc_retain(lVar9);
    uVar6 = uVar4;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c25b720();
    _objc_release(uVar6);
    uVar6 = uVar4;
    uVar3 = uVar4;
    if (uVar1 == 0xf) {
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b200(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107b2883c(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107b288cc(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_188,param_2);
    lVar7 = *(long *)(param_2 + 0x18);
    func_0x00010c269d40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c0e0480(lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(lVar9);
    lVar5 = lVar10;
    func_0x00010c0b8600(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_destroyWeak(auStack_190);
    _objc_release(uVar4);
    _objc_release(lVar10);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_destroyWeak(auStack_188);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(lVar9);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1062a152c; end: 1062a173f; -[SCContextSpotlightHeroContextCardProvider _fetchRecommendHeroCardWithSessionParams:currentCards:] */

void FUN_1062a152c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25b720();
  _objc_release(lVar1);
  lVar1 = param_3;
  lVar3 = param_3;
  if (lVar2 == 0xf) {
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b200(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107b2883c(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b288cc(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  uVar7 = uVar6;
  func_0x00010c0b8600(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1062a1740; end: 1062a1837;  */

void FUN_1062a1740(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5b98;
  _objc_opt_class(PTR_PTR_1126b5b98);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9b320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b611948(uVar1,uVar4);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010c29d360(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010be1aca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1062a1838; end: 1062a19ab; -[SCContextSpotlightHeroContextCardProvider _filteredAndSortedCards:isForUsFeed:] */

void FUN_1062a1838(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc0000000;
  pcStack_68 = FUN_1062a19ac;
  puStack_60 = &UNK_110919fc8;
  uVar1 = param_3;
  uStack_58 = param_4;
  func_0x0001006372a4(param_3,&puStack_78);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9500;
  func_0x00010c24bc20(PTR_PTR_1126c9500);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  _objc_copyWeak(auStack_90,auStack_80);
  uStack_88 = (undefined1)uVar4;
  uVar4 = uVar1;
  func_0x00010c246ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1062a19ac; end: 1062a1a0f;  */

bool FUN_1062a19ac(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (lVar2 = param_2, func_0x00010bf32060(), lVar2 == 1)
     ) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf32060(param_2);
    bVar1 = lVar2 != -1;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1062a1a10; end: 1062a1b03;  */

undefined * FUN_1062a1a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bebe160();
  _objc_release(param_2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebe160();
  _objc_release(param_3);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf433a0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return puVar4;
}



/* Entry: 1062a1b04; end: 1062a1b63; -[SCContextSpotlightHeroContextCardProvider _sortPriorityForCard:prioritizeFriendReposted:] */

long FUN_1062a1b04(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_4 == 0) || (lVar1 = param_3, func_0x00010bf32060(), lVar1 != 5)) {
    lVar1 = param_3;
    func_0x00010c113c80(param_3);
    lVar1 = lVar1 * 10;
  }
  else {
    lVar1 = 0x13;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1062a1b64; end: 1062a1d7b; -[SCContextSpotlightHeroContextCardProvider _generateCardsWithIsRecommend:currentCards:isForUsFeed:] */

void FUN_1062a1b64(undefined *param_1,undefined8 param_2,int param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_200;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c0d3c80();
  if (param_3 != 0) {
    _objc_retain(param_4);
    puVar2 = param_4;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_4);
        }
        lVar18 = *(long *)((long)puVar20 * 8);
        lVar3 = lVar18;
        func_0x00010bf32060();
        if (lVar3 == 5) {
          _objc_retain(lVar18);
          goto LAB_1062a1c60;
        }
        puVar20 = puVar20 + 1;
      } while (puVar2 != puVar20);
      puVar2 = param_4;
      func_0x00010bf52a60();
    }
    lVar18 = 0;
LAB_1062a1c60:
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126c9508;
    _objc_alloc();
    lVar4 = lVar18;
    func_0x00010bfb9180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb7f40();
    puVar20 = PTR_PTR_1126b5b00;
    func_0x00010bf4c900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffcbe0();
    _objc_release(puVar20);
    _objc_release(lVar4);
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar18);
  }
  puVar2 = puVar1;
  func_0x00010be164c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_5);
  _objc_opt_new();
  puVar20 = puVar2;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar20;
  func_0x0001084372fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar6 = puVar5;
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c27b9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar6;
  func_0x00010c27dd80();
  puVar20 = PTR_PTR_1126c9510;
  if (puVar19 != (undefined *)0x0) {
    func_0x00010c27dd80(puVar6);
    func_0x00010bfe0cc0(puVar20);
    puVar20 = puVar6;
    func_0x00010bfb9180();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar6;
    func_0x00010c27dd80();
    puVar10 = puVar20;
    if ((puVar19 == (undefined *)0x6) ||
       (puVar19 = puVar6, func_0x00010c27dd80(), puVar19 == (undefined *)0x1)) {
      puVar19 = puVar2;
      func_0x00010c160280();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar19;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c25b1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(puVar19);
      puVar19 = puVar9;
      func_0x00010c08fa60();
      if (puVar19 != (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
      }
      _objc_release(puVar9);
    }
    puVar20 = puVar7;
    func_0x00010c0ed7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar20;
    func_0x00010c08fa60();
    if (puVar19 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR_PTR_1126c9518;
      _objc_alloc();
      func_0x00010c03b180();
    }
    puVar17 = PTR_PTR_1126c9508;
    _objc_alloc(PTR_PTR_1126c9508);
    func_0x00010bfb7f40(puVar6);
    puVar9 = PTR_PTR_1126b5b00;
    func_0x00010bf4c900(PTR_PTR_1126b5b00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffcbe0(puVar17);
    _objc_release(puVar9);
    func_0x00010befa120(puVar1);
    _objc_release(puVar17);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar10);
  }
  puVar20 = puVar5;
  func_0x00010bf41ec0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar20 != (undefined *)0x0) {
    puVar19 = puVar20;
    func_0x00010c132180();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar19;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = puVar20;
      func_0x00010c131f40();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar10;
      func_0x00010c08fa60();
      _objc_release(puVar10);
      _objc_release(puVar19);
      if (puVar17 == (undefined *)0x0) goto LAB_1062a23a0;
    }
    else {
      _objc_release(puVar19);
    }
    puVar19 = puVar20;
    func_0x00010c132180();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar19;
    func_0x00010c08fa60();
    _objc_release(puVar19);
    if (puVar10 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = puVar20;
      func_0x00010c132180();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = puVar19;
    func_0x00010c08fa60();
    if (puVar10 != (undefined *)0x0) {
      puVar10 = puVar20;
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar10;
      func_0x00010c08fa60();
      if (puVar17 == (undefined *)0x0) {
        puStack_200 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar20;
        func_0x00010c131f60();
        _objc_retainAutoreleasedReturnValue();
        puStack_200 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
      }
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126b5b00;
      func_0x00010bf42020(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar20;
      func_0x00010c131d20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c08fa60();
      _objc_release(puVar17);
      if (puVar9 != (undefined *)0x0) {
        puVar17 = puVar20;
        func_0x00010c131d20();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar17;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        if (puVar9 != (undefined *)0x0) {
          puVar17 = puVar10;
          func_0x00010bf42020(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e09e0();
          _objc_release(puVar17);
        }
        _objc_release(puVar9);
      }
      puVar17 = puVar20;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c08fa60();
      _objc_release(puVar17);
      if (puVar9 != (undefined *)0x0) {
        puVar17 = puVar20;
        func_0x00010c0f3b40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar17;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        if (puVar9 != (undefined *)0x0) {
          puVar17 = puVar10;
          func_0x00010bf42020(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e0a00();
          _objc_release(puVar17);
        }
        _objc_release(puVar9);
      }
      puVar17 = PTR_PTR_1126c9518;
      _objc_alloc();
      puVar9 = puVar20;
      func_0x00010c131fa0(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar20;
      func_0x00010c131f00(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar20;
      func_0x00010c131f20(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar20;
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03b180();
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126c9508;
      _objc_alloc(PTR_PTR_1126c9508);
      func_0x00010bffcbe0();
      func_0x00010befa120(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar17);
      _objc_release(puVar10);
      _objc_release(puStack_200);
    }
    _objc_release(puVar19);
  }
LAB_1062a23a0:
  if (puVar7 != (undefined *)0x0) {
    puVar19 = puVar7;
    func_0x00010c0ed760();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar19;
    func_0x00010c08fa60();
    if (puVar10 != (undefined *)0x0) {
      _objc_release(puVar19);
      puVar17 = puVar7;
      func_0x00010c0ed780();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010c08fa60();
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar19 == (undefined *)0x0) {
        func_0x000108f5986c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f59854();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c0ed780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar19);
        puVar19 = puVar10;
      }
      _objc_release(puVar17);
      puVar10 = puVar7;
      func_0x00010c0ed7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar10;
      func_0x00010c08fa60();
      if (puVar17 == (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = PTR_PTR_1126c9518;
        _objc_alloc();
        func_0x00010c03b180();
      }
      puVar11 = PTR_PTR_1126c9508;
      _objc_alloc(PTR_PTR_1126c9508);
      puVar9 = PTR_PTR_1126b5b00;
      puVar12 = puVar7;
      func_0x00010c0ed760(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe8c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffcbe0(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar12);
      func_0x00010befa120(puVar1);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar17);
    }
    _objc_release(puVar19);
  }
  func_0x00010bdcd580(param_4);
  uVar14 = param_5;
  func_0x00010c24aea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be823e0(param_4);
  _objc_release(uVar14);
  puVar19 = puVar1;
  puVar10 = puVar2;
  func_0x00010be16260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  param_1 = param_4;
  func_0x00010bf51e00();
  _objc_release(puVar20);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    _objc_retain(puVar19);
    _objc_retain(puVar10);
    uVar15 = *(undefined8 *)(puVar2 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c9500;
    func_0x00010c24c660(PTR_PTR_1126c9500);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010bf1f320();
    _objc_release(puVar1);
    _objc_release(uVar15);
    if ((int)uVar14 != 0) {
      puVar1 = puVar19;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar20 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar5 = puVar20;
      _objc_opt_isKindOfClass(puVar20,puVar1);
      puVar1 = puVar20;
      if (((ulong)puVar5 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar20);
      puVar20 = puVar1;
      func_0x00010c08fa60();
      if (puVar20 != (undefined *)0x0) {
        puVar5 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar6 = puVar5;
        _objc_opt_isKindOfClass(puVar5,puVar20);
        puVar20 = puVar5;
        if (((ulong)puVar6 & 1) == 0) {
          puVar20 = (undefined *)0x0;
        }
        _objc_retain(puVar20);
        _objc_release(puVar5);
        puVar5 = puVar20;
        func_0x00010c067fc0();
        _objc_release(puVar20);
        puVar6 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar7 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar20);
        puVar20 = puVar6;
        if (((ulong)puVar7 & 1) == 0) {
          puVar20 = (undefined *)0x0;
        }
        _objc_retain(puVar20);
        _objc_release(puVar6);
        puVar6 = puVar20;
        func_0x00010c0b4ca0();
        _objc_release(puVar20);
        if (((puVar5 != (undefined *)0x0) && (puVar5 == (undefined *)0x1)) && (0 < (long)puVar6)) {
          puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          _objc_release(puVar20);
        }
        puVar20 = PTR_PTR_1126c9508;
        _objc_alloc(PTR_PTR_1126c9508);
        puVar5 = PTR_PTR_1126b5b00;
        func_0x00010c08bd00(PTR_PTR_1126b5b00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffcbe0(puVar20);
        _objc_release(puVar5);
        func_0x00010befa120(puVar10);
        _objc_release(puVar20);
      }
      _objc_release(puVar1);
      _objc_release(puVar2);
    }
    _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar19);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1062a1d7c; end: 1062a2657; -[SCContextSpotlightHeroContextCardProvider _processAndPublishHeroContextCardsFromSpotlightParams:spotlightResponse:] */

void FUN_1062a1d7c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

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
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_b0;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001084372fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar3;
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c27b9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c27dd80();
  puVar2 = PTR_PTR_1126c9510;
  if (puVar16 != (undefined *)0x0) {
    func_0x00010c27dd80(puVar4);
    func_0x00010bfe0cc0(puVar2);
    puVar2 = puVar4;
    func_0x00010bfb9180();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010c27dd80();
    puVar8 = puVar2;
    if ((puVar16 == (undefined *)0x6) ||
       (puVar16 = puVar4, func_0x00010c27dd80(), puVar16 == (undefined *)0x1)) {
      puVar16 = param_3;
      func_0x00010c160280();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar16;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c25b1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar16);
      puVar16 = puVar7;
      func_0x00010c08fa60();
      if (puVar16 != (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      _objc_release(puVar7);
    }
    puVar2 = puVar5;
    func_0x00010c0ed7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010c08fa60();
    if (puVar16 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR_PTR_1126c9518;
      _objc_alloc();
      func_0x00010c03b180();
    }
    puVar15 = PTR_PTR_1126c9508;
    _objc_alloc(PTR_PTR_1126c9508);
    func_0x00010bfb7f40(puVar4);
    puVar7 = PTR_PTR_1126b5b00;
    func_0x00010bf4c900(PTR_PTR_1126b5b00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffcbe0(puVar15);
    _objc_release(puVar7);
    func_0x00010befa120(puVar1);
    _objc_release(puVar15);
    _objc_release(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar8);
  }
  puVar2 = puVar3;
  func_0x00010bf41ec0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar16 = puVar2;
    func_0x00010c132180();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    func_0x00010c08fa60();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = puVar2;
      func_0x00010c131f40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      _objc_release(puVar16);
      if (puVar15 == (undefined *)0x0) goto LAB_1062a23a0;
    }
    else {
      _objc_release(puVar16);
    }
    puVar16 = puVar2;
    func_0x00010c132180();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    func_0x00010c08fa60();
    _objc_release(puVar16);
    if (puVar8 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = puVar2;
      func_0x00010c132180();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = puVar16;
    func_0x00010c08fa60();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = puVar2;
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar8;
      func_0x00010c08fa60();
      if (puVar15 == (undefined *)0x0) {
        puStack_b0 = (undefined *)0x0;
      }
      else {
        puVar15 = puVar2;
        func_0x00010c131f60();
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
      }
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126b5b00;
      func_0x00010bf42020(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c131d20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c08fa60();
      _objc_release(puVar15);
      if (puVar7 != (undefined *)0x0) {
        puVar15 = puVar2;
        func_0x00010c131d20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar15;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        if (puVar7 != (undefined *)0x0) {
          puVar15 = puVar8;
          func_0x00010bf42020(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e09e0();
          _objc_release(puVar15);
        }
        _objc_release(puVar7);
      }
      puVar15 = puVar2;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c08fa60();
      _objc_release(puVar15);
      if (puVar7 != (undefined *)0x0) {
        puVar15 = puVar2;
        func_0x00010c0f3b40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar15;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        if (puVar7 != (undefined *)0x0) {
          puVar15 = puVar8;
          func_0x00010bf42020(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e0a00();
          _objc_release(puVar15);
        }
        _objc_release(puVar7);
      }
      puVar15 = PTR_PTR_1126c9518;
      _objc_alloc();
      puVar7 = puVar2;
      func_0x00010c131fa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010c131f00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c131f20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03b180();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c9508;
      _objc_alloc(PTR_PTR_1126c9508);
      func_0x00010bffcbe0();
      func_0x00010befa120(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar15);
      _objc_release(puVar8);
      _objc_release(puStack_b0);
    }
    _objc_release(puVar16);
  }
LAB_1062a23a0:
  if (puVar5 != (undefined *)0x0) {
    puVar16 = puVar5;
    func_0x00010c0ed760();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    func_0x00010c08fa60();
    if (puVar8 != (undefined *)0x0) {
      _objc_release(puVar16);
      puVar15 = puVar5;
      func_0x00010c0ed780();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c08fa60();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar16 == (undefined *)0x0) {
        func_0x000108f5986c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f59854();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0ed780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar16);
        puVar16 = puVar8;
      }
      _objc_release(puVar15);
      puVar8 = puVar5;
      func_0x00010c0ed7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar8;
      func_0x00010c08fa60();
      if (puVar15 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = PTR_PTR_1126c9518;
        _objc_alloc();
        func_0x00010c03b180();
      }
      puVar9 = PTR_PTR_1126c9508;
      _objc_alloc(PTR_PTR_1126c9508);
      puVar7 = PTR_PTR_1126b5b00;
      puVar10 = puVar5;
      func_0x00010c0ed760(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe8c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffcbe0(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar10);
      func_0x00010befa120(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar15);
    }
    _objc_release(puVar16);
  }
  func_0x00010bdcd580(param_1);
  uVar12 = param_4;
  func_0x00010c24aea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be823e0(param_1);
  _objc_release(uVar12);
  puVar16 = puVar1;
  puVar8 = param_3;
  func_0x00010be16260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar12 = param_1;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain(puVar16);
    _objc_retain(puVar8);
    uVar13 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c9500;
    func_0x00010c24c660(PTR_PTR_1126c9500);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x00010bf1f320();
    _objc_release(puVar1);
    _objc_release(uVar13);
    if ((int)uVar12 != 0) {
      puVar1 = puVar16;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar3 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar1);
      puVar1 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c08fa60();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar5 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar3);
        puVar3 = puVar4;
        if (((ulong)puVar5 & 1) == 0) {
          puVar3 = (undefined *)0x0;
        }
        _objc_retain(puVar3);
        _objc_release(puVar4);
        puVar4 = puVar3;
        func_0x00010c067fc0();
        _objc_release(puVar3);
        puVar5 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar6 = puVar5;
        _objc_opt_isKindOfClass(puVar5,puVar3);
        puVar3 = puVar5;
        if (((ulong)puVar6 & 1) == 0) {
          puVar3 = (undefined *)0x0;
        }
        _objc_retain(puVar3);
        _objc_release(puVar5);
        puVar5 = puVar3;
        func_0x00010c0b4ca0();
        _objc_release(puVar3);
        if (((puVar4 != (undefined *)0x0) && (puVar4 == (undefined *)0x1)) && (0 < (long)puVar5)) {
          puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          _objc_release(puVar3);
        }
        puVar3 = PTR_PTR_1126c9508;
        _objc_alloc(PTR_PTR_1126c9508);
        puVar4 = PTR_PTR_1126b5b00;
        func_0x00010c08bd00(PTR_PTR_1126b5b00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffcbe0(puVar3);
        _objc_release(puVar4);
        func_0x00010befa120(puVar8);
        _objc_release(puVar3);
      }
      _objc_release(puVar1);
      _objc_release(puVar2);
    }
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar16);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 1062a2658; end: 1062a293f; -[SCContextSpotlightHeroContextCardProvider _appendSuggestedSearchCardFromSpotlightParams:toArray:] */

void FUN_1062a2658(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9500;
  func_0x00010c24c660(PTR_PTR_1126c9500);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar4 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar4 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      uVar7 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar2);
      uVar6 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar7);
      uVar7 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      uVar8 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar9 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar2);
      uVar6 = uVar8;
      if ((uVar9 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar8);
      uVar8 = uVar6;
      func_0x00010c0b4ca0();
      _objc_release(uVar6);
      if (((uVar7 != 0) && (uVar7 == 1)) && (0 < (long)uVar8)) {
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(puVar2);
      }
      puVar2 = PTR_PTR_1126c9508;
      _objc_alloc(PTR_PTR_1126c9508);
      puVar10 = PTR_PTR_1126b5b00;
      func_0x00010c08bd00(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffcbe0(puVar2);
      _objc_release(puVar10);
      func_0x00010befa120(param_4);
      _objc_release(puVar2);
    }
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a2940; end: 1062a295f; +[SCContextSpotlightHeroContextCardProvider heroContextCardTypeFromCalloutLabelType:] */

undefined8 FUN_1062a2940(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    return *(undefined8 *)(&UNK_10ddda5b8 + param_3 * 8);
  }
  return 4;
}



/* Entry: 1062a2960; end: 1062a2c73; -[SCContextSpotlightHeroContextCardProvider _heroCardParamFromSpotlightCard:trendingLensId:] */

void FUN_1062a2960(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  func_0x00010be35160(param_1,param_2,param_3,param_4);
  puVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010beeed20();
  if ((int)puVar5 == 0xe) {
    _objc_release();
  }
  else {
    puVar5 = param_3;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010beeed20();
    _objc_release(puVar5);
    _objc_release();
    if ((int)puVar6 != 0x21) goto LAB_1062a2a48;
  }
  func_0x000108f597dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
LAB_1062a2a48:
  puVar4 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010beeed20();
  _objc_release(puVar4);
  if ((int)puVar5 == 0x1c) {
    puVar4 = param_3;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2472a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = puVar5;
    func_0x00010bfdb000();
    puVar4 = PTR_PTR_1126c9390;
    puVar7 = param_3;
    if ((int)puVar6 == 0) {
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247420(puVar4,param_2,puVar7,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar4;
    }
    else {
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247420(puVar4,param_2,puVar7,&PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      puVar2 = puVar4;
    }
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  puVar4 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010beeed20();
  if ((int)puVar5 == 0xe) {
    puVar5 = param_3;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fba0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c07d340();
    uVar1 = SUB81(puVar7,0);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c9508;
  _objc_alloc(PTR_PTR_1126c9508);
  puVar5 = param_3;
  func_0x00010beedca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcbe0(puVar4,param_2,param_1,param_1,0,0,puVar5,puVar2,puVar3,puVar6,uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062a2c74; end: 1062a2da7; -[SCContextSpotlightHeroContextCardProvider _heroContextCardTypeFromSpotlightCard:trendingLensId:] */

undefined8 FUN_1062a2c74(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010beeed20();
  _objc_release(uVar2);
  iVar3 = (int)uVar1;
  if (iVar3 < 0x1c) {
    if (iVar3 < 0xe) {
      if (iVar3 == 2) {
        uVar2 = 0x10;
        goto LAB_1062a2d80;
      }
      if (iVar3 == 0xc) {
        uVar2 = 0xe;
        goto LAB_1062a2d80;
      }
    }
    else {
      if (iVar3 == 0xe) {
        if ((param_4 != 0) &&
           (func_0x00010bddda40(param_1,param_2,param_3,param_4), (param_1 & 1) != 0)) {
          uVar2 = 0xb;
          goto LAB_1062a2d80;
        }
LAB_1062a2d6c:
        uVar2 = 0xd;
        goto LAB_1062a2d80;
      }
      if (iVar3 == 0x11) {
        uVar2 = 0xf;
        goto LAB_1062a2d80;
      }
    }
  }
  else if (iVar3 < 0x43) {
    if (iVar3 == 0x1c) {
      uVar2 = 10;
      goto LAB_1062a2d80;
    }
    if (iVar3 == 0x21) goto LAB_1062a2d6c;
  }
  else {
    if (iVar3 == 0x43) {
      uVar2 = 0xc;
      goto LAB_1062a2d80;
    }
    if (iVar3 == 0x55) {
      uVar2 = 6;
      goto LAB_1062a2d80;
    }
  }
  uVar2 = 0xffffffffffffffff;
LAB_1062a2d80:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1062a2da8; end: 1062a2f2f; -[SCContextSpotlightHeroContextCardProvider _filterOutLensCardFromCards:spotlightParams:] */

void FUN_1062a2da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c098520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar8 = param_3;
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_3);
  }
  else {
    uVar5 = param_4;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110ebea78);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar7;
    func_0x00010c0720c0(uVar7,param_2,&PTR____CFConstantStringClassReference_110f4b438);
    if ((int)uVar5 == 0) {
      _objc_retain(param_3);
    }
    else {
      uVar5 = param_3;
      func_0x00010bfaea20(param_3,param_2,&PTR___NSConcreteGlobalBlock_11091a018);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c0d3c80();
      _objc_release(uVar5);
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1062a2f30; end: 1062a2f4f;  */

bool FUN_1062a2f30(undefined8 param_1,long param_2)

{
  func_0x00010bf32060(param_2);
  return param_2 != 0xd;
}



/* Entry: 1062a2f50; end: 1062a3383; -[SCContextSpotlightHeroContextCardProvider _processSpotlightCardsWithTrendingContent:toArray:trendingLabelMetadata:] */

ulong FUN_1062a2f50(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_5;
    func_0x00010c087920();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf529e0();
    _objc_release(lVar11);
    if (lVar12 == 0) {
      lVar11 = 0;
      puVar15 = (undefined *)0x0;
      goto LAB_1062a3250;
    }
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    lVar11 = param_5;
    func_0x00010c087920();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar10 = *plStack_220;
      do {
        lVar14 = 0;
        do {
          if (*plStack_220 != lVar10) {
            _objc_enumerationMutation(lVar11);
          }
          lVar16 = *(long *)(lStack_228 + lVar14 * 8);
          lVar1 = lVar16;
          func_0x00010c27dd80();
          if (lVar1 == 1) {
            lVar1 = lVar16;
            func_0x00010c0d2940();
            _objc_retainAutoreleasedReturnValue();
            if (lVar1 != 0) {
              lVar2 = lVar16;
              func_0x00010c0d2940();
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar2;
              func_0x00010c0d2fa0();
              _objc_release(lVar2);
              _objc_release(lVar1);
              puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (lVar3 != 0) {
                func_0x00010c0d2940(lVar16);
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar16;
                func_0x00010c0d2fa0();
                func_0x00010c0df7c0(puVar15,param_2,lVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar16);
                _objc_release(lVar11);
                if (puVar15 == (undefined *)0x0) goto LAB_1062a3130;
                lVar11 = 0;
                goto LAB_1062a3250;
              }
            }
          }
          lVar14 = lVar14 + 1;
        } while (lVar12 != lVar14);
        lVar12 = lVar11;
        func_0x00010bf52a60(lVar11,param_2,&uStack_230,auStack_f0,0x10);
      } while (lVar12 != 0);
    }
    _objc_release(lVar11);
LAB_1062a3130:
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    lVar12 = param_5;
    func_0x00010c087920();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x00010bf52a60();
    lVar11 = 0;
    if (lVar10 != 0) {
      lVar11 = *plStack_260;
      do {
        lVar14 = 0;
        do {
          if (*plStack_260 != lVar11) {
            _objc_enumerationMutation(lVar12);
          }
          lVar16 = *(long *)(lStack_268 + lVar14 * 8);
          lVar1 = lVar16;
          func_0x00010c27dd80();
          if (lVar1 == 2) {
            lVar1 = lVar16;
            func_0x00010c08fb40();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c08fa60();
            _objc_release(lVar2);
            _objc_release(lVar1);
            if (lVar3 != 0) {
              func_0x00010c08fb40();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar16;
              func_0x00010c094540();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar16);
              goto LAB_1062a3244;
            }
          }
          lVar14 = lVar14 + 1;
        } while (lVar10 != lVar14);
        lVar10 = lVar12;
        func_0x00010bf52a60(lVar12,param_2,&uStack_270,auStack_170,0x10);
      } while (lVar10 != 0);
      lVar11 = 0;
    }
LAB_1062a3244:
    _objc_release(lVar12);
  }
  puVar15 = (undefined *)0x0;
LAB_1062a3250:
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar8 = &uStack_2b0;
  puVar9 = auStack_1f0;
  uVar13 = param_3;
  func_0x00010bf52a60();
  if (uVar13 != 0) {
    lVar12 = *plStack_2a0;
    do {
      uVar18 = 0;
      do {
        if (*plStack_2a0 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar17 = *(undefined8 *)(lStack_2a8 + uVar18 * 8);
        uVar4 = param_1;
        func_0x00010beb6900(param_1,param_2,uVar17,puVar15);
        if ((uVar4 & 1) == 0) {
          uVar4 = param_1;
          func_0x00010be35120(param_1,param_2,uVar17,lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(param_4,param_2,uVar4);
          _objc_release(uVar4);
        }
        uVar18 = uVar18 + 1;
      } while (uVar13 != uVar18);
      puVar8 = &uStack_2b0;
      puVar9 = auStack_1f0;
      uVar13 = param_3;
      func_0x00010bf52a60();
    } while (uVar13 != 0);
  }
  _objc_release(param_3);
  _objc_release(lVar11);
  _objc_release(puVar15);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puVar5 = puVar8;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010beeed20();
    _objc_release(puVar5);
    if ((int)puVar6 == 0x1c) {
      if (puVar9 == (undefined1 *)0x0) {
        uVar13 = 1;
      }
      else {
        puVar7 = puVar9;
        func_0x00010c282800(puVar9);
        func_0x00010bddda80(param_3,param_2,puVar8,puVar7);
        uVar13 = (ulong)((uint)param_3 ^ 1);
      }
    }
    else {
      uVar13 = 0;
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    return uVar13;
  }
  return param_3;
}



/* Entry: 1062a3384; end: 1062a3437; -[SCContextSpotlightHeroContextCardProvider _shouldSkipCard:trendingMusicId:] */

uint FUN_1062a3384(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beeed20();
  _objc_release(uVar1);
  if ((int)uVar2 == 0x1c) {
    if (param_4 == 0) {
      uVar4 = 1;
    }
    else {
      lVar3 = param_4;
      func_0x00010c282800(param_4);
      func_0x00010bddda80(param_1,param_2,param_3,lVar3);
      uVar4 = (uint)param_1 ^ 1;
    }
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1062a3438; end: 1062a352f; -[SCContextSpotlightHeroContextCardProvider _checkIfMatchForSoundProfileCard:trendingMusicId:] */

bool FUN_1062a3438(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beeed20();
  _objc_release(lVar2);
  if ((int)lVar3 == 0x1c) {
    lVar2 = param_3;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2472a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c247160();
    if (lVar2 == param_4) {
      bVar1 = true;
    }
    else {
      lVar2 = lVar3;
      func_0x00010bfd95a0();
      if ((int)lVar2 == 0) {
        bVar1 = false;
      }
      else {
        lVar2 = lVar3;
        func_0x00010c0d3a00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c277e80();
        bVar1 = lVar4 == param_4;
        _objc_release(lVar2);
      }
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1062a3530; end: 1062a361f; -[SCContextSpotlightHeroContextCardProvider _checkIfLensCardIsTrendingLens:trendingLensId:] */

undefined8 FUN_1062a3530(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010beeed20();
  _objc_release(uVar4);
  if (((int)uVar1 == 0xe) && (lVar2 = param_4, func_0x00010c08fa60(), lVar2 != 0)) {
    uVar4 = param_3;
    func_0x00010beedca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c08fba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar3 = uVar1;
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1062a3620; end: 1062a368b; -[SCContextSpotlightHeroContextCardProvider .cxx_destruct] */

void FUN_1062a3620(long param_1)

{
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



/* Entry: 1062a368c; end: 1062a3793; -[SCContextSpotlightHeroContextLabelViewModelBuilder initWithSnapchattersDataFetcher:avatarProvider:storiesConfigProvider:currentUserId:supportsTapAction:] */

undefined1 *
FUN_1062a368c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126f0b40;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062a3794; end: 1062a38db; -[SCContextSpotlightHeroContextLabelViewModelBuilder buildViewModelForCard:isRecommended:cardsCount:completion:] */

void FUN_1062a3794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = param_3;
    func_0x00010bf32060();
    switch(uVar1) {
    case 0:
      func_0x00010bdd6f20(param_1);
      break;
    case 1:
      func_0x00010bdd6a80(param_1);
      break;
    case 2:
    case 3:
    case 10:
    case 0xb:
      func_0x00010bdd6de0(param_1);
      break;
    case 4:
      func_0x00010bdd6240(param_1);
      break;
    case 5:
      func_0x00010bdd6260(param_1);
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
      func_0x00010bdd6ae0(param_1);
      break;
    case 0x12:
      func_0x00010bdd6e00(param_1);
      break;
    case 0xffffffffffffffff:
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a38dc; end: 1062a3ad7; -[SCContextSpotlightHeroContextLabelViewModelBuilder buildViewModelForCalloutLabel:completion:] */

void FUN_1062a38dc(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9510;
  if (param_4 != 0) {
    func_0x00010c27dd80(param_3);
    func_0x00010bfe0cc0();
    if (puVar1 == (undefined *)0xffffffffffffffff) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      puVar1 = param_3;
      func_0x00010bfb9180();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c08fa60();
      puVar5 = puVar1;
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126c9520;
        func_0x00010bf60920(PTR_PTR_1126c9520);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf4b900();
        _objc_release(puVar3);
        if ((int)puVar4 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
        }
      }
      puVar1 = PTR_PTR_1126c9508;
      _objc_alloc(PTR_PTR_1126c9508);
      func_0x00010bfb7f40(param_3);
      puVar3 = PTR_PTR_1126b5b00;
      func_0x00010bf4c900(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffcbe0(puVar1);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c27dd80();
      uVar6 = (ulong)(puVar3 == (undefined *)0x5);
      func_0x00010bf228c0(param_1);
      _objc_release(puVar1);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  if (uVar6 != 0) {
    _objc_retain(uVar6);
    func_0x00010bf228a0(param_3);
    _objc_release(uVar6);
  }
  _objc_release(uVar6);
  return;
}



/* Entry: 1062a3ad8; end: 1062a3b6f; -[SCContextSpotlightHeroContextLabelViewModelBuilder buildLabelForCalloutLabel:completion:] */

void FUN_1062a3ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1062a3b70;
    puStack_40 = &UNK_11091a038;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010bf228a0(param_1,param_2,param_3,&puStack_58);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1062a3b70; end: 1062a3d03;  */

void FUN_1062a3b70(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  }
  else {
    puVar2 = param_2;
    func_0x00010c102080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 == (undefined *)0x0) {
      puVar1 = param_2;
      func_0x00010c26b700(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c102080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    lVar5 = *(long *)(param_1 + 0x20);
    puVar2 = param_2;
    func_0x00010bfe5680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = param_2;
      func_0x00010befd1e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar1,puVar3);
      _objc_release(puVar3);
    }
    else {
      (**(code **)(lVar5 + 0x10))(lVar5,puVar1,puVar2);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a3d04; end: 1062a3e37; -[SCContextSpotlightHeroContextLabelViewModelBuilder _buildFriendPostedViewModelForCard:cardsCount:completion:] */

void FUN_1062a3d04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_5;
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x0001062ccdec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32060();
    func_0x00010bee9a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    (**(code **)(param_5 + 0x10))(param_5,param_1);
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010be142a0(param_1);
    _objc_release(param_3);
    param_1 = param_5;
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1062a3e38; end: 1062a3fd3;  */

void FUN_1062a3e38(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x0001062cce1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 < 2) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf32060();
    func_0x00010bee9a80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar3);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a3fd4; end: 1062a40e3; -[SCContextSpotlightHeroContextLabelViewModelBuilder _buildFriendRepostedViewModelForCard:isRecommended:cardsCount:completion:] */

void FUN_1062a3fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_6;
  _objc_retain();
  if ((param_4 & 1) == 0) {
    func_0x0001062cce7c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001062cce94();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1062a40e4;
  puStack_78 = &UNK_11091a098;
  uStack_48 = (undefined1)param_4;
  uStack_70 = param_1;
  uStack_68 = uVar1;
  uStack_60 = param_3;
  uStack_58 = param_6;
  uStack_50 = param_5;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(param_6);
  func_0x00010be142a0(param_1,param_2,param_3,param_4,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 1062a40e4; end: 1062a42e3;  */

void FUN_1062a40e4(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
  }
  else {
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      ppuVar5 = *(undefined ***)(param_1 + 0x20);
      lVar2 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be61da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = *(byte *)(param_1 + 0x48);
    lVar2 = param_2;
    func_0x00010bf529e0();
    if ((long)(lVar2 - ((ulong)bVar1 ^ 1)) < 1) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)(param_1 + 0x40) < 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfb9180(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be19360();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf32060();
    func_0x00010bee9a80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar7);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(ppuVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a42e4; end: 1062a4513; -[SCContextSpotlightHeroContextLabelViewModelBuilder _buildYouRepostedViewModelForCard:isRecommended:cardsCount:completion:] */

void FUN_1062a42e4(undefined *param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                  ,undefined *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1062ca2c0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0001062cd220();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_4 == 0) {
    _objc_retain(param_6);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    func_0x00010be142a0(param_1);
    _objc_release(param_3);
    _objc_release(uVar2);
    puVar5 = param_6;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfb9180();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = param_3;
      func_0x00010bfb7f40();
      bVar1 = 0 < lVar4;
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
    puVar5 = param_1;
    func_0x00010bdf74c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (bVar1) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
    }
    else {
      puVar7 = (undefined *)0x0;
      puVar6 = puVar5;
    }
    func_0x0001062cce94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32060();
    func_0x00010bee9a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    (**(code **)(param_6 + 0x10))(param_6,param_1);
    _objc_release(param_1);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1062a4514; end: 1062a46bf;  */

void FUN_1062a4514(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x0001062cce7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 < 2) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf32060();
    func_0x00010bee9a80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar3);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a46c0; end: 1062a477f; -[SCContextSpotlightHeroContextLabelViewModelBuilder _buildSharedByFriendViewModelForCard:cardsCount:completion:] */

void FUN_1062a46c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1062a4780;
  puStack_58 = &UNK_11091a0f8;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be142a0(param_1,param_2,param_3,0,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 1062a4780; end: 1062a4927;  */

void FUN_1062a4780(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x0001062cce64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 < 2) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf32060();
    func_0x00010bee9a80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar3);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062a4928; end: 1062a49fb; -[SCContextSpotlightHeroContextLabelViewModelBuilder _buildTrendingWithFriendsViewModelForCard:cardsCount:completion:] */

void FUN_1062a4928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001062cce4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32060();
  _objc_release(param_3);
  func_0x00010bee9a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062a49fc; end: 1062a4b17; -[SCContextSpotlightHeroContextLabelViewModelBuilder _buildSimpleCardViewModelForCard:cardsCount:completion:] */

void FUN_1062a49fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010becb5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    func_0x00010bf32060(param_3);
    lVar2 = param_1;
    func_0x00010be36980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32060();
    func_0x00010bee9a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a4b18; end: 1062a4c07; -[SCContextSpotlightHeroContextLabelViewModelBuilder _textForSimpleCard:] */

void FUN_1062a4b18(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf32060();
  puVar2 = param_3;
  func_0x00010bf4e3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0xe) {
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 == (undefined *)0x0) goto LAB_1062a4be8;
    func_0x0001062ccf54();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf4e3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
  }
  else if (puVar3 != (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bf4e3c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
LAB_1062a4be8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062a4c08; end: 1062a4e07; -[SCContextSpotlightHeroContextLabelViewModelBuilder _buildTrendingOrCommentContextViewModelForCard:cardsCount:completion:] */

void FUN_1062a4c08(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010becb5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    func_0x00010bf32060(param_3);
    lVar2 = param_1;
    func_0x00010be36980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf32060();
    if (lVar7 - 2U < 2) {
      lVar7 = param_3;
      func_0x00010c105760();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = 0;
    }
    else {
      if (lVar7 - 10U < 2) {
        lVar6 = param_1;
        func_0x00010becf980();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar6 = 0;
      }
      lVar7 = 0;
    }
    if ((param_4 == 1) && (lVar3 = param_3, func_0x00010bf32060(), lVar3 == 3)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9500;
      func_0x00010c24b440(PTR_PTR_1126c9500);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f320(uVar4);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    func_0x00010bf32060();
    func_0x00010bee9a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_1);
    _objc_release(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062a4e08; end: 1062a4fd7; -[SCContextSpotlightHeroContextLabelViewModelBuilder _fetchSnapchattersForCard:includeCurrentUser:completion:] */

void FUN_1062a4e08(long param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfb9180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    (**(code **)(param_5 + 0x10))
              (param_5,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
  }
  else {
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfb9180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(uVar6);
    _objc_retain(uVar5);
    func_0x00010c244e80(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1062a4fd8; end: 1062a525f;  */

void FUN_1062a4fd8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar11;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48);
    lVar1 = param_2;
  }
  else {
    func_0x00010bf529e0();
    lStack_138 = param_2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar2 = PTR_PTR_1126b5978;
      _objc_alloc(PTR_PTR_1126b5978);
      func_0x00010c05ad80();
      func_0x00010befa120(unaff_x22);
      _objc_release(puVar2);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lStack_140 = param_1;
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_2);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          puVar2 = PTR_PTR_1126b5978;
          _objc_alloc(PTR_PTR_1126b5978);
          uVar3 = uVar11;
          func_0x00010c2923e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1bae0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar11;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05ad80(puVar2);
          func_0x00010befa120(unaff_x22);
          _objc_release(puVar2);
          _objc_release(uVar4);
          _objc_release(uVar11);
          _objc_release(uVar3);
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = param_2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_2);
    param_1 = *(long *)(lStack_140 + 0x30);
    puVar2 = unaff_x22;
    func_0x00010bf51e00(unaff_x22);
    lVar1 = lStack_138;
    (**(code **)(param_1 + 0x10))(param_1,lStack_138,puVar2);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    _objc_release(param_2);
    unaff_x21 = param_2;
  }
  lVar10 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_180;
  pcStack_148 = FUN_1062a5260;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5978;
  puStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = lVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_alloc();
  uVar4 = *(undefined8 *)(lVar10 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ad80();
  _objc_release(uVar3);
  _objc_release(uVar4);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_180 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar6 = ppuVar8;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c08fa60();
      ppuVar5 = (undefined **)PTR_PTR_1126b2c18;
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar5 = ppuVar8;
        func_0x00010c294420(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = ppuVar8;
        func_0x00010bf85d80(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb1120(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
      }
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1062a5260; end: 1062a5347; -[SCContextSpotlightHeroContextLabelViewModelBuilder _currentUserParticipants] */

void FUN_1062a5260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b5978;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ad80(puVar1,param_2,uVar8,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar5 = ppuVar7;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c08fa60();
      ppuVar4 = (undefined **)PTR_PTR_1126b2c18;
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = ppuVar7;
        func_0x00010c294420(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar6 = ppuVar7;
        func_0x00010bf85d80(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb1120(ppuVar4,param_2,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
      }
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1062a5348; end: 1062a5407; -[SCContextSpotlightHeroContextLabelViewModelBuilder _nameFromSnapchatter:] */

void FUN_1062a5348(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    ppuVar3 = (undefined **)PTR_PTR_1126b2c18;
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar2 = param_3;
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1120(ppuVar3,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1062a5408; end: 1062a54a3; -[SCContextSpotlightHeroContextLabelViewModelBuilder _iconImageForCardType:] */

void FUN_1062a5408(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b0c40;
  uVar3 = param_3 - 2;
  puVar1 = (undefined *)0x0;
  if ((uVar3 < 0x10) && ((0xff13U >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)) {
    uVar4 = *(undefined8 *)(&UNK_10ddda600 + uVar3 * 8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000,puVar2,param_2,uVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062a54a4; end: 1062a550f; -[SCContextSpotlightHeroContextLabelViewModelBuilder _trendingSurgeLeadingIconImage] */

void FUN_1062a54a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000,puVar2,param_2,0x2d,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062a5510; end: 1062a5587; -[SCContextSpotlightHeroContextLabelViewModelBuilder _friendRepostLeadingIconImage] */

void FUN_1062a5510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0c40;
  uVar1 = 0xd4;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0xd5;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000,puVar3,param_2,0x3e,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062a5588; end: 1062a5683; -[SCContextSpotlightHeroContextLabelViewModelBuilder _viewModelWithLabelStyle:iconImage:groupAvatarParticipants:text:plusCountText:showChevron:cardType:additionalLeadingIconImage:posterAvatarMetadata:] */

void FUN_1062a5588(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  puVar1 = PTR_PTR_1126c9528;
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c021560();
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062a5684; end: 1062a56cb; -[SCContextSpotlightHeroContextLabelViewModelBuilder .cxx_destruct] */

void FUN_1062a5684(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


