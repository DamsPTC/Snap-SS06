/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b79eb60; end: 10b79ecb7; +[SOJUWeatherResponse registerMessageFields:] */

void FUN_10b79eb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_latitude_112600700;
  _objc_retain(param_3);
  FUN_10b79ecb8(param_3,param_2,puVar1,0,0,4,in_x6,in_x7,0,0);
  func_0x00010b79ecc4();
  FUN_10b79ecb8();
  func_0x00010b79ecc4();
  FUN_10b79ecb8();
  func_0x00010b79ecc4();
  FUN_10b79ecb8();
  func_0x00010b79ecc4();
  FUN_10b79ecb8();
  FUN_10b79ecb8(param_3,param_2,PTR_s_severeCondition_112547ba0,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b79ecc4();
  FUN_10b79ecb8();
  _objc_opt_class(PTR_PTR_1126d8c70);
  func_0x00010b79ecd4();
  func_0x00010b79ecc4();
  FUN_10b79ecb8();
  _objc_opt_class(PTR_PTR_1126d8c68);
  func_0x00010b79ecd4();
  func_0x00010b79ecc4();
  FUN_10b79ecb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79ecb8; end: 10b79ecf7;  */

void FUN_10b79ecb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79ecf8; end: 10b79ecfb; -[SOJUWebAttachmentBody initWithWebAttachmentUrl:] */

void FUN_10b79ecf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b79ecfc; end: 10b79ed3b; +[SOJUWebAttachmentBody registerMessageFields:] */

void FUN_10b79ecfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_webAttachmentUrl_1126865d0,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b79ed3c; end: 10b79eed3; -[SCSojuMessage initWithFieldValues:] */

undefined1 * FUN_10b79ed3c(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  puVar6 = &uStack_130;
  puVar1 = &uStack_130;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfac8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = 0;
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          iVar10 = (int)*(undefined8 *)(lStack_128 + lVar12 * 8);
          puVar9 = param_3;
          if (lVar8 != 0) {
            puVar9 = *(undefined1 **)register0x00000008;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
          }
          _objc_retain(puVar9);
          func_0x00010c22eac0();
          puVar4 = puVar9;
          if (iVar10 != 0) {
            func_0x00010bf51e00();
            _objc_release(puVar9);
          }
          func_0x000107c309f4(param_1,lVar8,puVar4);
          lVar8 = lVar8 + 1;
          _objc_release(puVar4);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar2;
        puVar6 = puVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    puVar9 = (undefined1 *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  func_0x00010bfee200();
  if (param_3 != (undefined1 *)0x0) {
    lVar8 = *(long *)(param_3 + 8);
    func_0x00010bfac8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lVar2 != 0) {
      lVar11 = 0;
      do {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar8);
          }
          uVar5 = *(undefined8 *)(lVar12 * 8);
          func_0x00010bfac740(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar9;
          func_0x00010bf67000(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          func_0x000107c309f4(param_3,lVar11,puVar4);
          lVar11 = lVar11 + 1;
          _objc_release(puVar4);
          lVar12 = lVar12 + 1;
        } while (lVar2 != lVar12);
        lVar2 = lVar8;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar8);
  }
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain();
  return puVar9;
}



/* Entry: 10b79eed4; end: 10b79f04f; -[SCSojuMessage initWithCoder:] */

long FUN_10b79eed4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfac8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          uVar4 = *(undefined8 *)(lVar8 * 8);
          func_0x00010bfac740(uVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_3;
          func_0x00010bf67000(param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          func_0x000107c309f4(param_1,lVar7,lVar5);
          lVar7 = lVar7 + 1;
          _objc_release(lVar5);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain();
  return param_3;
}



/* Entry: 10b79f050; end: 10b79f073; -[SCSojuMessage copyWithZone:] */

undefined8 FUN_10b79f050(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b79f074; end: 10b79f0fb; -[SCSojuMessage encodeWithCoder:] */

void FUN_10b79f074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b79f0fc;
  puStack_30 = &UNK_110d5c318;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010beea2a0(param_1,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b79f0fc; end: 10b79f107;  */

void FUN_10b79f0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_encodeObject_forKey__1125c25b0,param_3,param_2);
  return;
}



/* Entry: 10b79f108; end: 10b79f18f; -[SCSojuMessage encodeWithFasterCoder:] */

void FUN_10b79f108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b79f190;
  puStack_30 = &UNK_110d5c318;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010beea2a0(param_1,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b79f190; end: 10b79f197;  */

void FUN_10b79f190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_encodeObject__1125c25a8);
  return;
}



/* Entry: 10b79f198; end: 10b79f237; -[SCSojuMessage decodeWithFasterDecoder:] */

void FUN_10b79f198(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfac8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = 0;
    do {
      uVar3 = param_3;
      func_0x00010bf66fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c309f4(param_1,lVar1,uVar3);
      _objc_release(uVar3);
      lVar1 = lVar1 + 1;
    } while (lVar2 != lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79f238; end: 10b79f23f; -[SCSojuMessage preferFasterCoding] */

undefined8 FUN_10b79f238(void)

{
  return 1;
}



/* Entry: 10b79f240; end: 10b79f2e7; -[SCSojuMessage hash] */

undefined8 FUN_10b79f240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0x11;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b79f2e8;
  puStack_50 = &UNK_110d5c378;
  puStack_38 = puStack_48;
  func_0x00010beea2a0(param_1,param_2,&puStack_68,0);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10b79f2e8; end: 10b79f337;  */

void FUN_10b79f2e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
    func_0x00010bfde980();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3 + lVar1 * 0x25;
  }
  return;
}



/* Entry: 10b79f338; end: 10b79f457; -[SCSojuMessage isEqual:] */

undefined8 FUN_10b79f338(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar1);
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    _objc_retain(param_3);
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfac8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        uVar1 = param_1;
        func_0x000107c309f0(param_1,lVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x000107c309f0(param_3,lVar3);
        _objc_retainAutoreleasedReturnValue();
        if ((uVar1 != 0 || uVar2 != 0) && (uVar5 = uVar1, func_0x00010c071ae0(), (uVar5 & 1) == 0))
        {
          _objc_release(uVar2);
          _objc_release(uVar1);
          uVar6 = 0;
          goto LAB_10b79f430;
        }
        _objc_release(uVar2);
        _objc_release(uVar1);
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    uVar6 = 1;
LAB_10b79f430:
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b79f458; end: 10b79f4fb; -[SCSojuMessage setObject:forUInt64Key:] */

void FUN_10b79f458(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  _objc_opt_class();
  func_0x00010bfa0da0();
  uVar2 = param_1[1];
  func_0x00010bfac8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  lVar3 = 1;
  do {
    puVar1 = puVar1 + 1;
    if (uVar4 == 0) goto LAB_10b79f4e4;
    lVar3 = lVar3 + -1;
    uVar4 = uVar4 - 1;
  } while (param_4 != *puVar1 >> 8);
  func_0x000107c309f4(param_1,-lVar3,param_3);
LAB_10b79f4e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79f4fc; end: 10b79f537; +[SCSojuMessage fasterCodingVersion] */

undefined8 FUN_10b79f4fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfac980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa0dc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b79f538; end: 10b79f573; +[SCSojuMessage fasterCodingKeys] */

undefined8 FUN_10b79f538(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfac980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa0da0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b79f574; end: 10b79f673;  */

void FUN_10b79f574(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c309f8(param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b79f674; end: 10b79f6bb;  */

undefined8 FUN_10b79f674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c309f0(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0b4ca0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10b79f6bc; end: 10b79f73b;  */

void FUN_10b79f6bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c309f8(param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b79f73c; end: 10b79f78b;  */

undefined8 FUN_10b79f73c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000107c309f0(param_3,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b79f78c; end: 10b79f813;  */

void FUN_10b79f78c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c309f8(param_3,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b79f814; end: 10b79f863;  */

undefined8 FUN_10b79f814(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000107c309f0(param_3,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b79f864; end: 10b79f8eb;  */

void FUN_10b79f864(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c309f8(param_3,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b79f8ec; end: 10b79f9e3;  */

void FUN_10b79f8ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c309f8(param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b79f9e4; end: 10b79f9e7; +[SCSojuMessage registerMessageFields:] */

void FUN_10b79f9e4(void)

{
  return;
}



/* Entry: 10b79f9e8; end: 10b79fb1b; +[SCSojuMessage canInitFromProto] */

long FUN_10b79f9e8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bfac980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfac8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar4 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar4 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        lVar5 = *(long *)(lStack_108 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010c0cb320();
        if (lVar3 != 0) {
          func_0x00010c0cb320();
          iVar1 = (int)lVar5;
          func_0x00010bf2cca0();
          if (iVar1 == 0) {
            lVar4 = 0;
            goto LAB_10b79fadc;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar4 != 0);
  }
  lVar4 = 1;
LAB_10b79fadc:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  ___stack_chk_fail();
  func_0x00010bfac980();
  _objc_unsafeClaimAutoreleasedReturnValue();
  return lVar2;
}



/* Entry: 10b79fb1c; end: 10b79fb37; +[SCSojuMessage loadSelectorsIfNeeded] */

void FUN_10b79fb1c(void)

{
  func_0x00010bfac980();
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b79fb38; end: 10b79fba7; +[SCSojuMessageBuilder builderWithBaseMessage:] */

void FUN_10b79fb38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_opt_new(param_1);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010be3c0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0caca0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b79fba8; end: 10b79fc27; -[SCSojuMessageField _fieldClass] */

void FUN_10b79fba8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 0x20);
  if (puVar3 == (undefined *)0x0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (((uVar2 < 6) || (puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670, uVar2 - 7 < 2)) ||
       (puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, uVar2 == 6)) {
      _objc_opt_class(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
    }
  }
  else {
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b79fc28; end: 10b79fc9f; -[SCSojuMessageField _fieldClassTypeString] */

void FUN_10b79fc28(undefined *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  func_0x00010be15880();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (ulong *)(param_1 + 0x38);
  if (*puVar1 < 3) {
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,(&PTR_PTR_110d5c528)[*puVar1]);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b79fca0; end: 10b79fd6b; -[SCSojuMessageField appendSHAData:] */

void FUN_10b79fca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bdc3520(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08fac0(uVar1,param_2,4);
  func_0x00010bf06a40(param_3,param_2,uVar4,uVar1);
  func_0x00010bf06a40(param_3,param_2,&DAT_10f62a9e8,1);
  func_0x00010be158a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  lVar3 = param_1;
  func_0x00010c08fac0(param_1,param_2,4);
  func_0x00010bf06a40(param_3,param_2,lVar2,lVar3);
  func_0x00010bf06a40(param_3,param_2,&UNK_10f7ac0ad,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b79fd6c; end: 10b79fd73; -[SCSojuMessageField setDisableToJSON:] */

void FUN_10b79fd6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b79fd74; end: 10b79fd7b; -[SCSojuMessageField fasterCodingKey] */

undefined8 FUN_10b79fd74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b79fd7c; end: 10b79fdb7; -[SCSojuMessageField .cxx_destruct] */

void FUN_10b79fd7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b79fdb8; end: 10b79fdff; -[SCSojuMessageFieldsRegistry dealloc] */

void FUN_10b79fdb8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_11270a978;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b79fe00; end: 10b79ffab; -[SCSojuMessageFieldsRegistry fasterCodingVersion] */

long FUN_10b79fe00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_opt_new();
    lVar11 = *(long *)(param_1 + 8);
    _objc_retain(lVar11);
    lVar9 = lVar11;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar11);
        }
        func_0x00010bf06fc0(*(undefined8 *)(lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
      lVar9 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    puVar2 = puVar1;
    func_0x00010bdc25c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc3320();
    *(long *)(param_1 + 0x18) = 0;
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar9 = *(long *)(param_1 + 0x18);
  }
  _objc_sync_exit(param_1);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(lVar3);
  lVar9 = *(long *)(lVar3 + 0x20);
  if (lVar9 == 0) {
    lVar9 = *(long *)(lVar3 + 8);
    func_0x00010bf529e0();
    lVar9 = lVar9 + 1;
    _calloc(lVar9,8);
    *(long *)(lVar3 + 0x20) = lVar9;
    uVar4 = *(undefined8 *)(lVar3 + 8);
    func_0x00010bf529e0();
    **(undefined8 **)(lVar3 + 0x20) = uVar4;
    lVar12 = *(long *)(lVar3 + 8);
    _objc_retain(lVar12);
    lVar11 = lVar12;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    if (lVar11 != 0) {
      lVar14 = 0;
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar12);
          }
          lVar13 = *(long *)(lVar10 * 8);
          lVar5 = lVar13;
          func_0x00010bfa0d80();
          if (lVar5 == 0) {
            puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06fc0(lVar13);
            puVar2 = puVar1;
            func_0x00010bdc25c0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
            _objc_alloc(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
            func_0x00010bffc4a0();
            lVar13 = 0;
            do {
              func_0x00010bfc3360(puVar2);
              func_0x00010bf06ba0(puVar6);
              lVar13 = lVar13 + 1;
            } while (lVar13 != 7);
            puVar7 = PTR__OBJC_CLASS___NSScanner_1126b3380;
            func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14eca0();
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar2);
            _objc_release(puVar1);
          }
          lVar14 = lVar14 + 1;
          *(long *)(*(long *)(lVar3 + 0x20) + lVar14 * 8) = lVar5 << 8;
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar11);
        lVar11 = lVar12;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    _objc_release(lVar12);
    lVar9 = *(long *)(lVar3 + 0x20);
  }
  _objc_sync_exit(lVar3);
  lVar11 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lVar3);
  __Unwind_Resume();
  lVar8 = *(long *)(lVar11 + 8);
  func_0x00010c089820(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ec20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return lVar8;
}



/* Entry: 10b79ffac; end: 10b7a0243; -[SCSojuMessageFieldsRegistry fasterCodingKeys] */

long FUN_10b79ffac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    lVar9 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    lVar9 = lVar9 + 1;
    _calloc(lVar9,8);
    *(long *)(param_1 + 0x20) = lVar9;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf529e0();
    **(undefined8 **)(param_1 + 0x20) = uVar1;
    lVar10 = *(long *)(param_1 + 8);
    _objc_retain(lVar10);
    lVar2 = lVar10;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    if (lVar2 != 0) {
      lVar13 = 0;
      do {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar10);
          }
          lVar12 = *(long *)(lVar11 * 8);
          lVar3 = lVar12;
          func_0x00010bfa0d80();
          if (lVar3 == 0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06fc0(lVar12);
            puVar5 = puVar4;
            func_0x00010bdc25c0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
            _objc_alloc(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
            func_0x00010bffc4a0();
            lVar12 = 0;
            do {
              func_0x00010bfc3360(puVar5);
              func_0x00010bf06ba0(puVar6);
              lVar12 = lVar12 + 1;
            } while (lVar12 != 7);
            puVar7 = PTR__OBJC_CLASS___NSScanner_1126b3380;
            func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14eca0();
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          lVar13 = lVar13 + 1;
          *(long *)(*(long *)(param_1 + 0x20) + lVar13 * 8) = lVar3 << 8;
          lVar11 = lVar11 + 1;
        } while (lVar11 != lVar2);
        lVar2 = lVar10;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar10);
    lVar9 = *(long *)(param_1 + 0x20);
  }
  _objc_sync_exit(param_1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  lVar8 = *(long *)(lVar2 + 8);
  func_0x00010c089820(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ec20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return lVar8;
}



/* Entry: 10b7a0244; end: 10b7a027b; -[SCSojuMessageFieldsRegistry setDisableToJSON] */

void FUN_10b7a0244(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ec20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7a027c; end: 10b7a02ab; -[SCSojuMessageFieldsRegistry .cxx_destruct] */

void FUN_10b7a027c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7a02ac; end: 10b7a02b3; -[SCCPlaceLoadingState__Enum init] */

void FUN_10b7a02ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b7a02b4; end: 10b7a02bb; -[SCCPlaceStoryProviderPhotoType__Enum init] */

void FUN_10b7a02b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b7a02bc; end: 10b7a02c3; -[SCCVenueApiPlaceLinkProvider__Enum init] */

void FUN_10b7a02bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b7a02c4; end: 10b7a02cb; -[SCPlaceActionButtonType__Enum init] */

void FUN_10b7a02c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xc);
  return;
}



/* Entry: 10b7a02cc; end: 10b7a02d3; -[SCVenueLoadState__Enum init] */

void FUN_10b7a02cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b7a02d4; end: 10b7a02f3; -[SCCBasemapPlaceDebugInfo init] */

void FUN_10b7a02d4(void)

{
  func_0x00010b7a10d8(PTR_PTR_11270a980);
  return;
}



/* Entry: 10b7a02f4; end: 10b7a0303; +[SCCBasemapPlaceDebugInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a02f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5c540;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0304; end: 10b7a032b; -[SCCFriendData initWithUserId:avatarId:displayName:] */

void FUN_10b7a0304(void)

{
  func_0x00010b7a1120(PTR_PTR_11270a988);
  func_0x00010b7a1130();
  return;
}



/* Entry: 10b7a032c; end: 10b7a033b; +[SCCFriendData valdiMarshallableObjectDescriptor] */

void FUN_10b7a032c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d5c5a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a033c; end: 10b7a0367; -[SCCGooglePlaceProfileData initWithRatingsData:reviewsData:] */

void FUN_10b7a033c(void)

{
  func_0x00010b7a1120(PTR_PTR_11270a990);
  func_0x00010b7a1130();
  return;
}



/* Entry: 10b7a0368; end: 10b7a037b; +[SCCGooglePlaceProfileData valdiMarshallableObjectDescriptor] */

void FUN_10b7a0368(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5c618;
  param_1[1] = &PTR_DAT_110d5c6a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a037c; end: 10b7a03a3; -[SCCGooglePlaceProfileDataOptional initWithPlaceId:] */

void FUN_10b7a037c(void)

{
  func_0x00010b7a1150(PTR_PTR_11270a998);
  func_0x00010b7a1114();
  return;
}



/* Entry: 10b7a03a4; end: 10b7a03b7; +[SCCGooglePlaceProfileDataOptional valdiMarshallableObjectDescriptor] */

void FUN_10b7a03a4(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110d5c6d0;
  param_1[1] = &PTR_DAT_110d5c718;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a03b8; end: 10b7a03eb; -[SCCGooglePlaceRatingsData initWithIconUrl:ratingsValue:ratingsIconUrl:ratingsCount:] */

void FUN_10b7a03b8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a1120(PTR_PTR_11270a9a0);
  func_0x00010b7a1160(auStack_20);
  return;
}



/* Entry: 10b7a03ec; end: 10b7a03fb; +[SCCGooglePlaceRatingsData valdiMarshallableObjectDescriptor] */

void FUN_10b7a03ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5c728;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a03fc; end: 10b7a0437; -[SCCGooglePlaceReviewsData initWithAuthorData:relativePublishTime:createdAtMs:ratingIconUrl:localizedReviewText:] */

void FUN_10b7a03fc(void)

{
  func_0x00010b7a1120(PTR_PTR_11270a9a8);
  func_0x00010b7a1130();
  return;
}



/* Entry: 10b7a0438; end: 10b7a044b; +[SCCGooglePlaceReviewsData valdiMarshallableObjectDescriptor] */

void FUN_10b7a0438(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5c7a0;
  param_1[1] = &PTR_DAT_110d5c890;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a044c; end: 10b7a0473; -[SCCGoogleReviewAuthorData initWithName:] */

void FUN_10b7a044c(void)

{
  func_0x00010b7a1120(PTR_PTR_11270a9b0);
  func_0x00010b7a1140();
  return;
}



/* Entry: 10b7a0474; end: 10b7a0483; +[SCCGoogleReviewAuthorData valdiMarshallableObjectDescriptor] */

void FUN_10b7a0474(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5c8a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0484; end: 10b7a04ab; -[SCCGoogleReviewLandingPage initWithUrl:iconUrl:displayName:] */

void FUN_10b7a0484(void)

{
  func_0x00010b7a1120(PTR_PTR_11270a9b8);
  func_0x00010b7a1140();
  return;
}



/* Entry: 10b7a04ac; end: 10b7a04bb; +[SCCGoogleReviewLandingPage valdiMarshallableObjectDescriptor] */

void FUN_10b7a04ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_url_110d5c900;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a04bc; end: 10b7a04e3; -[SCCHourMinute initWithHour:minute:] */

void FUN_10b7a04bc(void)

{
  func_0x00010b7a1150(PTR_PTR_11270a9c0);
  func_0x00010b7a1114();
  return;
}



/* Entry: 10b7a04e4; end: 10b7a04f3; +[SCCHourMinute valdiMarshallableObjectDescriptor] */

void FUN_10b7a04e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_hour_110d5c960;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a04f4; end: 10b7a0533; -[SCCMapVenueStoryAnalytics initWithViewSource:] */

void FUN_10b7a04f4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a1120(PTR_PTR_11270a9c8);
  func_0x00010b7a11c8();
  func_0x00010b7a116c(auStack_20);
  return;
}



/* Entry: 10b7a0534; end: 10b7a0543; +[SCCMapVenueStoryAnalytics valdiMarshallableObjectDescriptor] */

void FUN_10b7a0534(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5c9a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0544; end: 10b7a056f; -[SCCPlaceAddress initWithAddress1:address2:locality:region:postalCode:country:] */

void FUN_10b7a0544(void)

{
  func_0x00010b7a1120(PTR_PTR_11270a9d0);
  func_0x00010b7a1130();
  return;
}



/* Entry: 10b7a0570; end: 10b7a057f; +[SCCPlaceAddress valdiMarshallableObjectDescriptor] */

void FUN_10b7a0570(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5ca98;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0580; end: 10b7a05b7; -[SCCPlaceAggregateReviewInfo initWithScore:maxScore:reviewCount:provider:] */

void FUN_10b7a0580(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a1120(PTR_PTR_11270a9d8);
  func_0x00010b7a116c(auStack_20);
  return;
}



/* Entry: 10b7a05b8; end: 10b7a05cb; +[SCCPlaceAggregateReviewInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a05b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_score_110d5cb40;
  param_1[1] = &PTR_DAT_110d5cbd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a05cc; end: 10b7a05eb; -[SCCPlaceCardDataFetch initWithLoadState:data:] */

void FUN_10b7a05cc(void)

{
  func_0x00010b7a10ec(PTR_PTR_11270a9e0);
  return;
}



/* Entry: 10b7a05ec; end: 10b7a05ff; +[SCCPlaceCardDataFetch valdiMarshallableObjectDescriptor] */

void FUN_10b7a05ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5cbe0;
  param_1[1] = &PTR_DAT_110d5cc28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0600; end: 10b7a062b; -[SCCPlaceCardStoryData initWithStoryPreview:numOrbisStories:] */

void FUN_10b7a0600(void)

{
  func_0x00010b7a1150(PTR_PTR_11270a9e8);
  func_0x00010b7a1114();
  return;
}



/* Entry: 10b7a062c; end: 10b7a063b; +[SCCPlaceCardStoryData valdiMarshallableObjectDescriptor] */

void FUN_10b7a062c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5cc40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a063c; end: 10b7a0667; -[SCCPlaceDayHours initWithDay:hours:] */

void FUN_10b7a063c(void)

{
  func_0x00010b7a1150(PTR_PTR_11270a9f0);
  func_0x00010b7a1114();
  return;
}



/* Entry: 10b7a0668; end: 10b7a067b; +[SCCPlaceDayHours valdiMarshallableObjectDescriptor] */

void FUN_10b7a0668(undefined8 *param_1)

{
  *param_1 = &PTR_s_day_110d5cc88;
  param_1[1] = &PTR_DAT_110d5ccd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a067c; end: 10b7a069b; -[SCCPlaceFavoritesData init] */

void FUN_10b7a067c(void)

{
  func_0x00010b7a10d8(PTR_PTR_11270a9f8);
  return;
}



/* Entry: 10b7a069c; end: 10b7a06ab; +[SCCPlaceFavoritesData valdiMarshallableObjectDescriptor] */

void FUN_10b7a069c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5cce0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a06ac; end: 10b7a0757; -[SCCPlaceInfoModel initWithPlaceId:name:priceyness:category:address:phoneNumber:displayPhoneNumber:fullUrl:displayUrl:profileImageUrl:profileImageUrlIsIcon:categoryIconUrl:lat:lng:reservationPartnerInfo:deliveryPartnerInfo:boundingBox:placeType:showPlaceStories:isFavorited:storeUrl:] */

void FUN_10b7a06ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270aa00;
  uStack_30 = param_1;
  func_0x00010b7a116c(&uStack_30,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7a0758; end: 10b7a076b; +[SCCPlaceInfoModel valdiMarshallableObjectDescriptor] */

void FUN_10b7a0758(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110d5cd28;
  param_1[1] = &PTR_DAT_110d5d028;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a076c; end: 10b7a0793; -[SCCPlaceMenuInfo initWithMenuUrl:] */

void FUN_10b7a076c(void)

{
  func_0x00010b7a1150(PTR_PTR_11270aa08);
  func_0x00010b7a1114();
  return;
}



/* Entry: 10b7a0794; end: 10b7a07a3; +[SCCPlaceMenuInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a0794(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5d078;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a07a4; end: 10b7a07c3; -[SCCPlaceOpeningHours init] */

void FUN_10b7a07a4(void)

{
  func_0x00010b7a10d8(PTR_PTR_11270aa10);
  return;
}



/* Entry: 10b7a07c4; end: 10b7a07d7; +[SCCPlaceOpeningHours valdiMarshallableObjectDescriptor] */

void FUN_10b7a07c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5d0c0;
  param_1[1] = &PTR_DAT_110d5d138;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a07d8; end: 10b7a07ff; -[SCCPlacePivotData initWithLoadingState:] */

void FUN_10b7a07d8(void)

{
  func_0x00010b7a1150(PTR_PTR_11270aa18);
  func_0x00010b7a1114();
  return;
}



/* Entry: 10b7a0800; end: 10b7a0813; +[SCCPlacePivotData valdiMarshallableObjectDescriptor] */

void FUN_10b7a0800(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5d150;
  param_1[1] = &PTR_DAT_110d5d198;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0814; end: 10b7a083b; -[SCCPlacePopularHours initWithHours:displayStartHour:displayEndHour:] */

void FUN_10b7a0814(void)

{
  func_0x00010b7a1120(PTR_PTR_11270aa20);
  func_0x00010b7a1140();
  return;
}



/* Entry: 10b7a083c; end: 10b7a084b; +[SCCPlacePopularHours valdiMarshallableObjectDescriptor] */

void FUN_10b7a083c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5d1b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a084c; end: 10b7a087f; -[SCCPlaceReviewInfo initWithText:createdAtMs:] */

void FUN_10b7a084c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a1120(PTR_PTR_11270aa28);
  func_0x00010b7a1160(auStack_20);
  return;
}



/* Entry: 10b7a0880; end: 10b7a0893; +[SCCPlaceReviewInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a0880(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_110d5d210;
  param_1[1] = &PTR_DAT_110d5d2a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0894; end: 10b7a08b3; -[SCCPlaceReviewLandingPage initWithProvider:url:] */

void FUN_10b7a0894(void)

{
  func_0x00010b7a10ec(PTR_PTR_11270aa30);
  return;
}



/* Entry: 10b7a08b4; end: 10b7a08c7; +[SCCPlaceReviewLandingPage valdiMarshallableObjectDescriptor] */

void FUN_10b7a08b4(undefined8 *param_1)

{
  *param_1 = &PTR_s_provider_110d5d2b0;
  param_1[1] = &PTR_DAT_110d5d2f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a08c8; end: 10b7a08f7; -[SCCPlaceReviews initWithReviews:] */

void FUN_10b7a08c8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a1120(PTR_PTR_11270aa38);
  func_0x00010b7a116c(auStack_20);
  return;
}



/* Entry: 10b7a08f8; end: 10b7a090b; +[SCCPlaceReviews valdiMarshallableObjectDescriptor] */

void FUN_10b7a08f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5d308;
  param_1[1] = &PTR_DAT_110d5d368;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a090c; end: 10b7a093f; -[SCCPlaceStoryCarouselData initWithNumberOfRankedStoryThumbnailsToPreview:areRankedStoryThumbnailsFullyLoaded:rankedStoryThumbnails:] */

void FUN_10b7a090c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a1120(PTR_PTR_11270aa40);
  func_0x00010b7a116c(auStack_20);
  return;
}



/* Entry: 10b7a0940; end: 10b7a0953; +[SCCPlaceStoryCarouselData valdiMarshallableObjectDescriptor] */

void FUN_10b7a0940(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5d380;
  param_1[1] = &PTR_DAT_110d5d410;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0954; end: 10b7a097f; -[SCCPlaceStoryPreview initWithNumSnaps:] */

void FUN_10b7a0954(void)

{
  func_0x00010b7a1150(PTR_PTR_11270aa48);
  func_0x00010b7a1114();
  return;
}



/* Entry: 10b7a0980; end: 10b7a098f; +[SCCPlaceStoryPreview valdiMarshallableObjectDescriptor] */

void FUN_10b7a0980(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5d420;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a0990; end: 10b7a09cb; -[SCCPlaceStoryThumbnail initWithThumbnailUrl:snapIds:isVideo:] */

void FUN_10b7a0990(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a1120(PTR_PTR_11270aa50);
  func_0x00010b7a11c8();
  func_0x00010b7a116c(auStack_20);
  return;
}


