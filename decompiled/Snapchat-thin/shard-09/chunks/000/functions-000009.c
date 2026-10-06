/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067ec140; end: 1067ec157; -[SCBoltURLMediaOperaImplementation delegate] */

void FUN_1067ec140(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067ec158; end: 1067ec163; -[SCBoltURLMediaOperaImplementation setDelegate:] */

void FUN_1067ec158(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 1067ec164; end: 1067ec27f; -[SCBoltURLMediaOperaImplementation .cxx_destruct] */

void FUN_1067ec164(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb8);
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
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ec280; end: 1067ec3b7; -[SCBoltURLOperaMediaManager initWithSimpleContentFetcher:imageFetchingService:circumstanceEngine:temporaryFileWriter:snapSavingService:] */

undefined1 *
FUN_1067ec280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f34e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_5;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_7;
    _objc_release(uVar3);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x10);
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + 0x28) = uVar1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1067ec3b8; end: 1067ec6cb; -[SCBoltURLOperaMediaManager imageForKey:completion:] */

void FUN_1067ec3b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      puVar2 = PTR_PTR_1126b08b0;
      func_0x00010bf33760(PTR_PTR_1126b08b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b17d8;
      _objc_alloc(PTR_PTR_1126b17d8);
      func_0x00010c003a80();
      _objc_initWeak(auStack_68,param_1);
      if (*(char *)(param_1 + 0x28) == '\x01') {
        puVar4 = PTR_PTR_1126aebf0;
        _objc_alloc(PTR_PTR_1126aebf0);
        lVar1 = param_1;
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011b80(puVar4);
        _objc_release(lVar1);
        puVar6 = PTR_PTR_1126b85a0;
        puVar5 = puVar3;
        func_0x00010bf220e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23c900(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126b85a8;
        _objc_alloc(PTR_PTR_1126b85a8);
        func_0x00010c01cf40(*(undefined8 *)PTR__CGSizeZero_110347620,
                            *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_1067ec6cc;
        puStack_80 = &UNK_110859a68;
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(param_4);
        lStack_78 = param_4;
        func_0x00010bfa7900(uVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lStack_78);
        _objc_destroyWeak(auStack_70);
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(puVar4);
      }
      else {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        lVar1 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_a0,auStack_68);
        _objc_retain(param_4);
        func_0x00010c13e600(lVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(param_1);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_a0);
      }
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067ec6cc; end: 1067ec7ef;  */

void FUN_1067ec6cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1067ec7f0;
  puStack_68 = &UNK_110940620;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1067ec7f0; end: 1067ec8eb;  */

void FUN_1067ec7f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067ec8ec; end: 1067ecb67; -[SCBoltURLOperaMediaManager saveMediaToCameraRollForBoltURL:isImage:completion:] */

void FUN_1067ec8ec(long param_1,undefined8 param_2,long param_3,undefined **param_4,long param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b08b0;
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e60498;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    lVar7 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar3 = PTR_PTR_1126b17d8;
    _objc_alloc();
    func_0x00010c003a80();
    _objc_initWeak(auStack_70,param_1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar7 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1067ecb68;
    puStack_98 = &UNK_110940650;
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_5);
    uStack_78 = SUB81(param_4,0);
    puVar4 = auStack_70;
    lStack_88 = param_5;
    _objc_copyWeak(auStack_80);
    func_0x00010c13e600(lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_80);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_70);
    param_4 = &puStack_b0;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)param_4 + 0x30));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bfcaaa0();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 != (undefined *)0x0) {
    lVar8 = *(long *)(param_3 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(lVar8,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar2 = puVar4;
  func_0x00010bfc5880(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  cVar1 = *(char *)(param_3 + 0x38);
  lVar8 = param_3 + 0x30;
  _objc_loadWeakRetained();
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  puVar2 = puVar3;
  if (cVar1 == '\x01') {
    func_0x00010be99300();
  }
  else {
    func_0x00010be9a460();
  }
  _objc_release(lVar8);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(puVar2);
  _objc_alloc(puVar3);
  func_0x00010c008240();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(puVar4 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  func_0x00010c14ae40(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar3);
  return;
}



/* Entry: 1067ecb68; end: 1067ecceb;  */

void FUN_1067ecb68(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010bfcaaa0();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar7 != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  lVar7 = param_2;
  func_0x00010bfc5880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  cVar1 = *(char *)(param_1 + 0x38);
  lVar7 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = puVar3;
  if (cVar1 == '\x01') {
    func_0x00010be99300();
  }
  else {
    func_0x00010be9a460();
  }
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(puVar2);
  _objc_alloc(puVar3);
  func_0x00010c008240();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  func_0x00010c14ae40(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 1067eccec; end: 1067ecdcf; -[SCBoltURLOperaMediaManager _saveImageToCameraRollWithData:completion:] */

void FUN_1067eccec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008240();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067ecdd0;
  puStack_40 = &UNK_110859a38;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c14ae40(uVar2,param_2,puVar1,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1067ecdd0; end: 1067ecddb;  */

void FUN_1067ecdd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067ecdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1067ecddc; end: 1067ecedb; -[SCBoltURLOperaMediaManager _saveVideoToCameraRollWithData:completion:] */

void FUN_1067ecddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010beebd20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067ecedc;
  puStack_58 = &UNK_110940680;
  uStack_50 = uVar3;
  _objc_retain(param_4);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1067ecfa4;
  puStack_80 = &UNK_110859a38;
  uStack_78 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar3);
  func_0x00010c0c0800(lVar2,param_2,&puStack_70,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1067ecedc; end: 1067ecf97;  */

void FUN_1067ecedc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c14afa0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1067ecf98; end: 1067ecfaf;  */

void FUN_1067ecf98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067ecfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1067ecfb0; end: 1067ed1c7; -[SCBoltURLOperaMediaManager _writeToTemporaryDirectoryWithData:] */

void FUN_1067ecfb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar9;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lStack_70 = lVar2;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = (undefined *)0x0;
  lVar4 = lVar9;
  puVar8 = puVar3;
  func_0x00010c2bda40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = puStack_60;
  _objc_retain(puStack_60);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar6 = PTR_PTR_1126af5d0;
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar4 == 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar7 = puVar1;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1067ed0f0;
    }
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e604d8;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bfa01c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    func_0x00010bfee820();
    puVar7 = puVar5;
    func_0x00010c2619e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
LAB_1067ed0f0:
  _objc_release(lVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puStack_90 = puVar1;
  pcStack_78 = FUN_1067ed1c8;
  lStack_88 = lVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar8 != (undefined *)0x0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1067ed278;
    puStack_a8 = &UNK_11084aaa8;
    _objc_retain(puVar8);
    puStack_98 = puVar8;
    _objc_retain(puVar7);
    puStack_a0 = puVar7;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    _objc_release(puStack_a0);
    _objc_release(puStack_98);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 1067ed1c8; end: 1067ed2b7; -[SCBoltURLOperaMediaManager _handleSuccessResponseForImageFetchingService:completion:] */

void FUN_1067ed1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1067ed278;
    puStack_38 = &UNK_11084aaa8;
    _objc_retain(param_4);
    lStack_28 = param_4;
    _objc_retain(param_3);
    uStack_30 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_release(lStack_28);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067ed2b8; end: 1067ed33b; -[SCBoltURLOperaMediaManager _handleFailureResponseForImageFetchingService:completion:] */

void FUN_1067ed2b8(void)

{
  undefined8 in_x3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(in_x3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067ed33c;
  puStack_30 = &UNK_110849530;
  uStack_28 = in_x3;
  _objc_retain(in_x3);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(in_x3);
  return;
}



/* Entry: 1067ed33c; end: 1067ed34b;  */

void FUN_1067ed33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067ed348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1067ed34c; end: 1067ed4af; -[SCBoltURLOperaMediaManager _handleFetchResult:completion:] */

void FUN_1067ed34c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != (undefined *)0x0) {
    lVar1 = param_3;
    func_0x00010bfcaaa0();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bfc5880(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64a80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc();
      func_0x00010c008240();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x1067ed4c0;
      puStack_70 = &UNK_11084aaa8;
      _objc_retain(param_4);
      puStack_68 = puVar3;
      puStack_60 = param_4;
      func_0x000100162d98("APPSTORE",&puStack_88);
      _objc_release(puStack_60);
      _objc_release(puVar3);
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1067ed4b0;
      puStack_40 = &UNK_110849530;
      _objc_retain(param_4);
      puStack_38 = param_4;
      func_0x000100162d98("APPSTORE",&puStack_58);
      puVar2 = puStack_38;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067ed4b0; end: 1067ed4cf;  */

void FUN_1067ed4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067ed4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1067ed4d0; end: 1067ed51f; -[SCBoltURLOperaMediaManager .cxx_destruct] */

void FUN_1067ed4d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1067ed520; end: 1067ed5df; -[SCBoltURLMediaBrowseSnapViewLoggerPlugin initWithUserTrackedLogger:] */

undefined1 * FUN_1067ed520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f34f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067ed5e0; end: 1067ed5e3; -[SCBoltURLMediaBrowseSnapViewLoggerPlugin setPlaylistItemController:] */

void FUN_1067ed5e0(void)

{
  return;
}



/* Entry: 1067ed5e4; end: 1067ed5e7; -[SCBoltURLMediaBrowseSnapViewLoggerPlugin setOperaControlling:] */

void FUN_1067ed5e4(void)

{
  return;
}



/* Entry: 1067ed5e8; end: 1067ed6ef; -[SCBoltURLMediaBrowseSnapViewLoggerPlugin registeredEventsForOperaSession] */

void FUN_1067ed5e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  double dVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_68 = puVar1;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_60 = puVar2;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_58 = puVar3;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_68;
  puVar12 = (undefined *)0x4;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(puVar12);
  _objc_retain(param_6);
  puVar2 = puVar12;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) goto LAB_1067eda04;
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar11;
  func_0x00010c0720c0(ppuVar11,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)ppuVar6 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar11;
    func_0x00010c0720c0(ppuVar11,param_3,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar12;
    if ((int)ppuVar6 == 0) {
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar11;
      func_0x00010c0720c0(ppuVar11,param_3,puVar4);
      _objc_release(puVar4);
      if ((int)ppuVar6 == 0) {
        puVar3 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar11;
        func_0x00010c0720c0(ppuVar11,param_3,puVar3);
        _objc_release(puVar3);
        if ((int)ppuVar6 == 0) goto LAB_1067eda04;
        lVar7 = *(long *)(puVar1 + 0x10);
        func_0x00010c0e00e0(lVar7,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
LAB_1067eda3c:
          lVar7 = *(long *)(puVar1 + 0x10);
          func_0x00010c0e00e0(lVar7,param_3,puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar7 == 0) goto LAB_1067eda04;
          _CACurrentMediaTime();
          uVar9 = *(undefined8 *)(puVar1 + 0x10);
          dVar13 = param_1;
          func_0x00010c0e00e0(uVar9,param_3,puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          param_1 = param_1 - dVar13;
          _objc_release(uVar9);
          uVar9 = 1;
        }
        else {
          lVar8 = *(long *)(puVar1 + 0x18);
          func_0x00010c0e00e0(lVar8,param_3,puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar7);
          if (lVar8 == 0) goto LAB_1067eda3c;
          uVar9 = *(undefined8 *)(puVar1 + 0x18);
          func_0x00010c0e00e0(uVar9,param_3,puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar10 = *(undefined8 *)(puVar1 + 0x10);
          dVar13 = param_1;
          func_0x00010c0e00e0(uVar10,param_3,puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          param_1 = param_1 - dVar13;
          _objc_release(uVar10);
          _objc_release(uVar9);
          uVar9 = 0;
        }
        func_0x00010be50dc0(param_1,puVar1,param_3,uVar9,puVar12,param_6);
        func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x10),param_3,0,puVar2);
        goto LAB_1067ed7b8;
      }
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        lVar7 = *(long *)(puVar1 + 0x18);
        func_0x00010c0e00e0(lVar7,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        goto joined_r0x0001067ed9c8;
      }
      _objc_release();
    }
    else {
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        lVar7 = *(long *)(puVar1 + 0x18);
        func_0x00010c0e00e0(lVar7,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
joined_r0x0001067ed9c8:
        PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar3;
        if (lVar7 != 0) goto LAB_1067eda04;
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x18),param_3,puVar3,puVar2);
      }
    }
    _objc_release(puVar3);
  }
  else {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x10),param_3,puVar3,puVar2);
    _objc_release(puVar3);
LAB_1067ed7b8:
    func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x18),param_3,0,puVar2);
  }
LAB_1067eda04:
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 1067ed6f0; end: 1067edab7; -[SCBoltURLMediaBrowseSnapViewLoggerPlugin operaViewDidSendEvent:page:params:] */

void FUN_1067ed6f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) goto LAB_1067eda04;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar6 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = param_5;
    if ((int)uVar6 == 0) {
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar4);
      _objc_release(puVar4);
      if ((int)uVar6 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar2);
        _objc_release(puVar2);
        if ((int)uVar6 == 0) goto LAB_1067eda04;
        lVar3 = *(long *)(param_2 + 0x10);
        func_0x00010c0e00e0(lVar3,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
LAB_1067eda3c:
          lVar3 = *(long *)(param_2 + 0x10);
          func_0x00010c0e00e0(lVar3,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 == 0) goto LAB_1067eda04;
          _CACurrentMediaTime();
          uVar6 = *(undefined8 *)(param_2 + 0x10);
          dVar8 = param_1;
          func_0x00010c0e00e0(uVar6,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          param_1 = param_1 - dVar8;
          _objc_release(uVar6);
          uVar6 = 1;
        }
        else {
          lVar5 = *(long *)(param_2 + 0x18);
          func_0x00010c0e00e0(lVar5,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          if (lVar5 == 0) goto LAB_1067eda3c;
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          func_0x00010c0e00e0(uVar6,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          dVar8 = param_1;
          func_0x00010c0e00e0(uVar7,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          param_1 = param_1 - dVar8;
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar6 = 0;
        }
        func_0x00010be50dc0(param_1,param_2,param_3,uVar6,param_5,param_6);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,0,puVar1);
        goto LAB_1067ed7b8;
      }
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        lVar3 = *(long *)(param_2 + 0x18);
        func_0x00010c0e00e0(lVar3,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        goto joined_r0x0001067ed9c8;
      }
      _objc_release();
    }
    else {
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        lVar3 = *(long *)(param_2 + 0x18);
        func_0x00010c0e00e0(lVar3,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
joined_r0x0001067ed9c8:
        PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar2;
        if (lVar3 != 0) goto LAB_1067eda04;
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar2,puVar1);
      }
    }
    _objc_release(puVar2);
  }
  else {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,puVar1);
    _objc_release(puVar2);
LAB_1067ed7b8:
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,0,puVar1);
  }
LAB_1067eda04:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067edab8; end: 1067edcc3; -[SCBoltURLMediaBrowseSnapViewLoggerPlugin _logBrowseSnapView:isAbandoned:page:params:] */

void FUN_1067edab8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_5);
  func_0x00010bfe74e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  if (uVar3 == 0) {
    puVar4 = PTR_PTR_1126b2348;
    func_0x00010c0c4a80(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010c0e00e0(param_6,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c067fc0();
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2350;
  _objc_opt_new(PTR_PTR_1126b2350);
  lVar6 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_3,lVar6);
  _objc_release(lVar6);
  func_0x00010c1b92e0(puVar1,param_3,(long)(param_1 * 1000.0));
  func_0x00010c160a00(puVar1,param_3,param_4);
  func_0x00010c222d20((double)uVar3 / 1000.0,puVar1);
  func_0x00010c206c40(puVar1,param_3,0xc);
  func_0x00010c222c00(puVar1,param_3,0x91);
  lVar6 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar7 = lVar6;
  func_0x00010c0e00e0(lVar6,param_3,&PTR____CFConstantStringClassReference_110f0c078);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 1;
  if (lVar7 != 0) {
    uVar8 = 2;
  }
  func_0x00010c1c5440(puVar1,param_3,uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1067edcc4; end: 1067edcff; -[SCBoltURLMediaBrowseSnapViewLoggerPlugin .cxx_destruct] */

void FUN_1067edcc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067edd00; end: 1067eddff; -[SCBoltURLMediaOperaFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067edd00(long param_1)

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
  puVar2 = PTR_PTR_1126ce3d8;
  _objc_alloc(PTR_PTR_1126ce3d8);
  func_0x00010c038a60();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112750cc4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1067ede00; end: 1067ede3f;  */

void FUN_1067ede00(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067ede40; end: 1067ee213; -[SCBoltURLMediaOperaFeatureEntryPoint _createPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ede40(long param_1,undefined8 param_2)

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
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  
  puVar1 = PTR_PTR_1126ce3e0;
  _objc_alloc();
  uVar33 = *(undefined8 *)(param_1 + _DAT_112750cc8);
  lVar2 = param_1 + _DAT_112750ccc;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112750cd0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112750cd4;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112750cd8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112750cdc;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0b3860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112750ce0;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_112750ce4;
  lVar13 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112750ce8;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112750cec;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + _DAT_112750cf0);
  lVar19 = param_1 + _DAT_112750cf4;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf9e340();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112750cf8;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar23 = lVar35;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112750cfc;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112750d00;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112750d04;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112750d08;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112750d0c;
  _objc_loadWeakRetained();
  lVar32 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031ec0(puVar1,param_2,uVar33,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,
                      lVar18,uVar34,lVar20,lVar22,lVar23,lVar25,lVar27,lVar29,lVar31,lVar32);
  _objc_release(lVar32);
  _objc_release(param_1);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar35);
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



/* Entry: 1067ee214; end: 1067ee33b; -[SCBoltURLMediaOperaFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ee214(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750cf0,0);
  _objc_storeStrong(param_1 + _DAT_112750cc8,0);
  _objc_storeStrong(param_1 + _DAT_112750cc4,0);
  _objc_destroyWeak(param_1 + _DAT_112750ccc);
  _objc_destroyWeak(param_1 + _DAT_112750d0c);
  _objc_destroyWeak(param_1 + _DAT_112750d08);
  _objc_destroyWeak(param_1 + _DAT_112750d04);
  _objc_destroyWeak(param_1 + _DAT_112750d00);
  _objc_destroyWeak(param_1 + _DAT_112750cf4);
  _objc_destroyWeak(param_1 + _DAT_112750ce8);
  _objc_destroyWeak(param_1 + _DAT_112750cfc);
  _objc_destroyWeak(param_1 + _DAT_112750ce4);
  _objc_destroyWeak(param_1 + _DAT_112750ce0);
  _objc_destroyWeak(param_1 + _DAT_112750cdc);
  _objc_destroyWeak(param_1 + _DAT_112750cd8);
  _objc_destroyWeak(param_1 + _DAT_112750cd4);
  _objc_destroyWeak(param_1 + _DAT_112750cd0);
  _objc_destroyWeak(param_1 + _DAT_112750d14);
  _objc_destroyWeak(param_1 + _DAT_112750cf8);
  _objc_destroyWeak(param_1 + _DAT_112750cec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750d10);
  return;
}



/* Entry: 1067ee33c; end: 1067ee39b;  */

void FUN_1067ee33c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e604f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e604f8,
                      &PTR____CFConstantStringClassReference_110e60518,0);
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



/* Entry: 1067ee39c; end: 1067ee40f; -[SCGrapheneMemoryDeepLinkPlayerMetric2 init] */

undefined1 * FUN_1067ee39c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f34f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067ee410; end: 1067ee487;  */

void FUN_1067ee410(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109406e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067ee488; end: 1067ee4ff; -[SCBoltURLMediaGroupDataModel initWithId:] */

undefined1 * FUN_1067ee488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067ee500; end: 1067ee523; -[SCBoltURLMediaGroupDataModel copyWithZone:] */

undefined8 FUN_1067ee500(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067ee524; end: 1067ee52b; -[SCBoltURLMediaGroupDataModel hash] */

void FUN_1067ee524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1067ee52c; end: 1067ee5bb; -[SCBoltURLMediaGroupDataModel isEqual:] */

long FUN_1067ee52c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067ee5a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1067ee5a0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1067ee5a0;
    }
  }
  lVar3 = 1;
LAB_1067ee5a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067ee5bc; end: 1067ee5c3; -[SCBoltURLMediaGroupDataModel id] */

undefined8 FUN_1067ee5bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067ee5c4; end: 1067ee5cf; -[SCBoltURLMediaGroupDataModel .cxx_destruct] */

void FUN_1067ee5c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ee5d0; end: 1067ee6a7; -[SCBoltURLMediaPageDataConfig initWithMedia:snapchatter:canReply:deleteEnabled:mediaIndex:totalMediaCount:] */

undefined1 *
FUN_1067ee5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f3508;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067ee6a8; end: 1067ee6cb; -[SCBoltURLMediaPageDataConfig copyWithZone:] */

undefined8 FUN_1067ee6a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067ee6cc; end: 1067ee753; -[SCBoltURLMediaPageDataConfig hash] */

undefined8 * FUN_1067ee6cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_58;
  uStack_50 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1067ee814:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1067ee820;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
         (puVar3[4] == param_3[4])))) && (puVar3[5] == param_3[5])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_1067ee820;
        }
        goto LAB_1067ee814;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1067ee820:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1067ee754; end: 1067ee83b; -[SCBoltURLMediaPageDataConfig isEqual:] */

long FUN_1067ee754(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067ee814:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067ee820;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1067ee820;
        }
        goto LAB_1067ee814;
      }
    }
    lVar3 = 0;
  }
LAB_1067ee820:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067ee83c; end: 1067ee843; -[SCBoltURLMediaPageDataConfig media] */

undefined8 FUN_1067ee83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067ee844; end: 1067ee84b; -[SCBoltURLMediaPageDataConfig snapchatter] */

undefined8 FUN_1067ee844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067ee84c; end: 1067ee853; -[SCBoltURLMediaPageDataConfig canReply] */

undefined1 FUN_1067ee84c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1067ee854; end: 1067ee85b; -[SCBoltURLMediaPageDataConfig deleteEnabled] */

undefined1 FUN_1067ee854(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1067ee85c; end: 1067ee863; -[SCBoltURLMediaPageDataConfig mediaIndex] */

undefined8 FUN_1067ee85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067ee864; end: 1067ee86b; -[SCBoltURLMediaPageDataConfig totalMediaCount] */

undefined8 FUN_1067ee864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067ee86c; end: 1067ee89b; -[SCBoltURLMediaPageDataConfig .cxx_destruct] */

void FUN_1067ee86c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067ee89c; end: 1067ee8a7; -[SCFeatureSettingsService hasSeenPreselectPrivateStoryModal] */

void FUN_1067ee89c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e60598);
  return;
}



/* Entry: 1067ee8a8; end: 1067ee8b3; -[SCFeatureSettingsService seenPreselectPrivateStoryModalServerParam] */

undefined ** FUN_1067ee8a8(void)

{
  return &PTR____CFConstantStringClassReference_110e60598;
}



/* Entry: 1067ee8b4; end: 1067ee8c3; -[SCFeatureSettingsService setSeenPreselectPrivateStoryModal:] */

void FUN_1067ee8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e60598,param_3);
  return;
}



/* Entry: 1067ee8c4; end: 1067ee8cb; -[SCFeatureSettingsService QUICK_POST_PRESELECTION_PROMPT_ACCEPTED_client_value:] */

undefined * FUN_1067ee8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1067ee8cc; end: 1067ee8d3; -[SCFeatureSettingsService QUICK_POST_PRESELECTION_PROMPT_ACCEPTED_server_value:] */

void FUN_1067ee8cc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1067ee8d4; end: 1067ee8e3; -[SCFeatureSettingsService seenPreselectPrivateStoryModal] */

void FUN_1067ee8d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e60598,0);
  return;
}



/* Entry: 1067ee8e4; end: 1067ee957; -[SCQuickPostTooltipsServiceImpl initWithFeatureSettingsService:] */

undefined1 * FUN_1067ee8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3510;
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



/* Entry: 1067ee958; end: 1067ee997; -[SCQuickPostTooltipsServiceImpl shouldDisplayPreselectPrivateStoryModal] */

uint FUN_1067ee958(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157b80();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1067ee998; end: 1067ee9cf; -[SCQuickPostTooltipsServiceImpl setSeenPreselectPrivateStoryModal] */

void FUN_1067ee998(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ee9d0; end: 1067ee9db; -[SCQuickPostTooltipsServiceImpl .cxx_destruct] */

void FUN_1067ee9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ee9dc; end: 1067eeabf; -[SCQuickPostTooltipsServiceProvider provide] */

void FUN_1067ee9dc(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126ce3e8;
  _objc_alloc(PTR_PTR_1126ce3e8);
  func_0x00010c03c900();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067eeac0; end: 1067eeaff;  */

void FUN_1067eeac0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be859a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067eeb00; end: 1067eeb83; -[SCQuickPostTooltipsServiceProvider _quickPostTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067eeb00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ce3f0;
  _objc_alloc(PTR_PTR_1126ce3f0);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112750d40;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfa2b80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067eeb84; end: 1067eebbb; -[SCQuickPostTooltipsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067eeb84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750d3c);
  return;
}



/* Entry: 1067eebbc; end: 1067eed3f; -[SCShareNotificationActionHandler initWithURL:shareSource:deeplinkSourceType:shareUIType:notificationPool:blizzardLogger:manualPresenter:copyLinkBlock:circumstanceEngine:offPlatformShareFeatureProvider:] */

undefined8 *
FUN_1067eebbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f3518;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_storeWeak(puVar1 + 9,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067eed40; end: 1067eee53; -[SCShareNotificationActionHandler copyUrlToClipboardThenNotify] */

void FUN_1067eed40(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_1 + 0x48;
      _objc_loadWeakRetained();
      (**(code **)(lVar2 + 0x10))();
      _objc_release(lVar2);
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf84200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    lVar2 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x000108faa900();
  if (iVar1 == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1067eee54;
    puStack_38 = &UNK_110841f80;
    lStack_30 = param_1;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    func_0x00010be56920(param_1);
    _objc_release(lStack_28);
  }
  else {
    func_0x00010be279c0(param_1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1067eee54; end: 1067eeee3;  */

void FUN_1067eee54(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,uVar2);
  _objc_retain();
  FUN_1067f3420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde9c40(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1067eeee4; end: 1067eefeb; -[SCShareNotificationActionHandler _copyToClipboardAndNotifyWithUrl:successMessage:] */

void FUN_1067eeee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfbedc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c20e7c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_4,
                      &PTR____CFConstantStringClassReference_110e605b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c25f340(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84200();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067eefec; end: 1067ef0b7; -[SCShareNotificationActionHandler _logOffPlatformShareMetricWithUrl:] */

void FUN_1067eefec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000108f9516c(param_1,0,0xf,0,0,0,uVar2,uVar3,uVar1,0,*(undefined8 *)(param_2 + 0x18),
                      *(undefined8 *)(param_2 + 0x20),0x18,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ef0b8; end: 1067ef2d3; -[SCShareNotificationActionHandler _handleCopyLinkViaOPSServiceWithUrl:] */

void FUN_1067ef0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1067ef2d4;
  puStack_80 = &UNK_1109322d8;
  uStack_78 = uVar1;
  uStack_70 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  puVar4 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  puVar5 = PTR_PTR_1126b3ee8;
  _objc_alloc(PTR_PTR_1126b3ee8);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045aa0(puVar5,param_2,uVar9,uVar10,puVar3,param_1,puVar4,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf57580();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  _objc_release(uVar8);
  _objc_release(uVar10);
  func_0x00010bfd26e0(*(undefined8 *)(param_1 + 0x60),param_2,0xf);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1067ef2d4; end: 1067ef343;  */

void FUN_1067ef2d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067ef344; end: 1067ef35b;  */

void FUN_1067ef344(void)

{
  return;
}



/* Entry: 1067ef35c; end: 1067ef363; -[SCShareNotificationActionHandler handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1067ef35c(void)

{
  return 0;
}



/* Entry: 1067ef364; end: 1067ef3bb; -[SCShareNotificationActionHandler shareSheetDismissedWithShareDestination:] */

void FUN_1067ef364(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1067ef3bc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1067ef3bc; end: 1067ef3eb;  */

void FUN_1067ef3bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067ef3ec; end: 1067ef467; -[SCShareNotificationActionHandler .cxx_destruct] */

void FUN_1067ef3ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ef468; end: 1067ef5e3; -[SCShareNotificationServiceImpl initWithNotificationPool:resourceDownloader:blizzardLogger:bitmojiAvatarScopeExposer:circumstanceEngine:offPlatformShareFeatureProvider:shareUpsellPresenterScopeServices:] */

undefined1 *
FUN_1067ef468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_58 = PTR_PTR_1126f3520;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
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



/* Entry: 1067ef5e4; end: 1067ef763; -[SCShareNotificationServiceImpl createAndPresentShareNotificationWithScreenshotSharingConfiguration:copyLinkBlock:useOPSBannerOnly:] */

void FUN_1067ef5e4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x000108faa928();
    if (iVar3 == 0) {
      uVar6 = param_4;
      _objc_retainBlock();
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar6;
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126ce3f8;
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf57f60(puVar5,param_2,uVar6,uVar1,uVar7,uVar2,puVar4,
                          *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f340();
      _objc_release(uVar6);
      goto LAB_1067ef730;
    }
  }
  puVar5 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puVar5;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) goto LAB_1067ef730;
  }
  else {
    _objc_release();
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    func_0x00010be7e800(param_1,param_2,puVar5);
  }
LAB_1067ef730:
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ef764; end: 1067ef8ff; -[SCShareNotificationServiceImpl _presentShareUpsellWithConfiguration:] */

void FUN_1067ef764(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bf688a0();
    puVar3 = PTR_PTR_1126ae720;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1067ef900;
    puStack_68 = &UNK_1109407a0;
    puStack_60 = puVar2;
    puStack_58 = puVar1;
    _objc_retain(puVar2);
    func_0x00010bf11fe0(puVar3,param_2,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b0808;
    _objc_alloc(PTR_PTR_1126b0808);
    func_0x00010c051820();
    _objc_release(puVar3);
    _objc_release(puStack_60);
    _objc_release(puVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = param_3;
  func_0x00010c28f020(param_3);
  puVar2 = param_3;
  func_0x00010c22b040(param_3);
  puVar4 = param_3;
  func_0x00010c22b1e0(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x000108faa418(uVar5);
  func_0x00010bf245e0(uVar6,param_2,puVar3,puVar1,puVar2,puVar4,uVar5,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  _objc_release(uVar5);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1067ef900; end: 1067ef99b;  */

void FUN_1067ef900(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(param_1 + 0x28),0,0);
  func_0x00010bfe9ca0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067ef99c; end: 1067ef9ab; -[SCShareNotificationServiceImpl upsellPresenterDidFinishPresenting:] */

void FUN_1067ef99c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ef9ac; end: 1067efa2f; -[SCShareNotificationServiceImpl .cxx_destruct] */

void FUN_1067ef9ac(long param_1)

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



/* Entry: 1067efa30; end: 1067efb6b; -[SCShareNotificationImageInfoActionDialog initWithWithTitleText:subtitleText:buttonText:shareNotificationActionHandler:sigIconType:ctaStyle:ctaImageTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067efa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126f3528;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112750d98) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112750d9c) = 0;
    lVar3 = (long)_DAT_112750da0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112750da4) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112750da8) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112750dac) = param_9;
    func_0x00010bde5e20(puVar1);
    func_0x00010beacc80(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067efb6c; end: 1067efc5b; -[SCShareNotificationImageInfoActionDialog setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067efb6c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + _DAT_112750d98) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112750d98) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3feccccccccccccd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = 0xc6;
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar1);
    uVar3 = 0xc1;
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112750db0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067efc5c; end: 1067f04f7; -[SCShareNotificationImageInfoActionDialog _configureUIWithLabelText:subtitleText:buttonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067efc5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_b8 = param_4;
  uStack_b0 = param_5;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c166c00(puVar1);
  func_0x00010c207380(0x4020000000000000,puVar1);
  func_0x00010c16e060(puVar1);
  func_0x00010befbb60(param_1);
  puVar2 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493c0(0x4020000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493c0(0xc030000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c274200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar9 = (long)_DAT_112750db4;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  func_0x00010bef6d60(puVar1);
  puVar2 = PTR_PTR_1126b52f0;
  _objc_alloc();
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112750db8);
  *(undefined **)(param_1 + _DAT_112750db8) = puVar2;
  _objc_release(uVar8);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_a8 = uVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c16e060(puVar2);
  func_0x00010bef6d60(puVar1);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar10 = (long)_DAT_112750db0;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar3;
  _objc_release(uVar8);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar10));
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar8);
  lVar9 = lStack_b8;
  _objc_release(puVar3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar10));
  _objc_release(param_3);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010bef6d60(puVar2);
  puVar3 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112750dbc;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar3;
  _objc_release(uVar8);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1aab40(*(undefined8 *)(param_1 + lVar10));
  uVar8 = uStack_b0;
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar10));
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010bef6d60(puVar1);
  puVar7 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(lVar10);
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(lVar10);
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bf493a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(lVar10);
  _objc_release(puVar7);
  puVar3 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf493a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar7);
  _objc_release(lVar10);
  _objc_release(puVar3);
  if (lVar9 != 0) {
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    lVar10 = (long)_DAT_112750dc0;
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar3;
    _objc_release(uVar8);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar10));
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar8);
    _objc_release(puVar3);
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
    func_0x00010bef6d60(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar3);
  lVar10 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(lVar10);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf199c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  lVar10 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(lVar10);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b08d8;
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x402c000000000000,0x3ff0000000000000,*(undefined8 *)PTR__CGSizeZero_110347620
                      ,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar3,param_1,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  puStack_d8 = puVar3;
  pcStack_c8 = FUN_1067f04f8;
  puStack_108 = PTR_PTR_1126f3528;
  lStack_110 = lVar9;
  lStack_100 = lVar10;
  puStack_f8 = puVar7;
  puStack_f0 = puVar2;
  puStack_e8 = puVar1;
  lStack_e0 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,0x4046000000000000,0x4046000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar8 = *(undefined8 *)(lVar9 + _DAT_112750db8);
  func_0x00010c22a660(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar8);
  _objc_release(puVar2);
  uVar8 = *(undefined8 *)(lVar9 + _DAT_112750dc4);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar8);
  return;
}



/* Entry: 1067f04f8; end: 1067f05df; -[SCShareNotificationImageInfoActionDialog layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f04f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f3528;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,0x4046000000000000,0x4046000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112750db8);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112750dc4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar2);
  return;
}



/* Entry: 1067f05e0; end: 1067f060f; -[SCShareNotificationImageInfoActionDialog getThumbnailUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f05e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112750dc4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f0610; end: 1067f068f; -[SCShareNotificationImageInfoActionDialog setButtonImageFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f0610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112750dbc);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067f0690;
  puStack_30 = &UNK_11086dbb8;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c297260(param_3,param_2,&puStack_48,0);
  _objc_release(uVar1);
  return;
}



/* Entry: 1067f0690; end: 1067f069f;  */

void FUN_1067f0690(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage_forState__112648218,param_2,0);
  return;
}



/* Entry: 1067f06a0; end: 1067f071f; -[SCShareNotificationImageInfoActionDialog setProfileImageFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f06a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112750dc8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067f0720;
  puStack_30 = &UNK_11086dbb8;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c297260(param_3,param_2,&puStack_48,0);
  _objc_release(uVar1);
  return;
}



/* Entry: 1067f0720; end: 1067f072b;  */

void FUN_1067f0720(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__1126481e8,param_2);
  return;
}



/* Entry: 1067f072c; end: 1067f07f7; -[SCShareNotificationImageInfoActionDialog configureThumbnailWithDisplayMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f072c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 3) {
    func_0x00010bea9bc0(param_1);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bc60(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112750dc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  if (param_3 != 2) {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__setUpThumbnailImageViewForProfi_112588090);
      return;
    }
    return;
  }
  func_0x00010bea9b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1067f07f8; end: 1067f0b63; -[SCShareNotificationImageInfoActionDialog _setUpThumbnailContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f07f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar33;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = (long)_DAT_112750dc8;
  if (*(long *)(param_1 + lVar29) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar29);
    *(undefined8 *)(param_1 + lVar29) = 0;
    _objc_release(uVar1);
  }
  puVar30 = &DAT_112750db4;
  lVar29 = (long)_DAT_112750db8;
  uVar1 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0870;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar31 = (long)_DAT_112750dc4;
  uVar1 = *(undefined8 *)(param_1 + lVar31);
  *(undefined **)(param_1 + lVar31) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar31),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar31),param_2,0);
  lVar33 = (long)_DAT_112750db4;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar33),param_2,*(undefined8 *)(param_1 + lVar31));
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_100 = *(undefined8 *)(param_1 + lVar31);
  uStack_f8 = *(undefined8 *)(param_1 + lVar29);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x27 = *plStack_130;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_130 != unaff_x27) {
          _objc_enumerationMutation(puVar2);
        }
        puVar30 = *(undefined **)(lStack_138 + (long)unaff_x28 * 8);
        puVar4 = puVar30;
        func_0x00010c08de00(puVar30);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + lVar33);
        func_0x00010c08de00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf493a0(puVar4,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162480();
        _objc_release(puVar5);
        _objc_release(uVar1);
        _objc_release(puVar4);
        puVar4 = puVar30;
        func_0x00010c2793a0(puVar30);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + lVar33);
        func_0x00010c2793a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf493a0(puVar4,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162480();
        _objc_release(puVar5);
        _objc_release(uVar1);
        _objc_release(puVar4);
        puVar4 = puVar30;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + lVar33);
        func_0x00010c274200(uVar1);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = puVar4;
        func_0x00010bf493a0(puVar4,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162480();
        _objc_release(unaff_x25);
        _objc_release(uVar1);
        _objc_release(puVar4);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar31 = *(long *)(param_1 + lVar33);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = puVar30;
        func_0x00010bf493a0(puVar30,param_2,lVar31);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162480();
        _objc_release(unaff_x24);
        _objc_release(lVar31);
        _objc_release(puVar30);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar3 != unaff_x28);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_140,auStack_f0,0x10);
      lVar29 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1067f0b64;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_190 = lVar33;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  lStack_178 = lVar31;
  puStack_170 = puVar30;
  lStack_168 = lVar29;
  puStack_160 = puVar2;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar32 = (long)_DAT_112750db8;
  uVar1 = *(undefined8 *)(puVar3 + lVar32);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  _objc_release(puVar4);
  puVar30 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar33 = (long)_DAT_112750dc8;
  uVar1 = *(undefined8 *)(puVar3 + lVar33);
  *(undefined **)(puVar3 + lVar33) = puVar30;
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(puVar3 + lVar33),param_2,0);
  func_0x00010c182220(*(undefined8 *)(puVar3 + lVar33),param_2,2);
  lVar31 = (long)_DAT_112750db4;
  func_0x00010befbb60(*(undefined8 *)(puVar3 + lVar31),param_2,*(undefined8 *)(puVar3 + lVar33));
  func_0x00010bf21300(*(undefined8 *)(puVar3 + lVar31),param_2,*(undefined8 *)(puVar3 + lVar33));
  puStack_240 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar29 = *(long *)(puVar3 + lVar32);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar3 + lVar31);
  lStack_1f8 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar1;
  func_0x00010bf493a0(lVar29,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar3 + lVar32);
  lStack_208 = lVar29;
  lStack_1f0 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar3 + lVar31);
  uStack_210 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_218 = uVar1;
  func_0x00010bf493a0(uVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar3 + lVar32);
  uStack_220 = uVar6;
  uStack_1e8 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar3 + lVar31);
  uStack_228 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_230 = uVar1;
  func_0x00010bf493a0(uVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar3 + lVar32);
  uStack_238 = uVar7;
  uStack_1e0 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar3 + lVar31);
  uStack_248 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_250 = uVar1;
  func_0x00010bf493a0(uVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar3 + lVar33);
  uStack_258 = uVar6;
  uStack_1d8 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar3 + lVar31);
  uStack_260 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4024000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar3 + lVar33);
  uStack_1d0 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar3 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010bf493c0(0x4024000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar3 + lVar33);
  uStack_1c8 = uVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar3 + lVar33);
  uStack_1c0 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b8 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1f0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_240,param_2,puVar30);
  _objc_release(puVar30);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(lStack_208);
  _objc_release(uStack_200);
  lVar29 = lStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_1067f0f98;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_2c0 = uVar1;
  uStack_2b8 = uVar11;
  uStack_2b0 = uVar10;
  uStack_2a8 = uVar8;
  uStack_2a0 = uVar9;
  puStack_298 = puVar30;
  uStack_290 = uVar7;
  uStack_288 = uVar13;
  uStack_280 = uVar6;
  uStack_278 = uVar12;
  ppuStack_270 = &puStack_150;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar33 = (long)_DAT_112750db8;
  uVar1 = *(undefined8 *)(lVar29 + lVar33);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar30 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar31 = (long)_DAT_112750dc8;
  uVar1 = *(undefined8 *)(lVar29 + lVar31);
  *(undefined **)(lVar29 + lVar31) = puVar30;
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar29 + lVar31),param_2,0);
  func_0x00010c182220(*(undefined8 *)(lVar29 + lVar31),param_2,2);
  func_0x00010c17d4c0(*(undefined8 *)(lVar29 + lVar31),param_2,1);
  uVar1 = *(undefined8 *)(lVar29 + lVar31);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar1);
  lVar32 = (long)_DAT_112750db4;
  func_0x00010befbb60(*(undefined8 *)(lVar29 + lVar32),param_2,*(undefined8 *)(lVar29 + lVar31));
  func_0x00010bf21300(*(undefined8 *)(lVar29 + lVar32),param_2,*(undefined8 *)(lVar29 + lVar31));
  puVar30 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(lVar29 + lVar33);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar29 + lVar33);
  uStack_310 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar29 + lVar33);
  uStack_308 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar29 + lVar33);
  uStack_300 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar29 + lVar31);
  uStack_2f8 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar29 + lVar31);
  uStack_2f0 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010c274200(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar29 + lVar31);
  uStack_2e8 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010c2793a0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(lVar29 + lVar31);
  uStack_2e0 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(lVar29 + lVar32);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2d8 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_310,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar30,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar11);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar10);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar8);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar9);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar7);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar1);
  _objc_release(uVar13);
  _objc_release(uVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  puVar30 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar14,param_2,puVar30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar30);
  return;
}



/* Entry: 1067f0b64; end: 1067f0f97; -[SCShareNotificationImageInfoActionDialog _setUpThumbnailImageViewForSigIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f0b64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar30 = (long)_DAT_112750db8;
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar29 = (long)_DAT_112750dc8;
  uVar2 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar29),param_2,2);
  lVar28 = (long)_DAT_112750db4;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28),param_2,*(undefined8 *)(param_1 + lVar29));
  func_0x00010bf21300(*(undefined8 *)(param_1 + lVar28),param_2,*(undefined8 *)(param_1 + lVar29));
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  lStack_b8 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar2;
  func_0x00010bf493a0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar30);
  lStack_c8 = lVar3;
  lStack_b0 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  uStack_d0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uVar2;
  func_0x00010bf493a0(uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar30);
  uStack_e0 = uVar4;
  uStack_a8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  uStack_e8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = uVar2;
  func_0x00010bf493a0(uVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar30);
  uStack_f8 = uVar5;
  uStack_a0 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  uStack_108 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar2;
  func_0x00010bf493a0(uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar29);
  uStack_118 = uVar4;
  uStack_98 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  uStack_120 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4024000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar29);
  uStack_90 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf493c0(0x4024000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar29);
  uStack_88 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar29);
  uStack_80 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_b0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(lStack_c8);
  _objc_release(uStack_c0);
  lVar3 = lStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1067f0f98;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_180 = uVar2;
  uStack_178 = uVar9;
  uStack_170 = uVar8;
  uStack_168 = uVar6;
  uStack_160 = uVar7;
  puStack_158 = puVar1;
  uStack_150 = uVar5;
  uStack_148 = uVar11;
  uStack_140 = uVar4;
  uStack_138 = uVar10;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar29 = (long)_DAT_112750db8;
  uVar2 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar12);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_112750dc8;
  uVar2 = *(undefined8 *)(lVar3 + lVar28);
  *(undefined **)(lVar3 + lVar28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar28),param_2,0);
  func_0x00010c182220(*(undefined8 *)(lVar3 + lVar28),param_2,2);
  func_0x00010c17d4c0(*(undefined8 *)(lVar3 + lVar28),param_2,1);
  uVar2 = *(undefined8 *)(lVar3 + lVar28);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar2);
  lVar30 = (long)_DAT_112750db4;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar30),param_2,*(undefined8 *)(lVar3 + lVar28));
  func_0x00010bf21300(*(undefined8 *)(lVar3 + lVar30),param_2,*(undefined8 *)(lVar3 + lVar28));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar13 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar3 + lVar29);
  uStack_1d0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar3 + lVar29);
  uStack_1c8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar3 + lVar29);
  uStack_1c0 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar3 + lVar28);
  uStack_1b8 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar3 + lVar28);
  uStack_1b0 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010c274200(uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar22;
  func_0x00010bf493a0(uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar3 + lVar28);
  uStack_1a8 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010c2793a0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar3 + lVar28);
  uStack_1a0 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar26;
  func_0x00010bf493a0(uVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_198 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1d0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar9);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar8);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar6);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar13,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067f0f98; end: 1067f1433; -[SCShareNotificationImageInfoActionDialog _setUpThumbnailImageViewForProfileImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f0f98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar28 = (long)_DAT_112750db8;
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar27 = (long)_DAT_112750dc8;
  uVar2 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar27),param_2,2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar27),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar2);
  lVar29 = (long)_DAT_112750db4;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar29),param_2,*(undefined8 *)(param_1 + lVar27));
  func_0x00010bf21300(*(undefined8 *)(param_1 + lVar29),param_2,*(undefined8 *)(param_1 + lVar27));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar28);
  uStack_b0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar28);
  uStack_a8 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar28);
  uStack_a0 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar27);
  uStack_98 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar27);
  uStack_90 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c274200(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar27);
  uStack_88 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2793a0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar27);
  uStack_80 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar26);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067f1434; end: 1067f147f; -[SCShareNotificationImageInfoActionDialog _setupGestureRecognizer] */

void FUN_1067f1434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067f1480; end: 1067f14e3; -[SCShareNotificationImageInfoActionDialog _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f1480(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112750d9c;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112750da0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf521a0();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
  return;
}



/* Entry: 1067f14e4; end: 1067f14f3; -[SCShareNotificationImageInfoActionDialog highlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1067f14e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112750d98);
}


