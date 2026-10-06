/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d5814c; end: 108d58277;  */

void FUN_108d5814c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010bdc1800(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
    }
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d58278;
  puStack_48 = &UNK_1107d0af0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  lStack_40 = lVar3;
  uStack_38 = uVar2;
  _objc_retain(lVar3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(lStack_40);
  _objc_release(uStack_38);
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 108d58278; end: 108d58287;  */

void FUN_108d58278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d58284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108d58288; end: 108d582af; -[SCGalleryEncryptedDatabase observeDbInit] */

void FUN_108d58288(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d582b0; end: 108d5835b; -[SCGalleryEncryptedDatabase addLocationsWithSnaps:] */

void FUN_108d582b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d5835c;
  puStack_48 = &UNK_110883780;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108d5835c; end: 108d58477;  */

void FUN_108d5835c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f516853);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ec69f8,0,puVar1);
  _objc_release(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108d58478;
  puStack_40 = &UNK_110ac3590;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_58);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f516853);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ec6a18,0,puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 108d58478; end: 108d5863b;  */

void FUN_108d58478(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf51c80(param_5);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf51c80(param_5);
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110ef76b8;
  func_0x00010be72ca0(uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  lVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  uVar8 = *(undefined8 *)(lVar5 + 0x20);
  _objc_retain(ppuVar6);
  func_0x00010c0f7fc0(uVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  return;
}



/* Entry: 108d5863c; end: 108d586e7; -[SCGalleryEncryptedDatabase addEncryptionInfoWithSnaps:] */

void FUN_108d5863c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d586e8;
  puStack_48 = &UNK_110883780;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108d586e8; end: 108d58803;  */

void FUN_108d586e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f5168d9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ec69f8,0,puVar1);
  _objc_release(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108d58804;
  puStack_40 = &UNK_110ac35c0;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_58);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f5168d9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ec6a18,0,puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 108d58804; end: 108d58a37;  */

void FUN_108d58804(long param_1,undefined *param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  int iVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
  ppuVar8 = param_3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0719c0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef76d8;
  puVar6 = puVar3;
  func_0x00010be72ca0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar8);
  if (iVar10 != 0) {
    ppuVar8 = *(undefined ***)(param_1 + 0x20);
    __ZNSt3__15mutex4lockEv(ppuVar8 + 0x10);
    ppuVar5 = param_3;
    puVar6 = param_2;
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
    __ZNSt3__15mutex6unlockEv(ppuVar8 + 0x10);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__15mutex6unlockEv(ppuVar8 + 0x10);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(ppuVar5);
  _objc_retain(puVar6);
  if (ppuVar5 != (undefined **)0x0) {
    uVar9 = *(undefined8 *)(puVar2 + 0x20);
    _objc_retain(puVar6);
    _objc_retain(ppuVar5);
    func_0x00010c0f7fc0(uVar9);
    _objc_release(ppuVar5);
    _objc_release(puVar6);
  }
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  return;
}



/* Entry: 108d58a38; end: 108d58b23; -[SCGalleryEncryptedDatabase addLocation:forSnapId:] */

void FUN_108d58a38(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d58b24;
    puStack_50 = &UNK_110896e48;
    lStack_48 = param_1;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d58b24; end: 108d58c9f;  */

undefined * FUN_108d58b24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long in_x5;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110ef76b8;
  puVar7 = puVar3;
  func_0x00010be72ca0(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  _objc_retain(puVar7);
  _objc_retain(in_x5);
  uVar9 = 0;
  if (((ppuVar6 != (undefined **)0x0) && (puVar7 != (undefined *)0x0)) && (in_x5 != 0)) {
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x2020000000;
    uStack_b8 = 0;
    uVar10 = *(undefined8 *)(puVar5 + 0x20);
    _objc_retain(ppuVar6);
    _objc_retain(puVar7);
    _objc_retain(in_x5);
    func_0x00010c0f8240(uVar10);
    uVar9 = (uint)*(byte *)(puStack_c8 + 3);
    _objc_release(in_x5);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    __Block_object_dispose(&uStack_d0,8);
  }
  _objc_release(in_x5);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  return (undefined *)(ulong)(uVar9 & 1);
}



/* Entry: 108d58ca0; end: 108d58e27; -[SCGalleryEncryptedDatabase addKey:IV:isEncrypted:forSnapId:shouldSkipCoredataPersisting:] */

byte FUN_108d58ca0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  bVar1 = 0;
  if (((param_3 != 0) && (param_4 != 0)) && (param_6 != 0)) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c0f8240(uVar2);
    bVar1 = *(byte *)(puStack_68 + 3);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 108d58e28; end: 108d5911f;  */

void FUN_108d58e28(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126bf908;
  _objc_alloc();
  func_0x00010c020a60();
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    func_0x00010be732a0(*(undefined8 *)(param_1 + 0x30));
  }
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0();
  plVar8 = (long *)(param_1 + 0x40);
  *(undefined1 *)(*(long *)(*plVar8 + 8) + 0x18) = uVar1;
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar7);
  if (*(char *)(*(long *)(*plVar8 + 8) + 0x18) == '\x01') {
    puVar7 = *(undefined **)(param_1 + 0x30);
    __ZNSt3__15mutex4lockEv(puVar7 + 0x80);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xc0));
    __ZNSt3__15mutex6unlockEv(puVar7 + 0x80);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(*(long *)(param_1 + 0x30) + 0x10);
    func_0x00010c088a60();
    _objc_retainAutoreleasedReturnValue();
    plVar8 = (long *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e00074(&PTR____CFConstantStringClassReference_110ef7a18,
                  &PTR____CFConstantStringClassReference_110ef7a38,plVar8,
                  *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30));
    _objc_release(plVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar8);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar2);
  __Unwind_Resume();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_108d570f8;
  uStack_100 = 0x108d57108;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puStack_f8 = puVar2;
  func_0x00010c0f8240(*(undefined8 *)(puVar3 + 0x20));
  uVar5 = puStack_118[5];
  func_0x00010bf51e00(uVar5);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(puStack_f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108d59120; end: 108d5922b; -[SCGalleryEncryptedDatabase snapIdToLocationMapWithinMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_108d59120(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108d570f8;
  uStack_50 = 0x108d57108;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puStack_48 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x20));
  uVar2 = puStack_68[5];
  func_0x00010bf51e00(uVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d5922c; end: 108d59573;  */

void FUN_108d5922c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar5 = &uStack_160;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar9 = *(long *)(lVar1 + 0x10);
  func_0x00010bdc37c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ef7718);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar10;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar2;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar3;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000(lVar9,param_2,lVar1,ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(lVar1);
  uVar12 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  puStack_150 = (undefined8 *)0x0;
  lVar1 = lVar9;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_118;
  uVar7 = 0x10;
  lVar4 = lVar1;
  func_0x00010bf52a60();
  uVar8 = (undefined1)in_x5;
  if (lVar4 != 0) {
    puVar11 = (undefined *)*puStack_150;
    ppuVar13 = &PTR_PTR_1126b3000;
    do {
      lVar14 = 0;
      do {
        if ((undefined *)*puStack_150 != puVar11) {
          _objc_enumerationMutation(lVar1);
        }
        puVar10 = *(undefined **)(lStack_158 + lVar14 * 8);
        puVar2 = puVar10;
        func_0x00010c25d280(puVar10,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf88340(puVar10,param_2,1);
        uVar15 = uVar12;
        func_0x00010bf88340(puVar10,param_2,2);
        puVar3 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
        _objc_alloc();
        func_0x00010c021a60(uVar12,uVar15);
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2
                            ,puVar3,puVar2);
        _objc_release(puVar3);
        _objc_release(puVar2);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      puVar6 = auStack_118;
      uVar7 = 0x10;
      lVar4 = lVar1;
      puVar5 = &uStack_160;
      func_0x00010bf52a60();
      uVar8 = (undefined1)in_x5;
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  lVar4 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar1 = lVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_108d59574;
  ppuStack_1b0 = ppuVar13;
  puStack_1a8 = puVar11;
  puStack_1a0 = puVar3;
  puStack_198 = puVar2;
  uStack_190 = 0;
  lStack_188 = lVar9;
  lStack_180 = lVar9;
  lStack_178 = lVar4;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(in_x6);
  uVar12 = *(undefined8 *)(lVar1 + 0x20);
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_108d596ac;
  puStack_1e0 = &UNK_110ac3680;
  lStack_1d8 = lVar1;
  puStack_1d0 = (undefined1 *)puVar5;
  uStack_1c8 = in_x6;
  puStack_1c0 = puVar6;
  uStack_1b8 = uVar7;
  uStack_1b7 = uVar8;
  _objc_retain(puVar6);
  _objc_retain(in_x6);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar12,param_2,&puStack_1f8);
  _objc_release(puStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(puStack_1d0);
  _objc_release(puVar6);
  _objc_release(in_x6);
  _objc_release(puVar5);
  return;
}



/* Entry: 108d59574; end: 108d596ab; -[SCGalleryEncryptedDatabase duplicateFromSnapIds:toSnapIds:localOnly:shouldSkipCoredataPersisting:memoriesGrapheneContext:] */

void FUN_108d59574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108d596ac;
  puStack_80 = &UNK_110ac3680;
  lStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_7;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_57 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 108d596ac; end: 108d59df3;  */

void FUN_108d596ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_108d570f8;
  uStack_e8 = 0x108d57108;
  lStack_e0 = 0;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uVar17 = 0xc2000000;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_108d59df4;
  puStack_118 = &UNK_110ac3650;
  puStack_100 = puStack_110;
  func_0x00010be867e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),1,
                      *(undefined1 *)(param_1 + 0x40),0,*(undefined8 *)(param_1 + 0x30),&puStack_130
                     );
  uVar12 = 0;
  while( true ) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (uVar1 <= uVar12) break;
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 != 0) && (lVar3 != 0)) {
      lVar4 = *(long *)(param_1 + 0x20);
      lVar13 = *(long *)(lVar4 + 0x10);
      func_0x00010bdc37c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = lVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar4);
      lVar4 = lVar13;
      func_0x00010bf529e0();
      if (lVar4 == 1) {
        lVar4 = lVar13;
        func_0x00010bfb1b60(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf88340();
        uVar16 = uVar17;
        func_0x00010bf88340(lVar4);
        uVar15 = *(undefined8 *)(param_1 + 0x20);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lStack_a0 = lVar3;
        func_0x00010c0df720(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_98 = puVar5;
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_90 = puVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be72ca0(uVar15);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(lVar4);
        uVar17 = uVar16;
      }
      lVar4 = *(long *)(param_1 + 0x20);
      lVar14 = *(long *)(lVar4 + 0x10);
      func_0x00010bdc37c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_a8 = lVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar4);
      lVar4 = lVar14;
      func_0x00010bf529e0();
      if (lVar4 == 1) {
        lVar4 = lVar14;
        func_0x00010bfb1b60();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar4;
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_1 + 0x20);
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_b8 = lVar3;
        lStack_b0 = lVar9;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be72ca0(uVar16);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(lVar9);
        _objc_release(lVar4);
      }
      lVar4 = puStack_100[5];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar9 = lVar4;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar4;
        func_0x00010bdc1800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0719c0(lVar4);
        puVar5 = PTR_PTR_1126bf908;
        _objc_alloc(PTR_PTR_1126bf908);
        func_0x00010c020a60();
        if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
          func_0x00010be732a0(*(undefined8 *)(param_1 + 0x20));
        }
        lVar11 = lVar3;
        func_0x00010c08fa60();
        if (((lVar11 != 0) && (lVar11 = lVar9, func_0x00010c08fa60(), lVar11 != 0)) &&
           (lVar11 = lVar10, func_0x00010c08fa60(), lVar11 != 0)) {
          uVar16 = *(undefined8 *)(param_1 + 0x20);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          lStack_d8 = lVar3;
          lStack_d0 = lVar9;
          lStack_c8 = lVar10;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_c0 = puVar6;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be72ca0(uVar16);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
        _objc_release(lVar10);
        _objc_release(lVar9);
      }
      _objc_release(lVar4);
      _objc_release(lVar14);
      _objc_release(lVar13);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar12 = uVar12 + 1;
  }
  __Block_object_dispose(&uStack_108,8);
  lVar2 = lStack_e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = 8;
  __Block_object_dispose(&uStack_108);
  _objc_release(lStack_e0);
  __Unwind_Resume();
  _objc_retain(uVar16);
  lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 8);
  uVar17 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}



/* Entry: 108d59df4; end: 108d59e2b;  */

void FUN_108d59df4(long param_1,undefined8 param_2)

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



/* Entry: 108d59e2c; end: 108d5a0c7; -[SCGalleryEncryptedDatabase requestKeyForEntryExternalId:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d59e2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be86540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar5 = lVar3;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_108d5a0c8;
      puStack_88 = &UNK_1107d0af0;
      _objc_retain(param_6);
      puStack_78 = param_6;
      _objc_retain(lVar3);
      lStack_80 = lVar3;
      func_0x000107c27d8c(param_5,&puStack_a0);
      _objc_release(lStack_80);
      puVar1 = puStack_78;
      goto LAB_108d59fd0;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135a40(param_1);
LAB_108d59fd0:
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000108d5a0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))
            (*(long *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x20));
  return;
}



/* Entry: 108d5a0c8; end: 108d5a0d7;  */

void FUN_108d5a0c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d5a0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108d5a0d8; end: 108d5a453; -[SCGalleryEncryptedDatabase requestKeyForSnap:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d5a0d8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar8 = param_3;
  func_0x00010bfdd120();
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar8 = param_3;
    func_0x00010c080ca0();
  }
  else {
    ppuVar8 = (undefined **)0x0;
  }
  ppuVar2 = param_3;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar4 = param_3;
    func_0x00010bf93d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if (ppuVar6 != (undefined **)0x0) {
      FUN_108d5c0fc(*(undefined8 *)(param_1 + 0xf0),ppuVar8,
                    &PTR____CFConstantStringClassReference_110ef7a78,1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108d5a454;
      puStack_90 = &UNK_1107d0af0;
      _objc_retain(param_6);
      ppuStack_80 = param_6;
      _objc_retain(param_3);
      ppuStack_88 = param_3;
      func_0x000107c27d8c(param_5,&puStack_a8);
      _objc_release(ppuStack_88);
      ppuVar3 = ppuStack_80;
      goto LAB_108d5a354;
    }
  }
  ppuVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  if ((int)ppuVar8 != 0) {
    ppuVar8 = param_3;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar8);
      ppuVar3 = ppuVar8;
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar8);
  }
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_70 = ppuVar3;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ef7878;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  FUN_108e00074(&PTR____CFConstantStringClassReference_110ef7a98,
                &PTR____CFConstantStringClassReference_110ef7ab8,puVar7,
                *(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar7);
  func_0x00010be912a0(param_1);
LAB_108d5a354:
  _objc_release(ppuVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar7 = ppuVar8[4];
  puVar1 = ppuVar8[5];
  func_0x00010bf93d20(puVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar1 + 0x10))(puVar1,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 108d5a454; end: 108d5a4a7;  */

void FUN_108d5a454(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf93d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d5a4a8; end: 108d5a4bf; -[SCGalleryEncryptedDatabase requestKeyForIdentifier:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d5a4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be912b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__requestKeyForIdentifier_isInter_112581e48,param_3,0,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 108d5a4c0; end: 108d5a82b; -[SCGalleryEncryptedDatabase _requestKeyForIdentifier:isInternal:isFtsSnap:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d5a4c0(long param_1,undefined8 param_2,long param_3,uint param_4,uint param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef7ad8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef7af8;
  }
  FUN_108d5c0fc(*(undefined8 *)(param_1 + 0xf0),param_4 & param_5,ppuVar1,1);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar6);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar7 = uVar6;
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9fe40();
    _objc_release(uVar7);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108d5a82c;
    puStack_78 = &UNK_11087bb60;
    _objc_retain(param_8);
    lStack_70 = param_8;
    func_0x000107c27d8c(param_7,&puStack_90);
    lVar2 = lStack_70;
    goto LAB_108d5a73c;
  }
  lVar2 = param_1;
  func_0x00010be1d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    _objc_release(lVar3);
LAB_108d5a69c:
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_7);
    _objc_retain(uVar6);
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_8);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(uVar6);
    lVar3 = param_7;
  }
  else {
    lVar4 = lVar2;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((param_7 == 0) || (lVar5 == 0)) goto LAB_108d5a69c;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x108d5a83c;
    puStack_a8 = &UNK_1107d0af0;
    _objc_retain(param_8);
    lStack_98 = param_8;
    _objc_retain(lVar2);
    lStack_a0 = lVar2;
    func_0x000107c27d8c(param_7,&puStack_c0);
    _objc_release(lStack_a0);
    lVar3 = lStack_98;
  }
  _objc_release(lVar3);
LAB_108d5a73c:
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108d5a82c; end: 108d5a84b;  */

void FUN_108d5a82c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d5a838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108d5a84c; end: 108d5aa9f;  */

void FUN_108d5a84c(long param_1,undefined **param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *unaff_x20;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    unaff_x20 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cec20();
    _objc_release(unaff_x20);
    puVar1 = *(undefined **)(param_1 + 0x48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000108d5a914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar1 + 0x10))(puVar1,0);
      return;
    }
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x40);
    if (*(long *)(puVar1 + 0x10) == 0) {
      uVar2 = *(ulong *)(puVar1 + 0xe8);
      func_0x00010c0c8940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf7fa40();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        param_2 = &PTR____CFConstantStringClassReference_110ef7b18;
        FUN_108e00074(&PTR____CFConstantStringClassReference_110ef7838,
                      &PTR____CFConstantStringClassReference_110ef7b18,puVar1,
                      *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x30));
        _objc_release(puVar1);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ceb20();
      _objc_release(uVar5);
      unaff_x20 = PTR_PTR_1126dbe28;
      _objc_alloc();
      func_0x00010c047ce0();
      func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x70));
      puVar1 = unaff_x20;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010be867b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (puVar1,PTR_s__readThroughEncryptionForSnapId__11257f388,
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48));
      return;
    }
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  __Unwind_Resume(puVar1);
  _objc_retain(param_2[4]);
  _objc_retain(param_2[5]);
  _objc_retain(param_2[6]);
  _objc_retain(param_2[7]);
  _objc_retain(param_2[8]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(puVar1 + 0x48,param_2[9],7);
  return;
}



/* Entry: 108d5aaa0; end: 108d5aaf3;  */

void FUN_108d5aaa0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  return;
}



/* Entry: 108d5aaf4; end: 108d5abdb; -[SCGalleryEncryptedDatabase _createPendingLocationRequestIfNeeded:queue:resultHandler:] */

bool FUN_108d5aaf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126dbe30;
    _objc_alloc(PTR_PTR_1126dbe30);
    func_0x00010c047e20();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x78),param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2 == 0;
}



/* Entry: 108d5abdc; end: 108d5ae0f; -[SCGalleryEncryptedDatabase requestLocationForSnapId:synchronous:queue:resultHandler:] */

void FUN_108d5abdc(ulong param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
      goto LAB_108d5ad88;
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d5ae10;
    puStack_50 = &UNK_11087bb60;
    _objc_retain(param_6);
    lStack_48 = param_6;
    func_0x000107c27d8c(param_5,&puStack_68);
    lVar2 = lStack_48;
  }
  else {
    lVar2 = param_3;
    if (param_4 == 0) {
      uVar1 = param_1;
      func_0x00010bdf1140();
      if ((uVar1 & 1) != 0) goto LAB_108d5ad88;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_6);
      _objc_release(param_5);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(param_3);
      _objc_retain(param_6);
      func_0x00010c0f8240(uVar3);
      _objc_release(param_6);
    }
  }
  _objc_release(lVar2);
LAB_108d5ad88:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108d5ae10; end: 108d5ae1f;  */

void FUN_108d5ae10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d5ae1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108d5ae20; end: 108d5b05b;  */

void FUN_108d5ae20(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(lVar1 + 0x10);
  func_0x00010bdc37c0(lVar1,param_3,&PTR____CFConstantStringClassReference_110ef7738);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)(param_2 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar8 = lVar6;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0);
  }
  else {
    lVar1 = lVar6;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0);
      uVar5 = param_1;
    }
    else {
      lVar8 = lVar6;
      func_0x00010bfb1b60(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88340();
      unaff_d9 = param_1;
      _objc_release(lVar8);
      lVar8 = lVar6;
      func_0x00010bfb1b60(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88340();
      _objc_release(lVar8);
      lVar8 = *(long *)(param_2 + 0x30);
      puVar2 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      _objc_alloc();
      uVar5 = param_1;
      func_0x00010c021a60(param_1,unaff_d9);
      (**(code **)(lVar8 + 0x10))(lVar8,puVar2);
      _objc_release(puVar2);
      unaff_d8 = param_1;
    }
    param_1 = uVar5;
    _objc_release(lVar1);
  }
  lVar8 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar3 = lVar8;
  __Unwind_Resume();
  pcStack_58 = FUN_108d5b05c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar3 + 0x20);
  lVar7 = *(long *)(lVar4 + 0x10);
  uStack_90 = unaff_d9;
  uStack_88 = unaff_d8;
  puStack_80 = puVar2;
  lStack_78 = lVar8;
  lStack_70 = lVar1;
  lStack_68 = lVar6;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bdc37c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)(lVar3 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar4);
  lVar8 = lVar7;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_108d5b318;
    puStack_b0 = &UNK_11087bb60;
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    lVar8 = *(long *)(lVar3 + 0x38);
    _objc_retain(lVar8);
    lStack_a8 = lVar8;
    func_0x000107c27d8c(uVar5,&puStack_c8);
    lVar8 = lStack_a8;
  }
  else {
    lVar8 = lVar7;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x108d5b328;
      puStack_d8 = &UNK_11087bb60;
      puVar2 = *(undefined **)(lVar3 + 0x30);
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      _objc_retain(uVar5);
      uStack_d0 = uVar5;
      func_0x000107c27d8c(puVar2,&puStack_f0);
      uVar5 = uStack_d0;
    }
    else {
      lVar1 = lVar7;
      func_0x00010bfb1b60(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88340();
      uVar9 = param_1;
      _objc_release(lVar1);
      lVar1 = lVar7;
      func_0x00010bfb1b60(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88340();
      _objc_release(lVar1);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_108d5b338;
      puStack_110 = &UNK_110ac36e0;
      puVar2 = *(undefined **)(lVar3 + 0x30);
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      _objc_retain(uVar5);
      uStack_108 = uVar5;
      uStack_100 = param_1;
      uStack_f8 = uVar9;
      func_0x000107c27d8c(puVar2,&puStack_128);
      uVar5 = uStack_108;
    }
    _objc_release(uVar5);
  }
  _objc_release(lVar8);
  lVar1 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000108d5b324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x20) + 0x10))(*(long *)(lVar1 + 0x20),0);
  return;
}



/* Entry: 108d5b05c; end: 108d5b317;  */

void FUN_108d5b05c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x20);
  lVar5 = *(long *)(lVar1 + 0x10);
  func_0x00010bdc37c0(lVar1,param_3,&PTR____CFConstantStringClassReference_110ef7738);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)(param_2 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108d5b318;
    puStack_60 = &UNK_11087bb60;
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x38);
    _objc_retain(lVar1);
    lStack_58 = lVar1;
    func_0x000107c27d8c(uVar4,&puStack_78);
    lVar1 = lStack_58;
  }
  else {
    lVar1 = lVar5;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x108d5b328;
      puStack_88 = &UNK_11087bb60;
      puVar2 = *(undefined **)(param_2 + 0x30);
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(uVar4);
      uStack_80 = uVar4;
      func_0x000107c27d8c(puVar2,&puStack_a0);
      uVar4 = uStack_80;
    }
    else {
      lVar3 = lVar5;
      func_0x00010bfb1b60(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88340();
      uVar6 = param_1;
      _objc_release(lVar3);
      lVar3 = lVar5;
      func_0x00010bfb1b60(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88340();
      _objc_release(lVar3);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_108d5b338;
      puStack_c0 = &UNK_110ac36e0;
      puVar2 = *(undefined **)(param_2 + 0x30);
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(uVar4);
      uStack_b8 = uVar4;
      uStack_b0 = param_1;
      uStack_a8 = uVar6;
      func_0x000107c27d8c(puVar2,&puStack_d8);
      uVar4 = uStack_b8;
    }
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  lVar3 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000108d5b324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x20) + 0x10))(*(long *)(lVar3 + 0x20),0);
  return;
}



/* Entry: 108d5b318; end: 108d5b337;  */

void FUN_108d5b318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d5b324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108d5b338; end: 108d5b397;  */

void FUN_108d5b338(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x00010c021a60(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d5b398; end: 108d5b487; -[SCGalleryEncryptedDatabase replaceAddressTitle:forSnapId:] */

void FUN_108d5b398(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d5b488;
    puStack_50 = &UNK_110896e48;
    lStack_48 = param_1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d5b488; end: 108d5b57b;  */

void FUN_108d5b488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef76f8;
  puVar5 = puVar1;
  ppuVar6 = ppuVar2;
  func_0x00010be72ca0(uVar7);
  _objc_release(ppuVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(ppuVar4);
  _objc_retain(puVar5);
  _objc_retain(ppuVar6);
  if (ppuVar4 == (undefined **)0x0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108d5b6ec;
    puStack_a0 = &UNK_11087bb60;
    _objc_retain(ppuVar6);
    ppuStack_98 = ppuVar6;
    func_0x000107c27d8c(puVar5,&puStack_b8);
    ppuVar2 = ppuStack_98;
  }
  else {
    uVar7 = *(undefined8 *)(puVar3 + 0x20);
    _objc_retain(ppuVar4);
    _objc_retain(puVar5);
    _objc_retain(ppuVar6);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    ppuVar2 = ppuVar4;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 108d5b57c; end: 108d5b6eb; -[SCGalleryEncryptedDatabase requestAddressTitleForSnapId:queue:resultHandler:] */

void FUN_108d5b57c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d5b6ec;
    puStack_50 = &UNK_11087bb60;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x000107c27d8c(param_4,&puStack_68);
    lVar1 = lStack_48;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d5b6ec; end: 108d5b6fb;  */

void FUN_108d5b6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d5b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108d5b6fc; end: 108d5b913;  */

void FUN_108d5b6fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar3 + 0x10);
  func_0x00010bdc37c0(lVar3,param_2,&PTR____CFConstantStringClassReference_110ef7778);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar3 = lVar6;
  func_0x00010bfb1b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x108d5b924;
    puStack_90 = &UNK_11087bb60;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar5);
    lStack_88 = lVar5;
    func_0x000107c27d8c(uVar1,&puStack_a8);
    lVar5 = lStack_88;
  }
  else {
    lVar5 = lVar3;
    func_0x00010c25d280();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108d5b914;
    puStack_68 = &UNK_1107d0af0;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    lStack_60 = lVar5;
    uStack_58 = uVar2;
    _objc_retain(lVar5);
    func_0x000107c27d8c(uVar1,&puStack_80);
    _objc_release(lStack_60);
    _objc_release(uStack_58);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar5 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(lVar6);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000108d5b920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x28) + 0x10))
            (*(long *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x20));
  return;
}



/* Entry: 108d5b914; end: 108d5b933;  */

void FUN_108d5b914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d5b920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108d5b934; end: 108d5b9f7; -[SCGalleryEncryptedDatabase deleteRecordForSnapIds:memoriesGrapheneContext:] */

void FUN_108d5b934(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108d5b9f8;
    puStack_48 = &UNK_110883780;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108d5b9f8; end: 108d5bc2f;  */

void FUN_108d5b9f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be46580(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010bdc37c0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ef7798);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000(uVar5,param_2,lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010bdc37c0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ef77d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_58 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000(uVar5,param_2,lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  func_0x00010bdc37c0(lVar4,param_2,&PTR____CFConstantStringClassReference_110ef77b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000(uVar5,param_2,lVar4,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar4);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  __Unwind_Resume();
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108d5bc30; end: 108d5bc57; -[SCGalleryEncryptedDatabase _sqliteRegeneratedTime] */

void FUN_108d5bc30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d5bc58; end: 108d5be23; -[SCGalleryEncryptedDatabase _logExceptionEGODBFailToOpen:callsite:] */

void FUN_108d5bc58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 3;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  FUN_108e00074(&PTR____CFConstantStringClassReference_110ef7b38,param_4,puVar4,uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar1 = PTR_PTR_1126b24e0;
  uVar6 = *(undefined8 *)(lVar5 + 0x10);
  func_0x00010c088a40(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bfb0370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_fireGalleryRegenerateSqlcipher_e_1125c9a80,uVar7,(long)(int)uVar6,uVar8,
             *(undefined8 *)(lVar5 + 0xd0));
  return;
}



/* Entry: 108d5be24; end: 108d5be73; -[SCGalleryEncryptedDatabase _logSqliteRegenerateWithContext:dbFileExists:regenerateSucceeded:] */

void FUN_108d5be24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b24e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c088a40(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfb0370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_fireGalleryRegenerateSqlcipher_e_1125c9a80,param_4,(long)(int)uVar2,
             param_5,*(undefined8 *)(param_1 + 0xd0));
  return;
}



/* Entry: 108d5be74; end: 108d5bf13; -[SCGalleryEncryptedDatabase _getCachedKeyIVForSnapID:] */

void FUN_108d5be74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    __ZNSt3__15mutex4lockEv(param_1 + 0x80);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    __ZNSt3__15mutex6unlockEv(param_1 + 0x80);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d5bf14; end: 108d5bf3b; -[SCGalleryEncryptedDatabase _joinSnapIds:] */

void FUN_108d5bf14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf446e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d5bf3c; end: 108d5c063; -[SCGalleryEncryptedDatabase .cxx_destruct] */

void FUN_108d5bf3c(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
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



/* Entry: 108d5c064; end: 108d5c087; -[SCGalleryEncryptedDatabase .cxx_construct] */

void FUN_108d5c064(long param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 108d5c088; end: 108d5c0fb; -[SCGrapheneMemoriesEncryptDbMetric2 init] */

undefined1 * FUN_108d5c088(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe7e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d5c0fc; end: 108d5c2e7;  */

undefined8 ****
FUN_108d5c0fc(long param_1,undefined8 ***param_2,undefined8 ****param_3,undefined8 ***param_4)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar2 = param_3;
  pppuVar5 = param_4;
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f516c69;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f516c6e;
    }
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      ppppuVar2 = (undefined8 ****)&UNK_10f516c74;
    }
    else {
      _objc_retainAutorelease(param_3);
      ppppuVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,ppppuVar2);
    ppuStack_98 = (undefined8 ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&ppuStack_98,auStack_78,&lStack_48,2);
    param_2 = &ppuStack_98;
    ppppuVar2 = (undefined8 ****)&ppuStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110ac3710);
    ppuStack_80 = param_2;
    func_0x000107c278ac(&ppuStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    pppuVar5 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  ppppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  ppppuVar10 = ppppuVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_108d5c2e8;
  ppuStack_d0 = param_2;
  puStack_c8 = puVar9;
  pppuStack_c0 = ppppuVar3;
  pppuStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppppuVar2);
  _objc_retain(pppuVar5);
  puStack_d8 = PTR_PTR_1126fe7e8;
  ppppuVar3 = &pppuStack_e0;
  pppuStack_e0 = ppppuVar10;
  _objc_msgSendSuper2(ppppuVar3,PTR_s_init_1125d9248);
  if (ppppuVar3 != (undefined8 ****)0x0) {
    _objc_retain(pppuVar5);
    _objc_retain(ppppuVar2);
    _objc_retain(ppppuVar3);
    func_0x00010bf9aec0(ppppuVar2);
    if (ppppuVar3[2] == (undefined8 ***)0x0) {
      _objc_release(ppppuVar3);
      _objc_release(ppppuVar2);
      _objc_release(pppuVar5);
      ppppuVar10 = (undefined8 ****)0x0;
      goto LAB_108d5c3fc;
    }
    pppuVar4 = pppuVar5;
    func_0x00010bf51e00();
    pppuVar6 = ppppuVar3[3];
    ppppuVar3[3] = pppuVar4;
    _objc_release(pppuVar6);
    _objc_release(ppppuVar3);
    _objc_release(ppppuVar2);
    _objc_release(pppuVar5);
  }
  _objc_retain(ppppuVar3);
  ppppuVar10 = ppppuVar3;
LAB_108d5c3fc:
  _objc_release(pppuVar5);
  _objc_release(ppppuVar2);
  _objc_release(ppppuVar3);
  return ppppuVar10;
}



/* Entry: 108d5c2e8; end: 108d5c42b; -[EGOCipherStatement initWithDatabase:SQL:] */

undefined8 *
FUN_108d5c2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe7e8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010bf9aec0(param_3);
    if (puVar1[2] == 0) {
      _objc_release(puVar1);
      _objc_release(param_3);
      _objc_release(param_4);
      puVar4 = (undefined8 *)0x0;
      goto LAB_108d5c3fc;
    }
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_retain(puVar1);
  puVar4 = puVar1;
LAB_108d5c3fc:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 108d5c42c; end: 108d5c4ab;  */

ulong FUN_108d5c42c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc3520();
  FUN_108d6c278(param_2,uVar1,0xffffffff,1,0,&plStack_28,0);
  if ((int)param_2 == 0) {
    *(long **)(*(long *)(param_1 + 0x30) + 0x10) = plStack_28;
  }
  else if ((int)param_2 != 5) {
    uVar3 = 0;
    if (plStack_28 != (long *)0x0) {
      lVar2 = *plStack_28;
      if (lVar2 == 0) {
        uVar3 = 0x15;
        FUN_108d64c00(0x15,&UNK_10f517ab1);
        plStack_28 = (long *)&UNK_10f517536;
        FUN_108d64c00(0x15,&UNK_10f51b96f);
      }
      else {
        if (*(long *)(lVar2 + 0x18) != 0) {
          (*pcRam0000000113297998)();
        }
        func_0x000108d674fc();
        if (((uint)plStack_28 == 0xc0a) || (*(char *)(lVar2 + 0x51) != '\0')) {
          FUN_108d80e10(lVar2);
          uVar3 = 7;
        }
        else {
          uVar3 = (ulong)(*(uint *)(lVar2 + 0x48) & (uint)plStack_28);
        }
        FUN_108d67144(lVar2);
      }
    }
    return uVar3;
  }
  return param_2;
}



/* Entry: 108d5c4ac; end: 108d5c4d3; -[EGOCipherStatement resetAndClearBindings] */

undefined8 FUN_108d5c4ac(long param_1)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000108d67558(*(undefined8 *)(param_1 + 0x10));
  plVar1 = *(long **)(param_1 + 0x10);
  lVar4 = *(long *)(*plVar1 + 0x18);
  if (lVar4 != 0) {
    (*pcRam0000000113297998)(lVar4);
  }
  sVar2 = (short)plVar1[0xf];
  if (0 < sVar2) {
    lVar5 = 0;
    lVar6 = 0;
    lVar3 = plVar1[0xd];
    do {
      if (((*(ushort *)(lVar3 + lVar5 + 8) & 0x2460) != 0) || (*(int *)(lVar3 + lVar5 + 0x20) != 0))
      {
        FUN_108d826d0();
        lVar3 = plVar1[0xd];
        sVar2 = (short)plVar1[0xf];
      }
      *(undefined2 *)(lVar3 + lVar5 + 8) = 1;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while (lVar6 < sVar2);
  }
  if (((*(ushort *)((long)plVar1 + 0x8c) >> 8 & 1) != 0) && (*(int *)((long)plVar1 + 0x104) != 0)) {
    *(ushort *)((long)plVar1 + 0x8c) = *(ushort *)((long)plVar1 + 0x8c) | 8;
  }
  if (lVar4 != 0) {
    (*pcRam00000001132979a8)(lVar4);
  }
  return 0;
}



/* Entry: 108d5c4d4; end: 108d5c54f; -[EGOCipherStatement dealloc] */

void FUN_108d5c4d4(long param_1,undefined8 param_2)

{
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108d5c550;
  puStack_30 = &UNK_110ac37b0;
  func_0x00010bf9aec0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  puStack_50 = PTR_PTR_1126fe7e8;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d5c550; end: 108d5c557;  */

uint FUN_108d5c550(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      uVar3 = 0x15;
      FUN_108d64c00(0x15,&UNK_10f517ab1);
      FUN_108d64c00(0x15,&UNK_10f51b96f);
    }
    else {
      if (*(long *)(lVar2 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      func_0x000108d674fc();
      if (((uint)plVar1 == 0xc0a) || (*(char *)(lVar2 + 0x51) != '\0')) {
        FUN_108d80e10(lVar2);
        uVar3 = 7;
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0x48) & (uint)plVar1;
      }
      FUN_108d67144(lVar2);
    }
  }
  return uVar3;
}



/* Entry: 108d5c558; end: 108d5c55f; -[EGOCipherStatement stmt] */

undefined8 FUN_108d5c558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d5c560; end: 108d5c567; -[EGOCipherStatement sql] */

undefined8 FUN_108d5c560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d5c568; end: 108d5c597; -[EGOCipherStatement .cxx_destruct] */

void FUN_108d5c568(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d5c598; end: 108d5c603; +[EGOCipher databaseWithPath:key:] */

void FUN_108d5c598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c034620();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d5c604; end: 108d5c65f; -[EGOCipher statementWithSQL:] */

void FUN_108d5c604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dbe38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c009400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d5c660; end: 108d5c753; -[EGOCipher initWithPath:key:enableWAL:grapheneRegistry:egoCipherWALModeCallSite:] */

undefined1 *
FUN_108d5c660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe7f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x29) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    uVar2 = 1;
    _dispatch_semaphore_create();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d5c754; end: 108d5c763; -[EGOCipher initWithPath:key:] */

void FUN_108d5c754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c034650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPath_key_enableWAL_graph_1125eab90,param_3,param_4,0,0,0);
  return;
}



/* Entry: 108d5c764; end: 108d5c927; -[EGOCipher open] */

undefined8 FUN_108d5c764(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return 1;
  }
  iVar5 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bfad0c0();
  FUN_108d6f220();
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar3 = param_1;
  if (iVar5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c086960(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0868a0(uVar2);
    FUN_108d5eff4(uVar6,&UNK_10f516f53,uVar1,uVar2);
    if (*(char *)(param_1 + 0x29) == '\x01') {
      uVar6 = *(undefined8 *)(param_1 + 8);
      FUN_108d61210(uVar6,&UNK_10f516c88,0,0,0);
      if ((int)uVar6 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x000108d6f128(uVar6);
        func_0x00010c088a60(param_1);
        _objc_retainAutoreleasedReturnValue();
        iVar5 = (int)uVar6;
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        FUN_108d5c928(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 1;
        goto LAB_108d5c818;
      }
    }
    uVar6 = 1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    func_0x000108d6f128(uVar6);
    func_0x00010c088a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    iVar5 = (int)uVar6;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    FUN_108d5c928(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
LAB_108d5c818:
    func_0x00010b5f1358(uVar6,uVar2,(long)iVar5,uVar4);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(lVar3);
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 108d5c928; end: 108d5c94f;  */

undefined ** FUN_108d5c928(long param_1)

{
  if (param_1 - 1U < 9) {
    return (undefined **)(&PTR_PTR_110ac37d0)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd32f8;
}



/* Entry: 108d5c950; end: 108d5c983; -[EGOCipher close] */

void FUN_108d5c950(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108d6dcfc(*(long *)(param_1 + 8),0);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 108d5c984; end: 108d5ca2f; -[EGOCipher attemptToOpenAndRead] */

undefined8 FUN_108d5c984(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c0e8e20();
  if ((int)lVar1 == 0) {
    return 0;
  }
  lVar1 = param_1;
  func_0x00010c252980(param_1,param_2,&PTR____CFConstantStringClassReference_110ef7bb8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c088a60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010bf9afc0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = 1;
      goto LAB_108d5ca14;
    }
    func_0x00010c088a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  uVar3 = 0;
LAB_108d5ca14:
  _objc_release();
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 108d5ca30; end: 108d5ca93; -[EGOCipher rekeyWithNewKey:] */

undefined8 FUN_108d5ca30(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lStack_58;
  
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c086960();
  lVar3 = param_3;
  func_0x00010c0868a0();
  _objc_release(param_3);
  if (lVar7 == 0) {
    return 1;
  }
  if (lVar4 == 0) {
    return 1;
  }
  if ((int)lVar3 == 0) {
    return 1;
  }
  lVar5 = lVar7;
  func_0x000108d5f054(lVar7,&UNK_10f516f53);
  plVar10 = (long *)(*(long *)(lVar7 + 0x20) + (long)(int)lVar5 * 0x20 + 8);
  if (*plVar10 == 0) {
    return 0;
  }
  lVar8 = **(long **)(*plVar10 + 8);
  lVar11 = *(long *)(lVar8 + 0x120);
  if (lVar11 == 0) {
    return 0;
  }
  lVar6 = lVar11;
  if (*(long *)(lVar7 + 0x18) == 0) {
LAB_108d5f50c:
    lVar6 = *(long *)(lVar6 + 0x30);
    lVar5 = lVar6;
    func_0x000108d609d8(lVar6,lVar4,lVar3);
    if ((int)lVar5 == 0) {
      *(undefined4 *)(lVar6 + 4) = 1;
    }
  }
  else {
    (*pcRam0000000113297998)();
    lVar5 = *(long *)(*(long *)(lVar7 + 0x20) + (long)(int)lVar5 * 0x20 + 8);
    if ((lVar5 != 0) && (lVar6 = *(long *)(**(long **)(lVar5 + 8) + 0x120), lVar6 != 0))
    goto LAB_108d5f50c;
  }
  lVar4 = *plVar10;
  FUN_108d5f618(lVar4,1);
  uVar1 = *(uint *)(lVar8 + 0x1c);
  if ((int)lVar4 == 0 && uVar1 != 0) {
    uVar9 = 1;
    do {
      iVar2 = 0;
      if (*(int *)(lVar8 + 0xbc) != 0) {
        iVar2 = iRam0000000113298da4 / *(int *)(lVar8 + 0xbc);
      }
      if (uVar9 != iVar2 + 1U) {
        lVar3 = lVar8;
        FUN_108d5fcfc(lVar8,uVar9,&lStack_58,0);
        lVar4 = lStack_58;
        if (((int)lVar3 != 0) || (lVar3 = lStack_58, FUN_108d5ffdc(), (int)lVar3 != 0))
        goto LAB_108d5f54c;
        if (lVar4 != 0) {
          func_0x000108d787d8(lVar4);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 <= uVar1);
  }
  else if ((int)lVar4 != 0) {
LAB_108d5f54c:
    FUN_108d6007c(*plVar10,0x204,0);
    goto LAB_108d5f5d0;
  }
  FUN_108d5fff4(*plVar10);
  FUN_108d60a40(*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(lVar11 + 0x30));
LAB_108d5f5d0:
  if (*(long *)(lVar7 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return 0;
}



/* Entry: 108d5ca94; end: 108d5caef; -[EGOCipher execute:] */

void FUN_108d5ca94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0);
  lVar1 = param_1;
  func_0x00010c0e8e20();
  if ((int)lVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 8));
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d5caf0; end: 108d5caf7; -[EGOCipher executeUpdate:] */

void FUN_108d5caf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_executeUpdate_parameters__1125c45c8,param_3,0);
  return;
}



/* Entry: 108d5caf8; end: 108d5cbbb; -[EGOCipher executeUpdate:parameters:] */

bool FUN_108d5caf8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0);
  uVar2 = param_1;
  func_0x00010c0e8e20();
  if ((uVar2 & 1) != 0) {
    uVar3 = param_3;
    func_0x00010c255760(param_3);
    uVar2 = param_1;
    func_0x00010bf1a3c0();
    if ((uVar2 & 1) != 0) {
      FUN_108d681c0(uVar3);
      func_0x00010c138140(param_3);
      _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
      bVar1 = (int)uVar3 == 0x65;
      goto LAB_108d5cb98;
    }
    func_0x00010c138140(param_3);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
  bVar1 = false;
LAB_108d5cb98:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108d5cbbc; end: 108d5cbd3; -[EGOCipher lastInsertRowId] */

undefined8 FUN_108d5cbbc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 8) + 0x30);
  }
  return 0;
}



/* Entry: 108d5cbd4; end: 108d5cbdb; -[EGOCipher executeQuery:] */

void FUN_108d5cbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_executeQuery_parameters__1125c45a8,param_3,0)
  ;
  return;
}



/* Entry: 108d5cbdc; end: 108d5d047; -[EGOCipher executeQuery:parameters:] */

void FUN_108d5cbdc(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _dispatch_semaphore_wait(*(undefined8 *)(param_2 + 0x10),0);
  puVar3 = PTR_PTR_1126dbe40;
  _objc_alloc_init(PTR_PTR_1126dbe40);
  uVar4 = param_2;
  func_0x00010c0e8e20();
  if ((uVar4 & 1) != 0) {
    lVar5 = param_4;
    func_0x00010c255760();
    uVar4 = param_2;
    func_0x00010bf1a3c0();
    if ((uVar4 & 1) != 0) {
      if (lVar5 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (uint)*(ushort *)(lVar5 + 0x88);
      }
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      if (uVar14 != 0) {
        uVar13 = 0;
        do {
          lVar8 = lVar5;
          FUN_108d6939c(lVar5,uVar13);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar8 == 0) {
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            FUN_108d6939c(lVar5,uVar13);
            func_0x00010c25da80(puVar9);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010befa120(puVar6);
          _objc_release(puVar9);
          lVar8 = lVar5;
          func_0x000108d694cc(lVar5,uVar13);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar8 == 0) {
            func_0x00010befa120(puVar7);
          }
          else {
            func_0x000108d694cc(lVar5,uVar13);
            func_0x00010c25da80(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar7);
            _objc_release(puVar9);
          }
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
      }
      func_0x00010c17eba0(puVar3);
      func_0x00010c17ebc0(puVar3);
      func_0x00010c17ebe0(puVar3);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      lVar8 = lVar5;
      FUN_108d681c0();
      iVar2 = (int)lVar8;
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      while (PTR__OBJC_CLASS___NSMutableArray_1126ae5d8 = puVar9, iVar2 == 100) {
        _objc_alloc_init(puVar9);
        if (uVar14 != 0) {
          uVar13 = 0;
          do {
            lVar8 = lVar5;
            func_0x000108d69068(lVar5,uVar13);
            cVar1 = (&UNK_10dfa06fd)[(ulong)*(ushort *)(lVar8 + 8) & 0x1f];
            func_0x000108d6912c(lVar5);
            puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if (cVar1 == '\x01') {
              func_0x000108d69068(lVar5,uVar13);
              func_0x000108d6797c();
              func_0x000108d6912c(lVar5);
              func_0x00010c0df7c0(puVar12);
              _objc_retainAutoreleasedReturnValue();
LAB_108d5cf34:
              func_0x00010befa120(puVar9);
              _objc_release(puVar12);
            }
            else {
              if (cVar1 == '\x02') {
                func_0x000108d69068(lVar5,uVar13);
                FUN_108d67900();
                func_0x000108d6912c(lVar5);
                func_0x00010c0df720(param_1,puVar12);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_108d5cf34;
              }
              if (cVar1 == '\x04') {
                func_0x000108d692a8(lVar5,uVar13);
                func_0x000108d69194(lVar5,uVar13);
                func_0x00010bf64a00(puVar11);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                goto LAB_108d5cf34;
              }
              lVar8 = lVar5;
              func_0x000108d692a8(lVar5,uVar13);
              puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (lVar8 != 0) {
                func_0x000108d692a8(lVar5,uVar13);
                func_0x00010c25da80(puVar12);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_108d5cf34;
              }
              func_0x00010befa120(puVar9);
            }
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        puVar12 = PTR_PTR_1126dbe48;
        _objc_alloc(PTR_PTR_1126dbe48);
        func_0x00010c0094e0();
        func_0x00010befa120(puVar10);
        _objc_release(puVar12);
        _objc_release(puVar9);
        lVar8 = lVar5;
        FUN_108d681c0();
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        iVar2 = (int)lVar8;
      }
      func_0x00010c1eeb80(puVar3);
      func_0x00010c138140(param_4);
      _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x10));
      _objc_retain(puVar3);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar6);
      goto LAB_108d5d008;
    }
    func_0x00010c138140(param_4);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x10));
  _objc_retain(puVar3);
LAB_108d5d008:
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d5d048; end: 108d5d097; -[EGOCipher lastErrorMessage] */

void FUN_108d5d048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x00010bfcfdc0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    FUN_108d6ba4c(uVar3);
    func_0x00010c25da80(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d5d098; end: 108d5d0b3; -[EGOCipher hadError] */

bool FUN_108d5d098(int param_1)

{
  func_0x00010c088a40();
  return param_1 != 0;
}



/* Entry: 108d5d0b4; end: 108d5d0bb; -[EGOCipher lastErrorCode] */

uint FUN_108d5d0b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_108d6ef54();
    if ((int)lVar2 == 0) {
      FUN_108d64c00(0x15,&UNK_10f51b96f);
      return 0x15;
    }
    if (*(char *)(lVar1 + 0x51) == '\0') {
      return *(uint *)(lVar1 + 0x48) & *(uint *)(lVar1 + 0x44);
    }
  }
  return 7;
}



/* Entry: 108d5d0bc; end: 108d5d217; -[EGOCipher bindStatement:toParameters:] */

char * FUN_108d5d0bc(undefined8 param_1,undefined8 param_2,char *param_3,undefined1 *param_4,
                    long *param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  char acStack_130 [16];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  pcVar6 = acStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_3;
  puVar10 = param_4;
  _objc_retain(param_4);
  if (param_3 == (char *)0x0) {
    iVar8 = 0;
    iVar7 = 0;
    if (param_4 != (undefined1 *)0x0) goto LAB_108d5d10c;
LAB_108d5d1b4:
    iVar8 = iVar7;
    iVar7 = 0;
  }
  else {
    iVar8 = (int)*(short *)(param_3 + 0x78);
    iVar7 = iVar8;
    if (param_4 == (undefined1 *)0x0) goto LAB_108d5d1b4;
LAB_108d5d10c:
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    acStack_130[8] = '\0';
    acStack_130[9] = '\0';
    acStack_130[10] = '\0';
    acStack_130[0xb] = '\0';
    acStack_130[0xc] = '\0';
    acStack_130[0xd] = '\0';
    acStack_130[0xe] = '\0';
    acStack_130[0xf] = '\0';
    acStack_130[0] = '\0';
    acStack_130[1] = '\0';
    acStack_130[2] = '\0';
    acStack_130[3] = '\0';
    acStack_130[4] = '\0';
    acStack_130[5] = '\0';
    acStack_130[6] = '\0';
    acStack_130[7] = '\0';
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    puVar10 = auStack_e8;
    param_5 = (long *)0x10;
    puVar1 = param_4;
    func_0x00010bf52a60();
    if (puVar1 == (undefined1 *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          iVar7 = iVar7 + 1;
          func_0x00010bf1a2e0(param_1);
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        puVar10 = auStack_e8;
        param_5 = (long *)0x10;
        puVar1 = param_4;
        pcVar6 = acStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    pcVar5 = pcVar6;
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (char *)(ulong)(iVar7 == iVar8);
  }
  ___stack_chk_fail();
  _objc_retain(pcVar5);
  if (pcVar5 != (char *)0x0) {
    pcVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pcVar5 != pcVar6) {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      pcVar6 = pcVar5;
      _objc_opt_isKindOfClass(pcVar5,puVar2);
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar6 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bf25f00();
        pcVar4 = pcVar5;
        func_0x00010c08fa60(pcVar5);
        FUN_108d69604(param_5,puVar10,pcVar6,pcVar4,0xffffffffffffffff,0);
        goto LAB_108d5d440;
      }
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      pcVar6 = pcVar5;
      _objc_opt_isKindOfClass(pcVar5,puVar2);
      if (((ulong)pcVar6 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        pcVar6 = pcVar5;
        _objc_opt_isKindOfClass(pcVar5,puVar2);
        if (((ulong)pcVar6 & 1) == 0) {
LAB_108d5d3d4:
          pcVar6 = pcVar5;
          func_0x00010bf6e340(pcVar5);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar6;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          FUN_108d69604(param_5,puVar10,pcVar4,0xffffffff,0xffffffffffffffff,1);
          _objc_release(pcVar6);
          goto LAB_108d5d440;
        }
        pcVar6 = pcVar5;
        _objc_retainAutorelease();
        func_0x00010c0dfba0();
        if ((*pcVar6 == 'B') && (pcVar6[1] == '\0')) {
          pcVar6 = pcVar5;
          func_0x00010bf1f3c0(pcVar5);
          pcVar6 = (char *)((ulong)pcVar6 & 0xffffffff);
        }
        else {
          pcVar6 = pcVar5;
          _objc_retainAutorelease();
          func_0x00010c0dfba0();
          if ((*pcVar6 != 'i') || (pcVar6[1] != '\0')) {
            pcVar6 = pcVar5;
            _objc_retainAutorelease();
            func_0x00010c0dfba0();
            if ((*pcVar6 != 'q') || (pcVar6[1] != '\0')) {
              pcVar6 = pcVar5;
              _objc_retainAutorelease();
              func_0x00010c0dfba0();
              if ((*pcVar6 == 'f') && (pcVar6[1] == '\0')) {
                func_0x00010bfb2c80(pcVar5);
              }
              else {
                pcVar6 = pcVar5;
                _objc_retainAutorelease();
                func_0x00010c0dfba0();
                if ((*pcVar6 != 'd') || (pcVar6[1] != '\0')) goto LAB_108d5d3d4;
                func_0x00010bf885a0(pcVar5);
              }
              goto LAB_108d5d308;
            }
          }
          pcVar6 = pcVar5;
          func_0x00010c0b4fe0(pcVar5);
        }
        FUN_108d69a48(param_5,puVar10,pcVar6);
      }
      else {
        func_0x00010c26f320(pcVar5);
LAB_108d5d308:
        FUN_108d6978c(param_5,puVar10);
      }
      goto LAB_108d5d440;
    }
  }
  plVar3 = param_5;
  FUN_108d69800(param_5,puVar10);
  if (((int)plVar3 == 0) && (*(long *)(*param_5 + 0x18) != 0)) {
    (*pcRam00000001132979a8)();
  }
LAB_108d5d440:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return pcVar5;
}



/* Entry: 108d5d218; end: 108d5d46f; -[EGOCipher bindObject:toColumn:inStatement:] */

void FUN_108d5d218(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_3);
  if (param_3 != (char *)0x0) {
    pcVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 != pcVar4) {
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      pcVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bf25f00();
        pcVar3 = param_3;
        func_0x00010c08fa60(param_3);
        FUN_108d69604(param_5,param_4,pcVar4,pcVar3,0xffffffffffffffff,0);
        goto LAB_108d5d440;
      }
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      pcVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if (((ulong)pcVar4 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        pcVar4 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar1);
        if (((ulong)pcVar4 & 1) == 0) {
LAB_108d5d3d4:
          pcVar4 = param_3;
          func_0x00010bf6e340(param_3);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar4;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          FUN_108d69604(param_5,param_4,pcVar3,0xffffffff,0xffffffffffffffff,1);
          _objc_release(pcVar4);
          goto LAB_108d5d440;
        }
        pcVar4 = param_3;
        _objc_retainAutorelease();
        func_0x00010c0dfba0();
        if ((*pcVar4 == 'B') && (pcVar4[1] == '\0')) {
          pcVar4 = param_3;
          func_0x00010bf1f3c0(param_3);
          pcVar4 = (char *)((ulong)pcVar4 & 0xffffffff);
        }
        else {
          pcVar4 = param_3;
          _objc_retainAutorelease();
          func_0x00010c0dfba0();
          if ((*pcVar4 != 'i') || (pcVar4[1] != '\0')) {
            pcVar4 = param_3;
            _objc_retainAutorelease();
            func_0x00010c0dfba0();
            if ((*pcVar4 != 'q') || (pcVar4[1] != '\0')) {
              pcVar4 = param_3;
              _objc_retainAutorelease();
              func_0x00010c0dfba0();
              if ((*pcVar4 == 'f') && (pcVar4[1] == '\0')) {
                func_0x00010bfb2c80(param_3);
              }
              else {
                pcVar4 = param_3;
                _objc_retainAutorelease();
                func_0x00010c0dfba0();
                if ((*pcVar4 != 'd') || (pcVar4[1] != '\0')) goto LAB_108d5d3d4;
                func_0x00010bf885a0(param_3);
              }
              goto LAB_108d5d308;
            }
          }
          pcVar4 = param_3;
          func_0x00010c0b4fe0(param_3);
        }
        FUN_108d69a48(param_5,param_4,pcVar4);
      }
      else {
        func_0x00010c26f320(param_3);
LAB_108d5d308:
        FUN_108d6978c(param_5,param_4);
      }
      goto LAB_108d5d440;
    }
  }
  plVar2 = param_5;
  FUN_108d69800(param_5,param_4);
  if (((int)plVar2 == 0) && (*(long *)(*param_5 + 0x18) != 0)) {
    (*pcRam00000001132979a8)();
  }
LAB_108d5d440:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d5d470; end: 108d5d4b3; -[EGOCipher dealloc] */

void FUN_108d5d470(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3d9e0();
  puStack_28 = PTR_PTR_1126fe7f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d5d4b4; end: 108d5d4ef; -[EGOCipher .cxx_destruct] */

void FUN_108d5d4b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108d5d4f0; end: 108d5d59f; -[EGOCipherManagedKey initWithData:] */

undefined1 * FUN_108d5d4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fe7f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retainAutorelease(param_3);
    func_0x00010bf25f00();
    func_0x00010c08fa60(param_3);
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d5d5a0; end: 108d5d6bf; -[EGOCipherManagedKey initWithHexString:] */

ulong * FUN_108d5d5a0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0x40) {
    uVar6 = param_1;
    func_0x00010c074c00();
    if ((uVar6 & 1) != 0) {
      puStack_38 = PTR_PTR_1126fe7f8;
      puVar5 = &uStack_40;
      uStack_40 = param_1;
      _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
      if (puVar5 != (ulong *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf64920();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = puVar5[1];
        puVar5[1] = (ulong)puVar2;
        _objc_release(uVar6);
        _objc_release(puVar3);
      }
      _objc_release(param_3);
      return puVar5;
    }
    puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
    _objc_alloc();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
    _objc_alloc();
  }
  func_0x00010c02da20();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00010c08fa60();
  uVar4 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c25eac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (ulong *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 108d5d6c0; end: 108d5d72f; -[EGOCipherManagedKey first4BytesString] */

void FUN_108d5d6c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c08fa60();
  if (3 < uVar1) {
    uVar1 = 4;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25eac0(uVar2,param_2,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d5d730; end: 108d5d737; -[EGOCipherManagedKey keyPointer] */

void FUN_108d5d730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf25f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_bytes_1125a7168);
  return;
}



/* Entry: 108d5d738; end: 108d5d74f; -[EGOCipherManagedKey keyLength] */

void FUN_108d5d738(long param_1)

{
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 108d5d750; end: 108d5d7e7; -[EGOCipherManagedKey isHexString:] */

bool FUN_108d5d750(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010bf35a20(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7d78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = param_3;
  func_0x00010c11f340(param_3,param_2,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  return lVar3 == 0x7fffffffffffffff;
}



/* Entry: 108d5d7e8; end: 108d5d7f3; -[EGOCipherManagedKey .cxx_destruct] */

void FUN_108d5d7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d5d7f4; end: 108d5d83f; -[EGOCipherResult rowAtIndex:] */

void FUN_108d5d7f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d5d840; end: 108d5d883; -[EGOCipherResult firstRow] */

void FUN_108d5d840(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d5d884; end: 108d5d8c7; -[EGOCipherResult lastRow] */

void FUN_108d5d884(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d5d8c8; end: 108d5d903; -[EGOCipherResult count] */

undefined8 FUN_108d5d8c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108d5d904; end: 108d5d95f; -[EGOCipherResult countByEnumeratingWithState:objects:count:] */

undefined8 FUN_108d5d904(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52a60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108d5d960; end: 108d5d967; -[EGOCipherResult errorCode] */

undefined4 FUN_108d5d960(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108d5d968; end: 108d5d96f; -[EGOCipherResult setErrorCode:] */

void FUN_108d5d968(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108d5d970; end: 108d5d977; -[EGOCipherResult errorMessage] */

undefined8 FUN_108d5d970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d5d978; end: 108d5d97f; -[EGOCipherResult setErrorMessage:] */

void FUN_108d5d978(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d5d980; end: 108d5d987; -[EGOCipherResult columnCount] */

undefined4 FUN_108d5d980(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108d5d988; end: 108d5d98f; -[EGOCipherResult setColumnCount:] */

void FUN_108d5d988(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108d5d990; end: 108d5d997; -[EGOCipherResult columnNames] */

undefined8 FUN_108d5d990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


