/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d50140; end: 108d50177;  */

void FUN_108d50140(long param_1,undefined8 param_2)

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



/* Entry: 108d50178; end: 108d5017b;  */

void FUN_108d50178(void)

{
  return;
}



/* Entry: 108d5017c; end: 108d502d7;  */

byte FUN_108d5017c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    bVar3 = 1;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d502d8;
    puStack_50 = &UNK_110ac3348;
    _objc_retain(param_2);
    uVar2 = param_1;
    lStack_48 = param_2;
    func_0x00010b5edefc(param_1,0,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    func_0x00010c0c0800();
    bVar3 = *(byte *)(puStack_80 + 3);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uVar2);
    _objc_release(lStack_48);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar3 & 1;
}



/* Entry: 108d502d8; end: 108d503eb;  */

undefined * FUN_108d502d8(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      FUN_108dfb9ac(param_2,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return PTR____kCFBooleanTrue_11034ab68;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 1;
  return param_2;
}



/* Entry: 108d503ec; end: 108d5040f;  */

void FUN_108d503ec(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108d50410; end: 108d5047f;  */

void FUN_108d50410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dbdf8;
  _objc_opt_class(PTR_PTR_1126dbdf8);
  uVar2 = param_1;
  func_0x00010c279940(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110ef75b8,0,0,0,
                      0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d50480; end: 108d505f7;  */

undefined1 FUN_108d50480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d505f8;
  puStack_68 = &UNK_110ac33e8;
  _objc_retain(param_2);
  uStack_60 = param_2;
  _objc_retain(param_3);
  uVar2 = param_1;
  uStack_58 = param_3;
  func_0x00010b5edefc(param_1,0,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  func_0x00010c0c0800();
  uVar1 = *(undefined1 *)(puStack_98 + 3);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108d505f8; end: 108d5061f;  */

undefined * FUN_108d505f8(long param_1,undefined8 param_2)

{
  FUN_108dfa704(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 108d50620; end: 108d50643;  */

void FUN_108d50620(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108d50644; end: 108d50797;  */

void FUN_108d50644(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d50798;
  puStack_50 = &UNK_110ac3418;
  _objc_retain(param_2);
  uVar1 = param_1;
  uStack_48 = param_2;
  func_0x000107c30748(param_1,0,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  uStack_80 = 0x108d4ff88;
  uStack_78 = 0x108d4ff98;
  uStack_70 = 0;
  func_0x00010c0c0800();
  uVar2 = puStack_90[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d50798; end: 108d507a7;  */

void FUN_108d50798(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x10;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dfa32a8,0x4a);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_108dfa690);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108dfa5d4;
    }
  }
  lVar1 = 0;
LAB_108dfa5d4:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d507a8; end: 108d507df;  */

void FUN_108d507a8(long param_1,undefined8 param_2)

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



/* Entry: 108d507e0; end: 108d507e3;  */

void FUN_108d507e0(void)

{
  return;
}



/* Entry: 108d507e4; end: 108d5093f;  */

byte FUN_108d507e4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    bVar3 = 1;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d50940;
    puStack_50 = &UNK_110ac3418;
    _objc_retain(param_2);
    uVar2 = param_1;
    lStack_48 = param_2;
    func_0x00010b5edefc(param_1,0,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    func_0x00010c0c0800();
    bVar3 = *(byte *)(puStack_80 + 3);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uVar2);
    _objc_release(lStack_48);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar3 & 1;
}



/* Entry: 108d50940; end: 108d50a53;  */

undefined * FUN_108d50940(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      FUN_108dfa868(param_2,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return PTR____kCFBooleanTrue_11034ab68;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 1;
  return param_2;
}



/* Entry: 108d50a54; end: 108d50a77;  */

void FUN_108d50a54(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108d50a78; end: 108d50c57; -[SCMemoriesNonEncryptedDatabase initWithNetworker:profileHandler:circumstanceEngine:grapheneRegistry:memoriesDataObjectContext:memoriesExperimentServices:legacyEncryptedDatabase:sqliteTransactorProvider:logger:] */

undefined1 *
FUN_108d50a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_58 = PTR_PTR_1126fe7b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    uVar2 = param_8;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c234940();
    *(char *)((long)puVar1 + 0x48) = (char)uVar6;
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x28));
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108d50c58; end: 108d50ca3; -[SCMemoriesNonEncryptedDatabase addEncryptionInfoWithSnaps:] */

void FUN_108d50c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be33d80();
  if (((int)lVar1 == 0) || ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    func_0x00010bef7f20(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d50ca4; end: 108d50e37; -[SCMemoriesNonEncryptedDatabase addKey:IV:isEncrypted:forSnapId:shouldSkipCoredataPersisting:] */

uint FUN_108d50ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar2 = param_1;
  func_0x00010be33d80();
  uVar1 = (uint)lVar2;
  if ((uVar1 == 0) || ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef9540(uVar3,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar5 = (uint)uVar3;
  }
  else {
    uVar5 = 1;
  }
  puVar4 = PTR_PTR_1126af4d0;
  uVar5 = uVar1 | uVar5;
  if (((param_7 & 1) == 0) && (((uVar1 ^ 1) & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0(puVar4,param_2,param_6,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = (uint)(puVar4 != (undefined *)0x0);
    _objc_release();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108d50e38;
    puStack_80 = &UNK_110878f70;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_58 = (undefined1)param_5;
    uStack_70 = param_4;
    lStack_68 = param_1;
    _objc_retain(param_6);
    uStack_60 = param_6;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_98);
    _objc_release(uStack_60);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 108d50e38; end: 108d50e7f;  */

void FUN_108d50e38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf908;
  _objc_alloc(PTR_PTR_1126bf908);
  func_0x00010c020a60();
  func_0x00010be732a0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),puVar1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d50e80; end: 108d50f67; -[SCMemoriesNonEncryptedDatabase addLocation:forSnapId:] */

void FUN_108d50e80(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be33d80();
  if (((int)lVar1 == 0) || ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    func_0x00010bef9a80(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d50f68;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d50f68; end: 108d51007;  */

void FUN_108d50f68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdef940(*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = &uStack_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  FUN_108d4fad0(uVar4,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = puVar1;
  func_0x00010be33d80();
  if (((int)puVar2 == 0) || ((puVar1[0x48] & 1) == 0)) {
    func_0x00010bef9aa0(*(undefined8 *)(puVar1 + 8));
  }
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar3);
  return;
}



/* Entry: 108d51008; end: 108d510b7; -[SCMemoriesNonEncryptedDatabase addLocationsWithSnaps:] */

void FUN_108d51008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be33d80();
  if (((int)lVar1 == 0) || ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    func_0x00010bef9aa0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d510b8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108d510b8; end: 108d510e3;  */

undefined1 FUN_108d510b8(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010bdef940(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain();
  _objc_retain(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d4fc18;
  puStack_50 = &UNK_110ac3348;
  _objc_retain(uVar1);
  uVar3 = uVar4;
  uStack_48 = uVar1;
  func_0x00010b5edefc(uVar4,0,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  func_0x00010c0c0800();
  uVar2 = *(undefined1 *)(puStack_80 + 3);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return uVar2;
}



/* Entry: 108d510e4; end: 108d51187; -[SCMemoriesNonEncryptedDatabase deleteRecordForSnapIds:memoriesGrapheneContext:] */

void FUN_108d510e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf6c600(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d51188;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108d51188; end: 108d511c7;  */

byte FUN_108d51188(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010bdea8c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdef940(*(undefined8 *)(param_1 + 0x20));
  FUN_108d5017c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain();
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    bVar5 = 1;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108d50940;
    puStack_50 = &UNK_110ac3418;
    _objc_retain(lVar1);
    uVar3 = uVar4;
    lStack_48 = lVar1;
    func_0x00010b5edefc(uVar4,0,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    func_0x00010c0c0800();
    bVar5 = *(byte *)(puStack_80 + 3);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uVar3);
    _objc_release(lStack_48);
  }
  _objc_release(lVar1);
  _objc_release(uVar4);
  return bVar5 & 1;
}



/* Entry: 108d511c8; end: 108d5130b; -[SCMemoriesNonEncryptedDatabase duplicateFromSnapIds:toSnapIds:localOnly:shouldSkipCoredataPersisting:memoriesGrapheneContext:] */

void FUN_108d511c8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be33d80();
  if (((int)lVar1 == 0) || ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    func_0x00010bf8b080(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7
                       );
  }
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108d5130c;
    puStack_70 = &UNK_110878f70;
    uStack_48 = (undefined1)param_6;
    lStack_68 = param_1;
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_retain(param_7);
    uStack_58 = param_7;
    _objc_retain(param_4);
    lStack_50 = param_4;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_88);
    _objc_release(lStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d5130c; end: 108d516cb;  */

void FUN_108d5130c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uVar13 = 0x3032000000;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_108d516cc;
  uStack_98 = 0x108d516dc;
  puStack_90 = PTR____NSDictionary0__struct_11034ab58;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uVar13 = 0xc2000000;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_108d516e4;
    puStack_c8 = &UNK_1108a5f78;
    puStack_c0 = puStack_b0;
    func_0x00010be867c0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),&puStack_e0);
  }
  func_0x00010bdea8c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdef940(*(undefined8 *)(param_1 + 0x20));
  uVar10 = 0;
  while( true ) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (uVar1 <= uVar10) break;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = puStack_b0[5];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      uVar5 = puStack_b0[5];
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be732a0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar5);
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
    FUN_108d4ffdc(lVar6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf529e0();
    if (lVar4 == 1) {
      puVar9 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      _objc_alloc();
      lVar4 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 8);
      }
      _objc_retain(uVar5);
      func_0x00010bf885a0(uVar5);
      lVar8 = lVar6;
      uVar11 = uVar13;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar8 + 0x10);
      }
      _objc_retain(uVar12);
      func_0x00010bf885a0(uVar12);
      func_0x00010c021a60(uVar13,uVar11);
      _objc_release(uVar12);
      _objc_release(lVar8);
      _objc_release(uVar5);
      _objc_release(lVar4);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_88 = uVar3;
      puStack_80 = puVar9;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      FUN_108d4fad0(uVar5,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar9);
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    FUN_108d50644(lVar8,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010bf529e0();
    if (lVar4 == 1) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      lVar4 = lVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar4 + 8);
      }
      _objc_retain(uVar11);
      FUN_108d50480(uVar5,uVar3,uVar11);
      _objc_release(uVar11);
      _objc_release(lVar4);
    }
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar10 = uVar10 + 1;
  }
  __Block_object_dispose(&uStack_b8,8);
  puVar9 = puStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(puVar9 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 108d516cc; end: 108d516e3;  */

void FUN_108d516cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108d516e4; end: 108d5171b;  */

void FUN_108d516e4(long param_1,undefined8 param_2)

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



/* Entry: 108d5171c; end: 108d51853; -[SCMemoriesNonEncryptedDatabase requestKeyForEntryExternalId:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d5171c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010be33d80();
  if ((uVar1 & 1) == 0) {
    func_0x00010c135a20(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108d51854;
    puStack_70 = &UNK_110852488;
    _objc_retain(param_3);
    uStack_68 = param_3;
    uStack_60 = param_1;
    _objc_retain(param_5);
    uStack_58 = param_5;
    _objc_retain(param_6);
    uStack_48 = param_6;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
    _objc_release(uStack_50);
    _objc_release(uStack_48);
    _objc_release(uStack_58);
    _objc_release(uStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d51854; end: 108d51ae7;  */

void FUN_108d51854(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar5 = PTR_PTR_1126af4c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaad00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x1) {
    puVar2 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf93d20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf93d20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 != (undefined *)0x0) {
        puVar10 = puVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf93d20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bdc1800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar2);
        if (puVar12 != (undefined *)0x0) {
          uVar4 = *(undefined8 *)(param_1 + 0x30);
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc2000000;
          pcStack_90 = FUN_108d51ae8;
          puStack_88 = &UNK_11084aaa8;
          uVar3 = *(undefined8 *)(param_1 + 0x40);
          _objc_retain(uVar3);
          uStack_78 = uVar3;
          _objc_retain(puVar5);
          puStack_80 = puVar5;
          func_0x000107c27d8c(uVar4,&puStack_a0);
          _objc_release(puStack_80);
          _objc_release(uStack_78);
          goto LAB_108d51aa4;
        }
        goto LAB_108d51a90;
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar2);
  }
LAB_108d51a90:
  func_0x00010c135a20(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
LAB_108d51aa4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(puVar5 + 0x20);
  lVar1 = *(long *)(puVar5 + 0x28);
  func_0x00010bfb1920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108d51ae8; end: 108d51b47;  */

void FUN_108d51ae8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d51b48; end: 108d51b4f; -[SCMemoriesNonEncryptedDatabase requestKeyForIdentifier:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d51b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_requestKeyForIdentifier_memories_11262b0b0);
  return;
}



/* Entry: 108d51b50; end: 108d51cdb; -[SCMemoriesNonEncryptedDatabase requestKeyForSnap:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d51b50(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      _objc_release(lVar2);
    }
    else {
      lVar3 = lVar1;
      func_0x00010bdc1800();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) {
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_108d51cdc;
        puStack_78 = &UNK_11084aaa8;
        _objc_retain(param_6);
        uStack_68 = param_6;
        _objc_retain(lVar1);
        lStack_70 = lVar1;
        func_0x000107c27d8c(param_5,&puStack_90);
        _objc_release(lStack_70);
        _objc_release(uStack_68);
        goto LAB_108d51c94;
      }
    }
  }
  func_0x00010be33d80(param_1);
  func_0x00010c135a60(*(undefined8 *)(param_1 + 8));
LAB_108d51c94:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d51cdc; end: 108d51ceb;  */

void FUN_108d51cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d51ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108d51cec; end: 108d520bf; -[SCMemoriesNonEncryptedDatabase requestLocationForSnapId:synchronous:queue:resultHandler:] */

void FUN_108d51cec(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_1;
  func_0x00010be33d80();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((uVar2 & 1) == 0) {
    func_0x00010c135bc0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6);
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x108d51e9c;
    puStack_90 = &UNK_110855c70;
    uStack_88 = param_1;
    _objc_retain(param_3);
    uStack_68 = (undefined1)param_4;
    uStack_80 = param_3;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(param_5);
    ppuVar3 = &puStack_a8;
    uStack_78 = param_5;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if ((int)param_4 == 0) {
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x108d520ec;
      puStack_e0 = &UNK_110849530;
      ppuStack_d8 = ppuVar3;
      _objc_retain(ppuVar3);
      func_0x00010c0f7fc0(uVar5,param_2,&puStack_f8);
      ppuVar4 = ppuStack_d8;
    }
    else {
      puStack_d0 = puVar1;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x108d520e0;
      puStack_b8 = &UNK_110849530;
      ppuStack_b0 = ppuVar3;
      _objc_retain(ppuVar3);
      func_0x00010c0f8240(uVar5,param_2,&puStack_d0);
      ppuVar4 = ppuStack_b0;
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(uStack_78);
    _objc_release(uStack_70);
    _objc_release(uStack_80);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108d520c0; end: 108d520f7;  */

void FUN_108d520c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d520cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108d520f8; end: 108d52143; -[SCMemoriesNonEncryptedDatabase observeDbInit] */

void FUN_108d520f8(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be33d80();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e09a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d52144; end: 108d5221f; -[SCMemoriesNonEncryptedDatabase replaceAddressTitle:forSnapId:] */

void FUN_108d52144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be33d80();
  if (((int)lVar1 == 0) || ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    func_0x00010c130c60(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d52220;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 108d52220; end: 108d5224f;  */

undefined1 FUN_108d52220(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010bdea8c0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d505f8;
  puStack_68 = &UNK_110ac33e8;
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_retain(uVar5);
  uVar3 = uVar4;
  uStack_58 = uVar5;
  func_0x00010b5edefc(uVar4,0,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  func_0x00010c0c0800();
  uVar2 = *(undefined1 *)(puStack_98 + 3);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return uVar2;
}



/* Entry: 108d52250; end: 108d5235f; -[SCMemoriesNonEncryptedDatabase requestAddressTitleForSnapId:queue:resultHandler:] */

void FUN_108d52250(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be33d80();
  if ((uVar1 & 1) == 0) {
    func_0x00010c134880(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108d52360;
    puStack_68 = &UNK_1108465d0;
    uStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d52360; end: 108d524d7;  */

void FUN_108d52360(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010bdea8c0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  FUN_108d50644(lVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (lVar2 == 1) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x108d52470;
    puStack_48 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uStack_38 = uVar4;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    func_0x000107c27d8c(uVar3,&puStack_60);
    _objc_release(lStack_40);
    uVar3 = uStack_38;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108d524d8;
    puStack_70 = &UNK_110849530;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uStack_68 = uVar4;
    func_0x000107c27d8c(uVar3,&puStack_88);
    uVar3 = uStack_68;
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 108d524d8; end: 108d524e7;  */

void FUN_108d524d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d524e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108d524e8; end: 108d5261f; -[SCMemoriesNonEncryptedDatabase snapIdToLocationMapWithinMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_108d524e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_5;
  func_0x00010be33d80();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_5 + 8);
    func_0x00010c2412a0(param_1,param_2,param_3,param_4,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_108d516cc;
    uStack_50 = 0x108d516dc;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = puVar2;
    func_0x00010c0f8240(*(undefined8 *)(param_5 + 0x20));
    uVar3 = puStack_68[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108d52620; end: 108d5289f;  */

void FUN_108d52620(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar7 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdef940(*(undefined8 *)(param_1 + 0x20));
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  FUN_108d4fd98(lVar9,puVar1,puVar2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar9);
  puVar8 = auStack_100;
  lVar5 = lVar9;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar16 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(lVar9);
        }
        lVar14 = *(long *)(lStack_138 + lVar10 * 8);
        puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
        _objc_alloc();
        if (lVar14 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar14 + 0x10);
        }
        _objc_retain(uVar11);
        func_0x00010bf885a0(uVar11);
        if (lVar14 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined8 *)(lVar14 + 0x18);
        }
        uVar15 = uVar6;
        _objc_retain(uVar12);
        func_0x00010bf885a0(uVar12);
        func_0x00010c021a60(uVar6,uVar15);
        uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
        uVar15 = 0;
        if (lVar14 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 8);
        }
        _objc_retain(uVar15);
        func_0x00010c1d0640(uVar13);
        _objc_release(uVar15);
        _objc_release(puVar1);
        _objc_release(uVar12);
        _objc_release(uVar11);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      puVar8 = auStack_100;
      lVar5 = lVar9;
      puVar7 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  uVar6 = *(undefined8 *)(lVar9 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar9 + 0x10);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  uVar12 = *(undefined8 *)(lVar9 + 0x20);
  _objc_retain(puVar8);
  _objc_retain(uVar6);
  func_0x00010c11de00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  func_0x00010c0f8520(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(uVar6);
  return;
}



/* Entry: 108d528a0; end: 108d52a03; -[SCMemoriesNonEncryptedDatabase _persistKeyIVToGallerySnapWithSnapId:encryptionResult:] */

void FUN_108d528a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108d52a04;
  puStack_70 = &UNK_110848ba8;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = param_3;
  uStack_60 = uVar2;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108d52a78;
  puStack_98 = &UNK_110858d00;
  uStack_90 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8520(uVar3,param_2,&puStack_88,uVar4,&puStack_b0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 108d52a04; end: 108d52a77;  */

void FUN_108d52a04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0(PTR_PTR_1126af4d0,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bc7f8;
    func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195c20();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d52a78; end: 108d52a7b;  */

void FUN_108d52a78(void)

{
  return;
}



/* Entry: 108d52a7c; end: 108d52abf; -[SCMemoriesNonEncryptedDatabase _createLocationDbTransactorIfNeeded] */

void FUN_108d52a7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000108d4fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d52ac0; end: 108d52b03; -[SCMemoriesNonEncryptedDatabase _createAddressTitleDbTransactorIfNeede] */

void FUN_108d52ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_108d50410();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d52b04; end: 108d52d27; -[SCMemoriesNonEncryptedDatabase _readThroughKeyIVForSnapIds:memoriesGrapheneContext:resultHandler:] */

ulong FUN_108d52b04(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar3);
      }
      lVar8 = *(long *)((long)puVar9 * 8);
      lVar7 = lVar8;
      func_0x00010bf93d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        lVar7 = lVar8;
        func_0x00010bf93d20(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241220(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      puVar9 = puVar9 + 1;
    } while (puVar4 != puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  (**(code **)(param_5 + 0x10))(param_5,puVar4);
  _objc_release(puVar4);
  func_0x00010bf529e0(puVar1);
  func_0x00010bf529e0(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(param_3 + 0x18);
  func_0x00010c0c94e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c298be0();
  lVar7 = *(long *)(param_3 + 0x50);
  _objc_release(lVar6);
  return (ulong)(lVar7 <= lVar5);
}



/* Entry: 108d52d28; end: 108d52d73; -[SCMemoriesNonEncryptedDatabase _hasDBNuked] */

bool FUN_108d52d28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0c94e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c298be0();
  lVar3 = *(long *)(param_1 + 0x50);
  _objc_release(lVar1);
  return lVar3 <= lVar2;
}



/* Entry: 108d52d74; end: 108d52deb; -[SCMemoriesNonEncryptedDatabase .cxx_destruct] */

void FUN_108d52d74(long param_1)

{
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



/* Entry: 108d52dec; end: 108d52edf; -[SCGalleryEncryptedDatabasePendingEncryptionRequest initWithSnapId:queue:resultHandler:] */

undefined1 *
FUN_108d52dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fe7c0;
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d52ee0; end: 108d52ee7; -[SCGalleryEncryptedDatabasePendingEncryptionRequest snapId] */

undefined8 FUN_108d52ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d52ee8; end: 108d52eef; -[SCGalleryEncryptedDatabasePendingEncryptionRequest queue] */

undefined8 FUN_108d52ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d52ef0; end: 108d52ef7; -[SCGalleryEncryptedDatabasePendingEncryptionRequest resultHandler] */

undefined8 FUN_108d52ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d52ef8; end: 108d52f33; -[SCGalleryEncryptedDatabasePendingEncryptionRequest .cxx_destruct] */

void FUN_108d52ef8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d52f34; end: 108d5300f; -[SCGalleryEncryptedDatabasePendingUpdate initWithStatement:parameters:] */

undefined1 *
FUN_108d52f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe7c8;
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



/* Entry: 108d53010; end: 108d53017; -[SCGalleryEncryptedDatabasePendingUpdate statement] */

undefined8 FUN_108d53010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d53018; end: 108d5301f; -[SCGalleryEncryptedDatabasePendingUpdate parameters] */

undefined8 FUN_108d53018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d53020; end: 108d5304f; -[SCGalleryEncryptedDatabasePendingUpdate .cxx_destruct] */

void FUN_108d53020(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d53050; end: 108d53143; -[SCGalleryEncryptedDatabasePendingLocationRequest initWithSnapId:synchronous:queue:resultHandler:] */

undefined1 *
FUN_108d53050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126fe7d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d53144; end: 108d5314b; -[SCGalleryEncryptedDatabasePendingLocationRequest snapId] */

undefined8 FUN_108d53144(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d5314c; end: 108d53153; -[SCGalleryEncryptedDatabasePendingLocationRequest queue] */

undefined8 FUN_108d5314c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d53154; end: 108d5315b; -[SCGalleryEncryptedDatabasePendingLocationRequest resultHandler] */

undefined8 FUN_108d53154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d5315c; end: 108d53197; -[SCGalleryEncryptedDatabasePendingLocationRequest .cxx_destruct] */

void FUN_108d5315c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d53198; end: 108d535f3; -[SCGalleryEncryptedDatabase initWithNetworker:profile:userTrackedLogger:circumstanceEngine:grapheneRegistry:deviceSamplingProvider:memoriesDataObjectContext:memoriesExperimentServices:logger:] */

undefined8 *
FUN_108d53198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fe7d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[7];
    puVar1[7] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(puVar1[0x19]);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dbe00;
    _objc_alloc_init();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    _objc_retain(puVar1);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(puVar1);
  }
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



/* Entry: 108d535f4; end: 108d53687;  */

void FUN_108d535f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010be399c0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126dbe08;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ac00();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 108d53688; end: 108d5376b; -[SCGalleryEncryptedDatabase EGOCipherKeyProvider:didFindDerivedKey:nonDerivedKey:] */

void FUN_108d53688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d5376c;
  puStack_50 = &UNK_110896e48;
  uStack_48 = param_4;
  uStack_40 = param_5;
  lStack_38 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108d5376c; end: 108d5377b;  */

void FUN_108d5376c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb17d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s__setupWithMasterKey_masterKeyAvo_112589f98,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d5377c; end: 108d53953; -[SCGalleryEncryptedDatabase _persistKeyIVToGallerySnapWithSnapId:encryptionResult:] */

void FUN_108d5377c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108d53954;
  puStack_70 = &UNK_110896e48;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_4;
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108d539ec;
  puStack_98 = &UNK_110896e18;
  _objc_retain(param_3);
  uStack_90 = param_3;
  func_0x00010c0f8520(uVar3,param_2,&puStack_88,uVar4,&puStack_b0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d53954; end: 108d539eb;  */

void FUN_108d53954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0(PTR_PTR_1126af4d0,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bc7f8;
    func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195c20();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d539ec; end: 108d539ef;  */

void FUN_108d539ec(void)

{
  return;
}



/* Entry: 108d539f0; end: 108d53c7f; -[SCGalleryEncryptedDatabase _readKeyIVForSnapIds:] */

void FUN_108d539f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7580(puVar2,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        lVar8 = *(long *)(lStack_128 + (long)puVar12 * 8);
        lVar11 = lVar8;
        func_0x00010bf93d20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0) {
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          __ZNSt3__15mutex4lockEv(param_1 + 0x80);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xc0),param_2,lVar11,lVar8);
          __ZNSt3__15mutex6unlockEv(param_1 + 0x80);
          func_0x00010c1d0640(puVar3,param_2,lVar11,lVar8);
          _objc_release(lVar8);
        }
        _objc_release(lVar11);
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = puVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    __Unwind_Resume();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    puVar2 = PTR_PTR_1126af4c0;
    uVar7 = *(undefined8 *)(lVar10 + 0x28);
    uVar1 = *(undefined8 *)(lVar10 + 0xe0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaad00(puVar2,param_2,puVar6,uVar7,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_260,auStack_218,0x10);
    if (puVar4 != (undefined *)0x0) {
      lVar11 = *plStack_250;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar11) {
            _objc_enumerationMutation(puVar2);
          }
          lVar9 = *(long *)(lStack_258 + (long)puVar12 * 8);
          lVar8 = lVar9;
          func_0x00010bf93d20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 != 0) {
            func_0x00010bf9e140(lVar9);
            _objc_retainAutoreleasedReturnValue();
            __ZNSt3__15mutex4lockEv(lVar10 + 0x80);
            func_0x00010c1d0640(*(undefined8 *)(lVar10 + 0xc0),param_2,lVar8,lVar9);
            __ZNSt3__15mutex6unlockEv(lVar10 + 0x80);
            func_0x00010c1d0640(puVar3,param_2,lVar8,lVar9);
            _objc_release(lVar9);
          }
          _objc_release(lVar8);
          puVar12 = puVar12 + 1;
        } while (puVar4 != puVar12);
        puVar4 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_260,auStack_218,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = (undefined1 *)puVar6;
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar6);
      __Unwind_Resume(puVar5);
      func_0x00010bdc37e0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d53c80; end: 108d53f17; -[SCGalleryEncryptedDatabase _readKeyIVForGivenEntryExternalIds:] */

void FUN_108d53c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
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
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaad00(puVar2,param_2,param_3,uVar6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        lVar7 = *(long *)(lStack_128 + (long)puVar9 * 8);
        lVar5 = lVar7;
        func_0x00010bf93d20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010bf9e140(lVar7);
          _objc_retainAutoreleasedReturnValue();
          __ZNSt3__15mutex4lockEv(param_1 + 0x80);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xc0),param_2,lVar5,lVar7);
          __ZNSt3__15mutex6unlockEv(param_1 + 0x80);
          func_0x00010c1d0640(puVar3,param_2,lVar5,lVar7);
          _objc_release(lVar7);
        }
        _objc_release(lVar5);
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar1 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    __Unwind_Resume(uVar1);
    func_0x00010bdc37e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d53f18; end: 108d53f37; -[SCGalleryEncryptedDatabase _EGOCipherStatementForSQL:] */

void FUN_108d53f18(void)

{
  func_0x00010bdc37e0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d53f38; end: 108d53ff3; -[SCGalleryEncryptedDatabase _EGOCipherStatementForSQL:cacheQuery:] */

void FUN_108d53f38(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c252980(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,lVar1,param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d53ff4; end: 108d5409f; -[SCGalleryEncryptedDatabase _inMemoryStatementForSQL:] */

void FUN_108d53ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c252980(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,lVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d540a0; end: 108d541f3; -[SCGalleryEncryptedDatabase _performUpdate:parameters:callsite:] */

undefined8
FUN_108d540a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_1;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    puVar2 = PTR_PTR_1126dbe10;
    _objc_alloc(PTR_PTR_1126dbe10);
    func_0x00010c04c160();
    func_0x00010befa120(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010be37f60(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf9b080(uVar1,param_2,lVar3,param_4);
  }
  else {
    func_0x00010bdc37c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf9b080(uVar1,param_2,lVar3,param_4);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108d541f4; end: 108d54433; -[SCGalleryEncryptedDatabase _executePendingUpdates] */

void FUN_108d541f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [128];
  undefined1 auStack_230 [128];
  long lStack_1b0;
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
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf51e00();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar3 = uVar8;
        func_0x00010c252960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f3840();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f516573);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be72ca0(param_1,param_2,uVar3,uVar8,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar8);
        _objc_release(uVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar5 = *(long *)(param_1 + 0x70);
  func_0x00010bf51e00();
  lVar6 = *(long *)(param_1 + 0x78);
  func_0x00010bf51e00();
  lVar9 = lVar5;
  lVar11 = lVar6;
  func_0x00010be0bcc0(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  __Unwind_Resume();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  _objc_retain(lVar11);
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_2f0,auStack_230,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_2e0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_2e0 != lVar5) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_2e8 + lVar6 * 8);
        uVar3 = uVar10;
        func_0x00010c241220(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126bf788;
        _objc_alloc(PTR_PTR_1126bf788);
        func_0x00010c017ba0();
        uVar8 = uVar10;
        func_0x00010c11de00(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13cb60(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be867a0(lVar2,param_2,uVar3,puVar4,uVar8,uVar10);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(puVar4);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_2f0,auStack_230,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010bf52a60(lVar11,param_2,&uStack_330,auStack_2b0,0x10);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    lVar5 = *plStack_320;
    do {
      lVar6 = 0;
      do {
        if (*plStack_320 != lVar5) {
          _objc_enumerationMutation(lVar11);
        }
        uStack_338 = *(undefined8 *)(lStack_328 + lVar6 * 8);
        puStack_360 = puVar4;
        uStack_358 = 0xc2000000;
        pcStack_350 = FUN_108d54764;
        puStack_348 = &UNK_110883780;
        lStack_340 = lVar2;
        func_0x00010c0f7fc0(*(undefined8 *)(lVar2 + 0x20),param_2,&puStack_360);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_330,auStack_2b0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  func_0x00010bde0ac0(lVar2);
  _objc_release(lVar11);
  lVar2 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar11);
  _objc_release(lVar9);
  __Unwind_Resume();
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c241220(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c13cb60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135bc0(uVar3,param_2,uVar8,0,uVar10,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 108d54434; end: 108d54763; -[SCGalleryEncryptedDatabase _executePendingUpdatesWithEncryptionRequests:pendingLocationRequests:] */

void FUN_108d54434(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1c0,auStack_100,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_1b0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1b0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_1b8 + lVar6 * 8);
        uVar2 = uVar7;
        func_0x00010c241220(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126bf788;
        _objc_alloc(PTR_PTR_1126bf788);
        func_0x00010c017ba0();
        uVar4 = uVar7;
        func_0x00010c11de00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13cb60(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be867a0(param_1,param_2,uVar2,puVar3,uVar4,uVar7);
        _objc_release(uVar7);
        _objc_release(uVar4);
        _objc_release(puVar3);
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1c0,auStack_100,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_200,auStack_180,0x10);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    lVar8 = *plStack_1f0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1f0 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        uStack_208 = *(undefined8 *)(lStack_1f8 + lVar6 * 8);
        puStack_230 = puVar3;
        uStack_228 = 0xc2000000;
        pcStack_220 = FUN_108d54764;
        puStack_218 = &UNK_110883780;
        lStack_210 = param_1;
        func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_230);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_200,auStack_180,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  func_0x00010bde0ac0(param_1);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c241220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c13cb60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135bc0(uVar2,param_2,uVar4,0,uVar7,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108d54764; end: 108d54823;  */

void FUN_108d54764(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13cb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135bc0(uVar1,param_2,uVar2,0,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d54824; end: 108d54877; -[SCGalleryEncryptedDatabase _clearPendingItems] */

void FUN_108d54824(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d54878; end: 108d5629f; -[SCGalleryEncryptedDatabase _readThroughKeyIVForSnapIds:synchronous:localOnly:shouldSkipCoreDataReading:memoriesGrapheneContext:resultHandler:] */

void FUN_108d54878(long param_1,undefined8 param_2,undefined *param_3,byte param_4,uint param_5,
                  ulong param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined **ppuStack_778;
  ulong uStack_768;
  undefined *puStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_730;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 uStack_618;
  code *pcStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  code *pcStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined *puStack_5b0;
  undefined **ppuStack_5a8;
  byte bStack_5a0;
  undefined1 uStack_59f;
  undefined1 uStack_59e;
  undefined *puStack_598;
  undefined8 uStack_590;
  code *pcStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  long lStack_540;
  undefined *puStack_538;
  undefined **ppuStack_530;
  byte bStack_528;
  undefined1 uStack_527;
  undefined1 uStack_526;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  code *pcStack_450;
  undefined *puStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_190;
  undefined8 uStack_108;
  long lStack_80;
  
  puStack_730 = (undefined *)(ulong)param_5;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if ((param_6 & 1) == 0) {
    lVar15 = param_1;
    func_0x00010be86560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar3);
    _objc_release(lVar15);
  }
  puVar4 = puVar3;
  func_0x00010bf529e0();
  puVar18 = param_3;
  func_0x00010bf529e0();
  if (puVar4 == puVar18) {
    puVar4 = puVar3;
    func_0x00010bf51e00();
    (**(code **)(param_8 + 0x10))(param_8,puVar4);
    _objc_release(puVar4);
    goto LAB_108d55bec;
  }
  puStack_740 = *(undefined **)(param_1 + 0x50);
  _objc_retain();
  lVar15 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  bVar2 = lVar15 != 0;
  uStack_768 = (ulong)bVar2;
  if (lVar15 == 0) {
    if (lVar1 != 0) {
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      _objc_retain(param_3);
      puVar4 = param_3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar19 = *plStack_420;
        do {
          puVar18 = (undefined *)0x0;
          do {
            if (*plStack_420 != lVar19) {
              _objc_enumerationMutation(param_3);
            }
            uVar13 = *(undefined8 *)(lStack_428 + (long)puVar18 * 8);
            puVar5 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar5 == (undefined *)0x0) {
              puVar16 = *(undefined **)(param_1 + 0x18);
              lVar7 = param_1;
              func_0x00010be37f60();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
              uStack_190 = uVar13;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9b000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              _objc_release(lVar7);
              puVar5 = puVar16;
              func_0x00010bf529e0();
              if (puVar5 == (undefined *)0x1) {
                puVar5 = puVar16;
                func_0x00010bfb1b60();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar5;
                func_0x00010bf63a40();
                _objc_retainAutoreleasedReturnValue();
                puVar17 = puVar5;
                func_0x00010bf63a40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf1f300(puVar5);
                puVar6 = puVar20;
                func_0x00010c08fa60();
                if ((puVar6 == (undefined *)0x0) ||
                   (puVar6 = puVar17, func_0x00010c08fa60(), puVar6 == (undefined *)0x0)) {
                  puVar6 = puStack_740;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1219e0();
                }
                else {
                  puVar6 = PTR_PTR_1126bf908;
                  _objc_alloc();
                  func_0x00010c020a60();
                  func_0x00010c1d0640(puVar3);
                }
                _objc_release(puVar6);
                _objc_release(puVar17);
                _objc_release(puVar20);
              }
              else {
                puVar5 = puStack_740;
                func_0x00010c269d40(puStack_740);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1219a0();
              }
              _objc_release(puVar5);
              _objc_release(puVar16);
            }
            puVar18 = puVar18 + 1;
          } while (puVar4 != puVar18);
          puVar4 = param_3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      goto LAB_108d54e30;
    }
  }
  else {
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar19 = *plStack_3e0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_3e0 != lVar19) {
            _objc_enumerationMutation(param_3);
          }
          uVar13 = *(undefined8 *)(lStack_3e8 + (long)puVar18 * 8);
          puVar5 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            puVar16 = *(undefined **)(param_1 + 0x10);
            lVar7 = param_1;
            func_0x00010bdc37c0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            uStack_108 = uVar13;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9b000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(lVar7);
            puVar5 = puVar16;
            func_0x00010bf529e0();
            if (puVar5 == (undefined *)0x1) {
              puVar5 = puVar16;
              func_0x00010bfb1b60();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar5;
              func_0x00010bf63a40();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar5;
              func_0x00010bf63a40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f300(puVar5);
              puVar6 = puVar20;
              func_0x00010c08fa60();
              if ((puVar6 == (undefined *)0x0) ||
                 (puVar6 = puVar17, func_0x00010c08fa60(), puVar6 == (undefined *)0x0)) {
                puVar6 = puStack_740;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1219c0();
              }
              else {
                puVar6 = PTR_PTR_1126bf908;
                _objc_alloc();
                func_0x00010c020a60();
                func_0x00010c1d0640(puVar3);
              }
              _objc_release(puVar6);
              _objc_release(puVar17);
              _objc_release(puVar20);
            }
            else {
              puVar5 = puStack_740;
              func_0x00010c269d40(puStack_740);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c121980();
            }
            _objc_release(puVar5);
            _objc_release(puVar16);
          }
          puVar18 = puVar18 + 1;
        } while (puVar4 != puVar18);
        puVar4 = param_3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
LAB_108d54e30:
    _objc_release(param_3);
  }
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_460 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_458 = 0xc2000000;
  pcStack_450 = FUN_108d562a0;
  puStack_448 = &UNK_110ac3470;
  lStack_440 = param_1;
  _objc_retain(param_8);
  ppuStack_778 = &puStack_460;
  lStack_438 = param_8;
  _objc_retainBlock();
  puVar18 = puVar3;
  if (param_5 == 0) {
    puVar5 = puVar3;
    func_0x00010bf529e0();
    puVar16 = param_3;
    func_0x00010bf529e0();
    if (puVar5 < puVar16) {
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      plStack_490 = (long *)0x0;
      _objc_retain(param_3);
      puVar5 = param_3;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar19 = *plStack_490;
        do {
          puVar16 = (undefined *)0x0;
          do {
            if (*plStack_490 != lVar19) {
              _objc_enumerationMutation(param_3);
            }
            puVar20 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar20 == (undefined *)0x0) {
              func_0x00010befa120(puVar18);
            }
            puVar16 = puVar16 + 1;
          } while (puVar5 != puVar16);
          puVar5 = param_3;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(param_3);
      puVar5 = PTR_PTR_1126af4d0;
      if (*(long *)(param_1 + 0x38) == 0) {
        puVar4 = puStack_740;
        func_0x00010c269d40(puStack_740);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c121960();
        _objc_release(puVar4);
        puVar5 = puVar3;
        func_0x00010bf51e00(puVar3);
        (*(code *)ppuStack_778[2])(ppuStack_778,puVar5);
      }
      else {
        uVar13 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        puStack_730 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        lStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4c8 = 0;
        plStack_4d0 = (long *)0x0;
        _objc_retain(puVar5);
        puVar16 = puVar5;
        func_0x00010bf52a60();
        if (puVar16 != (undefined *)0x0) {
          lVar19 = *plStack_4d0;
          do {
            puVar20 = (undefined *)0x0;
            do {
              if (*plStack_4d0 != lVar19) {
                _objc_enumerationMutation(puVar5);
              }
              uVar13 = *(undefined8 *)(lStack_4d8 + (long)puVar20 * 8);
              func_0x00010c241220(uVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_730);
              _objc_release(uVar13);
              puVar20 = puVar20 + 1;
            } while (puVar16 != puVar20);
            puVar16 = puVar5;
            func_0x00010bf52a60();
          } while (puVar16 != (undefined *)0x0);
        }
        _objc_release(puVar5);
        puStack_750 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        plStack_510 = (long *)0x0;
        _objc_retain(puVar18);
        puVar16 = puVar18;
        func_0x00010bf52a60();
        if (puVar16 != (undefined *)0x0) {
          lVar19 = *plStack_510;
          do {
            puVar20 = (undefined *)0x0;
            do {
              if (*plStack_510 != lVar19) {
                _objc_enumerationMutation(puVar18);
              }
              puVar17 = puStack_730;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar17;
              func_0x00010c0c7520();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar6 == (undefined *)0x0) {
                puVar6 = PTR_PTR_1126d2c48;
                _objc_alloc(PTR_PTR_1126d2c48);
                func_0x00010c010420();
                func_0x00010befa120(puStack_750);
              }
              else {
                puVar6 = puVar17;
                func_0x00010c0c7520(puVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puStack_750);
              }
              _objc_release(puVar6);
              _objc_release(puVar17);
              puVar20 = puVar20 + 1;
            } while (puVar16 != puVar20);
            puVar16 = puVar18;
            func_0x00010bf52a60();
          } while (puVar16 != (undefined *)0x0);
        }
        _objc_release(puVar18);
        puStack_798 = PTR_PTR_1126d8e60;
        func_0x00010c2b1d60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c195d60();
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar16 = puVar18;
        func_0x00010bf51e00(puVar18);
        func_0x00010c2046e0(puStack_798);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar16);
        func_0x00010c1c5820(puStack_798);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puStack_7a0 = puStack_798;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0xd0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uStack_7a8 = uVar13;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        uStack_7b0 = *(undefined8 *)(param_1 + 0xd8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        if ((param_4 & 1) == 0) {
          uVar13 = *(undefined8 *)(param_1 + 0x38);
          puVar16 = PTR_PTR_1126bbf20;
          func_0x00010bdc1920();
          _objc_retainAutoreleasedReturnValue();
          uStack_7b8 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          puStack_598 = puVar4;
          uStack_590 = 0xc2000000;
          pcStack_588 = FUN_108d56330;
          puStack_580 = &UNK_110ac34a0;
          _objc_retain(puStack_740);
          puStack_578 = puStack_740;
          _objc_retain(puVar18);
          puStack_570 = puVar18;
          bStack_528 = param_4;
          _objc_retain(param_7);
          uStack_568 = param_7;
          _objc_retain(puStack_7a0);
          puStack_560 = puStack_7a0;
          _objc_retain(uStack_7a8);
          uStack_558 = uStack_7a8;
          _objc_retain(uStack_7b0);
          uStack_550 = uStack_7b0;
          uStack_527 = bVar2;
          uStack_526 = lVar1 != 0;
          _objc_retain(ppuStack_778);
          ppuStack_530 = ppuStack_778;
          _objc_retain(puVar3);
          puStack_548 = puVar3;
          lStack_540 = param_1;
          _objc_retain(param_3);
          puStack_5f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_5f0 = 0xc2000000;
          pcStack_5e8 = FUN_108d56f14;
          puStack_5e0 = &UNK_110ac34d0;
          puStack_538 = param_3;
          _objc_retain(puStack_740);
          puStack_5d8 = puStack_740;
          _objc_retain(puVar18);
          puStack_5d0 = puVar18;
          bStack_5a0 = param_4;
          _objc_retain(param_7);
          uStack_5c8 = param_7;
          _objc_retain(uStack_7a8);
          uStack_5c0 = uStack_7a8;
          _objc_retain(uStack_7b0);
          uStack_5b8 = uStack_7b0;
          uStack_59f = bVar2;
          uStack_59e = lVar1 != 0;
          _objc_retain(ppuStack_778);
          ppuStack_5a8 = ppuStack_778;
          _objc_retain(puVar3);
          puStack_5b0 = puVar3;
          func_0x00010c25f400(uVar13);
          _objc_release(uStack_7b8);
          _objc_release(puVar16);
          _objc_release(puStack_5b0);
          _objc_release(ppuStack_5a8);
          _objc_release(uStack_5b8);
          _objc_release(uStack_5c0);
          _objc_release(uStack_5c8);
          _objc_release(puStack_5d0);
          _objc_release(puStack_5d8);
          _objc_release(puStack_538);
          _objc_release(puStack_548);
          _objc_release(ppuStack_530);
          _objc_release(uStack_550);
          _objc_release(uStack_558);
          _objc_release(puStack_560);
          _objc_release(uStack_568);
          _objc_release(puStack_570);
          _objc_release(puStack_578);
        }
        else {
          puStack_620 = &uStack_628;
          uStack_628 = 0;
          uStack_618 = 0x3032000000;
          pcStack_610 = FUN_108d570f8;
          uStack_608 = 0x108d57108;
          uStack_600 = 0;
          uStack_7b8 = 0;
          _dispatch_semaphore_create();
          uVar14 = *(undefined8 *)(param_1 + 0x38);
          puVar4 = PTR_PTR_1126bbf20;
          func_0x00010bdc1920(PTR_PTR_1126bbf20);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = 0x15;
          func_0x000107c312b8(0x15,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puStack_740);
          _objc_retain(puVar18);
          _objc_retain(param_7);
          _objc_retain(uStack_7b8);
          _objc_retain(puStack_740);
          _objc_retain(puVar18);
          _objc_retain(param_7);
          _objc_retain(uStack_7a8);
          _objc_retain(uStack_7b0);
          _objc_retain(uStack_7b8);
          func_0x00010c25f400(uVar14);
          _objc_release(uVar13);
          _objc_release(puVar4);
          _dispatch_semaphore_wait(uStack_7b8,0xffffffffffffffff);
          lVar7 = puStack_620[5];
          func_0x00010c15f8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar7;
          func_0x00010c067fc0();
          _objc_release(lVar7);
          puVar4 = puVar3;
          if (lVar19 == 2000) {
            if (puStack_620[5] != 0) {
              uStack_768 = puStack_620[5];
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uStack_768;
              func_0x00010bf52a60();
              lVar15 = lRam0000000000000000;
              while (uVar8 != 0) {
                uVar21 = 0;
                do {
                  if (lRam0000000000000000 != lVar15) {
                    _objc_enumerationMutation(uStack_768);
                  }
                  puVar17 = *(undefined **)(uVar21 * 8);
                  puVar16 = puVar17;
                  func_0x00010bf93d20();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = puVar16;
                  FUN_108dfcc4c();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar16);
                  puVar16 = PTR__OBJC_CLASS___NSData_1126ae778;
                  if (puVar20 == (undefined *)0x0) {
                    puVar16 = puStack_740;
                    func_0x00010c269d40(puStack_740);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c241220();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c121a20(puVar16);
                  }
                  else {
                    puVar6 = puVar20;
                    func_0x00010bf93ec0(puVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf649c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar6);
                    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
                    puVar9 = puVar20;
                    func_0x00010bf93e80(puVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf649c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar9);
                    func_0x00010bf93ce0(puVar20);
                    puVar9 = PTR_PTR_1126bf908;
                    _objc_alloc(PTR_PTR_1126bf908);
                    func_0x00010c020a60();
                    puVar10 = puVar17;
                    func_0x00010c241220(puVar17);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar3);
                    _objc_release(puVar10);
                    puVar10 = puVar17;
                    func_0x00010c241220(puVar17);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010be732a0(param_1);
                    _objc_release(puVar10);
                    func_0x00010c241220();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    puStack_3b0 = puVar17;
                    puStack_3a8 = puVar16;
                    puStack_3a0 = puVar6;
                    func_0x00010c0df6e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_398 = puVar10;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c25da80();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010be72ca0(param_1);
                    _objc_release(puVar12);
                    _objc_release(puVar11);
                    _objc_release(puVar10);
                    _objc_release(puVar17);
                    _objc_release(puVar9);
                    puVar17 = puVar6;
                  }
                  _objc_release(puVar17);
                  _objc_release(puVar16);
                  _objc_release(puVar20);
                  uVar21 = uVar21 + 1;
                } while (uVar8 != uVar21);
                uVar8 = uStack_768;
                func_0x00010bf52a60();
              }
              _objc_release(uStack_768);
            }
            func_0x00010bf51e00(puVar3);
            (*(code *)ppuStack_778[2])(ppuStack_778,puVar4);
          }
          else {
            puVar16 = puStack_740;
            func_0x00010c269d40(puStack_740);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c121a00();
            _objc_release(puVar16);
            uVar13 = param_7;
            func_0x00010bfca780();
            uVar14 = param_7;
            func_0x00010bf93a40();
            _objc_retainAutoreleasedReturnValue();
            FUN_108d56d20(uStack_7a8,uStack_7b0,lVar19,lVar15 != 0,lVar1 != 0,uVar13,uVar14);
            _objc_release(uVar14);
            func_0x00010bf51e00(puVar3);
            (*(code *)ppuStack_778[2])(ppuStack_778,puVar4);
          }
          _objc_release(puVar4);
          _objc_release(uStack_7b8);
          _objc_release(uStack_7b0);
          _objc_release(uStack_7a8);
          _objc_release(param_7);
          _objc_release(puVar18);
          _objc_release(puStack_740);
          _objc_release(uStack_7b8);
          _objc_release(param_7);
          _objc_release(puVar18);
          _objc_release(puStack_740);
          _objc_release(uStack_7b8);
          __Block_object_dispose(&uStack_628,8);
          _objc_release(uStack_600);
          puStack_6b0 = puStack_740;
          puStack_6a8 = puVar18;
          uStack_6a0 = param_7;
          uStack_698 = uStack_7a8;
          uStack_690 = uStack_7b0;
          uStack_688 = uStack_7b8;
          puStack_658 = puStack_740;
          puStack_650 = puVar18;
          uStack_648 = param_7;
          uStack_640 = uStack_7b8;
        }
        _objc_release(uStack_7b0);
        _objc_release(uStack_7a8);
        _objc_release(puStack_7a0);
        _objc_release(puStack_798);
        _objc_release(puStack_750);
        _objc_release(puStack_730);
        puStack_758 = puVar5;
      }
      _objc_release(puVar5);
      puStack_748 = puVar18;
    }
    else {
      func_0x00010bf51e00();
      (*(code *)ppuStack_778[2])(ppuStack_778,puVar18);
    }
  }
  else {
    func_0x00010bf51e00();
    (*(code *)ppuStack_778[2])(ppuStack_778,puVar18);
  }
  _objc_release(puVar18);
  _objc_release(ppuStack_778);
  _objc_release(lStack_438);
  _objc_release(puStack_740);
LAB_108d55bec:
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uStack_768);
  _objc_release(uStack_688);
  _objc_release(uStack_690);
  _objc_release(uStack_698);
  _objc_release(uStack_6a0);
  _objc_release(puStack_6a8);
  _objc_release(puStack_6b0);
  _objc_release(uStack_640);
  _objc_release(uStack_648);
  _objc_release(puStack_650);
  _objc_release(puStack_658);
  _objc_release(uStack_7b8);
  uVar13 = 8;
  __Block_object_dispose(&uStack_628,8);
  _objc_release(uStack_600);
  _objc_release(uStack_7b0);
  _objc_release(uStack_7a8);
  _objc_release(puStack_7a0);
  _objc_release(puStack_798);
  _objc_release(puStack_750);
  _objc_release(puStack_730);
  _objc_release(puStack_758);
  _objc_release(puStack_748);
  _objc_release(ppuStack_778);
  _objc_release(lStack_438);
  _objc_release(puStack_740);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  __Unwind_Resume();
  __Unwind_Resume();
  _objc_retain(uVar13);
  lVar15 = *(long *)(puVar4 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar15 + 0x80);
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(puVar4 + 0x20) + 0xc0));
  __ZNSt3__15mutex6unlockEv(lVar15 + 0x80);
  (**(code **)(*(long *)(puVar4 + 0x28) + 0x10))(*(long *)(puVar4 + 0x28),uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 108d562a0; end: 108d5632f;  */

void FUN_108d562a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar1 + 0x80);
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x80);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d56330; end: 108d56d1f;  */

void FUN_108d56330(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [128];
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = (undefined8 *)PTR_PTR_1126d2c50;
  _objc_alloc();
  func_0x00010c0206e0();
  if ((param_3 != 0) && (puVar2 == (undefined8 *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121a40();
    _objc_release(uVar3);
  }
  puVar4 = puVar2;
  func_0x00010c15f8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar4;
  func_0x00010c067fc0();
  _objc_release(puVar4);
  if (puVar22 == (undefined8 *)0x7d0) {
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    puVar4 = puVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = &uStack_240;
    puVar21 = auStack_180;
    uVar18 = 0x10;
    puVar20 = puVar4;
    func_0x00010bf52a60();
    if (puVar20 != (undefined8 *)0x0) {
      lVar19 = *plStack_230;
      do {
        puVar22 = (undefined8 *)0x0;
        do {
          if (*plStack_230 != lVar19) {
            _objc_enumerationMutation(puVar4);
          }
          puVar26 = *(undefined **)(lStack_238 + (long)puVar22 * 8);
          puVar13 = puVar26;
          func_0x00010bf93d20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar13;
          FUN_108dfcc4c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
          if (puVar5 == (undefined *)0x0) {
            uVar10 = *(ulong *)(*(long *)(param_1 + 0x58) + 0xe8);
            func_0x00010c0c8940();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar10;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar18;
            func_0x00010bf7fa40();
            _objc_release(uVar18);
            _objc_release(uVar10);
            if ((uVar11 & 1) == 0) {
              ppuStack_1c0 = &PTR____CFConstantStringClassReference_110ef7878;
              puVar13 = puVar26;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_1b8 = puVar13;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              FUN_108e00074(&PTR____CFConstantStringClassReference_110ef7838,
                            &PTR____CFConstantStringClassReference_110ef78b8,puVar12,
                            *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
              _objc_release(puVar12);
              _objc_release(puVar13);
            }
            puVar13 = *(undefined **)(param_1 + 0x20);
            func_0x00010c269d40(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c121a20(puVar13);
          }
          else {
            puVar12 = puVar5;
            func_0x00010bf93ec0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf649c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
            puVar6 = puVar5;
            func_0x00010bf93e80(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf649c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar6 = puVar13;
            func_0x00010c08fa60();
            if ((puVar6 == (undefined *)0x0) ||
               (puVar6 = puVar12, func_0x00010c08fa60(), puVar6 == (undefined *)0x0)) {
              ppuStack_190 = &PTR____CFConstantStringClassReference_110ef7878;
              puVar6 = puVar26;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_188 = puVar6;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              FUN_108e00074(&PTR____CFConstantStringClassReference_110ef7838,
                            &PTR____CFConstantStringClassReference_110ef7898,puVar7,
                            *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
              _objc_release(puVar7);
              _objc_release(puVar6);
            }
            func_0x00010bf93ce0(puVar5);
            puVar6 = PTR_PTR_1126bf908;
            _objc_alloc();
            func_0x00010c020a60();
            uVar3 = *(undefined8 *)(param_1 + 0x50);
            puVar7 = puVar26;
            func_0x00010c241220(puVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar3);
            _objc_release(puVar7);
            uVar3 = *(undefined8 *)(param_1 + 0x58);
            puVar7 = puVar26;
            func_0x00010c241220(puVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be732a0(uVar3);
            _objc_release(puVar7);
            uVar3 = *(undefined8 *)(param_1 + 0x58);
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puStack_1b0 = puVar26;
            puStack_1a8 = puVar13;
            puStack_1a0 = puVar12;
            func_0x00010c0df6e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_198 = puVar7;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be72ca0(uVar3);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar26);
            _objc_release(puVar6);
            puVar26 = puVar12;
          }
          _objc_release(puVar26);
          _objc_release(puVar13);
          _objc_release(puVar5);
          puVar22 = (undefined8 *)((long)puVar22 + 1);
        } while (puVar20 != puVar22);
        puVar22 = &uStack_240;
        puVar21 = auStack_180;
        uVar18 = 0x10;
        puVar20 = puVar4;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined8 *)0x0);
    }
    _objc_release(puVar4);
    puVar20 = *(undefined8 **)(param_1 + 0x68);
    puVar14 = *(undefined8 **)(param_1 + 0x50);
    func_0x00010bf51e00();
    puVar4 = puVar14;
    (*(code *)puVar20[2])(puVar20);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121a00();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar21 = (undefined1 *)(ulong)*(byte *)(param_1 + 0x71);
    uVar18 = (ulong)*(byte *)(param_1 + 0x72);
    param_6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfca780();
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf93a40();
    _objc_retainAutoreleasedReturnValue();
    param_7 = uVar15;
    FUN_108d56d20(uVar3,uVar1,puVar22,puVar21,uVar18,param_6,uVar15);
    _objc_release(uVar15);
    lVar19 = *(long *)(param_1 + 0x68);
    puVar20 = *(undefined8 **)(param_1 + 0x50);
    func_0x00010bf51e00();
    puVar4 = puVar20;
    (**(code **)(lVar19 + 0x10))(lVar19);
    _objc_release(puVar20);
    puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x58) + 0xe8);
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar20;
    func_0x00010bf7fa40();
    _objc_release(puVar20);
    _objc_release(puVar14);
    if (((ulong)puVar16 & 1) != 0) goto LAB_108d56a98;
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    lVar24 = *(long *)(param_1 + 0x60);
    _objc_retain(lVar24);
    lVar19 = lVar24;
    func_0x00010bf52a60();
    if (lVar19 != 0) {
      lVar23 = *plStack_1f0;
      do {
        lVar25 = 0;
        do {
          if (*plStack_1f0 != lVar23) {
            _objc_enumerationMutation(lVar24);
          }
          lVar17 = *(long *)(param_1 + 0x50);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar17 == 0) {
            func_0x00010befa120(puVar14);
          }
          lVar25 = lVar25 + 1;
        } while (lVar19 != lVar25);
        lVar19 = lVar24;
        func_0x00010bf52a60();
      } while (lVar19 != 0);
    }
    _objc_release(lVar24);
    ppuStack_100 = &PTR____CFConstantStringClassReference_110ef7878;
    uVar18 = 1;
    puVar20 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar14;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = *(undefined1 **)(*(long *)(param_1 + 0x58) + 0x30);
    puVar4 = (undefined8 *)0x0;
    puVar22 = puVar20;
    FUN_108e00074(&PTR____CFConstantStringClassReference_110ef7838,
                  &PTR____CFConstantStringClassReference_110ef7858,puVar20,puVar21);
    _objc_release(puVar20);
  }
  _objc_release(puVar14);
LAB_108d56a98:
  _objc_release(puVar2);
  lVar19 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar20);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release(param_3);
  __Unwind_Resume(lVar19);
  _objc_retain();
  _objc_retain(param_7);
  func_0x00010c232d60(0x4024000000000000);
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = puVar22;
    func_0x00010b5f1244(puVar22,puVar21,uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(lVar19);
    func_0x00010b5f0fa8(puVar22,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(lVar19);
    _objc_release(puVar22);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar19);
  return;
}



/* Entry: 108d56d20; end: 108d56e37;  */

void FUN_108d56d20(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_7);
  func_0x00010c232d60(0x4024000000000000);
  if ((param_2 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010b5f1244(param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(param_1);
    func_0x00010b5f0fa8(param_3,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(param_1);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d56e38; end: 108d56f13;  */

void FUN_108d56e38(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
  return;
}



/* Entry: 108d56f14; end: 108d5704b;  */

void FUN_108d56f14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c252ee0(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121940();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined1 *)(param_1 + 0x59);
  uVar4 = *(undefined1 *)(param_1 + 0x5a);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfca780(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf93a40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  FUN_108d56d20(uVar6,uVar1,uVar5,uVar3,uVar4,uVar7,uVar8);
  _objc_release(uVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar6);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d5704c; end: 108d570f7;  */

void FUN_108d5704c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  return;
}



/* Entry: 108d570f8; end: 108d5710f;  */

void FUN_108d570f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108d57110; end: 108d571d7;  */

void FUN_108d57110(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2c50;
  _objc_alloc();
  func_0x00010c0206e0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  if ((param_3 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121a40();
    _objc_release(uVar2);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d571d8; end: 108d572e7;  */

void FUN_108d571d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c252ee0(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121940();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined1 *)(param_1 + 0x51);
  uVar3 = *(undefined1 *)(param_1 + 0x52);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfca780(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf93a40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  FUN_108d56d20(uVar5,uVar1,uVar4,uVar2,uVar3,uVar6,uVar7);
  _objc_release(uVar7);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d572e8; end: 108d57377;  */

void FUN_108d572e8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x48));
  return;
}



/* Entry: 108d57378; end: 108d5750f; -[SCGalleryEncryptedDatabase _initDatabaseTables] */

void FUN_108d57378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d5850;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034720(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddd558,0,uVar3,lVar2)
  ;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51676f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(param_1,param_2,&PTR____CFConstantStringClassReference_110ef7638,0,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51676f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(param_1,param_2,&PTR____CFConstantStringClassReference_110ef7658,0,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51676f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(param_1,param_2,&PTR____CFConstantStringClassReference_110ef7678,0,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51676f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72ca0(param_1,param_2,&PTR____CFConstantStringClassReference_110ef7698,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d57510; end: 108d57c9b; -[SCGalleryEncryptedDatabase _setupWithMasterKey:masterKeyAvoidKeyDerivation:] */

void FUN_108d57510(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_2 + 0x10) != 0) goto LAB_108d57a18;
  if (param_4 == 0 && param_5 == 0) {
    puVar8 = PTR_PTR_1126d80e8;
    _objc_opt_new(PTR_PTR_1126d80e8);
    func_0x00010c197f20();
    puVar9 = *(undefined **)(param_2 + 0x30);
    func_0x00010c269d40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar1 = puVar8;
    func_0x000107c31294();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad320(puVar9,param_3,puVar1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bdc2600(puVar1,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_3,&PTR____CFConstantStringClassReference_110ef7618);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010bdc2c60(puVar9,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar1 = puVar4;
    func_0x00010c0f5800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bfacbe0(puVar8,param_3,puVar1);
    _objc_release(puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010bf55da0(puVar8,param_3,puVar4,1,0,0);
    }
    puVar1 = puVar4;
    func_0x00010bdc2c60(puVar4,param_3,&PTR____CFConstantStringClassReference_110ef75d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0f5800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bfacbe0(puVar3,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    if ((param_4 == 0) || (param_5 == 0)) {
      lVar11 = param_4;
      if (param_4 == 0) {
        lVar11 = param_5;
      }
      _objc_retain(lVar11);
      puVar3 = PTR_PTR_1126dbe18;
      _objc_alloc();
      puVar5 = puVar1;
      func_0x00010c0f5800(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c034640(puVar3,param_3,puVar5,lVar11,1,*(undefined8 *)(param_2 + 0xd0),5);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      *(undefined **)(param_2 + 0x10) = puVar3;
      _objc_release(uVar2);
      _objc_release(puVar5);
      _CACurrentMediaTime();
      uVar7 = *(ulong *)(param_2 + 0x10);
      dVar12 = param_1;
      func_0x00010bf0dae0();
      if ((uVar7 & 1) != 0) {
LAB_108d5799c:
        puVar3 = PTR_PTR_1126b24e0;
        _CACurrentMediaTime();
        func_0x00010bfb0380(dVar12 - param_1,puVar3,param_3,lVar11 == param_5,
                            &PTR____CFConstantStringClassReference_110ef77f8,0,
                            *(undefined8 *)(param_2 + 0xd0));
        _objc_release(lVar11);
        goto LAB_108d579d8;
      }
      puVar3 = PTR_PTR_1126dbe18;
      _objc_alloc();
      puVar5 = puVar1;
      func_0x00010c0f5800(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c034640(puVar3,param_3,puVar5,lVar11,0,*(undefined8 *)(param_2 + 0xd0),6);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      *(undefined **)(param_2 + 0x10) = puVar3;
      _objc_release(uVar2);
      _objc_release(puVar5);
      uVar7 = *(ulong *)(param_2 + 0x10);
      func_0x00010bf0dae0();
      if ((uVar7 & 1) != 0) goto LAB_108d5799c;
      lVar10 = param_2;
      func_0x00010be88f80(param_2,param_3,puVar1,lVar11);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110ef7958);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be58f20(param_2,param_3,puVar3,(ulong)puVar6 & 0xffffffff,lVar10);
      func_0x00010be52da0(param_2,param_3,0,&PTR____CFConstantStringClassReference_110ef79b8);
      _objc_release(puVar3);
      if ((int)lVar10 != 0) goto LAB_108d5799c;
      _objc_release(lVar11);
    }
    else {
      puVar3 = PTR_PTR_1126dbe18;
      _objc_alloc();
      puVar5 = puVar1;
      func_0x00010c0f5800(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c034640(puVar3,param_3,puVar5,param_5,1,*(undefined8 *)(param_2 + 0xd0),1);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      *(undefined **)(param_2 + 0x10) = puVar3;
      _objc_release(uVar2);
      _objc_release(puVar5);
      _CACurrentMediaTime();
      uVar7 = *(ulong *)(param_2 + 0x10);
      dVar12 = param_1;
      func_0x00010bf0dae0();
      if ((uVar7 & 1) == 0) {
        puVar3 = PTR_PTR_1126dbe18;
        _objc_alloc();
        puVar5 = puVar1;
        func_0x00010c0f5800(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c034640(puVar3,param_3,puVar5,param_5,0,*(undefined8 *)(param_2 + 0xd0),2);
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        *(undefined **)(param_2 + 0x10) = puVar3;
        _objc_release(uVar2);
        _objc_release(puVar5);
        uVar7 = *(ulong *)(param_2 + 0x10);
        func_0x00010bf0dae0();
        if ((uVar7 & 1) != 0) goto LAB_108d577c8;
        func_0x00010be52da0(param_2,param_3,0,&PTR____CFConstantStringClassReference_110ef78f8);
        puVar3 = PTR_PTR_1126dbe18;
        _objc_alloc();
        puVar5 = puVar1;
        func_0x00010c0f5800(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c034640(puVar3,param_3,puVar5,param_4,1,*(undefined8 *)(param_2 + 0xd0),3);
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        *(undefined **)(param_2 + 0x10) = puVar3;
        _objc_release(uVar2);
        _objc_release(puVar5);
        uVar7 = *(ulong *)(param_2 + 0x10);
        func_0x00010bf0dae0();
        if ((uVar7 & 1) == 0) {
          puVar3 = PTR_PTR_1126dbe18;
          _objc_alloc();
          puVar5 = puVar1;
          func_0x00010c0f5800(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c034640(puVar3,param_3,puVar5,param_4,0,*(undefined8 *)(param_2 + 0xd0),4);
          uVar2 = *(undefined8 *)(param_2 + 0x10);
          *(undefined **)(param_2 + 0x10) = puVar3;
          _objc_release(uVar2);
          _objc_release(puVar5);
          uVar7 = *(ulong *)(param_2 + 0x10);
          func_0x00010bf0dae0();
          if ((uVar7 & 1) == 0) {
            lVar11 = param_2;
            func_0x00010be88f80(param_2,param_3,puVar1,param_5);
            func_0x00010be58f20(param_2,param_3,&PTR____CFConstantStringClassReference_110ef7918,
                                (ulong)puVar6 & 0xffffffff,lVar11);
            func_0x00010be52da0(param_2,param_3,0,&PTR____CFConstantStringClassReference_110ef7938);
            if ((int)lVar11 == 0) goto LAB_108d579f8;
            goto LAB_108d577c8;
          }
        }
        uVar2 = 0;
      }
      else {
LAB_108d577c8:
        uVar2 = 1;
      }
      puVar3 = PTR_PTR_1126b24e0;
      _CACurrentMediaTime();
      func_0x00010bfb0380(dVar12 - param_1,puVar3,param_3,uVar2,
                          &PTR____CFConstantStringClassReference_110ef77f8,0,
                          *(undefined8 *)(param_2 + 0xd0));
LAB_108d579d8:
      func_0x00010be0bca0(param_2);
      func_0x00010befb520(puVar1);
      func_0x00010c0d9840(*(undefined8 *)(param_2 + 200),param_3,PTR____kCFBooleanTrue_11034ab68);
    }
LAB_108d579f8:
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
LAB_108d57a18:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108d57c9c; end: 108d57f8b; -[SCGalleryEncryptedDatabase _regenerateEGOCipherAtURL:masterKey:] */

undefined * FUN_108d57c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar12);
  _objc_release(uVar1);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126dbe18;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c034640();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar12;
  _objc_release(uVar11);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf0dae0();
  if ((uVar2 & 1) == 0) {
    puVar12 = PTR_PTR_1126dbe18;
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c034640();
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar12;
    _objc_release(uVar11);
    _objc_release(uVar1);
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf0dae0();
    if ((uVar2 & 1) == 0) {
      func_0x00010be52da0(param_1);
      puVar12 = (undefined *)0x0;
      goto LAB_108d57e14;
    }
  }
  puVar12 = (undefined *)0x1;
LAB_108d57e14:
  uVar1 = param_3;
  func_0x00010bdc2cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb480(PTR_PTR_1126dbe20);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 1;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  puVar6 = (undefined *)0x0;
  puVar7 = puVar4;
  FUN_108e00074(&PTR____CFConstantStringClassReference_110ef79f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  uVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar5 = uVar11;
  __Unwind_Resume(uVar11);
  pcStack_78 = FUN_108d57f8c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = puVar3;
  uStack_a8 = uVar1;
  puStack_a0 = puVar12;
  uStack_98 = uVar11;
  uStack_90 = param_4;
  uStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108d5814c;
  puStack_e0 = &UNK_110ac3560;
  _objc_retain(puVar7);
  puStack_d8 = puVar7;
  _objc_retain(uVar9);
  uStack_d0 = uVar9;
  _objc_retain(uVar10);
  uStack_c8 = uVar10;
  func_0x00010be867e0(uVar5);
  _objc_release(puVar12);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_d8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_d8);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_108 = FUN_108d5814c;
  uStack_130 = uVar10;
  uStack_128 = uVar9;
  uStack_120 = uVar8;
  puStack_118 = puVar7;
  ppuStack_110 = &puStack_80;
  _objc_retain(puVar6);
  puVar12 = puVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar12 != (undefined *)0x0) {
    puVar4 = puVar12;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bdc1800(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
    }
  }
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_108d58278;
  puStack_148 = &UNK_1107d0af0;
  uVar1 = *(undefined8 *)(puVar3 + 0x28);
  uVar10 = *(undefined8 *)(puVar3 + 0x30);
  _objc_retain(uVar10);
  puStack_140 = puVar12;
  uStack_138 = uVar10;
  _objc_retain(puVar12);
  func_0x000107c27d8c(uVar1,&puStack_160);
  _objc_release(puStack_140);
  _objc_release(uStack_138);
  _objc_release(puVar12);
  _objc_release(puVar6);
  return puVar6;
}



/* Entry: 108d57f8c; end: 108d5814b; -[SCGalleryEncryptedDatabase _readThroughEncryptionForSnapId:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d57f8c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108d5814c;
  puStack_70 = &UNK_110ac3560;
  _objc_retain(param_3);
  lStack_68 = param_3;
  _objc_retain(param_5);
  uStack_60 = param_5;
  _objc_retain(param_6);
  uStack_58 = param_6;
  func_0x00010be867e0(param_1);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_98 = FUN_108d5814c;
  uStack_c0 = param_6;
  uStack_b8 = param_5;
  uStack_b0 = param_4;
  lStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      func_0x00010bdc1800(lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
    }
  }
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_108d58278;
  puStack_d8 = &UNK_1107d0af0;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  _objc_retain(uVar2);
  lStack_d0 = lVar5;
  uStack_c8 = uVar2;
  _objc_retain(lVar5);
  func_0x000107c27d8c(uVar1,&puStack_f0);
  _objc_release(lStack_d0);
  _objc_release(uStack_c8);
  _objc_release(lVar5);
  _objc_release(param_2);
  return;
}


