/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067b4464; end: 1067b4563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b4464(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b1548;
  _objc_alloc(PTR_PTR_1126b1548);
  func_0x00010c046040();
  param_1 = param_1 + _DAT_112750420;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2;
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  func_0x00010c017a80();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067b4564; end: 1067b4613;  */

void FUN_1067b4564(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010bf84000(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1067b4614; end: 1067b4667;  */

void FUN_1067b4614(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1d8040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b4668; end: 1067b470f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b4668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0c68;
  _objc_alloc(PTR_PTR_1126b0c68);
  param_1 = param_1 + _DAT_112750414;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  func_0x00010bff8500(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c1d86a0(puVar1,param_2,PTR_PTR_1133ba480);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067b4710; end: 1067b4717;  */

void FUN_1067b4710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1067b4718; end: 1067b485f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b4718(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cdfd8;
    _objc_alloc(PTR_PTR_1126cdfd8);
    lVar1 = param_1 + _DAT_11275041c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    func_0x00010c060000(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067b4860; end: 1067b4b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b4860(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cdfe0;
    _objc_alloc(PTR_PTR_1126cdfe0);
    lVar1 = param_1;
    FUN_1067b3d8c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_1067b3e68(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x0001067b3ed0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015ba0(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    FUN_1067b435c(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166b20(puVar4);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112750404;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4d00(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    FUN_1067b4464(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0660(puVar4);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112750408;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf45240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d480(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1067b4b94;
    puStack_68 = &UNK_11087b798;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c164060(puVar4);
    _objc_initWeak(auStack_88,puVar4);
    lVar1 = param_1;
    FUN_1067b3b10();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_58);
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c1d8040(puVar4);
    lVar2 = param_1;
    FUN_1067b4668(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167be0(puVar4);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067b4b94; end: 1067b4bdb;  */

void FUN_1067b4b94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  FUN_1067b4bdc();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b4bdc; end: 1067b4cbf;  */

void FUN_1067b4bdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c2d50;
    _objc_alloc();
    func_0x00010c032460();
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1067b5440;
    puStack_58 = &UNK_110848218;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_2);
    uStack_50 = param_2;
    puStack_48 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1067b4cc0; end: 1067b4d6f;  */

void FUN_1067b4cc0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010bf84000(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1067b4d70; end: 1067b4dc3;  */

void FUN_1067b4d70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1d8040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b4dc4; end: 1067b4f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b4dc4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126cdfe8;
    _objc_alloc(PTR_PTR_1126cdfe8);
    lVar1 = param_1 + _DAT_11275041c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    FUN_1067b3b10(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    func_0x00010c060040(puVar5);
    _objc_release(puVar4);
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



/* Entry: 1067b4f34; end: 1067b529f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b4f34(long param_1)

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
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
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
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puVar9 = PTR_PTR_1126cdff0;
    _objc_alloc();
    lVar2 = param_1;
    FUN_1067b3d8c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    FUN_1067b3e68(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112750404;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x0001067b3ed0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    FUN_1067b435c(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1067b52a4;
    puStack_90 = &UNK_110843540;
    _objc_copyWeak(auStack_88,auStack_80);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x1067b52ec;
    puStack_b8 = &UNK_11087b798;
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010c015be0(puVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar4 = param_1 + _DAT_112750408;
    _objc_loadWeakRetained(lVar4);
    lVar2 = lVar4;
    func_0x00010bf45240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d480(puVar9);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_initWeak(auStack_d8,puVar9);
    lVar4 = param_1;
    FUN_1067b3b10();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_copyWeak(auStack_e0,auStack_d8);
    func_0x00010c1d8040(puVar9);
    lVar2 = param_1;
    FUN_1067b4668(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167be0(puVar9);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067b52a0; end: 1067b52a3;  */

void FUN_1067b52a0(void)

{
  return;
}



/* Entry: 1067b52a4; end: 1067b5333;  */

void FUN_1067b52a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1067b3b10();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84000();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b5334; end: 1067b53e3;  */

void FUN_1067b5334(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010bf84000(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1067b53e4; end: 1067b543b;  */

void FUN_1067b53e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1d8040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b543c; end: 1067b543f;  */

void FUN_1067b543c(void)

{
  return;
}



/* Entry: 1067b5440; end: 1067b5627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b5440(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(lVar1 + _DAT_1127503dc);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = (undefined *)(lVar1 + _DAT_11275040c);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
  }
  lVar10 = *(long *)(lVar1 + _DAT_1127503f4);
  if (lVar10 == 0) {
    puVar3 = PTR_PTR_1126cdfc0;
    _objc_alloc();
    uVar11 = *(undefined8 *)(lVar1 + _DAT_1127503f8);
    lVar10 = lVar1 + _DAT_1127503fc;
    _objc_loadWeakRetained(lVar10);
    lVar7 = lVar1 + _DAT_112750400;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c112f80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4b40(puVar3,param_2,uVar11,lVar10,lVar9);
    uVar11 = *(undefined8 *)(lVar1 + _DAT_1127503f4);
    *(undefined **)(lVar1 + _DAT_1127503f4) = puVar3;
    _objc_release(uVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar10);
    lVar10 = *(long *)(lVar1 + _DAT_1127503f4);
  }
  _objc_retain(lVar10);
  func_0x00010c235ee0(lVar10,param_2,*(undefined8 *)(param_1 + 0x20),puVar6,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar10);
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067b5628; end: 1067b5747; -[SCCountdownsPageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b5628(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127503e0);
  _objc_destroyWeak(param_1 + _DAT_112750424);
  _objc_destroyWeak(param_1 + _DAT_112750410);
  _objc_destroyWeak(param_1 + _DAT_112750404);
  _objc_destroyWeak(param_1 + _DAT_1127503f0);
  _objc_destroyWeak(param_1 + _DAT_112750414);
  _objc_destroyWeak(param_1 + _DAT_112750420);
  _objc_destroyWeak(param_1 + _DAT_112750400);
  _objc_storeStrong(param_1 + _DAT_1127503f8,0);
  _objc_destroyWeak(param_1 + _DAT_1127503fc);
  _objc_destroyWeak(param_1 + _DAT_1127503e8);
  _objc_destroyWeak(param_1 + _DAT_1127503ec);
  _objc_destroyWeak(param_1 + _DAT_1127503e4);
  _objc_destroyWeak(param_1 + _DAT_11275040c);
  _objc_destroyWeak(param_1 + _DAT_112750408);
  _objc_destroyWeak(param_1 + _DAT_11275041c);
  _objc_destroyWeak(param_1 + _DAT_112750418);
  _objc_storeStrong(param_1 + _DAT_1127503f4,0);
  _objc_storeStrong(param_1 + _DAT_112750428,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127503dc,0);
  return;
}



/* Entry: 1067b5748; end: 1067b58cb; -[SCCountdownsPageContainerViewController initWithPageProvider:trayDismissalCallback:adConfigProviderService:isAdReminder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067b5748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f31c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112750430;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112750434);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112750434) = uVar2;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112750438;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275043c) = param_6;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c10f7c0();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112750440) = uVar2;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c189400();
    if (*(long *)((long)puVar1 + (long)_DAT_112750444) == 0) {
      func_0x00010b8373e4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112750444);
      *(undefined1 **)((long)puVar1 + (long)_DAT_112750444) = puVar3;
      _objc_release(uVar2);
      func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + (long)_DAT_112750444));
      func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + (long)_DAT_112750444));
      func_0x00010c219b20(puVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b58cc; end: 1067b58e7; -[SCCountdownsPageContainerViewController disablePullDownToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1067b58cc(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(long *)(param_1 + _DAT_112750440) == 0;
  }
  return bVar1;
}



/* Entry: 1067b58e8; end: 1067b58ef; -[SCCountdownsPageContainerViewController modalPresentationStyle] */

undefined8 FUN_1067b58e8(void)

{
  return 4;
}



/* Entry: 1067b58f0; end: 1067b5973; -[SCCountdownsPageContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b58f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f31c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_112750448) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112750430);
    func_0x00010bfc86e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112750448);
    *(undefined8 *)(param_1 + _DAT_112750448) = uVar1;
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1067b5974; end: 1067b5eb3; -[SCCountdownsPageContainerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b5974(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112750440) == 0) {
      func_0x00010c219b60(*(undefined8 *)(param_1 + _DAT_112750448),param_2,0);
      lVar4 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112750448);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + _DAT_112750448);
      uStack_90 = uVar21;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + _DAT_112750448);
      uStack_88 = uVar11;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + _DAT_112750448);
      uStack_80 = uVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar16;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef79e0(lVar4);
      _objc_release(puVar20);
      _objc_release(uVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(uVar8);
      _objc_release(uVar21);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(lVar4);
      uVar21 = *(undefined8 *)(param_1 + _DAT_112750444);
      uStack_98 = *(undefined8 *)(param_1 + _DAT_112750448);
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067a20(uVar21);
      _objc_release(puVar20);
      puStack_a0 = PTR_PTR_1126f31c0;
      plVar3 = &lStack_a8;
      lStack_a8 = param_1;
      _objc_msgSendSuper2(plVar3,PTR_s_viewWillAppear__1126853f0,param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      goto LAB_1067b5eb0;
    }
    if (*(long *)(param_1 + _DAT_11275044c) == 0) {
      puVar20 = PTR_PTR_1126cdff8;
      _objc_alloc(PTR_PTR_1126cdff8);
      func_0x00010c061440();
      puVar1 = PTR_PTR_1126b0a08;
      _objc_alloc();
      func_0x00010c055600();
      uVar21 = *(undefined8 *)(param_1 + _DAT_11275044c);
      *(undefined **)(param_1 + _DAT_11275044c) = puVar1;
      _objc_release(uVar21);
      func_0x00010c219e20(*(undefined8 *)(param_1 + _DAT_11275044c));
      func_0x00010c167420(*(undefined8 *)(param_1 + _DAT_11275044c));
      func_0x00010c219c20(*(undefined8 *)(param_1 + _DAT_11275044c));
      func_0x00010c219d60(*(undefined8 *)(param_1 + _DAT_11275044c));
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c013de0(puVar1);
      func_0x00010c222380(param_1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar4);
      _objc_release(puVar1);
      _objc_release(puVar20);
    }
  }
  puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar4);
  _objc_release(puVar20);
  plVar3 = *(long **)(param_1 + _DAT_11275044c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010c10c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(plVar3,PTR_s_presentIn__112620b70,param_1);
    return;
  }
LAB_1067b5eb0:
  ___stack_chk_fail();
  if ((plVar3 != (long *)0x0) && (*(long *)((long)plVar3 + (long)_DAT_112750440) == 0)) {
    return;
  }
  puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(plVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar20);
  return;
}



/* Entry: 1067b5eb4; end: 1067b5f33; -[SCCountdownsPageContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b5eb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_112750440) == 0)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067b5f34; end: 1067b6037; -[SCCountdownsPageContainerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b5f34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  if ((param_1 == 0) || (*(long *)(param_1 + _DAT_112750440) != 0)) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar2);
    _objc_release(puVar1);
    func_0x00010bf83180(*(undefined8 *)(param_1 + _DAT_11275044c));
  }
  else {
    puStack_38 = PTR_PTR_1126f31c0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  }
  lVar3 = (long)_DAT_112750430;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c0ec6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c0ec6e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1067b6038; end: 1067b609b; -[SCCountdownsPageContainerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b6038(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_112750440) == 0)) {
    puStack_28 = PTR_PTR_1126f31c0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112750448));
  }
  return;
}



/* Entry: 1067b609c; end: 1067b6107; -[SCCountdownsPageContainerViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b609c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (((param_4 == 2) && (*(long *)(param_1 + _DAT_112750440) == 1)) &&
     (*(long *)(param_1 + _DAT_112750434) != 0)) {
    (**(code **)(*(long *)(param_1 + _DAT_112750434) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067b6108; end: 1067b61ff; -[SCCountdownsPageContainerViewController tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1067b6108(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  double in_d3;
  double dVar4;
  
  _objc_retain(param_3);
  dVar4 = -1.0;
  if (param_4 == 8) {
    if (*(char *)(param_1 + _DAT_11275043c) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112750438);
      func_0x00010bef2520(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      fVar3 = 480.0;
      func_0x00010bfb2d20(0x43f00000);
      _objc_release(uVar2);
      _objc_release(uVar1);
      dVar4 = (double)fVar3 + 23.0;
    }
    else {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar4 = in_d3 * 0.7;
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return dVar4;
}



/* Entry: 1067b6200; end: 1067b6203; -[SCCountdownsPageContainerViewController cardToExpandTransition] */

void FUN_1067b6200(void)

{
  return;
}



/* Entry: 1067b6204; end: 1067b628b; -[SCCountdownsPageContainerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1067b6204(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf806a0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_3 + (long)_DAT_112750448);
    if (param_5 == lVar2) {
      func_0x00010bf2d520(param_1,param_2,lVar2,param_4,1);
      uVar3 = (uint)lVar2 ^ 1;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_5);
  return uVar3;
}



/* Entry: 1067b628c; end: 1067b6297; -[SCCountdownsPageContainerViewController cardTransitionWillBeginWithView:] */

void FUN_1067b628c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1067b6298; end: 1067b629b; -[SCCountdownsPageContainerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_1067b6298(void)

{
  return;
}



/* Entry: 1067b629c; end: 1067b62a7; -[SCCountdownsPageContainerViewController defaultProjectNameV2] */

undefined ** FUN_1067b629c(void)

{
  return &PTR____CFConstantStringClassReference_110e5f358;
}



/* Entry: 1067b62a8; end: 1067b62b3; -[SCCountdownsPageContainerViewController defaultSubProjectName] */

undefined ** FUN_1067b62a8(void)

{
  return &PTR____CFConstantStringClassReference_110e5f378;
}



/* Entry: 1067b62b4; end: 1067b62e3; -[SCCountdownsPageContainerViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067b62b4(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112750430);
  func_0x00010c07b400();
  uVar1 = 0xde;
  if (iVar2 == 0) {
    uVar1 = 0x29;
  }
  return uVar1;
}



/* Entry: 1067b62e4; end: 1067b62f3; -[SCCountdownsPageContainerViewController setDisablePullDownToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b62e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275042c) = param_3;
  return;
}



/* Entry: 1067b62f4; end: 1067b6373; -[SCCountdownsPageContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b62f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750434,0);
  _objc_storeStrong(param_1 + _DAT_11275044c,0);
  _objc_storeStrong(param_1 + _DAT_112750444,0);
  _objc_storeStrong(param_1 + _DAT_112750438,0);
  _objc_storeStrong(param_1 + _DAT_112750448,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750430,0);
  return;
}



/* Entry: 1067b6374; end: 1067b6417; -[SCCountdownsTrayViewController initWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1067b6374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f31c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112750450;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar3));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b6418; end: 1067b66f3; -[SCCountdownsTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067b6418(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f31c8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112750450;
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  uStack_88 = uVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar3;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 1067b66f4; end: 1067b66fb; -[SCCountdownsTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_1067b66f4(void)

{
  return 1;
}



/* Entry: 1067b66fc; end: 1067b673b; -[SCCountdownsTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b66fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750454,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750450,0);
  return;
}



/* Entry: 1067b673c; end: 1067b67af; -[SCGrapheneCountdownsFriendStoreMetric2 init] */

undefined1 * FUN_1067b673c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f31d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067b67b0; end: 1067b699b;  */

void FUN_1067b67b0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  puVar4 = param_2;
  puVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    puVar4 = &UNK_10f396c57;
    if ((int)param_2 == 0) {
      puVar4 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar4);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f396c62;
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
    puVar4 = &UNK_11093bf30;
    puVar1 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bf30,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar8 = 0;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = param_3;
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
  __Unwind_Resume();
  pcStack_a8 = FUN_1067b699c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar3 = puVar1;
  uVar7 = uVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar2[1];
    puVar5 = &UNK_10f396c57;
    if ((int)puVar4 == 0) {
      puVar5 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_118,puVar5);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar5 = &UNK_11093bf80;
    puVar3 = &uStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bf80,puVar3,uVar6);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar8 = 0;
    uVar7 = uVar6;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_148 = FUN_1067b6b88;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar1 = puVar3;
  uVar6 = uVar7;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar2[1];
    puVar4 = &UNK_10f396c57;
    if ((int)puVar5 == 0) {
      puVar4 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_1b8,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11093bfd0;
    puVar1 = &uStack_1d8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bfd0,puVar1,uVar7);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar8 = 0;
    uVar6 = uVar7;
    do {
      if ((&cStack_189)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar3);
  __Unwind_Resume();
  pcStack_1e8 = FUN_1067b6d74;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar2[1];
    puVar5 = &UNK_10f396c57;
    if ((int)puVar4 == 0) {
      puVar5 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_258,puVar5);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar5 = &UNK_11093c020;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093c020,&uStack_278,uVar6);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar8 = 0;
    do {
      if ((&cStack_229)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_2a8 = (undefined1 *)&uStack_2c0;
  pcStack_288 = FUN_1067b6f60;
  if (puVar3 != (undefined8 *)0x0) {
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_2a0 = puVar2;
    puStack_298 = puVar1;
    pppuStack_290 = &pppuStack_1f0;
    (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],&UNK_11093c070,&uStack_2c0,puVar5);
    func_0x00010007e5dc(&puStack_2a8);
  }
  return;
}



/* Entry: 1067b699c; end: 1067b6b87;  */

void FUN_1067b699c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  puVar3 = param_2;
  puVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    puVar3 = &UNK_10f396c57;
    if ((int)param_2 == 0) {
      puVar3 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f396c62;
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
    puVar3 = &UNK_11093bf80;
    puVar1 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bf80,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar8 = 0;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = param_3;
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
  __Unwind_Resume();
  pcStack_a8 = FUN_1067b6b88;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  puVar5 = puVar1;
  uVar7 = uVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar2[1];
    puVar4 = &UNK_10f396c57;
    if ((int)puVar3 == 0) {
      puVar4 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar4 = &UNK_11093bfd0;
    puVar5 = &uStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bfd0,puVar5,uVar6);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar8 = 0;
    uVar7 = uVar6;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_148 = FUN_1067b6d74;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar2[1];
    puVar3 = &UNK_10f396c57;
    if ((int)puVar4 == 0) {
      puVar3 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_1b8,puVar3);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar3 = &UNK_11093c020;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093c020,&uStack_1d8,uVar7);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar8 = 0;
    do {
      if ((&cStack_189)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  __Unwind_Resume();
  puStack_208 = (undefined1 *)&uStack_220;
  pcStack_1e8 = FUN_1067b6f60;
  if (puVar2 != (undefined8 *)0x0) {
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    puStack_200 = puVar1;
    puStack_1f8 = puVar5;
    pppuStack_1f0 = &ppuStack_150;
    (**(code **)(*(long *)puVar2[1] + 0x18))((long *)puVar2[1],&UNK_11093c070,&uStack_220,puVar3);
    func_0x00010007e5dc(&puStack_208);
  }
  return;
}



/* Entry: 1067b6b88; end: 1067b6d73;  */

void FUN_1067b6b88(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  puVar4 = param_2;
  puVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar4 = &UNK_10f396c57;
    if ((int)param_2 == 0) {
      puVar4 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar4);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f396c62;
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
    puVar4 = &UNK_11093bfd0;
    puVar1 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11093bfd0,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  puVar2 = param_3;
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
  __Unwind_Resume();
  pcStack_a8 = FUN_1067b6d74;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar2[1];
    puVar5 = &UNK_10f396c57;
    if ((int)puVar4 == 0) {
      puVar5 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_118,puVar5);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar5 = &UNK_11093c020;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11093c020,&uStack_138,uVar6);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar7 = 0;
    do {
      if ((&cStack_e9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_1067b6f60;
  if (puVar3 != (undefined8 *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    ppuStack_150 = &puStack_b0;
    (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],&UNK_11093c070,&uStack_180,puVar5);
    func_0x00010007e5dc(&puStack_168);
  }
  return;
}



/* Entry: 1067b6d74; end: 1067b6f5f;  */

void FUN_1067b6d74(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
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
  puVar1 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f396c57;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f396c62;
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
    puVar1 = &UNK_11093c020;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11093c020,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  puVar2 = param_3;
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1067b6f60;
  if (puVar3 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = puVar2;
    puStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11093c070,&uStack_e0,puVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 1067b6f60; end: 1067b6fd7;  */

void FUN_1067b6f60(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11093c070,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067b6fd8; end: 1067b7083; -[SCCountdownUserDataFetcherConfig initWithCurrentUser:profileUser:] */

undefined1 *
FUN_1067b6fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f31d8;
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



/* Entry: 1067b7084; end: 1067b70a7; -[SCCountdownUserDataFetcherConfig copyWithZone:] */

undefined8 FUN_1067b7084(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067b70a8; end: 1067b711b; -[SCCountdownUserDataFetcherConfig hash] */

undefined8 * FUN_1067b70a8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1067b719c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1067b71a8;
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
          goto LAB_1067b71a8;
        }
        goto LAB_1067b719c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1067b71a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1067b711c; end: 1067b71c3; -[SCCountdownUserDataFetcherConfig isEqual:] */

long FUN_1067b711c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067b719c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067b71a8;
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
          goto LAB_1067b71a8;
        }
        goto LAB_1067b719c;
      }
    }
    lVar3 = 0;
  }
LAB_1067b71a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067b71c4; end: 1067b71cb; -[SCCountdownUserDataFetcherConfig currentUser] */

undefined8 FUN_1067b71c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067b71cc; end: 1067b71d3; -[SCCountdownUserDataFetcherConfig profileUser] */

undefined8 FUN_1067b71cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067b71d4; end: 1067b7203; -[SCCountdownUserDataFetcherConfig .cxx_destruct] */

void FUN_1067b71d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067b7204; end: 1067b720f; +[SCCCountdownCountdownCreationComponent componentPath] */

undefined ** FUN_1067b7204(void)

{
  return &PTR____CFConstantStringClassReference_110e5f3b8;
}



/* Entry: 1067b7210; end: 1067b722f; -[SCCCountdownCountdownCreationComponent initWithViewModel:componentContext:runtime:] */

void FUN_1067b7210(void)

{
  FUN_1067b73cc(PTR_PTR_1126f31e0);
  return;
}



/* Entry: 1067b7230; end: 1067b7263; -[SCCCountdownCountdownCreationComponent setViewModel:] */

void FUN_1067b7230(void)

{
  func_0x0001067b73e0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067b73f0();
  func_0x0001067b7408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067b7264; end: 1067b729b; -[SCCCountdownCountdownCreationComponent viewModel] */

void FUN_1067b7264(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067b73fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b729c; end: 1067b72a7; +[SCCCountdownCountdownDetailsComponent componentPath] */

undefined ** FUN_1067b729c(void)

{
  return &PTR____CFConstantStringClassReference_110e5f3d8;
}



/* Entry: 1067b72a8; end: 1067b72c7; -[SCCCountdownCountdownDetailsComponent initWithViewModel:componentContext:runtime:] */

void FUN_1067b72a8(void)

{
  FUN_1067b73cc(PTR_PTR_1126f31e8);
  return;
}



/* Entry: 1067b72c8; end: 1067b72fb; -[SCCCountdownCountdownDetailsComponent setViewModel:] */

void FUN_1067b72c8(void)

{
  func_0x0001067b73e0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067b73f0();
  func_0x0001067b7408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067b72fc; end: 1067b7333; -[SCCCountdownCountdownDetailsComponent viewModel] */

void FUN_1067b72fc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067b73fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b7334; end: 1067b733f; +[SCCCountdownCountdownListComponent componentPath] */

undefined ** FUN_1067b7334(void)

{
  return &PTR____CFConstantStringClassReference_110e5f3f8;
}



/* Entry: 1067b7340; end: 1067b735f; -[SCCCountdownCountdownListComponent initWithViewModel:componentContext:runtime:] */

void FUN_1067b7340(void)

{
  FUN_1067b73cc(PTR_PTR_1126f31f0);
  return;
}



/* Entry: 1067b7360; end: 1067b7393; -[SCCCountdownCountdownListComponent setViewModel:] */

void FUN_1067b7360(void)

{
  func_0x0001067b73e0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067b73f0();
  func_0x0001067b7408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067b7394; end: 1067b73cb; -[SCCCountdownCountdownListComponent viewModel] */

void FUN_1067b7394(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067b73fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b73cc; end: 1067b7427;  */

void FUN_1067b73cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1067b7428; end: 1067b746f; -[SCCCountdownCountdownCreationContext initWithFriendStore:userProvider:grpcServiceFactory:cofStore:] */

void FUN_1067b7428(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f31f8;
  uStack_20 = param_1;
  func_0x0001067b7728();
  func_0x0001067b7720(&uStack_20);
  return;
}



/* Entry: 1067b7470; end: 1067b7483; +[SCCCountdownCountdownCreationContext valdiMarshallableObjectDescriptor] */

void FUN_1067b7470(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_11093c140;
  param_1[1] = &PTR_s_SCCFriendStoring_11093c230;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067b7484; end: 1067b74a7; -[SCCCountdownCountdownCreationViewModel initWithCurrentUser:] */

void FUN_1067b7484(void)

{
  func_0x0001067b7704(PTR_PTR_1126f3200);
  return;
}



/* Entry: 1067b74a8; end: 1067b74bb; +[SCCCountdownCountdownCreationViewModel valdiMarshallableObjectDescriptor] */

void FUN_1067b74a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093c280;
  param_1[1] = &PTR_DAT_11093c2c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067b74bc; end: 1067b75fb; -[SCCCountdownCountdownDetailsComponentViewContext initWithFriendStore:userProvider:grpcServiceFactory:cofStore:alertPresenter:pageDismissHandler:countdownEditHandler:adReminderCardOnTap:] */

undefined8 *
FUN_1067b74bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  uVar2 = param_10;
  _objc_retainBlock();
  _objc_release(param_10);
  puStack_68 = PTR_PTR_1126f3208;
  uStack_70 = param_1;
  func_0x0001067b7728();
  puVar3 = &uStack_70;
  func_0x0001067b7720(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  return puVar3;
}



/* Entry: 1067b75fc; end: 1067b760f; +[SCCCountdownCountdownDetailsComponentViewContext valdiMarshallableObjectDescriptor] */

void FUN_1067b75fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_11093c2d8;
  param_1[1] = &PTR_s_SCCFriendStoring_11093c3e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067b7610; end: 1067b7647; -[SCCCountdownCountdownDetailsComponentViewModel initWithCurrentUser:countdownId:] */

void FUN_1067b7610(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3210;
  uStack_20 = param_1;
  func_0x0001067b7728();
  func_0x0001067b7720(&uStack_20);
  return;
}



/* Entry: 1067b7648; end: 1067b765b; +[SCCCountdownCountdownDetailsComponentViewModel valdiMarshallableObjectDescriptor] */

void FUN_1067b7648(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093c420;
  param_1[1] = &PTR_DAT_11093c498;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067b765c; end: 1067b76a7; -[SCCCountdownCountdownListContext initWithFriendStore:userProvider:cofStore:] */

void FUN_1067b765c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3218;
  uStack_20 = param_1;
  func_0x0001067b7728();
  func_0x0001067b7720(&uStack_20);
  return;
}



/* Entry: 1067b76a8; end: 1067b76bb; +[SCCCountdownCountdownListContext valdiMarshallableObjectDescriptor] */

void FUN_1067b76a8(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_11093c4a8;
  param_1[1] = &PTR_s_SCCFriendStoring_11093c5b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067b76bc; end: 1067b76df; -[SCCCountdownCountdownListViewModel initWithCurrentUser:] */

void FUN_1067b76bc(void)

{
  func_0x0001067b7704(PTR_PTR_1126f3220);
  return;
}



/* Entry: 1067b76e0; end: 1067b7733; +[SCCCountdownCountdownListViewModel valdiMarshallableObjectDescriptor] */

void FUN_1067b76e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093c600;
  param_1[1] = &PTR_DAT_11093c648;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067b7734; end: 1067b779b; +[Countdown descriptor] */

void FUN_1067b7734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afcb60,
                        &PTR____CFConstantStringClassReference_110e5f418,&PTR_DAT_113163790,
                        &PTR_s_id_p_1131637c8,2,0x18,0x1c);
    puRam00000001136c4508 = puVar1;
  }
  return;
}



/* Entry: 1067b779c; end: 1067b7803; +[CountdownMetadata descriptor] */

void FUN_1067b779c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afcbb0,
                        &PTR____CFConstantStringClassReference_110e5f438,&PTR_DAT_113163790,
                        &PTR_DAT_1131638e8,5,0x30,0x1c);
    puRam00000001136c4510 = puVar1;
  }
  return;
}



/* Entry: 1067b7804; end: 1067b786b; +[CountdownAdMetadata descriptor] */

void FUN_1067b7804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afcc00,
                        &PTR____CFConstantStringClassReference_110e5f458,&PTR_DAT_113163790,
                        &PTR_DAT_113163888,3,0x20,0x1c);
    puRam00000001136c4518 = puVar1;
  }
  return;
}



/* Entry: 1067b786c; end: 1067b78e7; +[AdPushNotificationMetadata descriptor] */

undefined * FUN_1067b786c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4520 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afcc50,
                        &PTR____CFConstantStringClassReference_110e5f478,&PTR_DAT_113163790,
                        &PTR_s_iconURL_1131637a8,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4520 = puVar1;
  }
  return puRam00000001136c4520;
}



/* Entry: 1067b78e8; end: 1067b794f; +[CountdownDetail descriptor] */

void FUN_1067b78e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4528 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afcca0,
                        &PTR____CFConstantStringClassReference_110e5f498,&PTR_DAT_113163790,
                        &PTR_DAT_113163808,2,0x18,0x1c);
    puRam00000001136c4528 = puVar1;
  }
  return;
}



/* Entry: 1067b7950; end: 1067b79b7; +[ParticipantInfo descriptor] */

void FUN_1067b7950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afccf0,
                        &PTR____CFConstantStringClassReference_110e5f4b8,&PTR_DAT_113163790,
                        &PTR_s_userId_113163848,2,0x18,0x1c);
    puRam00000001136c4530 = puVar1;
  }
  return;
}



/* Entry: 1067b79b8; end: 1067b7a2f; -[SCBirthdayPageComposerContextProviderImpl initWithBirthdayPageContextProviderBlock:] */

undefined1 * FUN_1067b79b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b7a30; end: 1067b7a57; -[SCBirthdayPageComposerContextProviderImpl birthdayPageContext] */

void FUN_1067b7a30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b7a58; end: 1067b7a63; -[SCBirthdayPageComposerContextProviderImpl .cxx_destruct] */

void FUN_1067b7a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067b7a64; end: 1067b7b53; -[SCBirthdayPageComposerContextServiceProvider provide] */

void FUN_1067b7a64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ce000;
  _objc_alloc(PTR_PTR_1126ce000);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7880(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067b7b54; end: 1067b7c3b;  */

void FUN_1067b7b54(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ce008;
    _objc_alloc(PTR_PTR_1126ce008);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bff78a0(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067b7c3c; end: 1067b812f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b7c3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ce010;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112750468;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + _DAT_11275049c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + _DAT_112750478;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11275047c;
    _objc_loadWeakRetained();
    func_0x00010c02eac0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b0c98;
    _objc_alloc();
    func_0x00010c0368e0();
    lVar2 = param_1 + _DAT_112750480;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfb8b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (**(code **)(lVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_112750484;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_112750488;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfb9920();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b1548;
    _objc_alloc(PTR_PTR_1126b1548);
    func_0x00010c046040();
    lVar5 = lVar3;
    (**(code **)(lVar3 + 0x10))(lVar3,puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11275048c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_112750490;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf3f640();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar10 = PTR_PTR_1126ce018;
    _objc_alloc_init(PTR_PTR_1126ce018);
    lVar2 = lVar4;
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0100(puVar10);
    _objc_release(lVar2);
    func_0x00010c21e800(puVar10);
    lVar2 = lVar5;
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0660(puVar10);
    _objc_release(lVar2);
    func_0x00010c171b20(puVar10);
    func_0x00010c17df40(puVar10);
    lVar2 = param_1 + _DAT_112750494;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar13 = PTR_PTR_1126ce020;
    _objc_alloc();
    func_0x00010c040b80();
    lVar2 = param_1 + _DAT_112750468;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1067b8130;
    puStack_78 = &UNK_110841f80;
    lStack_70 = lVar11;
    puStack_68 = puVar13;
    _objc_retain(puVar13);
    _objc_retain(lVar11);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    puVar14 = PTR_PTR_1126ce028;
    _objc_alloc(PTR_PTR_1126ce028);
    func_0x00010c02ee60();
    _objc_release(puStack_68);
    _objc_release(lStack_70);
    _objc_release(puVar13);
    _objc_release(lVar11);
    _objc_release(lVar12);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(puVar7);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1067b8130; end: 1067b819f;  */

void FUN_1067b8130(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0b50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a0180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf500(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1c1bc0(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067b81a0; end: 1067b81db; -[SCBirthdayPageComposerContextServiceProvider end] */

void FUN_1067b81a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3230;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b81dc; end: 1067b82af; -[SCBirthdayPageComposerContextServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b81dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275049c);
  _objc_storeStrong(param_1 + _DAT_112750474,0);
  _objc_storeStrong(param_1 + _DAT_112750470,0);
  _objc_storeStrong(param_1 + _DAT_11275046c,0);
  _objc_destroyWeak(param_1 + _DAT_11275047c);
  _objc_destroyWeak(param_1 + _DAT_112750488);
  _objc_destroyWeak(param_1 + _DAT_112750484);
  _objc_destroyWeak(param_1 + _DAT_112750480);
  _objc_destroyWeak(param_1 + _DAT_112750478);
  _objc_destroyWeak(param_1 + _DAT_112750490);
  _objc_destroyWeak(param_1 + _DAT_112750468);
  _objc_destroyWeak(param_1 + _DAT_11275048c);
  _objc_destroyWeak(param_1 + _DAT_112750494);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750498);
  return;
}



/* Entry: 1067b82b0; end: 1067b848f; -[SCBirthdayPageComposerHandlersImpl initWithNavigationServices:friendProfileScopeExposer:chatScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:snapchatterDataFetcher:pageDismissAction:chatScopeServices:] */

undefined1 *
FUN_1067b82b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f3238;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar4);
    uVar4 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b8490; end: 1067b855f; -[SCBirthdayPageComposerHandlersImpl openChatWithUserId:] */

void FUN_1067b8490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067b8560;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b8560; end: 1067b8593;  */

void FUN_1067b8560(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b8594; end: 1067b8697; -[SCBirthdayPageComposerHandlersImpl _launchChatWithUserId:] */

void FUN_1067b8594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b3520;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffdd20();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22b00(uVar5,param_2,puVar2,puVar1,param_1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,uVar5,param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


