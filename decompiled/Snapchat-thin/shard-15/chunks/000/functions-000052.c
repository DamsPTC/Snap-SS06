/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7c5e38; end: 10b7c5e7f;  */

void FUN_10b7c5e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c5e80; end: 10b7c5e8f;  */

void FUN_10b7c5e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObjectsForKeys_block__112628f50,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b7c5e90; end: 10b7c5efb; -[SCMemoryCache removeObjectsForKeys:block:] */

void FUN_10b7c5e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c086a20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8cac0(param_1,param_2,uVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c5efc; end: 10b7c5f93; -[SCMemoryCache removeObjectForKey:block:] */

void FUN_10b7c5efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c086580(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be0b980(param_1,param_2,param_4,param_3,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c5f94; end: 10b7c5fdf; -[SCMemoryCache contains:] */

undefined8 FUN_10b7c5f94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c086580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b920(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b7c5fe0; end: 10b7c60ab; -[SCMemoryCache contains:block:] */

void FUN_10b7c5fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c086580(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b920(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b7c60ac;
  puStack_48 = &UNK_11084a9b8;
  uStack_38 = (undefined1)uVar2;
  uStack_40 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7c60ac; end: 10b7c60bf;  */

void FUN_10b7c60ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b7c60bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b7c60c0; end: 10b7c615b; -[SCMemoryCache syncSetObject:dataEncoding:forKey:expiration:] */

undefined8
FUN_10b7c60c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf528e0(param_1,param_2,param_3,param_4);
  func_0x00010bec9ce0(param_1,param_2,param_3,uVar1,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7c615c; end: 10b7c616b; -[SCMemoryCache syncGetObjectForKey:dataDecoding:] */

void FUN_10b7c615c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_syncGetObjectForKey_dataDecoding_112677220,param_3,param_4,0,1);
  return;
}



/* Entry: 10b7c616c; end: 10b7c6173; -[SCMemoryCache syncGetObjectForKey:dataDecoding:resetExpiration:whenLessThanDelta:] */

void FUN_10b7c616c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_syncGetObjectForKey_dataDecoding_112677220);
  return;
}



/* Entry: 10b7c6174; end: 10b7c62f3; -[SCMemoryCache syncGetObjectForKey:dataDecoding:resetExpiration:whenLessThanDelta:returnExpired:] */

void FUN_10b7c6174(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_10b7c62f4;
    uStack_60 = 0x10b7c6304;
    uStack_58 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_78[5];
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7c62f4; end: 10b7c630b;  */

void FUN_10b7c62f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b7c630c; end: 10b7c635b;  */

void FUN_10b7c630c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4fa60(*(undefined8 *)(param_1 + 0x48),uVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),
                      *(undefined1 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b7c635c; end: 10b7c6417; -[SCMemoryCache costForObject:dataEncoding:] */

ulong FUN_10b7c635c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
  }
  else {
    uVar1 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  if (uVar1 == 0) {
    uVar3 = param_3;
    _malloc_size(param_3);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c08fa60(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10b7c6418; end: 10b7c648b; -[SCMemoryCache costForObject:dataCost:] */

long FUN_10b7c6418(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) ||
     (lVar1 = param_4, (**(code **)(param_4 + 0x10))(param_4,param_3), lVar1 == 0)) {
    lVar1 = param_3;
    _malloc_size(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10b7c648c; end: 10b7c65bf; -[SCMemoryCache _executeCompletionBlock:withKey:object:] */

void FUN_10b7c648c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c65c0; end: 10b7c6603;  */

void FUN_10b7c65c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),lVar1,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c6604; end: 10b7c66df; -[SCMemoryCache _executeCompletionBlock:] */

void FUN_10b7c6604(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c66e0; end: 10b7c671f;  */

void FUN_10b7c66e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c6720; end: 10b7c6813; -[SCMemoryCache _updateExpiration:forKey:] */

void FUN_10b7c6720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e13f8;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1b6b40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b7000(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c198b80(puVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c086580(uVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c287c40(uVar4,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c6814; end: 10b7c6903; -[SCMemoryCache _removeObjectsForCombinedKeys:block:] */

void FUN_10b7c6814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c12d4e0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c6904; end: 10b7c693f;  */

void FUN_10b7c6904(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be0b960(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c6940; end: 10b7c6adf; -[SCMemoryCache _setObject:cost:forKey:expiration:block:] */

void FUN_10b7c6940(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (param_5 != 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(param_3);
      uStack_60 = param_4;
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_7);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      goto LAB_10b7c6a88;
    }
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = 0;
  }
  (*pcVar2)(param_7,param_1,lVar1,0);
LAB_10b7c6a88:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c6ae0; end: 10b7c6b33;  */

void FUN_10b7c6ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be4fac0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
    func_0x00010be0b980(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c6b34; end: 10b7c6c83; -[SCMemoryCache _syncSetObject:cost:forKey:expiration:] */

byte FUN_10b7c6b34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  bVar1 = 0;
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  if ((param_3 != 0) && (param_5 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f8240(uVar2);
    bVar1 = *(byte *)(puStack_58 + 3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 10b7c6c84; end: 10b7c6cbf;  */

void FUN_10b7c6c84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4fac0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 10b7c6cc0; end: 10b7c6e5b; -[SCMemoryCache _locked_setObject:cost:forKey:expiration:] */

undefined8
FUN_10b7c6cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  uVar6 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0824e0();
  if ((uVar6 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c27f3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c27f3c0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0870c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1,0);
      _objc_release(lVar1);
      _objc_release(lVar2);
    }
  }
  puVar3 = PTR_PTR_1126e13f8;
  _objc_alloc_init(PTR_PTR_1126e13f8);
  func_0x00010c1b6b40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b7000(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c198b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c086580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1d05a0(uVar7);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_6);
  return uVar7;
}



/* Entry: 10b7c6e5c; end: 10b7c6fb3; -[SCMemoryCache _locked_objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:returnExpired:] */

void FUN_10b7c6e5c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  long lStack_68;
  
  dVar5 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar4 = *(long *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c086580(uVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  func_0x00010c0e0040(lVar4,param_3,uVar2,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  _objc_release(uVar2);
  if (lVar4 == 0 || lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010bf9c720(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(lVar3);
    if ((param_6 != 0) || (0.0 <= dVar5)) {
      if ((param_6 != 0) && (dVar5 < param_1)) {
        func_0x00010bed7aa0(param_2,param_3,param_6,param_4);
      }
    }
    else if ((param_7 & 1) == 0) {
      _objc_release(lVar4);
      lVar4 = 0;
    }
    _objc_retain(lVar4);
    lVar3 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b7c6fb4; end: 10b7c6fbb; -[SCMemoryCache kindName] */

undefined8 FUN_10b7c6fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7c6fbc; end: 10b7c6fc3; -[SCMemoryCache underExperiment] */

undefined1 FUN_10b7c6fbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 10b7c6fc4; end: 10b7c6fcb; -[SCMemoryCache setUnderExperiment:] */

void FUN_10b7c6fc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b7c6fcc; end: 10b7c702b; -[SCMemoryCache .cxx_destruct] */

void FUN_10b7c6fcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7c702c; end: 10b7c718b; -[SCMemoryCacheKeyGenerator keySet:] */

undefined * FUN_10b7c702c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_1;
        func_0x00010c086580(param_1,param_2,*(undefined8 *)(lStack_118 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 8);
}



/* Entry: 10b7c718c; end: 10b7c7193; -[SCMemoryCacheKeyGenerator combinedKeyPrefix] */

undefined8 FUN_10b7c718c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7c7194; end: 10b7c719f; -[SCMemoryCacheKeyGenerator .cxx_destruct] */

void FUN_10b7c7194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7c71a0; end: 10b7c7217; -[SCNFileManagerGetResult initWithData:] */

undefined1 * FUN_10b7c71a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270af38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c7218; end: 10b7c725f; -[SCNFileManagerGetResult initWithError:] */

void FUN_10b7c7218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270af38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 10b7c7260; end: 10b7c7267; -[SCNFileManagerGetResult getError] */

undefined8 FUN_10b7c7260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7c7268; end: 10b7c728f; -[SCNFileManagerGetResult getData] */

void FUN_10b7c7268(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7c7290; end: 10b7c729b; -[SCNFileManagerGetResult getDataRef] */

void FUN_10b7c7290(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_data_1125b6738);
  return;
}



/* Entry: 10b7c729c; end: 10b7c72a7; -[SCNFileManagerGetResult .cxx_destruct] */

void FUN_10b7c729c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7c72a8; end: 10b7c741f; -[SCStorageEventHandler initWithTimeProviding:preferences:blizzard:circumstanceEngine:backgroundTaskWrapper:cmCacheController:] */

undefined1 *
FUN_10b7c72a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270af40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = 0xffefffffffffffff;
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
    puVar3 = PTR_PTR_1126e06d0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c7420; end: 10b7c7613; -[SCStorageEventHandler performStorageBackgroundedManagement:] */

void FUN_10b7c7420(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17d00();
  _objc_release(uVar1);
  uVar6 = param_3;
  func_0x00010c06e0e0();
  if ((uVar6 & 1) == 0) {
    FUN_10bcb6b14();
  }
  uVar6 = param_3;
  func_0x00010c06e0e0();
  if ((uVar6 & 1) == 0) {
    puVar3 = PTR_PTR_1126c3448;
    func_0x00010c22b6a0(PTR_PTR_1126c3448);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3bba0();
    _objc_release(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10b7c377c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149940();
  func_0x00010c0c3e80(uVar1);
  uVar6 = param_1;
  func_0x00010be8f6c0();
  func_0x00010bf7f8e0(uVar1);
  func_0x00010c0c3e80(uVar1);
  uVar4 = param_1;
  func_0x00010be8f6c0();
  if ((((uVar6 & 1) == 0) && ((int)uVar4 == 0)) ||
     (uVar5 = param_3, func_0x00010c06e0e0(), (uVar5 & 1) != 0)) {
    uVar6 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
  }
  else {
    uVar7 = 0;
    _dispatch_time(0,2000000000);
    uVar8 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10b7c7614;
    puStack_78 = &UNK_1108e75e8;
    _objc_retain(param_3);
    uStack_58 = (undefined1)uVar6;
    uStack_57 = (undefined1)uVar4;
    uStack_70 = param_3;
    uStack_68 = param_1;
    uStack_60 = uVar2;
    func_0x000107c27d84(uVar7,uVar8,&puStack_90);
    _objc_release(uVar8);
    uVar6 = uStack_70;
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c7614; end: 10b7c76f3;  */

void FUN_10b7c7614(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf5e680(*(undefined8 *)(*(long *)(param_2 + 0x28) + 8));
    *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x40) = param_1;
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 8);
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
    func_0x00010bf5e5e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010be8f6a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    _dispatch_time(0,10000000000);
    _dispatch_group_wait(uVar3,uVar2);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b7c76f4; end: 10b7c77c3; -[SCStorageEventHandler _reportDiskUsageForSamplingRate:measureFrequencyInHours:] */

bool FUN_10b7c76f4(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  dVar5 = (double)param_3;
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010c232700();
  if ((int)puVar2 != 0) {
    func_0x00010bf5e680(*(undefined8 *)(param_1 + 8));
    dVar5 = dVar5 - *(double *)(param_1 + 0x40);
    if ((double)(uint)(param_4 * 0xe10) <= dVar5) {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c0dff20(lVar3,param_2,&PTR____CFConstantStringClassReference_110f83118);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        bVar1 = true;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf5e5e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        bVar1 = (double)(uint)(param_4 * 0xe10) <= dVar5;
        _objc_release(uVar4);
      }
      _objc_release(lVar3);
      return bVar1;
    }
  }
  return false;
}



/* Entry: 10b7c77c4; end: 10b7c787f; -[SCStorageEventHandler _getCacheMetrics] */

void FUN_10b7c77c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126c3448;
  func_0x00010c22b6a0(PTR_PTR_1126c3448);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b7c7880;
  puStack_30 = &UNK_110881940;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf6fbe0(puVar2,param_2,&puStack_48);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7c7880; end: 10b7c788b;  */

void FUN_10b7c7880(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10b7c788c; end: 10b7c7973; -[SCStorageEventHandler _getDiskUsageWithCancelationToken:] */

void FUN_10b7c788c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b7c7974;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar2,&puStack_60);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7c7974; end: 10b7c79bb;  */

void FUN_10b7c7974(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1448;
  func_0x00010c14e840(PTR_PTR_1126e1448,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7c79bc; end: 10b7c79eb; -[SCStorageEventHandler _setGrapheneLoggerForTesting:] */

void FUN_10b7c79bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b7c79ec; end: 10b7c7be3; -[SCStorageEventHandler _reportDiskUsage:reportTotalDiskUsage:reportDirectoryDiskUsage:] */

void FUN_10b7c79ec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  lVar1 = param_1;
  func_0x00010be1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be1eaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar1;
  lStack_70 = lVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10b7c7be4;
  puStack_a0 = &UNK_110d61088;
  uStack_98 = param_3;
  lStack_90 = param_1;
  uStack_80 = param_4;
  uStack_7f = param_5;
  _objc_retain(uVar10);
  puVar5 = PTR_PTR_1126ae790;
  uStack_88 = uVar10;
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_b8;
  func_0x00010c297260(puVar4);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar7 = uStack_88;
  _objc_retain(uVar10);
  _objc_release(uVar7);
  _objc_release(uStack_98);
  _objc_release(uVar10);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (ppuVar8 == (undefined **)0x0) {
    uVar6 = *(ulong *)(lVar1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar6 & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar1 + 0x28);
      uVar7 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8f6e0(uVar9);
      _objc_release(uVar10);
      _objc_release(uVar7);
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      uVar7 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8fa20(uVar10);
      _objc_release(uVar7);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7c7be4; end: 10b7c7cc7;  */

void FUN_10b7c7be4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8f6e0(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8fa20(uVar4);
      _objc_release(uVar2);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7c7cc8; end: 10b7c8123; -[SCStorageEventHandler _reportDiskUsageToBlizzardWithCacheMetrics:diskUsage:reportTotalDiskUsage:reportDirectoryDiskUsage:] */

void FUN_10b7c7cc8(long param_1,undefined8 param_2,long param_3,undefined *param_4,int param_5,
                  int param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010c1416e0(param_4);
  func_0x00010bde8fa0();
  if (param_5 != 0) {
    puVar3 = PTR_PTR_1126e1450;
    _objc_alloc_init();
    func_0x00010c141640(param_4);
    func_0x00010c20c020(puVar3);
    func_0x00010c20c160(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0b29e0();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  if (param_6 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010bf97e00(param_4);
    _objc_retain(puVar3);
    func_0x00010be0ac40(param_1);
    lVar5 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfc4ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_retain(lVar6);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar4 = *(undefined8 *)(lVar13 * 8);
        lVar7 = lVar6;
        func_0x00010c0e00e0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0(uVar4);
        lVar8 = (long)(int)uVar4;
        func_0x00010b7f519c(lVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = &PTR____CFConstantStringClassReference_110f831d8;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        puVar2 = PTR_PTR_1126e1458;
        _objc_alloc_init(PTR_PTR_1126e1458);
        ppuVar10 = ppuVar9;
        func_0x00010c25ce40(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9820(puVar2);
        _objc_release(ppuVar10);
        func_0x00010bf10e40(lVar7);
        func_0x00010bde8fa0(param_1);
        func_0x00010c1e91a0(puVar2);
        func_0x00010bf10e40(lVar7);
        func_0x00010bde8fa0(param_1);
        func_0x00010c1cda60(puVar2);
        func_0x00010befa120(puVar3);
        puVar11 = PTR_PTR_1126e1458;
        _objc_alloc_init(PTR_PTR_1126e1458);
        func_0x00010c1d9820();
        func_0x00010c0daaa0(lVar7);
        func_0x00010bde8fa0(param_1);
        func_0x00010c1e91a0(puVar11);
        func_0x00010c0daaa0(lVar7);
        func_0x00010bde8fa0(param_1);
        func_0x00010c1cda60(puVar11);
        func_0x00010befa120(puVar3);
        _objc_release(puVar11);
        _objc_release(puVar2);
        _objc_release(ppuVar9);
        _objc_release(lVar7);
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    puVar11 = PTR_PTR_1126e1460;
    _objc_alloc_init();
    func_0x00010c18e580();
    func_0x00010c2188a0(puVar11);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010c0b29e0();
    _objc_release(uVar4);
    _objc_release(puVar11);
    _objc_release(lVar6);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126e1458;
  _objc_retain(puVar2);
  _objc_retain(param_2);
  _objc_alloc_init(puVar3);
  func_0x00010bfacaa0(param_2);
  func_0x00010c1bf100(puVar3);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c09df00(param_2);
  func_0x00010bde8fa0(uVar4);
  func_0x00010c1cda60(puVar3);
  ppuVar9 = &PTR____CFConstantStringClassReference_110dacf38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dacf38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1d9820(puVar3);
  _objc_release(ppuVar9);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c124740(param_2);
  _objc_release(param_2);
  func_0x00010bde8fa0(uVar4);
  func_0x00010c1e91a0(puVar3);
  func_0x00010befa120(*(undefined8 *)(param_3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b7c8124; end: 10b7c822b;  */

void FUN_10b7c8124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e1458;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010bfacaa0(param_2);
  func_0x00010c1bf100(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09df00(param_2);
  func_0x00010bde8fa0(uVar3);
  func_0x00010c1cda60(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dacf38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dacf38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d9820(puVar1);
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c124740(param_2);
  _objc_release(param_2);
  func_0x00010bde8fa0(uVar3);
  func_0x00010c1e91a0(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7c822c; end: 10b7c8237;  */

void FUN_10b7c822c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 10b7c8238; end: 10b7c8373; -[SCStorageEventHandler _reportGrapheneDiskUsageMetric:] */

void FUN_10b7c8238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be863e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b7c8374;
  puStack_70 = &UNK_110d61118;
  uStack_68 = param_1;
  uStack_60 = uVar4;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(uVar4);
  func_0x00010bf97e00(param_3,param_2,&puStack_88);
  _objc_release(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10b7c838c;
  puStack_98 = &UNK_110d61148;
  uStack_90 = param_1;
  func_0x00010bf97ce0(puVar2,param_2,&puStack_b0);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(uVar4);
  return;
}



/* Entry: 10b7c8374; end: 10b7c838b;  */

void FUN_10b7c8374(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateDirUsageMetric_shortNam_112564590,
             *(undefined8 *)(param_1 + 0x28),param_3,*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 10b7c838c; end: 10b7c845f;  */

void FUN_10b7c838c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  FUN_10bc7e920(uVar3,param_2,uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c067fc0(uVar1);
  FUN_10bc7e7ac(uVar3,param_2,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c8460; end: 10b7c8787; -[SCStorageEventHandler _generateDirUsageMetric:shortName:dirSizeMetricObject:directory:] */

void FUN_10b7c8460(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 ****param_5,undefined8 ****param_6)

{
  undefined8 ****ppppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 ***pppuStack_208;
  undefined8 ***pppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 **ppuStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 **appuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  pppuStack_148 = param_6;
  _objc_retain(param_6);
  lStack_128 = 0;
  ppuStack_130 = (undefined8 ***)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppppuVar4 = (undefined8 ****)&ppuStack_130;
  ppppuVar1 = (undefined8 ****)appuStack_f0;
  ppppuVar6 = (undefined8 ****)param_3;
  pppuStack_138 = (undefined8 ***)param_3;
  func_0x00010bf52a60(param_3,param_2,ppppuVar4,ppppuVar1,0x10);
  if (ppppuVar6 != (undefined8 ****)0x0) {
    unaff_x26 = *plStack_120;
    uStack_160 = param_4;
    lStack_158 = unaff_x26;
    do {
      param_6 = (undefined8 ****)0x0;
      pppuStack_140 = ppppuVar6;
      do {
        unaff_x23 = &PTR____CFConstantStringClassReference_110f82e78;
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(pppuStack_138);
        }
        param_3 = *(undefined ***)(lStack_128 + (long)param_6 * 8);
        func_0x00010bf7eee0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar1 = (undefined8 ****)param_3;
        func_0x00010c071ae0();
        if ((int)ppppuVar1 != 0) {
          _objc_release(param_3);
          param_3 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f82e78,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        ppuVar2 = unaff_x23;
        func_0x00010c0720c0(unaff_x23,param_2,param_4);
        if ((int)ppuVar2 != 0) {
          ppppuVar1 = param_5;
          func_0x00010c0dff20(param_5,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppppuVar1 == (undefined8 ****)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            func_0x00010c1d0640(param_5,param_2,puVar3,unaff_x23);
            _objc_release(puVar3);
          }
          param_3 = (undefined **)param_5;
          func_0x00010c0e00e0(param_5,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppppuVar1 = (undefined8 ****)param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar4 = ppppuVar1;
          func_0x00010c282800();
          unaff_x21 = (undefined8 ****)pppuStack_148;
          ppppuVar6 = (undefined8 ****)pppuStack_148;
          func_0x00010c124740(pppuStack_148);
          lVar5 = lStack_150;
          func_0x00010bde8fa0(lStack_150,param_2,ppppuVar6);
          func_0x00010c0df880(puVar3,param_2,lVar5 + (long)ppppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_3,param_2,puVar3,
                              &PTR____CFConstantStringClassReference_110f83178);
          _objc_release(puVar3);
          _objc_release(ppppuVar1);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppppuVar1 = (undefined8 ****)param_3;
          func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83198);
          _objc_retainAutoreleasedReturnValue();
          ppppuVar4 = ppppuVar1;
          func_0x00010c067fc0();
          ppppuVar6 = unaff_x21;
          func_0x00010bfacaa0(unaff_x21);
          func_0x00010c0df840(puVar3,param_2,(long)ppppuVar6 + (long)ppppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_3,param_2,puVar3,
                              &PTR____CFConstantStringClassReference_110f83198);
          _objc_release(puVar3);
          _objc_release(ppppuVar1);
          _objc_release(param_3);
          param_4 = uStack_160;
          ppppuVar6 = (undefined8 ****)pppuStack_140;
          unaff_x26 = lStack_158;
        }
        unaff_x27 = &PTR____CFConstantStringClassReference_110f82e78;
        unaff_x22 = &PTR____CFConstantStringClassReference_110dacf38;
        _objc_release(unaff_x23);
        param_6 = (undefined8 ****)((long)param_6 + 1);
      } while (ppppuVar6 != param_6);
      ppppuVar4 = (undefined8 ****)&ppuStack_130;
      ppppuVar1 = (undefined8 ****)appuStack_f0;
      ppppuVar6 = (undefined8 ****)pppuStack_138;
      func_0x00010bf52a60(pppuStack_138,param_2,ppppuVar4,ppppuVar1,0x10);
      unaff_x25 = 0;
    } while (ppppuVar6 != (undefined8 ****)0x0);
  }
  _objc_release(pppuStack_148);
  _objc_release(param_5);
  _objc_release(param_4);
  ppppuVar6 = (undefined8 ****)pppuStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_10b7c8788;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar6 = (undefined8 ****)ppppuVar6[4];
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    pppuStack_1c0 = param_5;
    ppuStack_1b8 = unaff_x27;
    lStack_1b0 = unaff_x26;
    uStack_1a8 = unaff_x25;
    uStack_1a0 = param_4;
    ppuStack_198 = unaff_x23;
    pppuStack_190 = (undefined8 ***)unaff_x22;
    pppuStack_188 = unaff_x21;
    pppuStack_180 = param_6;
    pppuStack_178 = (undefined8 ***)param_3;
    puStack_170 = &stack0xfffffffffffffff0;
    if (ppppuVar6 != (undefined8 ****)0x0) {
      func_0x00010c1195e0(ppppuVar6,param_2,&PTR____CFConstantStringClassReference_110f83138,0,0);
      _objc_retainAutoreleasedReturnValue();
      param_3 = (undefined **)ppppuVar6;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar6);
      unaff_x21 = (undefined8 ****)PTR_PTR_1126e1410;
      _objc_alloc();
      pppuStack_200 = (undefined8 ****)0x0;
      ppppuVar1 = &pppuStack_200;
      ppppuVar4 = (undefined8 ****)param_3;
      func_0x00010c008360();
      param_6 = (undefined8 ****)pppuStack_200;
      _objc_retain(pppuStack_200);
      unaff_x22 = (undefined **)unaff_x21;
      func_0x00010bf82e40();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar6 = (undefined8 ****)unaff_x22;
      func_0x00010bfd7860();
      _objc_release(unaff_x22);
      puVar3 = PTR____NSDictionary0__struct_11034ab58;
      if ((int)ppppuVar6 != 0) {
        ppppuVar1 = unaff_x21;
        func_0x00010bf82e40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = (undefined **)ppppuVar1;
        func_0x00010bfcde80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar1);
        ppuStack_1f8 = (undefined8 **)&PTR____CFConstantStringClassReference_110f83158;
        ppppuVar6 = (undefined8 ****)unaff_x22;
        func_0x00010bf82e00();
        pppuStack_208 = (undefined8 ***)PTR____NSArray0__struct_11034ab48;
        if (ppppuVar6 != (undefined8 ****)0x0) {
          ppppuVar1 = (undefined8 ****)unaff_x22;
          func_0x00010bf82de0();
          _objc_retainAutoreleasedReturnValue();
          pppuStack_208 = ppppuVar1;
        }
        ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e6e198;
        ppppuVar7 = (undefined8 ****)unaff_x22;
        pppuStack_1e0 = pppuStack_208;
        func_0x00010bf82e00();
        ppppuVar8 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
        if (ppppuVar7 != (undefined8 ****)0x0) {
          ppppuVar8 = (undefined8 ****)unaff_x22;
          func_0x00010bf82e20();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dbf178;
        ppppuVar9 = (undefined8 ****)unaff_x22;
        pppuStack_1d8 = ppppuVar8;
        func_0x00010bf0ec80();
        ppppuVar10 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
        if (ppppuVar9 != (undefined8 ****)0x0) {
          ppppuVar10 = (undefined8 ****)unaff_x22;
          func_0x00010bf0ec60();
          _objc_retainAutoreleasedReturnValue();
        }
        ppppuVar4 = &pppuStack_1e0;
        ppppuVar1 = (undefined8 ****)&ppuStack_1f8;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        pppuStack_1d0 = ppppuVar10;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppppuVar4,ppppuVar1,3);
        _objc_retainAutoreleasedReturnValue();
        if (ppppuVar9 != (undefined8 ****)0x0) {
          _objc_release(ppppuVar10);
        }
        if (ppppuVar7 != (undefined8 ****)0x0) {
          _objc_release(ppppuVar8);
        }
        if (ppppuVar6 != (undefined8 ****)0x0) {
          _objc_release(pppuStack_208);
        }
        _objc_release(unaff_x22);
      }
      _objc_release(unaff_x21);
      _objc_release(param_6);
      ppppuVar6 = (undefined8 ****)param_3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      pcStack_218 = FUN_10b7c89f8;
      pppuStack_240 = (undefined8 ***)unaff_x22;
      pppuStack_238 = unaff_x21;
      pppuStack_230 = param_6;
      pppuStack_228 = (undefined8 ***)param_3;
      ppuStack_220 = &puStack_170;
      _objc_retain(ppppuVar1);
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      pcStack_260 = FUN_10b7c8a84;
      puStack_258 = &UNK_110d61178;
      pppuStack_250 = ppppuVar6;
      pppuStack_248 = ppppuVar1;
      _objc_retain(ppppuVar1);
      func_0x00010bf97ce0(ppppuVar4,param_2,&puStack_270);
      _objc_release(pppuStack_248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppppuVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10b7c8788; end: 10b7c89f7; -[SCStorageEventHandler _readCofDiskReportValue] */

void FUN_10b7c8788(long param_1,undefined8 param_2,undefined **param_3,undefined ***param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if (ppuVar1 != (undefined **)0x0) {
    func_0x00010c1195e0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110f83138,0,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = ppuVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    unaff_x21 = PTR_PTR_1126e1410;
    _objc_alloc();
    ppuStack_a0 = (undefined **)0x0;
    param_4 = &ppuStack_a0;
    param_3 = unaff_x19;
    func_0x00010c008360();
    unaff_x20 = ppuStack_a0;
    _objc_retain(ppuStack_a0);
    unaff_x22 = unaff_x21;
    func_0x00010bf82e40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x22;
    func_0x00010bfd7860();
    _objc_release(unaff_x22);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)puVar2 != 0) {
      puVar3 = unaff_x21;
      func_0x00010bf82e40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = puVar3;
      func_0x00010bfcde80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f83158;
      puVar2 = unaff_x22;
      func_0x00010bf82e00();
      puStack_a8 = PTR____NSArray0__struct_11034ab48;
      if (puVar2 != (undefined *)0x0) {
        puVar3 = unaff_x22;
        func_0x00010bf82de0();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = puVar3;
      }
      ppuStack_90 = &PTR____CFConstantStringClassReference_110e6e198;
      puVar4 = unaff_x22;
      puStack_80 = puStack_a8;
      func_0x00010bf82e00();
      puVar5 = PTR____NSArray0__struct_11034ab48;
      if (puVar4 != (undefined *)0x0) {
        puVar5 = unaff_x22;
        func_0x00010bf82e20();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_88 = &PTR____CFConstantStringClassReference_110dbf178;
      puVar6 = unaff_x22;
      puStack_78 = puVar5;
      func_0x00010bf0ec80();
      puVar7 = PTR____NSArray0__struct_11034ab48;
      if (puVar6 != (undefined *)0x0) {
        puVar7 = unaff_x22;
        func_0x00010bf0ec60();
        _objc_retainAutoreleasedReturnValue();
      }
      param_3 = &puStack_80;
      param_4 = &ppuStack_98;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar7;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,param_4,3);
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        _objc_release(puVar7);
      }
      if (puVar4 != (undefined *)0x0) {
        _objc_release(puVar5);
      }
      if (puVar2 != (undefined *)0x0) {
        _objc_release(puStack_a8);
      }
      _objc_release(unaff_x22);
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    ppuVar1 = unaff_x19;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_10b7c89f8;
    puStack_e0 = unaff_x22;
    puStack_d8 = unaff_x21;
    ppuStack_d0 = unaff_x20;
    ppuStack_c8 = unaff_x19;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_10b7c8a84;
    puStack_f8 = &UNK_110d61178;
    ppuStack_f0 = ppuVar1;
    pppuStack_e8 = param_4;
    _objc_retain(param_4);
    func_0x00010bf97ce0(param_3,param_2,&puStack_110);
    _objc_release(pppuStack_e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7c89f8; end: 10b7c8a83; -[SCStorageEventHandler _enumerateCacheMetrics:asComplexMetricsWithBlock:] */

void FUN_10b7c89f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b7c8a84;
  puStack_48 = &UNK_110d61178;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf97ce0(param_3,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b7c8a84; end: 10b7c8bcf;  */

void FUN_10b7c8a84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf885a0(lVar1);
    func_0x00010bde9260(uVar5);
    puVar3 = PTR_PTR_1126e1458;
    _objc_alloc_init(PTR_PTR_1126e1458);
    func_0x00010c2827c0(lVar2);
    func_0x00010c1bf100(puVar3);
    func_0x00010c1cda60(puVar3);
    ppuVar4 = &PTR____CFConstantStringClassReference_110f83218;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f83218);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820(puVar3);
    _objc_release(ppuVar4);
    func_0x00010c1e91a0(puVar3);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7c8bd0; end: 10b7c8be7; -[SCStorageEventHandler _convertByteToKB:] */

long FUN_10b7c8bd0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (long)((double)param_3 / 1000.0);
}



/* Entry: 10b7c8be8; end: 10b7c8bfb; -[SCStorageEventHandler _convertMiBToKB:] */

long FUN_10b7c8be8(double param_1)

{
  return (long)(param_1 * 1024.0);
}



/* Entry: 10b7c8bfc; end: 10b7c8ce7; -[SCStorageEventHandler _fileSystemMetricInKB:] */

undefined8 FUN_10b7c8bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107c31290();
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  puVar4 = puVar2;
  func_0x00010bf0e860(puVar2,param_2,puVar3,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = 0;
  if (lVar1 == 0) {
    puVar2 = puVar4;
    func_0x00010c0dff20(puVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b4ca0();
    func_0x00010bde8fa0(param_1,param_2,puVar3);
    _objc_release(puVar2);
    uVar5 = param_1;
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10b7c8ce8; end: 10b7c8d23; -[SCStorageEventHandler _backgroundTaskWrapperExpirationHandlerForTask:] */

void FUN_10b7c8ce8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c8d24; end: 10b7c8d8f; -[SCStorageEventHandler .cxx_destruct] */

void FUN_10b7c8d24(long param_1)

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



/* Entry: 10b7c8d90; end: 10b7c8feb; +[SCTemporaryDatastore _tmpDatastoreForName:user:type:] */

void FUN_10b7c8d90(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    uVar7 = 0;
    goto LAB_10b7c8fb4;
  }
  lVar1 = param_3 * 8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc0000000;
  pcStack_68 = FUN_10b7c8fec;
  puStack_60 = &UNK_110848088;
  lStack_58 = param_3;
  if (*(long *)(lVar1 + 0x1137f9d08) != -1) {
    func_0x000107c27d9c((long *)(lVar1 + 0x1137f9d08),&puStack_78);
  }
  _dispatch_semaphore_wait(*(undefined8 *)(lVar1 + 0x1137f9d78),0xffffffffffffffff);
  uVar2 = *(ulong *)(lVar1 + 0x1137f9d40);
  if (uVar2 == 0) {
LAB_10b7c8e58:
    puVar8 = PTR_PTR_1126af970;
    if (param_5 == 1) {
      func_0x00010c293520(PTR_PTR_1126af970);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_5 == 0) {
      func_0x00010c293560(PTR_PTR_1126af970);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    uVar7 = param_1;
    func_0x00010bec55a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c25ce00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x00010bf55dc0(PTR_PTR_1126b24e8);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar7 = param_1;
    func_0x00010bec55a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar6 = PTR_PTR_1126b33c8;
    _objc_alloc();
    func_0x00010bdf93e0(param_1);
    func_0x00010bfee2a0();
    uVar7 = *(undefined8 *)(lVar1 + 0x1137f9d40);
    *(undefined **)(lVar1 + 0x1137f9d40) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
  }
  else {
    func_0x00010c0870c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdcf80();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_10b7c8e58;
  }
  uVar7 = *(undefined8 *)(lVar1 + 0x1137f9d40);
  _objc_retain(uVar7);
  _dispatch_semaphore_signal(*(undefined8 *)(lVar1 + 0x1137f9d78));
LAB_10b7c8fb4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10b7c8fec; end: 10b7c902b;  */

void FUN_10b7c8fec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 1;
  _dispatch_semaphore_create();
  lVar1 = *(long *)(param_1 + 0x20) * 8;
  uVar3 = *(undefined8 *)(lVar1 + 0x1137f9d78);
  *(undefined8 *)(lVar1 + 0x1137f9d78) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b7c902c; end: 10b7c903f; +[SCTemporaryDatastore _defaultExpirationDaysForDatastoreName:] */

undefined8 FUN_10b7c902c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if (param_3 - 3U < 3) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b7c9040; end: 10b7c905f; +[SCTemporaryDatastore _stringForDatastoreName:] */

undefined * FUN_10b7c9040(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
    return (&PTR_PTR_110d611a8)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 10b7c9060; end: 10b7c906f; +[SCTemporaryDatastore failedSnapDatastoreForUser:type:] */

void FUN_10b7c9060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tmpDatastoreForName_user_type__112590b48,0,param_3,param_4);
  return;
}



/* Entry: 10b7c9070; end: 10b7c907f; +[SCTemporaryDatastore failedBaseChatMediaDatastoreForUser:type:] */

void FUN_10b7c9070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tmpDatastoreForName_user_type__112590b48,1,param_3,param_4);
  return;
}



/* Entry: 10b7c9080; end: 10b7c908f; +[SCTemporaryDatastore failedDiscoverMediaMessageDatastoreForUser:type:] */

void FUN_10b7c9080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tmpDatastoreForName_user_type__112590b48,2,param_3,param_4);
  return;
}



/* Entry: 10b7c9090; end: 10b7c909f; +[SCTemporaryDatastore persistedEphemeralMediaDataStoreForUser:type:] */

void FUN_10b7c9090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tmpDatastoreForName_user_type__112590b48,3,param_3,param_4);
  return;
}



/* Entry: 10b7c90a0; end: 10b7c90af; +[SCTemporaryDatastore storyDataStoreForUser:type:] */

void FUN_10b7c90a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tmpDatastoreForName_user_type__112590b48,5,param_3,param_4);
  return;
}



/* Entry: 10b7c90b0; end: 10b7c90bf; +[SCTemporaryDatastore multiSnapDataStoreForUser:type:] */

void FUN_10b7c90b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tmpDatastoreForName_user_type__112590b48,6,param_3,param_4);
  return;
}



/* Entry: 10b7c90c0; end: 10b7c90c7; -[SCTemporaryDatastore init:name:] */

void FUN_10b7c90c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_init_name_defaultDaysForExpiry__1125d9270,param_3,param_4,0x1f);
  return;
}



/* Entry: 10b7c90c8; end: 10b7c92a3; -[SCTemporaryDatastore init:name:defaultDaysForExpiry:] */

undefined1 *
FUN_10b7c90c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_11270af48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126e13d0;
    _objc_alloc();
    func_0x00010c028ce0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b24d0;
    func_0x00010c22b6a0(PTR_PTR_1126b24d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9b40();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c92a4; end: 10b7c93d7; -[SCTemporaryDatastore managedURL:expiration:] */

void FUN_10b7c92a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be15940(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e1440;
  _objc_alloc(PTR_PTR_1126e1440);
  func_0x00010bfee860();
  _objc_initWeak(auStack_58,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7c93d8; end: 10b7c9513;  */

void FUN_10b7c93d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(lVar1 + 0x30);
    func_0x00010c0e00e0(lVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126e13f8;
      _objc_alloc_init(PTR_PTR_1126e13f8);
      func_0x00010c1b7000();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar4,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c198b80(puVar4,param_2,puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1e9400(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3d68);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x30),param_2,puVar5,
                          *(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar5);
      func_0x00010befa120(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar4);
    }
    else {
      func_0x00010bdc9420(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),1,puVar2);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c9514; end: 10b7c9643; -[SCTemporaryDatastore restoreManagedURLs] */

undefined * FUN_10b7c9514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b24e8;
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c27b060(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(puVar1 + 0x20);
    uVar5 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar6 != 0) {
      func_0x00010befa120(*(undefined8 *)(puVar1 + 0x28));
    }
    _objc_release(lVar6);
  }
  _objc_release(param_2);
  return (undefined *)0x1;
}



/* Entry: 10b7c9644; end: 10b7c9707;  */

undefined8 FUN_10b7c9644(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 10b7c9708; end: 10b7c9887; -[SCTemporaryDatastore restoreManagedURL:] */

void FUN_10b7c9708(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be969a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c124e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = (undefined *)0x0;
    if (lVar2 == 0) goto LAB_10b7c9840;
    lVar2 = lVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126e1440;
      _objc_alloc(PTR_PTR_1126e1440);
      func_0x00010bfee860();
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(lVar2);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(lVar2);
      goto LAB_10b7c9840;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_10b7c9840:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7c9888; end: 10b7c995b;  */

void FUN_10b7c9888(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126e13f8;
      func_0x00010c2a9c00(PTR_PTR_1126e13f8,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9400();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x30),param_2,puVar4,
                          *(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      func_0x00010bdc9420(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),1,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c995c; end: 10b7c99af; -[SCTemporaryDatastore _filePathForKey:] */

void FUN_10b7c995c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c086580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ce00(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7c99b0; end: 10b7c9a67; -[SCTemporaryDatastore _adjustMetadataForKey:refCountDelta:expiration:] */

void FUN_10b7c99b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010befd960(lVar1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,lVar2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c9a68; end: 10b7c9b27; -[SCTemporaryDatastore _removeMetadataMapEntry:] */

void FUN_10b7c9a68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0868c0(uVar2,param_2,lVar1);
  lVar4 = lVar1;
  if ((int)uVar2 != 0) {
    lVar3 = param_1;
    func_0x00010be969a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  if (lVar4 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30),param_2,lVar4);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,lVar4);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c9b28; end: 10b7c9b4f; -[SCTemporaryDatastore performer] */

void FUN_10b7c9b28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7c9b50; end: 10b7c9b77; -[SCTemporaryDatastore path] */

void FUN_10b7c9b50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7c9b78; end: 10b7c9c57; -[SCTemporaryDatastore adjustReferenceCount:delta:] */

void FUN_10b7c9b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c9c58; end: 10b7c9c9b;  */

void FUN_10b7c9c58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdc9420(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c9c9c; end: 10b7c9dbb; -[SCTemporaryDatastore metadataForKey:] */

void FUN_10b7c9c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7c9dbc; end: 10b7c9e1f;  */

void FUN_10b7c9dbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b7c9e20; end: 10b7c9ef7; -[SCTemporaryDatastore flushMetadata:] */

void FUN_10b7c9e20(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b7c9ef8; end: 10b7c9f33;  */

void FUN_10b7c9ef8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be18240(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c9f34; end: 10b7ca03b; -[SCTemporaryDatastore _flushMetadata:] */

void FUN_10b7c9f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be15940(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfacbe0();
    if ((int)puVar4 != 0) {
      puVar4 = PTR_PTR_1126bdbc0;
      func_0x00010bf64c20(PTR_PTR_1126bdbc0,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_48 = 0;
      func_0x00010c1894a0(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f83338,
                          lVar1,&uStack_48);
      _objc_release(puVar4);
    }
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7ca03c; end: 10b7ca15b; -[SCTemporaryDatastore _flushDirtyMetadata] */

void FUN_10b7ca03c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010be18240(param_1,param_2,*(undefined8 *)(lStack_108 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar6;
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(puVar4);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010bf63aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  if (puVar3 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bdbc0;
    func_0x00010c0e0260(PTR_PTR_1126bdbc0,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b7ca15c; end: 10b7ca213; -[SCTemporaryDatastore _retrieveMetadataFromFile:] */

void FUN_10b7ca15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_3);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf63aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bdbc0;
    func_0x00010c0e0260(PTR_PTR_1126bdbc0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7ca214; end: 10b7ca36f; -[SCTemporaryDatastore _retrieveMetadata:cache:] */

void FUN_10b7ca214(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0899c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0868c0(uVar2,param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) goto LAB_10b7ca344;
  }
  lVar3 = param_1;
  func_0x00010be969a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) goto LAB_10b7ca344;
  lVar4 = lVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) goto LAB_10b7ca344;
  lVar6 = *(long *)(param_1 + 0x30);
  lVar4 = lVar3;
  func_0x00010c086560(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar6,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar3;
  if (lVar6 == 0) {
    if (param_4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c086560(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,lVar3,lVar4);
      goto LAB_10b7ca334;
    }
  }
  else {
    _objc_retain(lVar6);
    lVar3 = lVar6;
LAB_10b7ca334:
    _objc_release(lVar4);
  }
  _objc_release(lVar6);
LAB_10b7ca344:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}


