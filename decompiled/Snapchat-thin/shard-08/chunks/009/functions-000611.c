/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106793668; end: 10679377f;  */

void FUN_106793668(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126cdd68);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106793780; end: 1067939d3;  */

void FUN_106793780(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126cdd68);
  if (param_1 == 0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_1);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  plVar9 = &lStack_128;
  func_0x00010054c81c(puVar1,plVar9,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar1 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar2);
      }
      plVar9 = *(long **)((long)puVar10 * 8);
      puVar3 = PTR_PTR_1126cdd70;
      FUN_106794434();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (puVar1 != puVar10);
    puVar1 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  lVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  __Unwind_Resume(lVar4);
  _objc_retain();
  _objc_retain(plVar9);
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9;
    func_0x00010c271e60(plVar9);
    _objc_retainAutoreleasedReturnValue();
    plVar6 = plVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cdd68;
    _objc_alloc(PTR_PTR_1126cdd68);
    plVar7 = plVar9;
    func_0x00010bf3fe40(plVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff760(puVar3);
    _objc_release(plVar7);
    _objc_retain(lVar4);
    puVar8 = puVar3;
    FUN_1067944a8(puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(plVar6);
    _objc_release(plVar5);
  }
  _objc_release(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1067939d4; end: 106793b5b;  */

void FUN_1067939d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c271e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cdd68;
    _objc_alloc(PTR_PTR_1126cdd68);
    lVar4 = param_2;
    func_0x00010bf3fe40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff760(puVar3);
    _objc_release(lVar4);
    _objc_retain(param_1);
    puVar5 = puVar3;
    FUN_1067944a8(puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106793b5c; end: 106793c2f;  */

void FUN_106793b5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfa3420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900(puVar2,param_2,lVar1,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126bf9a8;
    _objc_alloc(PTR_PTR_1126bf9a8);
    func_0x00010c0206e0();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106793c30; end: 106793ceb; -[SCMemoriesSnapFeaturedStory initWithCollectionId:featuredStoryJsonData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106793c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274fec0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274fec0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274fec4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274fec4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106793cec; end: 106793d0f; -[SCMemoriesSnapFeaturedStory copyWithZone:] */

undefined8 FUN_106793cec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106793d10; end: 106793d93; -[SCMemoriesSnapFeaturedStory hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106793d10(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274fec0);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274fec4);
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
LAB_106793e24:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106793e30;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274fec0);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11274fec0)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11274fec4);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11274fec4)) {
          func_0x00010c071ae0();
          goto LAB_106793e30;
        }
        goto LAB_106793e24;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106793e30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106793d94; end: 106793e4b; -[SCMemoriesSnapFeaturedStory isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106793d94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106793e24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106793e30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11274fec0);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274fec0)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11274fec4);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11274fec4)) {
          func_0x00010c071ae0();
          goto LAB_106793e30;
        }
        goto LAB_106793e24;
      }
    }
    lVar3 = 0;
  }
LAB_106793e30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106793e4c; end: 106793e5b; -[SCMemoriesSnapFeaturedStory collectionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106793e4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274fec0);
}



/* Entry: 106793e5c; end: 106793e6b; -[SCMemoriesSnapFeaturedStory featuredStoryJsonData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106793e5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274fec4);
}



/* Entry: 106793e6c; end: 106793eab; -[SCMemoriesSnapFeaturedStory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106793e6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274fec4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274fec0,0);
  return;
}



/* Entry: 106793eac; end: 106793eb7; +[SCMemoriesSnapFeaturedStory table] */

undefined * FUN_106793eac(void)

{
  return &UNK_10f3953b7;
}



/* Entry: 106793eb8; end: 106793feb; +[SCMemoriesSnapFeaturedStory immutableObjectParse:bufferSize:] */

void FUN_106793eb8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126cdd68;
  _objc_alloc(PTR_PTR_1126cdd68);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    if ((6 < uVar3) && (*(short *)((long)piVar1 + (6 - lVar5)) != 0)) {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      goto LAB_106793f90;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_106793f90:
  func_0x00010bfff760(puVar4,param_2,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106793fec; end: 10679400f; +[SCMemoriesSnapFeaturedStory objectClassFunctionPointer] */

undefined1  [16] FUN_106793fec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106794008;
  auVar1._0_8_ = 0x106794000;
  return auVar1;
}



/* Entry: 106794010; end: 1067940db;  */

undefined1 * FUN_106794010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126f3088;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1067940dc; end: 106794433;  */

void FUN_1067940dc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bf3fe40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar5,&UNK_10f3953d3);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bf3fe40(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar5,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar5;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar5;
            _sqlite3_column_int64(puVar5,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cdd68);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_106794384;
            puVar5 = PTR_PTR_1126cdd70;
            _objc_alloc(PTR_PTR_1126cdd70);
            puVar2 = puVar3;
            func_0x00010bf3fe40(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bfa3420(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_106794010(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_1067941c4;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cdd68);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126cdd70;
        _objc_alloc(PTR_PTR_1126cdd70);
        puVar2 = puVar3;
        func_0x00010bf3fe40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bfa3420(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_106794010(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_1067941c4:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_10679438c;
      }
LAB_106794384:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_10679438c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106794434; end: 1067944a7;  */

void FUN_106794434(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1067940dc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067944a8; end: 1067946bb;  */

void FUN_1067944a8(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cdd70;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1067940dc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126cdd70;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126cdd70;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bf3fe40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bfa3420(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_106794010(puVar4,0xffffffffffffffff,puVar2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar4 = param_1;
    func_0x00010bf3fe40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010bfa3420(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067946bc; end: 10679471b;  */

void FUN_1067946bc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cdd68;
    _objc_alloc(PTR_PTR_1126cdd68);
    func_0x00010bfff760();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10679471c; end: 10679474b; -[SCMemoriesSnapFeaturedStoryChangeRequest .cxx_destruct] */

void FUN_10679471c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10679474c; end: 106794757; -[SCMemoriesSnapFeaturedStoryChangeRequest table] */

undefined * FUN_10679474c(void)

{
  return &UNK_10f3953b7;
}



/* Entry: 106794758; end: 10679479f; -[SCMemoriesSnapFeaturedStoryChangeRequest createTableWithSQLite:] */

void FUN_106794758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dddf3d8,0x95,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1067947a0; end: 106794b27; -[SCMemoriesSnapFeaturedStoryChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1067947a0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1067946bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106794b28(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f395459);
    if (lVar6 == 0) goto LAB_106794ac4;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106794ac4;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cdd68);
    func_0x00010c21c9a0(puVar7);
LAB_106794aac:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f395422);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cdd68);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106794ad0;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106794ad0;
    }
    FUN_1067946bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106794b28(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3954a3);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126cdd68);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106794aac;
      }
    }
LAB_106794ac4:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106794ad0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106794b28; end: 106794d73;  */

ulong FUN_106794b28(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_106794c28;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_106794c28;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_106794be8;
    uVar9 = 0;
  }
  else {
LAB_106794be8:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_106794c28:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010bfa3420();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar5 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    pcVar6 = pcVar5;
    _objc_retainAutorelease(pcVar5);
    func_0x00010bf25f00();
    pcVar7 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    uVar10 = param_1;
    func_0x0001001d1030(param_1,pcVar6,pcVar7);
  }
  _objc_release(pcVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce220(param_1,6,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106794d74; end: 106794daf;  */

void FUN_106794d74(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106794db0; end: 106794e3f;  */

void FUN_106794db0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c240200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x000107d6ae7c(uVar1,uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106794e40; end: 106794ee3; -[SCMemoriesStoryMessageSender initWithTextSender:externalMediaPreparer:] */

undefined1 *
FUN_106794e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3090;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106794ee4; end: 10679538b; -[SCMemoriesStoryMessageSender sendMemoriesStoryMessage:conversations:additionalText:platformAnalytics:additionalTextPlatformAnalytics:completionHandler:] */

void FUN_106794ee4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_150;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar3 = param_4;
  puVar12 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != (undefined *)0x0) &&
     (puVar2 = param_4, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
    puVar3 = param_3;
    func_0x00010c0c4900();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar5 = param_6;
        func_0x00010c294d60(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be796a0(param_1);
        _objc_release(uVar5);
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar4 = param_5;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puStack_150 = (undefined *)0x0;
    }
    else {
      puStack_150 = PTR_PTR_1126be800;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010c051920();
      _objc_release(puVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cdd78;
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_alloc_init();
    puVar4 = param_3;
    func_0x00010c0c4900(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bd86420();
    puVar2 = puVar12;
    func_0x00010c0d3c80();
    func_0x00010c206120(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c25b6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20dd80(puVar3);
    _objc_release(puVar4);
    puVar12 = PTR_PTR_1126be930;
    _objc_alloc_init();
    func_0x00010c1c6640();
    puVar2 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    func_0x00010c1fea60();
    puVar4 = param_3;
    func_0x00010c0c4900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar6 = puVar4;
    func_0x000100504554(puVar4,&PTR___NSConcreteGlobalBlock_11093afd8);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b28f8;
    _objc_retain(puVar6);
    _objc_retain(param_6);
    _objc_retain(puVar2);
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar7 = puVar4;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar8 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar9 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60();
    _objc_release(puVar6);
    puVar10 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_6);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar3);
    puVar4 = puVar10;
    puVar3 = puStack_150;
    puVar12 = param_4;
    func_0x00010c15c260(uVar5);
    _objc_release(puVar10);
    _objc_release(uVar5);
    _objc_release(puStack_150);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010c23fe00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0c3fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c240200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c10a380(uVar5);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10679538c; end: 1067954ef; -[SCMemoriesStoryMessageSender _prepareUploadForMemoriesStoryMedia:trackingId:conversationIds:] */

void FUN_10679538c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c240200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10a380(uVar5,param_2,uVar1,uVar2,uVar4,param_4,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1067954f0; end: 10679551f; -[SCMemoriesStoryMessageSender .cxx_destruct] */

void FUN_1067954f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106795520; end: 106795603; -[SCMemoriesStoryMessagingServiceProvider provide] */

void FUN_106795520(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cdd80;
  _objc_alloc(PTR_PTR_1126cdd80);
  func_0x00010c02afa0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106795604; end: 106795643;  */

void FUN_106795604(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106795644; end: 1067956ef; -[SCMemoriesStoryMessagingServiceProvider _memoriesStoryMessageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106795644(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_11274fee0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11274fee4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf9e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126cdd88;
  _objc_alloc(PTR_PTR_1126cdd88);
  func_0x00010c051a80();
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067956f0; end: 106795733; -[SCMemoriesStoryMessagingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067956f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274fee0);
  _objc_destroyWeak(param_1 + _DAT_11274fee4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fee8);
  return;
}



/* Entry: 106795734; end: 106795b8b; -[SCMusicRecommendationProvider initWithMusicRecommendationServices:musicExperiments:] */

undefined8 *
FUN_106795734(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined **unaff_x26;
  undefined *puVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR_PTR_1126f3098;
  puVar2 = &uStack_88;
  puVar3 = PTR_s_init_1125d9248;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar13 = puVar2[1];
    puVar2[1] = puVar3;
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar13 = puVar2[3];
    puVar2[3] = puVar3;
    _objc_release(uVar13);
    uVar13 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010c0d3080();
    *(byte *)(puVar2 + 6) = (byte)uVar4;
    _objc_release(uVar13);
    bVar1 = *(byte *)(puVar2 + 6);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    if ((bVar1 & 1) == 0) {
      puVar15 = puVar2 + 4;
      uVar13 = *puVar15;
      *puVar15 = puVar3;
      _objc_release(uVar13);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      uVar13 = puVar2[5];
      puVar2[5] = puVar3;
      _objc_release(uVar13);
      puVar7 = (undefined *)*puVar15;
      func_0x00010bf65f60(0x3fc3333340000000,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010c1231e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae568;
      _objc_opt_new(PTR_PTR_1126ae568);
      puVar9 = puVar5;
      func_0x00010bf582a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = (undefined *)puVar2[2];
      puVar2[2] = puVar9;
    }
    else {
      puVar15 = puVar2 + 7;
      uVar13 = *puVar15;
      *puVar15 = puVar3;
      _objc_release(uVar13);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar13 = puVar2[8];
      puVar2[8] = puVar3;
      _objc_release(uVar13);
      puVar7 = PTR_PTR_1126c4410;
      _objc_alloc();
      uVar13 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d3800();
      func_0x00010bffa800();
      _objc_release(uVar13);
      ppuStack_78 = &PTR____CFConstantStringClassReference_110df42d8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar7;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)*puVar15;
      func_0x00010bf65f60(0x3fc3333340000000,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_3;
      func_0x00010c1231e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae568;
      _objc_opt_new(PTR_PTR_1126ae568);
      puVar6 = puVar16;
      func_0x00010bf582c0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = puVar2[2];
      puVar2[2] = puVar6;
      _objc_release(uVar13);
      _objc_release(puVar9);
    }
    _objc_release(puVar16);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_initWeak(auStack_90,puVar2);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106795b8c;
    puStack_a0 = &UNK_1108531d0;
    unaff_x26 = &puStack_b8;
    puVar3 = auStack_90;
    _objc_copyWeak(auStack_98,puVar3);
    ppuVar10 = &puStack_b8;
    _objc_retainBlock(ppuVar10);
    uVar11 = puVar2[2];
    func_0x00010bf5fd60();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bf87460();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = puVar2[9];
    puVar2[9] = uVar12;
    _objc_release(uVar14);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(ppuVar10);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_3);
  _objc_retain(puVar3);
  puVar2 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar2);
  func_0x00010bdff8e0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 106795b8c; end: 106795bd3;  */

void FUN_106795b8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff8e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106795bd4; end: 106795bff; -[SCMusicRecommendationProvider recommendationForContext:] */

void FUN_106795bd4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0dff20(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106795c00; end: 106795c97; -[SCMusicRecommendationProvider updatePossibleContexts:] */

void FUN_106795c00(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010bedd8a0(param_1,param_2,param_3);
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf4b900(uVar2,param_2,param_3);
      if ((uVar2 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf00560(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar1,param_2,uVar3);
        _objc_release(uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106795c98; end: 106795d67; -[SCMusicRecommendationProvider _didReceiveRecommendations:] */

void FUN_106795c98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0865c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    while (lVar1 != 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,lVar3,lVar1);
      }
      lVar4 = lVar2;
      func_0x00010c0d9ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar3);
      lVar1 = lVar4;
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106795d68; end: 106795f4b; -[SCMusicRecommendationProvider _updatePossibleContextsMapping:] */

void FUN_106795d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010bfdc2a0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df42d8;
  if ((int)uVar6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f4c478;
  }
  _objc_retain(ppuVar1);
  uVar3 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  if ((uVar4 & 1) == 0) {
    if (uVar3 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar5,ppuVar1);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,uVar3,ppuVar1);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0e00e0(uVar6,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar6);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar8 = *(undefined **)(param_1 + 0x40);
    func_0x00010c0e00e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110df42d8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (puVar9 != (undefined *)0x0) {
      puVar5 = puVar9;
    }
    func_0x00010c1d0640(puVar7,param_2,puVar5,&PTR____CFConstantStringClassReference_110df42d8);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar9 = *(undefined **)(param_1 + 0x40);
    func_0x00010c0e00e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110f4c478);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar2 = puVar5;
    }
    func_0x00010c1d0640(puVar7,param_2,puVar2,&PTR____CFConstantStringClassReference_110f4c478);
    _objc_release(puVar5);
    _objc_release(puVar9);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar7);
    _objc_release(puVar7);
  }
  _objc_release(uVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106795f4c; end: 106795f53; -[SCMusicRecommendationProvider recommendations] */

undefined8 FUN_106795f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106795f54; end: 106795fcb; -[SCMusicRecommendationProvider .cxx_destruct] */

void FUN_106795f54(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106795fcc; end: 1067960d7; -[SCAddSoundPillOperaLayerView initWithDelegate:scopeExposer:pillState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106795fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f30a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274ff10),param_3);
    lVar3 = (long)_DAT_11274ff14;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274ff18;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c1fbe00(puVar1);
    func_0x00010bdee0a0(puVar1);
    func_0x00010bdf5800(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067960d8; end: 10679617b; -[SCAddSoundPillOperaLayerView setFullPageSafeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067960d8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  ushort uVar2;
  
  pdVar1 = (double *)(param_5 + _DAT_11274ff1c);
  uVar2 = NEON_uminv(CONCAT26(-(ushort)(param_4 == pdVar1[3]),
                              CONCAT24(-(ushort)(param_3 == pdVar1[2]),
                                       CONCAT22(-(ushort)(param_2 == pdVar1[1]),
                                                -(ushort)(param_1 == *pdVar1)))),2);
  if ((uVar2 & 1) == 0) {
    func_0x00010c181140(*(undefined8 *)(param_5 + _DAT_11274ff20));
    func_0x00010c181140(param_3,*(undefined8 *)(param_5 + _DAT_11274ff24));
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
  }
  return;
}



/* Entry: 10679617c; end: 106796257; -[SCAddSoundPillOperaLayerView setupForFirstUse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679617c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274ff28;
  if (*(long *)(param_1 + lVar5) == 0) {
    lVar4 = (long)_DAT_11274ff10;
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c4808;
      _objc_alloc();
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c00b380();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_11274ff14),PTR_s_exposeScope__1125c4f30,
                 *(undefined8 *)(param_1 + lVar5));
      return;
    }
  }
  return;
}



/* Entry: 106796258; end: 106796307; -[SCAddSoundPillOperaLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106796258(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c082800();
  if ((((int)uVar1 == 0) || (uVar1 = param_3, func_0x00010c074c20(), (uVar1 & 1) != 0)) ||
     (func_0x00010bf01b40(param_3), dVar4 <= 0.0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = (long)_DAT_11274ff30;
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar3));
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bfe3a40(uVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106796308; end: 10679656b; -[SCAddSoundPillOperaLayerView _createFullPageSafeLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106796308(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  lVar12 = (long)_DAT_11274ff34;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  func_0x00010bef9680(param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11274ff20);
  *(undefined8 *)(param_1 + _DAT_11274ff20) = uVar10;
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11274ff24);
  *(undefined8 *)(param_1 + _DAT_11274ff24) = uVar10;
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar12);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_e8,lVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1067966b0;
  puStack_f8 = &UNK_110849710;
  _objc_copyWeak(auStack_f0,auStack_e8);
  ppuVar7 = &puStack_110;
  _objc_retainBlock(ppuVar7);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1067966f8;
  puStack_120 = &UNK_11084d688;
  _objc_copyWeak(auStack_118,auStack_e8);
  ppuVar8 = &puStack_138;
  _objc_retainBlock(ppuVar8);
  puVar1 = PTR_PTR_1126af4a8;
  _objc_alloc();
  func_0x00010c0311a0();
  uVar10 = *(undefined8 *)(lVar4 + _DAT_11274ff2c);
  *(undefined **)(lVar4 + _DAT_11274ff2c) = puVar1;
  _objc_release(uVar10);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_118);
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e8);
  return;
}



/* Entry: 10679656c; end: 1067966af; -[SCAddSoundPillOperaLayerView _createViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679656c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1067966b0;
  puStack_68 = &UNK_110849710;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar1 = &puStack_80;
  _objc_retainBlock(ppuVar1);
  puStack_a8 = puVar3;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1067966f8;
  puStack_90 = &UNK_11084d688;
  _objc_copyWeak(auStack_88,auStack_58);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR_PTR_1126af4a8;
  _objc_alloc();
  func_0x00010c0311a0();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274ff2c);
  *(undefined **)(param_1 + _DAT_11274ff2c) = puVar3;
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1067966b0; end: 10679673f;  */

void FUN_1067966b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106796740; end: 1067967cf; -[SCAddSoundPillOperaLayerView _attachAddSoundPillView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106796740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11274ff30;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bdfb3e0(param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar2));
  func_0x00010befbb60(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bde64b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainAddSoundPillView_1125572c8);
  return;
}



/* Entry: 1067967d0; end: 10679681b; -[SCAddSoundPillOperaLayerView _detachAddSoundPillView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067967d0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11274ff30));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10679681c; end: 106796a3f; -[SCAddSoundPillOperaLayerView _constrainAddSoundPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10679681c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11274ff30;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11274ff34;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4022000000000000,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08e400(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0x4024000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf34860(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf49520(0xc024000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 0x4044000000000000;
  uVar12 = uVar11;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar16;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(lVar2 + _DAT_11274ff1c);
}



/* Entry: 106796a40; end: 106796a57; -[SCAddSoundPillOperaLayerView fullPageSafeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106796a40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ff1c);
}



/* Entry: 106796a58; end: 106796b03; -[SCAddSoundPillOperaLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106796a58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ff30,0);
  _objc_storeStrong(param_1 + _DAT_11274ff2c,0);
  _objc_storeStrong(param_1 + _DAT_11274ff24,0);
  _objc_storeStrong(param_1 + _DAT_11274ff20,0);
  _objc_storeStrong(param_1 + _DAT_11274ff34,0);
  _objc_storeStrong(param_1 + _DAT_11274ff28,0);
  _objc_storeStrong(param_1 + _DAT_11274ff18,0);
  _objc_storeStrong(param_1 + _DAT_11274ff14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ff10);
  return;
}



/* Entry: 106796b04; end: 106796c17; +[SCAddSoundPillOperaLayerViewController layerViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:addSoundPillScopeExposer:recommendationProvider:musicExperiments:lensMetadataStoreProvider:] */

void FUN_106796b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cdd90;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0019c0();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106796c18; end: 106796dc7; -[SCAddSoundPillOperaLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:addSoundPillScopeExposer:recommendationProvider:musicExperiments:lensMetadataStoreProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106796c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f30a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11274ff38;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274ff3c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274ff40;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274ff44;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ff48);
    *(undefined **)((long)puVar1 + (long)_DAT_11274ff48) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0ec180();
    *(char *)((long)puVar1 + (long)_DAT_11274ff4c) = (char)uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106796dc8; end: 106796e2b; -[SCAddSoundPillOperaLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106796dc8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cdd98;
  _objc_alloc();
  func_0x00010c00ad20();
  lVar3 = (long)_DAT_11274ff50;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106796e2c; end: 106796e83; -[SCAddSoundPillOperaLayerViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106796e2c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f30a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  func_0x00010be19d00(param_1);
  func_0x00010c1a1600(*(undefined8 *)(param_1 + _DAT_11274ff50));
  return;
}



/* Entry: 106796e84; end: 1067970f7; -[SCAddSoundPillOperaLayerViewController _fullPageInsetsForLayerView] */

double FUN_106796e84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = param_5;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar5 = param_1;
  uVar8 = param_2;
  uVar9 = param_3;
  uVar10 = param_4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar3 = param_5;
  func_0x00010c0f3ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(uVar1,param_6,uVar4);
  dVar6 = dVar5;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c08c520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  _objc_release(uVar1);
  dVar7 = dVar5;
  _CGRectGetMinY(dVar5,uVar8,uVar9,uVar10);
  _CGRectGetMinX(dVar5,uVar8,uVar9,uVar10);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGRectGetMinY(dVar5,uVar8,uVar9,uVar10);
  _objc_release(uVar1);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _CGRectGetMinX(dVar5,uVar8,uVar9,uVar10);
  _objc_release(param_5);
  return -(dVar7 - dVar6);
}



/* Entry: 1067970f8; end: 106797147; -[SCAddSoundPillOperaLayerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067970f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f30a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c228a80(*(undefined8 *)(param_1 + _DAT_11274ff50));
  return;
}



/* Entry: 106797148; end: 1067972b7; -[SCAddSoundPillOperaLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106797148(undefined *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010c071ae0(param_3,param_2,param_4);
  if ((param_3 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010beb4120();
    lVar4 = (long)_DAT_11274ff50;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_70);
    func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11274ff54));
    func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11274ff58));
    if ((int)puVar1 == 0) {
      puVar1 = param_1;
      func_0x00010be87220(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        func_0x00010bedd020(param_1);
      }
      else {
        lVar4 = param_4;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar4;
        func_0x00010c08fa60();
        if (lVar2 == 0) {
          func_0x00010bee4ba0(param_1,param_2,puVar1);
        }
        else {
          func_0x00010bedd020(param_1);
          func_0x00010be1a5e0(param_1,param_2,lVar4,puVar1);
        }
        _objc_release(lVar4);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11274ff48);
      puVar1 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3,param_2,puVar1);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1067972b8; end: 10679738b; -[SCAddSoundPillOperaLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067972b8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11274ff50));
  return;
}



/* Entry: 10679738c; end: 10679741b; -[SCAddSoundPillOperaLayerViewController _updateWithRecommendationUsingContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679738c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11274ff3c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c1231c0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bedd020(param_1);
    func_0x00010c288a40(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010be4c6a0(param_1,param_2,param_3);
  }
  else {
    func_0x00010bedd040(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10679741c; end: 10679761f; -[SCAddSoundPillOperaLayerViewController _gateRecommendationOnSponsoredLensId:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679741c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274ff44);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf68fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c0952c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106797620;
  puStack_80 = &UNK_110856f50;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  ppuVar4 = &puStack_98;
  uStack_78 = param_4;
  _objc_retainBlock(ppuVar4);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010bfbc400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274ff58);
  *(undefined **)(param_1 + _DAT_11274ff58) = puVar8;
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106797620; end: 106797707;  */

void FUN_106797620(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0c0800(param_2);
  if ((*(byte *)(puStack_48 + 3) & 1) == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee4ba0();
    _objc_release(param_1);
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return;
}



/* Entry: 106797708; end: 10679776b;  */

void FUN_106797708(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10679776c;
  puStack_20 = &UNK_11091f728;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c0760(param_2,param_2,&puStack_38,0,&PTR___NSConcreteGlobalBlock_11093b048);
  return;
}



/* Entry: 10679776c; end: 10679779b;  */

void FUN_10679776c(long param_1,undefined1 param_2)

{
  func_0x00010c07f200();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10679779c; end: 1067977a3;  */

void FUN_10679779c(void)

{
  return;
}



/* Entry: 1067977a4; end: 10679796f; -[SCAddSoundPillOperaLayerViewController _listenForRecommendationsForContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067977a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106797970;
  puStack_80 = &UNK_110892440;
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  uStack_78 = param_3;
  _objc_retainBlock(ppuVar2);
  _objc_initWeak(auStack_a0,param_1);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1067979dc;
  puStack_b0 = &UNK_11084eff0;
  _objc_copyWeak(auStack_a8,auStack_a0);
  ppuVar3 = &puStack_c8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274ff3c);
  func_0x00010c123260();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274ff54);
  *(undefined8 *)(param_1 + _DAT_11274ff54) = uVar8;
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 106797970; end: 106797a23;  */

void FUN_106797970(long param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae750;
  if (param_2 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106797a24; end: 106797aa7; -[SCAddSoundPillOperaLayerViewController _didReceiveOptionalRecommendation:] */

void FUN_106797a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bedd020(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd040(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106797aa8; end: 106797b9b; -[SCAddSoundPillOperaLayerViewController _updatePillWithRecommendation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106797aa8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c123180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae750;
  if (lVar3 == 0) {
    func_0x00010bedd020(param_1);
  }
  else {
    puVar4 = PTR_PTR_1126c47d8;
    func_0x00010c123300(PTR_PTR_1126c47d8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274ff48),param_2,puVar5);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106797b9c; end: 106797c17; -[SCAddSoundPillOperaLayerViewController _updatePillWithEmptyState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106797b9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ae750;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274ff48);
  puVar1 = PTR_PTR_1126c47d8;
  func_0x00010bf8eb20(PTR_PTR_1126c47d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106797c18; end: 106797c1b; -[SCAddSoundPillOperaLayerViewController addSoundPillScopeDidSelectRemoveTrack:] */

void FUN_106797c18(void)

{
  return;
}



/* Entry: 106797c1c; end: 106797c1f; -[SCAddSoundPillOperaLayerViewController addSoundPillScope:didSelectAppliedTrack:] */

void FUN_106797c1c(void)

{
  return;
}



/* Entry: 106797c20; end: 106797d0f; -[SCAddSoundPillOperaLayerViewController addSoundPillScopeDidSelectAddSound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106797c20(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0eb7c0(lVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108420984(lVar3,0x8a,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf99b40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar3;
  }
  ___stack_chk_fail();
  lVar1 = 0;
  if (*(char *)(lVar3 + _DAT_11274ff4c) == '\0') {
    lVar1 = 3;
  }
  return lVar1;
}



/* Entry: 106797d10; end: 106797e2b; -[SCAddSoundPillOperaLayerViewController addSoundPillScope:didSelectRecommendedTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106797d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108420984(param_4,0x8a,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar2);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_4;
  }
  ___stack_chk_fail();
  lVar3 = 0;
  if (*(char *)(param_4 + _DAT_11274ff4c) == '\0') {
    lVar3 = 3;
  }
  return lVar3;
}



/* Entry: 106797e2c; end: 106797e47; -[SCAddSoundPillOperaLayerViewController layerViewContainerOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106797e2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + _DAT_11274ff4c) == '\0') {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 106797e48; end: 106797e67; -[SCAddSoundPillOperaLayerViewController _layerAlphaForHorizontalPageOffset:] */

double FUN_106797e48(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(param_1) * -2.0 + 1.0;
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 106797e68; end: 106797ed7; -[SCAddSoundPillOperaLayerViewController _layerTransformForHorizontalPageOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106797e68(undefined8 param_1,double param_2,long param_3)

{
  double dVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar1 = param_2;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_11274ff50));
  _CGRectGetWidth();
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(param_1,-(dVar1 * param_2),0,&uStack_60);
  return;
}



/* Entry: 106797ed8; end: 106797f8b; -[SCAddSoundPillOperaLayerViewController _shouldHidePill] */

undefined4 FUN_106797ed8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c074c20();
  uVar1 = (undefined4)lVar2;
  if (lVar5 != 0) {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106797f8c; end: 1067980c7; -[SCAddSoundPillOperaLayerViewController _recommendationContextForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106797f8c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) goto LAB_106797fe8;
  }
  else {
    _objc_release();
LAB_106797fe8:
    puVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    FUN_1067985b4(puVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar5 != (undefined *)0x0) goto LAB_1067980a8;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274ff40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3080();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c43f0;
    _objc_opt_new(PTR_PTR_1126c43f0);
    puVar1 = PTR_PTR_1126c43f8;
    _objc_opt_new(PTR_PTR_1126c43f8);
    func_0x00010c203c80(puVar5);
    _objc_release(puVar1);
  }
LAB_1067980a8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067980c8; end: 106798167; -[SCAddSoundPillOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067980c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ff50,0);
  _objc_storeStrong(param_1 + _DAT_11274ff58,0);
  _objc_storeStrong(param_1 + _DAT_11274ff54,0);
  _objc_storeStrong(param_1 + _DAT_11274ff48,0);
  _objc_storeStrong(param_1 + _DAT_11274ff44,0);
  _objc_storeStrong(param_1 + _DAT_11274ff40,0);
  _objc_storeStrong(param_1 + _DAT_11274ff3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ff38,0);
  return;
}



/* Entry: 106798168; end: 106798283; -[SCAddSoundPillOperaProvider initWithMusicRecommendationServices:musicServices:addSoundPillScopeExposer:lensMetadataRetrievingServices:] */

undefined1 *
FUN_106798168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f30b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126cdda0;
    _objc_alloc();
    func_0x00010c02cf60();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106798284; end: 1067983b3; -[SCAddSoundPillOperaProvider layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_106798284(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126c9868;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126cdd90;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf34a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067983b4; end: 1067983fb; -[SCAddSoundPillOperaProvider .cxx_destruct] */

void FUN_1067983b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067983fc; end: 1067984cb; -[SCAddSoundPillOperaServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067983fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126cdda8;
  _objc_alloc(PTR_PTR_1126cdda8);
  lVar2 = param_1 + _DAT_11274ff6c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11274ff70;
  _objc_loadWeakRetained(lVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274ff74);
  param_1 = param_1 + _DAT_11274ff78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02cf80(puVar1,param_2,lVar2,lVar3,uVar5,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126cddb0;
  _objc_alloc(PTR_PTR_1126cddb0);
  func_0x00010bff2400();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067984cc; end: 10679852b; -[SCAddSoundPillOperaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067984cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ff74,0);
  _objc_destroyWeak(param_1 + _DAT_11274ff78);
  _objc_destroyWeak(param_1 + _DAT_11274ff6c);
  _objc_destroyWeak(param_1 + _DAT_11274ff70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ff7c);
  return;
}



/* Entry: 10679852c; end: 10679859f; -[SCAddSoundPillOperaServices initWithAddSoundPillOperaProvider:] */

undefined1 * FUN_10679852c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f30b8;
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



/* Entry: 1067985a0; end: 1067985a7; -[SCAddSoundPillOperaServices addSoundPillOperaProvider] */

undefined8 FUN_1067985a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067985a8; end: 1067985b3; -[SCAddSoundPillOperaServices .cxx_destruct] */

void FUN_1067985a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067985b4; end: 10679871b;  */

void FUN_1067985b4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar3 = param_2;
    func_0x00010c27e6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    puVar3 = param_2;
    if (puVar1 == (undefined *)0x0) {
      puVar1 = param_2;
      func_0x00010bfc1340();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf529e0();
      _objc_release(puVar1);
      if (puVar2 != (undefined *)0x0) {
        func_0x00010bfc1340();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106798688;
      }
    }
    else {
      func_0x00010c27e6a0();
      _objc_retainAutoreleasedReturnValue();
LAB_106798688:
      puVar1 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar1 != (undefined *)0x0) {
        puVar3 = PTR_PTR_1126c43f0;
        _objc_opt_new(PTR_PTR_1126c43f0);
        puVar2 = PTR_PTR_1126c4408;
        _objc_opt_new(PTR_PTR_1126c4408);
        func_0x00010c19c120();
        func_0x00010c19be60(puVar3);
        _objc_release(puVar2);
        goto LAB_1067986e4;
      }
    }
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c43f0;
    _objc_opt_new(PTR_PTR_1126c43f0);
    puVar1 = PTR_PTR_1126c4400;
    _objc_opt_new(PTR_PTR_1126c4400);
    func_0x00010c1bbd60();
    func_0x00010c1bb420(puVar3);
LAB_1067986e4:
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10679871c; end: 106798767; +[SCAddSoundPillOperaLayer layerWithPage:] */

void FUN_10679871c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9868;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106798768; end: 10679892f; -[SCAddSoundPillOperaLayer initWithPage:] */

undefined1 * FUN_106798768(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f30c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(ulong *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cddb8;
    _objc_opt_class(PTR_PTR_1126cddb8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(ulong *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    *(char *)((long)puVar1 + 8) = (char)uVar3;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106798930; end: 106798937; -[SCAddSoundPillOperaLayer type] */

undefined8 FUN_106798930(void)

{
  return 0x19;
}



/* Entry: 106798938; end: 106798a67; -[SCAddSoundPillOperaLayer isEqual:] */

bool FUN_106798938(long param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126c9868;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126c9868;
  if (puVar3 == puVar4) {
    _objc_retain(param_3);
    _objc_opt_class(puVar5);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    puVar5 = param_3;
    if (((ulong)puVar3 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(param_3);
    iVar7 = (int)*(undefined8 *)(param_1 + 0x10);
    puVar3 = puVar5;
    func_0x00010c094540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (iVar7 == 0) {
      bVar2 = false;
    }
    else {
      iVar7 = (int)*(undefined8 *)(param_1 + 0x18);
      puVar4 = puVar5;
      func_0x00010bfaebe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0();
      if (iVar7 == 0) {
        bVar2 = false;
      }
      else {
        bVar1 = *(byte *)(param_1 + 8);
        puVar6 = puVar5;
        func_0x00010c074c20(puVar5);
        bVar2 = (uint)bVar1 == (uint)puVar6;
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106798a68; end: 106798a6f; -[SCAddSoundPillOperaLayer lensId] */

undefined8 FUN_106798a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106798a70; end: 106798a77; -[SCAddSoundPillOperaLayer filters] */

undefined8 FUN_106798a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106798a78; end: 106798a7f; -[SCAddSoundPillOperaLayer isHidden] */

undefined1 FUN_106798a78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106798a80; end: 106798aaf; -[SCAddSoundPillOperaLayer .cxx_destruct] */

void FUN_106798a80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


