/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ddf694; end: 108ddf6eb; -[SCKeyService startFromKeychain] */

void FUN_108ddf694(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108ddf6ec;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 108ddf6ec; end: 108ddf6f3;  */

void FUN_108ddf6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startFromKeychainOnce_11258d9b8);
  return;
}



/* Entry: 108ddf6f4; end: 108ddf837; -[SCKeyService requestMasterKeyWithOptions:queue:completionHandler:] */

void FUN_108ddf6f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dbec0;
  _objc_alloc();
  func_0x00010c057e40();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108ddf838;
  puStack_88 = &UNK_1108b6770;
  _objc_retain();
  puStack_80 = puVar3;
  uStack_78 = param_4;
  lStack_70 = param_1;
  puStack_68 = puVar2;
  uStack_60 = param_5;
  uStack_58 = param_3;
  _objc_retain(puVar2);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_a0);
  puVar1 = puStack_68;
  _objc_retain(puVar3);
  _objc_release(puVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ddf838; end: 108ddfab3;  */

/* WARNING: Possible PIC construction at 0x000108ddf9f0: Changing call to branch */

void FUN_108ddf838(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar3 + 0x40) == 0) {
      func_0x00010be96a80();
      lVar3 = *(long *)(param_1 + 0x30);
    }
    lVar5 = *(long *)(lVar3 + 0x38);
    if (lVar5 == 0) {
      if ((*(ulong *)(param_1 + 0x48) & 1) == 0) {
        if (((uint)*(ulong *)(param_1 + 0x48) >> 1 & 1) == 0) {
          if (*(char *)(lVar3 + 0x68) != '\x01') {
            uVar4 = *(undefined8 *)(param_1 + 0x28);
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0xc2000000;
            pcStack_a0 = FUN_108ddfb2c;
            puStack_98 = &UNK_110849530;
            lVar3 = *(long *)(param_1 + 0x40);
            _objc_retain(lVar3);
            lStack_90 = lVar3;
            func_0x000107c27d8c(uVar4,&puStack_b0);
            lVar5 = lStack_90;
            goto LAB_108ddf93c;
          }
          puVar2 = PTR_PTR_1126dbec8;
          _objc_alloc(PTR_PTR_1126dbec8);
          func_0x00010c03c640();
          func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70));
          _objc_release(puVar2);
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78);
        }
        else {
          puVar2 = PTR_PTR_1126dbec8;
          _objc_alloc(PTR_PTR_1126dbec8);
          func_0x00010c03c640();
          func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70));
          _objc_release(puVar2);
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80);
        }
      }
      else {
        puVar2 = PTR_PTR_1126dbec8;
        _objc_alloc(PTR_PTR_1126dbec8);
        func_0x00010c03c640();
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70));
        _objc_release(puVar2);
        if ((*(byte *)(param_1 + 0x48) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2396f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x60),
                     PTR_s_showPromptWithRequestUUID__11266bfe0,*(undefined8 *)(param_1 + 0x38));
          return;
        }
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80);
      }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_addObject__11259c1f0,uVar4);
      return;
    }
    _objc_retain(lVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108ddfb14;
    puStack_70 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    lStack_68 = lVar5;
    uStack_60 = uVar4;
    _objc_retain(lVar5);
    func_0x000107c27d8c(uVar6,&puStack_88);
    _objc_release(lStack_68);
    _objc_release(uStack_60);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108ddfab4;
    puStack_40 = &UNK_110849530;
    lVar3 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar3);
    lStack_38 = lVar3;
    func_0x000107c27d8c(uVar4,&puStack_58);
    lVar5 = lStack_38;
  }
LAB_108ddf93c:
  _objc_release(lVar5);
  return;
}



/* Entry: 108ddfab4; end: 108ddfb13;  */

void FUN_108ddfab4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ef8158,0xffffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,5,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ddfb14; end: 108ddfb2b;  */

void FUN_108ddfb14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108ddfb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),6,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108ddfb2c; end: 108ddfb8b;  */

void FUN_108ddfb2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ef8158,0xfffffffffffff827,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,4,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ddfb8c; end: 108ddfcc3; -[SCKeyService setMasterKeyWithPassphrase:isUpdateOperation:queue:completionHandler:] */

void FUN_108ddfb8c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108ddfcc4; end: 108ddfe2b;  */

void FUN_108ddfcc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0);
  }
  else {
    _objc_copyWeak(auStack_60,param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_58 = *(undefined1 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010be908e0(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108ddfe2c; end: 108ddfeab;  */

void FUN_108ddfe2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0);
  }
  else {
    func_0x00010be899e0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ddfeac; end: 108ddfec3;  */

void FUN_108ddfeac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108ddfec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2,0,param_2);
  return;
}



/* Entry: 108ddfec4; end: 108ddff53; -[SCKeyService isPersistedKeyPresent:] */

void FUN_108ddfec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108ddff54;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108ddff54; end: 108ddff6f;  */

void FUN_108ddff54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108ddff6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(long *)(*(long *)(param_1 + 0x20) + 0x40) != 0);
  return;
}



/* Entry: 108ddff70; end: 108de00b7; -[SCKeyService removeMasterKeyRequestForUUID:] */

void FUN_108ddff70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108de0000;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108de00b8; end: 108de01e7; -[SCKeyService removeAuthorizationRequestForUUID:] */

void FUN_108de00b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108de0148;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108de01e8; end: 108de036f; -[SCKeyService cancelPromptForMasterKeyRequestUUIDs:] */

void FUN_108de01e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar2 = *(ulong *)(param_1 + 0x80);
        func_0x00010bf4b900(uVar2,param_2,uVar5);
        if ((uVar2 & 1) == 0) {
          lVar3 = *(long *)(param_1 + 0x70);
          func_0x00010c0e00e0(lVar3,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                              &PTR____CFConstantStringClassReference_110ef8158,0xffffffffffffffff,0)
          ;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f9600(lVar3,param_2,5,0,puVar4);
          _objc_release(puVar4);
          if (lVar3 != 0) {
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x70),param_2,uVar5);
          }
          _objc_release(lVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108de0370;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_108de03c8;
  puStack_150 = &UNK_110842e18;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf84340(*(undefined8 *)(param_3 + 0x60),param_2,&puStack_168);
  return;
}



/* Entry: 108de0370; end: 108de03c7; -[SCKeyService _deliverWhenMasterKeyAvailable] */

void FUN_108de0370(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108de03c8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf84340(*(undefined8 *)(param_1 + 0x60),param_2,&puStack_38);
  return;
}



/* Entry: 108de03c8; end: 108de04f7;  */

void FUN_108de03c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
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
        func_0x00010c0f9600(*(undefined8 *)(lStack_108 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar7 = *(long *)(lVar1 + 0x78);
  _objc_retain(lVar7);
  puVar6 = auStack_1f8;
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_230;
    do {
      lVar9 = 0;
      do {
        if (*plStack_230 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        lVar3 = *(long *)(lVar1 + 0x70);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010c0f9600(lVar3);
          func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x70));
        }
        _objc_release(lVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar6 = auStack_1f8;
      lVar2 = lVar7;
      puVar5 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  func_0x00010c12adc0(*(undefined8 *)(lVar1 + 0x78));
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_initWeak(auStack_298,puVar4);
  _objc_copyWeak(auStack_2a0,auStack_298);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  func_0x00010be908e0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_2a0);
  _objc_destroyWeak(auStack_298);
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 108de04f8; end: 108de0657; -[SCKeyService _deliverErrorForPassphraseAuth:] */

void FUN_108de04f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar5);
  puVar4 = auStack_e8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        lVar2 = *(long *)(param_1 + 0x70);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          func_0x00010c0f9600(lVar2);
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x70));
        }
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar4 = auStack_e8;
      lVar1 = lVar5;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x78));
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_initWeak(auStack_188,param_3);
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  func_0x00010be908e0(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 108de0658; end: 108de07a3; -[SCKeyService _retrieveMasterKeyFromRemoteWithPassprhase:completionHandler:] */

void FUN_108de0658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be908e0(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108de07a4; end: 108de0817;  */

void FUN_108de07a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    func_0x00010be96840(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108de0818; end: 108de082b;  */

void FUN_108de0818(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108de0828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  return;
}



/* Entry: 108de082c; end: 108de0d27; -[SCKeyService _retrieveMasterKeyWithKeyService:passprhase:completionHandler:] */

void FUN_108de082c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined *puVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_108de0ca4:
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c268140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release(lVar2);
      goto LAB_108de0ca4;
    }
    lVar4 = param_3;
    func_0x00010c268160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      puVar5 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c268140(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar6;
      FUN_108dde364(puVar6,lVar2,param_4,&PTR____CFConstantStringClassReference_110ef81d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c268160(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      FUN_108dde364(uVar8,lVar2,param_4,&PTR____CFConstantStringClassReference_110ef81f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(uVar8);
      _objc_release(uVar7);
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      lVar2 = param_3;
      func_0x00010c0db0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar16;
      func_0x00010bcb41bc(puVar16,puVar6,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar2);
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010c156d80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      FUN_108dde364();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      puVar11 = PTR_PTR_1126dbed0;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010bf0aec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar16;
      func_0x00010bf15d80(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010bf15d80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4140();
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(lVar2);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(uVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR____CFConstantStringClassReference_110ef8238;
      FUN_108de0d28(&PTR____CFConstantStringClassReference_110ef8238);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126bbf20;
      func_0x00010bdc1920(PTR_PTR_1126bbf20);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c11de00(uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      _objc_retain(uVar10);
      _objc_retain(puVar6);
      _objc_retain(uVar9);
      func_0x00010c25f440(uVar8);
      _objc_release(uVar15);
      _objc_release(puVar12);
      _objc_release(ppuVar14);
      _objc_release(uVar8);
      _objc_release(param_5);
      _objc_release(uVar10);
      _objc_release(puVar6);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(puVar6);
      _objc_release(uVar9);
      _objc_release(puVar11);
      _objc_release(puVar5);
      goto LAB_108de0cec;
    }
  }
  puVar16 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,0,puVar16);
LAB_108de0cec:
  _objc_release(puVar16);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108de0d28; end: 108de0dbb;  */

void FUN_108de0d28(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b8240;
  _objc_retain();
  func_0x00010c0707e0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef81b8;
  if ((int)puVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8198;
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108de0dbc; end: 108de16df;  */

void FUN_108de0dbc(long param_1,long param_2,ulong param_3,undefined *param_4,undefined8 param_5,
                  undefined *param_6,long param_7)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  undefined8 uVar22;
  int iVar23;
  undefined *puVar24;
  undefined *puStack_e0;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar19 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar24);
  if ((uVar19 & 1) == 0) {
    bVar1 = false;
    puStack_e0 = (undefined *)0x0;
LAB_108de1150:
    puVar24 = param_4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar24;
    if (puVar24 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c252ee0(param_2);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e00074(&PTR____CFConstantStringClassReference_110ef8258,
                  &PTR____CFConstantStringClassReference_110daafd8,puVar9,
                  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (puVar24 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar24);
    func_0x00010c11fde0();
    func_0x00010bf60600();
    puVar24 = PTR_PTR_1126b24e0;
    func_0x00010c252ee0(param_2);
    func_0x00010bfb0440(puVar24);
    puVar7 = PTR_PTR_1126dbee0;
    _objc_opt_new();
    puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c252ee0(param_2);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20a3c0(puVar7);
    _objc_release(puVar24);
    func_0x00010c1e76a0(puVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    lVar3 = param_2;
    func_0x00010c252ee0();
    if (lVar3 == 0x193) {
      puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar24;
      func_0x00010c0d3c80();
      _objc_release(puVar24);
      if (bVar1) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bdca360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(uVar2);
      }
      uVar19 = 0xfffffffffffff82b;
      puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar8 = puVar9;
      func_0x00010bf99240();
      iVar20 = (int)puVar8;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,puVar24);
      puVar8 = puVar24;
      func_0x00010bdfaa60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar3 = param_2;
      func_0x00010c252ee0();
      puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (lVar3 != 0x1ad) {
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = 0xfffffffffffffffe;
        puVar9 = puVar8;
        func_0x00010bf99240();
        iVar20 = (int)puVar9;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        _objc_release(puVar8);
        puVar8 = puVar24;
        (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
        goto LAB_108de167c;
      }
      puVar9 = *(undefined **)(param_1 + 0x20);
      func_0x00010bdca360();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = 0xfffffffffffff828;
      puVar4 = puVar8;
      func_0x00010bf99240();
      iVar20 = (int)puVar4;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar8);
      puVar8 = puVar24;
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
    }
    _objc_release(puVar9);
  }
  else {
    puStack_e0 = PTR_PTR_1126dbed8;
    _objc_alloc();
    func_0x00010c0206e0();
    bVar1 = puStack_e0 != (undefined *)0x0;
    if ((param_4 != (undefined *)0x0) || (puStack_e0 == (undefined *)0x0)) goto LAB_108de1150;
    func_0x00010c11fde0();
    func_0x00010bf60600();
    puVar24 = PTR_PTR_1126b24e0;
    func_0x00010c252ee0(param_2);
    func_0x00010bfb0440(puVar24);
    puVar7 = PTR_PTR_1126dbee0;
    _objc_opt_new();
    puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c252ee0(param_2);
    func_0x00010c0df780(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20a3c0(puVar7);
    _objc_release(puVar24);
    func_0x00010c1e76a0(puVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    puVar24 = puStack_e0;
    func_0x00010c086560(puStack_e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bcb4460(lVar3,puVar9,0,1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar19 = 0xfffffffffffff82f;
      iVar20 = 0;
      puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,puVar24);
LAB_108de165c:
      puVar8 = puVar24;
      func_0x00010bdfaa60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      puVar4 = puVar8;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar4 == (undefined *)0x0) ||
         (puVar24 = puVar4, func_0x00010bf529e0(), puVar10 = PTR__OBJC_CLASS___NSData_1126ae778,
         puVar24 != (undefined *)0x2)) {
        uVar19 = 0xfffffffffffff82e;
        iVar20 = 0;
        puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        iVar23 = 0;
      }
      else {
        puVar24 = puVar4;
        func_0x00010c0dfd40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf649c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        puVar24 = puVar4;
        func_0x00010c0dfd40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf649c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        if ((puVar5 == (undefined *)0x0) || (puVar10 == (undefined *)0x0)) {
          uVar19 = 0xfffffffffffff82d;
LAB_108de15f8:
          iVar20 = 0;
          puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          iVar23 = 0;
        }
        else {
          puVar24 = puVar5;
          func_0x00010c08fa60();
          if ((puVar24 != (undefined *)0x20) ||
             (puVar24 = puVar10, func_0x00010c08fa60(), puVar24 != (undefined *)0x10)) {
            uVar19 = 0xfffffffffffff82c;
            goto LAB_108de15f8;
          }
          puVar24 = PTR_PTR_1126bfb68;
          _objc_alloc();
          func_0x00010c00fd60();
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
          *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar24;
          _objc_release(uVar2);
          puVar24 = PTR_PTR_1126dbee8;
          _objc_alloc();
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar6;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = *(ulong *)(param_1 + 0x38);
          param_7 = *(long *)(param_1 + 0x40);
          puVar12 = puVar5;
          param_6 = puVar10;
          func_0x00010c05b560();
          iVar20 = (int)puVar12;
          uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
          *(undefined **)(*(long *)(param_1 + 0x20) + 0x40) = puVar24;
          _objc_release(uVar22);
          _objc_release(uVar2);
          _objc_release(uVar6);
          puVar24 = (undefined *)0x0;
          iVar23 = 1;
        }
        _objc_release(puVar5);
        _objc_release(puVar10);
      }
      _objc_release(puVar4);
      _objc_release(puVar8);
      puVar8 = puVar24;
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),iVar23);
      if (iVar23 == 0) goto LAB_108de165c;
      func_0x00010bea6400(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bdfaac0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(lVar3);
    _objc_release(puVar9);
  }
LAB_108de167c:
  _objc_release(puVar7);
  _objc_release(puStack_e0);
  _objc_release(puVar24);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(uVar19);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar21 == 0) {
LAB_108de1db0:
    _objc_release(lVar3);
  }
  else {
    puVar24 = puVar8;
    func_0x00010c268140();
    _objc_retainAutoreleasedReturnValue();
    if (puVar24 == (undefined *)0x0) {
      _objc_release(lVar21);
      goto LAB_108de1db0;
    }
    puVar7 = puVar8;
    func_0x00010c268160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar24);
    _objc_release(lVar21);
    _objc_release(lVar3);
    if (puVar7 != (undefined *)0x0) {
      puVar24 = *(undefined **)(param_2 + 0x38);
      _objc_retain(puVar24);
      if ((iVar20 == 0) || (puVar7 = puVar24, puVar24 == (undefined *)0x0)) {
        if (iVar20 != 0) {
          FUN_108e00074(&PTR____CFConstantStringClassReference_110ef8278,
                        &PTR____CFConstantStringClassReference_110daafd8,0,
                        *(undefined8 *)(param_2 + 0x18));
        }
        func_0x00010c156d40(PTR_PTR_1126bec38);
        _objc_retain(0);
        _objc_retain(0);
        puVar7 = PTR_PTR_1126bfb68;
        _objc_alloc();
        func_0x00010c00fd60();
        _objc_release(puVar24);
        _objc_release(0);
        _objc_release(0);
      }
      puVar10 = *(undefined **)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar10;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010c268140(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar24;
      FUN_108dde364(puVar24,puVar4,uVar19,&PTR____CFConstantStringClassReference_110ef81d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar24);
      _objc_release(puVar10);
      uVar22 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar22;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar8;
      func_0x00010c268160(puVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      FUN_108dde364(uVar2,puVar24,uVar19,&PTR____CFConstantStringClassReference_110ef81f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      _objc_release(uVar2);
      _objc_release(uVar22);
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010c156d80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar2;
      FUN_108dde364();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar11);
      puVar10 = puVar7;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c0646e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar12 = puVar5;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar12 = puVar24;
      func_0x00010bf64920(puVar24);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bcb41bc(uVar6,puVar12,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      uVar14 = uVar19;
      func_0x00010c08fa60();
      ppuVar17 = &PTR____CFConstantStringClassReference_110e29bf8;
      if (uVar14 < 0xc) {
        ppuVar17 = &PTR____CFConstantStringClassReference_110ef8298;
      }
      _objc_retain(ppuVar17);
      uVar11 = 0xffffffffce0038c9;
      if (iVar20 == 0) {
        uVar11 = 0x6761d4f;
      }
      func_0x00010b793ba4();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126dbef0;
      _objc_alloc();
      puVar13 = puVar8;
      func_0x00010bf0aec0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar9;
      func_0x00010bf15d80(puVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar2;
      func_0x00010bf15d80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4120();
      _objc_release(ppuVar17);
      _objc_release(uVar16);
      _objc_release(puVar15);
      _objc_release(puVar13);
      uVar16 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = &PTR____CFConstantStringClassReference_110ef82b8;
      FUN_108de0d28();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126bbf20;
      func_0x00010bdc1d20();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c11de00(uVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      _objc_retain(param_7);
      _objc_retain(param_6);
      _objc_retain(param_7);
      _objc_retain(uVar22);
      _objc_retain(puVar5);
      _objc_retain(puVar10);
      _objc_retain(puVar4);
      _objc_retain(puVar7);
      func_0x00010c25f460(uVar16);
      _objc_release(uVar18);
      _objc_release(puVar13);
      _objc_release(ppuVar17);
      _objc_release(uVar16);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(uVar22);
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(uVar22);
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar4);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(uVar2);
      _objc_release(puVar24);
      _objc_release(puVar7);
      _objc_release(uVar6);
      goto LAB_108de1dfc;
    }
  }
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_7 + 0x10))(param_7,2,0,puVar9);
LAB_108de1dfc:
  _objc_release(puVar9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar19);
  _objc_release(puVar8);
  return;
}



/* Entry: 108de16e0; end: 108de1e43; -[SCKeyService _registerMasterKeyWithKeyService:passprhase:isUpdateOperation:queue:completionHandler:] */

void FUN_108de16e0(long param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined *puVar20;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_108de1db0:
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c268140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release(lVar2);
      goto LAB_108de1db0;
    }
    lVar4 = param_3;
    func_0x00010c268160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      puVar20 = *(undefined **)(param_1 + 0x38);
      _objc_retain(puVar20);
      if ((param_5 == 0) || (puVar5 = puVar20, puVar20 == (undefined *)0x0)) {
        if (param_5 != 0) {
          FUN_108e00074(&PTR____CFConstantStringClassReference_110ef8278,
                        &PTR____CFConstantStringClassReference_110daafd8,0,
                        *(undefined8 *)(param_1 + 0x18));
        }
        func_0x00010c156d40(PTR_PTR_1126bec38);
        _objc_retain(0);
        _objc_retain(0);
        puVar5 = PTR_PTR_1126bfb68;
        _objc_alloc();
        func_0x00010c00fd60();
        _objc_release(puVar20);
        _objc_release(0);
        _objc_release(0);
      }
      puVar6 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c268140(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar7;
      FUN_108dde364(puVar7,lVar2,param_4,&PTR____CFConstantStringClassReference_110ef81d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c268160(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      FUN_108dde364(uVar9,lVar2,param_4,&PTR____CFConstantStringClassReference_110ef81f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(uVar9);
      _objc_release(uVar8);
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010c156d80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      FUN_108dde364();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar11);
      puVar12 = puVar5;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c0646e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar14 = puVar13;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar12;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar14);
      puVar14 = puVar7;
      func_0x00010bf64920(puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x00010bcb41bc(uVar10,puVar14,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      uVar16 = param_4;
      func_0x00010c08fa60();
      ppuVar18 = &PTR____CFConstantStringClassReference_110e29bf8;
      if (uVar16 < 0xc) {
        ppuVar18 = &PTR____CFConstantStringClassReference_110ef8298;
      }
      _objc_retain(ppuVar18);
      uVar11 = 0xffffffffce0038c9;
      if (param_5 == 0) {
        uVar11 = 0x6761d4f;
      }
      func_0x00010b793ba4();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126dbef0;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010bf0aec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar20;
      func_0x00010bf15d80(puVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar9;
      func_0x00010bf15d80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4120();
      _objc_release(ppuVar18);
      _objc_release(uVar17);
      _objc_release(puVar15);
      _objc_release(lVar2);
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = &PTR____CFConstantStringClassReference_110ef82b8;
      FUN_108de0d28();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126bbf20;
      func_0x00010bdc1d20();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c11de00(uVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      _objc_retain(param_7);
      _objc_retain(param_6);
      _objc_retain(param_7);
      _objc_retain(uVar8);
      _objc_retain(puVar13);
      _objc_retain(puVar12);
      _objc_retain(puVar6);
      _objc_retain(puVar5);
      func_0x00010c25f460(uVar17);
      _objc_release(uVar19);
      _objc_release(puVar15);
      _objc_release(ppuVar18);
      _objc_release(uVar17);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(uVar8);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar8);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar6);
      _objc_release(puVar14);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(uVar10);
      goto LAB_108de1dfc;
    }
  }
  puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_7 + 0x10))(param_7,2,0,puVar20);
LAB_108de1dfc:
  _objc_release(puVar20);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108de1e44; end: 108de1f6f;  */

void FUN_108de1e44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126dbee8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b560();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x40) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bea6400(*(undefined8 *)(param_1 + 0x20));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108de1f70;
  puStack_48 = &UNK_11084aaa8;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  _objc_retain(uVar5);
  uStack_40 = uVar5;
  func_0x000107c27d8c(uVar4,&puStack_60);
  func_0x00010bdfaac0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  return;
}



/* Entry: 108de1f70; end: 108de1f87;  */

void FUN_108de1f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108de1f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),6,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108de1f88; end: 108de21bf;  */

void FUN_108de1f88(long param_1,long param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e0a338;
  puVar3 = param_3;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dde9d8;
  puStack_68 = puVar4;
  func_0x00010c252ee0(param_2);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  FUN_108e00074(&PTR____CFConstantStringClassReference_110ef82d8,
                &PTR____CFConstantStringClassReference_110daafd8,puVar6,
                *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ef80f8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108de21c0;
  puStack_a0 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  puStack_98 = puVar3;
  uStack_90 = uVar2;
  _objc_retain(puVar3);
  func_0x000107c27d8c(uVar1,&puStack_b8);
  _objc_release(puStack_98);
  _objc_release(uStack_90);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108de21d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),2,0,*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 108de21c0; end: 108de21d7;  */

void FUN_108de21c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108de21d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),2,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108de21d8; end: 108de2477; -[SCKeyService _requestAssertionForPurpose:successHandler:failureHandler:retryCount:] */

void FUN_108de21d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126dbef8;
  func_0x00010c2b1e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5f00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920(PTR_PTR_1126bbf20);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108de2478;
  puStack_c0 = &UNK_110ac55c8;
  lStack_b8 = param_1;
  uStack_90 = param_6;
  _objc_retain(param_4);
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantArray_111183068;
  uStack_a8 = param_4;
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_88 = param_3;
  _objc_retain(param_5);
  uStack_e8 = param_6;
  uStack_a0 = param_5;
  _objc_copyWeak(auStack_f0,auStack_80);
  _objc_retain(param_5);
  uStack_e0 = param_3;
  _objc_retain(param_4);
  func_0x00010c25f400(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_f0);
  _objc_release(&PTR__OBJC_CLASS___NSConstantArray_111183068);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuStack_b0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108de2478; end: 108de26ef;  */

void FUN_108de2478(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dbf00;
  _objc_alloc();
  func_0x00010c0206e0();
  puVar2 = puVar1;
  func_0x00010c268140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_108de2534:
    puVar2 = PTR_PTR_1126b24e0;
    func_0x00010c252ee0(param_3);
    func_0x00010bfb0560(puVar2);
    uVar7 = *(ulong *)(param_2 + 0x48);
    uVar4 = *(ulong *)(param_2 + 0x28);
    func_0x00010bf529e0();
    if (uVar7 < uVar4) {
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar5);
      lVar6 = param_2 + 0x40;
      _objc_loadWeakRetained();
      if (lVar6 == 0) {
        (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),puVar1);
      }
      else {
        _objc_initWeak(auStack_68,lVar6);
        uVar5 = *(undefined8 *)(lVar6 + 0x30);
        _objc_copyWeak(auStack_80,auStack_68);
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        _objc_retain(uVar8);
        _objc_retain(puVar1);
        uStack_78 = *(undefined8 *)(param_2 + 0x50);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        _objc_retain(uVar9);
        uStack_70 = *(undefined8 *)(param_2 + 0x48);
        func_0x00010c0f7fe0(param_1,uVar5);
        _objc_release(uVar9);
        _objc_release(puVar1);
        _objc_release(uVar8);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar6);
      goto LAB_108de269c;
    }
  }
  else {
    puVar3 = puVar1;
    func_0x00010c268160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b24e0;
    if (puVar3 == (undefined *)0x0) goto LAB_108de2534;
    func_0x00010c252ee0(param_3);
    func_0x00010bfb0560(puVar2);
  }
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),puVar1);
LAB_108de269c:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108de26f0; end: 108de2743;  */

void FUN_108de26f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be908e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108de2744; end: 108de2ac7;  */

void FUN_108de2744(undefined8 param_1,long param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e0a338;
  puVar1 = param_4;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dde9d8;
  puStack_88 = puVar2;
  func_0x00010c252ee0(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  FUN_108e00074(&PTR____CFConstantStringClassReference_110ef82f8,
                &PTR____CFConstantStringClassReference_110daafd8,ppuVar4,
                *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18));
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b24e0;
  func_0x00010c252ee0(param_3);
  func_0x00010bfb0560(puVar1);
  uVar8 = *(ulong *)(param_2 + 0x48);
  uVar5 = *(ulong *)(param_2 + 0x28);
  func_0x00010bf529e0();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (uVar8 < uVar5) {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar6);
    lVar7 = param_2 + 0x40;
    _objc_loadWeakRetained();
    if (lVar7 == 0) {
      (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),param_4);
    }
    else {
      _objc_initWeak(auStack_b0,lVar7);
      uVar6 = *(undefined8 *)(lVar7 + 0x30);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_108de2ac8;
      puStack_e8 = &UNK_110ac5598;
      _objc_copyWeak(auStack_c8,auStack_b0);
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      _objc_retain(uVar9);
      uStack_d8 = uVar9;
      _objc_retain(param_4);
      uStack_c0 = *(undefined8 *)(param_2 + 0x50);
      uVar9 = *(undefined8 *)(param_2 + 0x38);
      puStack_e0 = param_4;
      _objc_retain(uVar9);
      uStack_b8 = *(undefined8 *)(param_2 + 0x48);
      uStack_d0 = uVar9;
      func_0x00010c0f7fe0(param_1,uVar6);
      _objc_release(uStack_d0);
      _objc_release(puStack_e0);
      _objc_release(uStack_d8);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_b0);
      ppuVar4 = &puStack_100;
    }
    _objc_release(lVar7);
    puVar1 = param_4;
  }
  else {
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110ef80f8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar2);
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),puVar1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar4 + 0x38));
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  lVar7 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar7 == 0) {
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
              (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  }
  else {
    func_0x00010be908e0(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 108de2ac8; end: 108de2b1b;  */

void FUN_108de2ac8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be908e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108de2b1c; end: 108de2bc3; -[SCKeyService _allowedFutureDateFromServer:] */

void FUN_108de2b1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11fde0(param_3);
  dVar3 = (double)lVar1;
  dVar4 = dVar3 / 1000.0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lVar1 = param_3;
  func_0x00010bf60600(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4 + (dVar3 - (double)lVar1 / 1000.0),PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 108de2bc4; end: 108de2c2b; -[SCKeyService _isAuthorizationAttemptAllowed] */

bool FUN_108de2bc4(double param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_2 + 0x48);
  if (lVar1 == 0) {
    func_0x00010be96220(param_2);
    lVar1 = *(long *)(param_2 + 0x48);
  }
  func_0x00010bf01820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar2 = true;
  }
  else {
    func_0x00010c26f3a0(lVar1);
    bVar2 = param_1 <= 0.0;
  }
  _objc_release(lVar1);
  return bVar2;
}



/* Entry: 108de2c2c; end: 108de2c9f; -[SCKeyService _announceEmptyAllowedFutureAuthorizationDate] */

void FUN_108de2c2c(undefined8 param_1)

{
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 108de2ca0; end: 108de2cb3;  */

void FUN_108de2ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),
             PTR_s_keyService_didChangeAllowedFutur_1125ff490,*(long *)(param_1 + 0x20),0,
             0x7fffffffffffffff);
  return;
}



/* Entry: 108de2cb4; end: 108de2cd3; -[SCKeyService _decideAttemptTimeByCOFWithCurrentAttempt:] */

undefined8 FUN_108de2cb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (4 < param_3) {
    func_0x00010be8cdc0();
  }
  return 0;
}



/* Entry: 108de2cd4; end: 108de2eef; -[SCKeyService _trackFailedAuthorizationAttemptWithAllowedFutureDate:] */

void FUN_108de2cd4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf01820();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x48) == 0) {
    func_0x00010be96220(param_1);
    if (*(long *)(param_1 + 0x48) == 0) {
      puVar4 = PTR_PTR_1126dbf10;
      _objc_alloc();
      puVar5 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05b700(puVar4,param_2,puVar6,1,puVar1);
      goto LAB_108de2ddc;
    }
  }
  puVar5 = PTR_PTR_1126dbf08;
  func_0x00010c2b1f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c0deaa0(lVar2);
  func_0x00010c1cf8e0(puVar5,param_2,lVar2 + 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bdf86e0(param_1,param_2,lVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(puVar6);
    puVar1 = puVar6;
  }
  else if (puVar6 != (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010bf433a0(puVar1,param_2,puVar6);
    puVar4 = puVar1;
    if (puVar3 != (undefined *)0x1) {
      puVar4 = puVar6;
    }
    _objc_retain(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar4;
  }
  func_0x00010c1673c0(puVar5,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
LAB_108de2ddc:
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar4;
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108de2ef0;
  puStack_60 = &UNK_110848ba8;
  puStack_58 = param_1;
  puStack_50 = puVar1;
  puStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar5,param_2,&puStack_78);
  _objc_release(puVar5);
  func_0x00010bea20e0(param_1);
  _objc_release(puStack_48);
  _objc_release(puStack_50);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 108de2ef0; end: 108de2f2f;  */

void FUN_108de2ef0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(lVar1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf3ec40(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c086a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,PTR_s_keyService_didChangeAllowedFutur_1125ff490,lVar1,uVar2,uVar3);
  return;
}



/* Entry: 108de2f30; end: 108de2f87; -[SCKeyService resetRateLimit] */

void FUN_108de2f30(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108de2f88;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 108de2f88; end: 108de2faf;  */

void FUN_108de2f88(long param_1)

{
  func_0x00010be8b740(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdcbb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__announceEmptyAllowedFutureAutho_112550870);
  return;
}



/* Entry: 108de2fb0; end: 108de2ff7; -[SCKeyService _startFromKeychainOnce] */

void FUN_108de2fb0(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010be96a80(param_1);
    func_0x00010be96220(param_1);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* Entry: 108de2ff8; end: 108de31c3; -[SCKeyService _retrievePersistedKeyFromKeychain] */

undefined8 FUN_108de2ff8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef8118);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar3;
    _objc_release(uVar7);
    uVar4 = *(ulong *)(param_1 + 0x40);
    if (uVar4 != 0) {
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0720c0(uVar4,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar6 & 1) == 0) {
        func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,
                            &PTR____CFConstantStringClassReference_110ef8118);
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x40) = 0;
        _objc_release(uVar7);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        puVar3 = PTR_PTR_1126bfb68;
        _objc_alloc();
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c0bc420(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c0646e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00fd60(puVar3,param_2,uVar7,uVar5);
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        *(undefined **)(param_1 + 0x38) = puVar3;
        _objc_release(uVar8);
        _objc_release(uVar5);
        _objc_release(uVar7);
        _objc_release(puVar2);
        func_0x00010bdfaac0(param_1);
        uVar7 = 1;
        goto LAB_108de31a0;
      }
    }
    _objc_release(puVar2);
  }
  uVar7 = 0;
LAB_108de31a0:
  _objc_release(puVar1);
  return uVar7;
}



/* Entry: 108de31c4; end: 108de31fb; -[SCKeyService _removePersistedKeyFromKeychain] */

void FUN_108de31c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef8118);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108de31fc; end: 108de3257; -[SCKeyService _setPersistedKeyIntoKeychain] */

void FUN_108de31fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,
                      *(undefined8 *)(param_1 + 0x40),0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1894c0(PTR_PTR_1126aef90,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110ef8118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108de3258; end: 108de338f; -[SCKeyService _retrieveAuthorizationAttemptFromKeychain] */

void FUN_108de3258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef8178);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar3;
    _objc_release(uVar7);
    uVar4 = *(ulong *)(param_1 + 0x48);
    if (uVar4 != 0) {
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0720c0(uVar4,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar6 & 1) == 0) {
        func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,
                            &PTR____CFConstantStringClassReference_110ef8178);
        uVar7 = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x48) = 0;
        _objc_release(uVar7);
      }
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108de3390; end: 108de33c7; -[SCKeyService _removeAuthorizationAttemptFromKeychain] */

void FUN_108de3390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef8178);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108de33c8; end: 108de3423; -[SCKeyService _setAuthorizationAttemptIntoKeychain] */

void FUN_108de33c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,
                      *(undefined8 *)(param_1 + 0x48),0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1894c0(PTR_PTR_1126aef90,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110ef8178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108de3424; end: 108de34bb; -[SCKeyService requestMeoAssertionWithPurpose:completionHandler:] */

void FUN_108de3424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108de34bc;
  puStack_50 = &UNK_11085b7b0;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 108de34bc; end: 108de35a3;  */

void FUN_108de34bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = 0xfffffffff1d0a59a;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = 0x72720053;
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108de35a4;
  puStack_60 = &UNK_110ac5628;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  puStack_a0 = puVar3;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108de3670;
  puStack_88 = &UNK_110859a38;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  _objc_retain(uVar4);
  uStack_80 = uVar4;
  func_0x00010be908e0(uVar5,param_2,uVar1,&puStack_78,&puStack_a0,0);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  return;
}



/* Entry: 108de35a4; end: 108de366f;  */

void FUN_108de35a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf0aec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c268140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c268160(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0db0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar5 + 0x10))(lVar5,uVar1,uVar2,uVar3,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108de3670; end: 108de368f;  */

void FUN_108de3670(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108de368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,0,param_2);
  return;
}



/* Entry: 108de3690; end: 108de38c7; -[SCKeyService retrieveMeoKeyWithAssertion:auth:signedNonce:completionHandler:] */

void FUN_108de3690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x108de379c;
  puStack_70 = &UNK_110852488;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  lStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108de38c8; end: 108de3aa3;  */

void FUN_108de38c8(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_4 != (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    goto LAB_108de3a64;
  }
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar9);
  if ((uVar1 & 1) == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126dbed8;
    _objc_alloc();
    func_0x00010c0206e0();
  }
  puVar4 = puVar9;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
LAB_108de39d4:
    param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0xfffffffffffffffe;
    param_5 = puVar4;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar8 = *(long *)(param_1 + 0x20);
    pcVar7 = *(code **)(lVar8 + 0x10);
    puVar4 = (undefined *)0x0;
    puVar2 = param_4;
  }
  else {
    puVar2 = puVar9;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) goto LAB_108de39d4;
    lVar8 = *(long *)(param_1 + 0x20);
    puVar4 = puVar9;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = *(code **)(lVar8 + 0x10);
    param_4 = (undefined *)0x0;
    puVar2 = puVar4;
  }
  (*pcVar7)(lVar8,puVar4);
  _objc_release(puVar2);
  _objc_release(puVar9);
LAB_108de3a64:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 108de3aa4; end: 108de3c03; -[SCKeyService registerMeoKeyWithAssertion:auth:key:keyType:operation:completionHandler:] */

void FUN_108de3aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108de3c04;
  puStack_90 = &UNK_110866970;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  lStack_60 = param_1;
  uStack_58 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108de3c04; end: 108de3d7b;  */

void FUN_108de3c04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  puVar2 = PTR_PTR_1126dbef0;
  _objc_alloc(PTR_PTR_1126dbef0);
  func_0x00010bff4120();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef82b8;
  FUN_108de0d28(&PTR____CFConstantStringClassReference_110ef82b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20(PTR_PTR_1126bbf20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108de3d7c;
  puStack_70 = &UNK_110962b48;
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar7);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108de3db4;
  puStack_98 = &UNK_1108ab6d0;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar7;
  _objc_retain(uVar6);
  uStack_90 = uVar6;
  func_0x00010c25f460(uVar3,param_2,ppuVar4,puVar2,0,&PTR__OBJC_CLASS___NSConstantArray_1111830b0,
                      puVar5,PTR___dispatch_main_q_11034be20,&puStack_88,&puStack_b0);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(puVar2);
  return;
}



/* Entry: 108de3d7c; end: 108de3db3;  */

void FUN_108de3d7c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252ee0(param_2);
                    /* WARNING: Could not recover jumptable at 0x000108de3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,1,param_2,0);
  return;
}



/* Entry: 108de3db4; end: 108de3e0b;  */

void FUN_108de3db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c252ee0(param_2);
  (**(code **)(lVar1 + 0x10))(lVar1,0,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de3e0c; end: 108de3f17; -[SCKeyService .cxx_destruct] */

void FUN_108de3e0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 108de3f18; end: 108de3fcb; -[SCKeyServiceAuthorizationAttempt initWithUserId:numberOfAttempts:allowedFutureDate:] */

undefined1 *
FUN_108de3f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe890;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108de3fcc; end: 108de3fef; -[SCKeyServiceAuthorizationAttempt copyWithZone:] */

undefined8 FUN_108de3fcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108de3ff0; end: 108de40b3; -[SCKeyServiceAuthorizationAttempt initWithCoder:] */

undefined1 * FUN_108de3ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe890;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108de40b4; end: 108de4127; -[SCKeyServiceAuthorizationAttempt encodeWithCoder:] */

void FUN_108de40b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db1318);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ef8338);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ef8358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de4128; end: 108de412f; -[SCKeyServiceAuthorizationAttempt preferFasterCoding] */

undefined8 FUN_108de4128(void)

{
  return 1;
}



/* Entry: 108de4130; end: 108de418b; -[SCKeyServiceAuthorizationAttempt encodeWithFasterCoder:] */

void FUN_108de4130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de418c; end: 108de420b; -[SCKeyServiceAuthorizationAttempt decodeWithFasterDecoder:] */

void FUN_108de418c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108de420c; end: 108de4293; -[SCKeyServiceAuthorizationAttempt setObject:forUInt64Key:] */

void FUN_108de420c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0xc7296cd4316ca4) {
    lVar2 = 0x18;
  }
  else {
    if (param_4 != 0xbefd6c8dd318b) goto LAB_108de4280;
    lVar2 = 8;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_108de4280:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de4294; end: 108de42b3; -[SCKeyServiceAuthorizationAttempt setSInt64:forUInt64Key:] */

void FUN_108de4294(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0xad1711eaed98f5) {
    *(undefined8 *)(param_1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 108de42b4; end: 108de42c7; +[SCKeyServiceAuthorizationAttempt fasterCodingVersion] */

undefined8 FUN_108de42b4(void)

{
  return 0x598a9b71c068b105;
}



/* Entry: 108de42c8; end: 108de42d3; +[SCKeyServiceAuthorizationAttempt fasterCodingKeys] */

undefined8 FUN_108de42c8(void)

{
  return 0x113299b18;
}



/* Entry: 108de42d4; end: 108de4343; -[SCKeyServiceAuthorizationAttempt isEqual:] */

bool FUN_108de42d4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x11372e978,0x11372e980,3,2);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_3 + 0x10) == *(long *)(param_1 + 0x10);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108de4344; end: 108de43ef; -[SCKeyServiceAuthorizationAttempt hash] */

ulong FUN_108de4344(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong auStack_40 [4];
  
  auStack_40[3] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980(uVar1);
  auStack_40[1] = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfde980();
  auStack_40[2] = lVar2;
  lVar3 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_40 + lVar3) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_40[3]) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar2 + 8);
}



/* Entry: 108de43f0; end: 108de43f7; -[SCKeyServiceAuthorizationAttempt userId] */

undefined8 FUN_108de43f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108de43f8; end: 108de43ff; -[SCKeyServiceAuthorizationAttempt numberOfAttempts] */

undefined8 FUN_108de43f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108de4400; end: 108de4407; -[SCKeyServiceAuthorizationAttempt allowedFutureDate] */

undefined8 FUN_108de4400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108de4408; end: 108de4437; -[SCKeyServiceAuthorizationAttempt .cxx_destruct] */

void FUN_108de4408(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de4438; end: 108de44f3; +[SCKeyServiceAuthorizationAttemptBuilder withKeyServiceAuthorizationAttempt:] */

void FUN_108de4438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dbf08;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0deaa0();
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = param_3;
  func_0x00010bf01820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108de44f4; end: 108de4527; -[SCKeyServiceAuthorizationAttemptBuilder build] */

void FUN_108de44f4(void)

{
  _objc_alloc(PTR_PTR_1126dbf10);
  func_0x00010c05b700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108de4528; end: 108de455f; -[SCKeyServiceAuthorizationAttemptBuilder setUserId:] */

long FUN_108de4528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108de4560; end: 108de4567; -[SCKeyServiceAuthorizationAttemptBuilder setNumberOfAttempts:] */

void FUN_108de4560(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108de4568; end: 108de459f; -[SCKeyServiceAuthorizationAttemptBuilder setAllowedFutureDate:] */

long FUN_108de4568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108de45a0; end: 108de45cf; -[SCKeyServiceAuthorizationAttemptBuilder .cxx_destruct] */

void FUN_108de45a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de45d0; end: 108de46d7; -[SCKeyServiceAuthorizationRequestHandler initWithUUID:passphrase:queue:authorizationHandler:] */

undefined1 *
FUN_108de45d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126fe898;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108de46d8; end: 108de4797; -[SCKeyServiceAuthorizationRequestHandler performWithResult:error:] */

void FUN_108de46d8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108de4798;
    puStack_50 = &UNK_1108523f8;
    lStack_40 = lVar1;
    uStack_38 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x000107c27d8c(uVar2,&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108de4798; end: 108de47ab;  */

void FUN_108de4798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108de47a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108de47ac; end: 108de47b3; -[SCKeyServiceAuthorizationRequestHandler UUID] */

undefined8 FUN_108de47ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108de47b4; end: 108de47bb; -[SCKeyServiceAuthorizationRequestHandler passphrase] */

undefined8 FUN_108de47b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108de47bc; end: 108de47c3; -[SCKeyServiceAuthorizationRequestHandler queue] */

undefined8 FUN_108de47bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108de47c4; end: 108de47cb; -[SCKeyServiceAuthorizationRequestHandler authorizationHandler] */

undefined8 FUN_108de47c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108de47cc; end: 108de4813; -[SCKeyServiceAuthorizationRequestHandler .cxx_destruct] */

void FUN_108de47cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de4814; end: 108de48bb; -[SCKeyServiceMasterKeyRequestHandler initWithQueue:completionHandler:] */

undefined1 *
FUN_108de4814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe8a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108de48bc; end: 108de49b7; -[SCKeyServiceMasterKeyRequestHandler performWithResultCode:masterKey:error:] */

void FUN_108de48bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108de49b8;
    puStack_68 = &UNK_110845188;
    _objc_retain(lVar1);
    lStack_50 = lVar1;
    uStack_48 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x000107c27d8c(uVar2,&puStack_80);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108de49b8; end: 108de49cb;  */

void FUN_108de49b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108de49c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108de49cc; end: 108de49fb; -[SCKeyServiceMasterKeyRequestHandler .cxx_destruct] */

void FUN_108de49cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de49fc; end: 108de4b13; -[SCKeyServicePassphrasePromptCoordinator initWithKeyService:featureSettingsService:performer:effects:] */

undefined1 *
FUN_108de49fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe8a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_3);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108de4b14; end: 108de4b5b; -[SCKeyServicePassphrasePromptCoordinator dealloc] */

void FUN_108de4b14(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126fe8a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108de4b5c; end: 108de4b97; -[SCKeyServicePassphrasePromptCoordinator showPromptWithRequestUUID:] */

void FUN_108de4b5c(long param_1)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beba410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showPassphrasePrompt_11258c2a8);
  return;
}


