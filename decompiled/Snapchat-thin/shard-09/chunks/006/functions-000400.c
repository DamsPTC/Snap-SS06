/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f49a78; end: 106f49a87; -[SCSpectaclesAssetMetadataCheerios metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f49a78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761784);
}



/* Entry: 106f49a88; end: 106f49a97; -[SCSpectaclesAssetMetadataCheerios flightMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f49a88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761788);
}



/* Entry: 106f49a98; end: 106f49ad7; -[SCSpectaclesAssetMetadataCheerios .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f49a98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112761784,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761780,0);
  return;
}



/* Entry: 106f49ad8; end: 106f49c37; -[SCSpectaclesAssetMetadataHermosa initWithCalibration:vioCalibration:lensMetadata:primaryCamera:vioData:recordedLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f49ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f7e60;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276178c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276178c) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112761790;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112761794;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112761798) = param_6;
    lVar4 = (long)_DAT_11276179c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127617a0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f49c38; end: 106f49c4f; -[SCSpectaclesAssetMetadataHermosa isCorrupt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f49c38(long param_1)

{
  return *(long *)(param_1 + _DAT_11276178c) == 0;
}



/* Entry: 106f49c50; end: 106f4a06f; -[SCSpectaclesAssetMetadataHermosa initWithAvMetadataItems:serialNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f49c50(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_138;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar1 == 0) {
    puVar14 = (undefined *)0x0;
    lVar13 = 0;
    uStack_138 = 0;
    uStack_158 = 0;
    uStack_168 = 0;
    uStack_148 = 0;
  }
  else {
    lVar13 = 0;
    uStack_138 = 0;
    uStack_158 = 0;
    uStack_148 = 0;
    uStack_168 = 0;
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar15 = *(long *)(lVar12 * 8);
        lVar2 = lVar15;
        func_0x00010c086a80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0720c0();
        _objc_release(lVar2);
        if ((int)lVar3 != 0) {
          lVar2 = lVar15;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c071ae0();
          _objc_release(lVar2);
          if ((int)lVar3 == 0) {
            lVar2 = lVar15;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c071ae0();
            _objc_release(lVar2);
            if ((int)lVar3 == 0) {
              lVar2 = lVar15;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar2;
              func_0x00010c071ae0();
              _objc_release(lVar2);
              if ((int)lVar3 == 0) {
                lVar2 = lVar15;
                func_0x00010c086560();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = lVar2;
                func_0x00010c071ae0();
                _objc_release(lVar2);
                if ((int)lVar3 == 0) {
                  lVar2 = lVar15;
                  func_0x00010c086560();
                  _objc_retainAutoreleasedReturnValue();
                  lVar3 = lVar2;
                  func_0x00010c071ae0();
                  _objc_release(lVar2);
                  if ((int)lVar3 == 0) goto LAB_106f49f08;
                  func_0x00010c25d700();
                  _objc_retainAutoreleasedReturnValue();
                  lVar2 = uStack_168;
                  uStack_168 = lVar15;
                }
                else {
                  func_0x00010bf64960();
                  _objc_retainAutoreleasedReturnValue();
                  lVar2 = uStack_158;
                  uStack_158 = lVar15;
                }
              }
              else {
                func_0x00010bf64960();
                _objc_retainAutoreleasedReturnValue();
                lVar2 = uStack_148;
                uStack_148 = lVar15;
              }
            }
            else {
              func_0x00010bf64960();
              _objc_retainAutoreleasedReturnValue();
              lVar2 = uStack_138;
              uStack_138 = lVar15;
            }
          }
          else {
            func_0x00010bf64960();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar13;
            lVar13 = lVar15;
          }
          _objc_release(lVar2);
        }
LAB_106f49f08:
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    if (lVar13 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126d3038;
      func_0x00010bf27d40();
      _objc_retainAutoreleasedReturnValue();
    }
    if (uStack_138 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      goto LAB_106f49fb8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106f49fb8:
  func_0x00010bffabe0();
  _objc_retain();
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(uStack_168);
  _objc_release(uStack_148);
  _objc_release(uStack_158);
  _objc_release(uStack_138);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_3 + _DAT_11276178c);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + _DAT_112761790);
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 3;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  puVar7 = puVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126d3038;
  if (puVar7 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf27d40(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  puVar8 = puVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar9);
  }
  puVar9 = puVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bffabe0(puVar4);
  _objc_release(puVar17);
  _objc_release(puVar9);
  _objc_release(puVar16);
  _objc_release(puVar8);
  _objc_release(puVar14);
  _objc_release(puVar7);
  _objc_release(uVar10);
  return puVar4;
}



/* Entry: 106f4a070; end: 106f4a1fb; -[SCSpectaclesAssetMetadataHermosa avMetadataItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f4a070(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar8 = &lStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_11276178c);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)PTR__kCMMetadataBaseDataType_RawData_1103485b0;
  lVar2 = param_1;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8eed8,puVar1,uVar9)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112761790);
  lStack_70 = lVar2;
  func_0x00010bf64920(uVar3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8ef78,uVar3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = lVar4;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8efb8,
                      *(undefined8 *)(param_1 + _DAT_112761794),uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 3;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  puVar5 = puVar1;
  func_0x00010bee7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f0b8,plVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d3038;
  if (puVar5 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf27d40(puVar10,param_2,puVar6,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = puVar1;
  func_0x00010bee7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f018,plVar8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar7);
  }
  puVar7 = puVar1;
  func_0x00010bee7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f0d8,plVar8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bffabe0(puVar1,param_2,puVar10,puVar11,puVar12,2,0,0);
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(uVar9);
  return puVar1;
}



/* Entry: 106f4a1fc; end: 106f4a3df; -[SCSpectaclesAssetMetadataHermosa initWithImageMetadata:serialNumber:] */

long FUN_106f4a1fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f0b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3038;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf27d40(puVar4,param_2,puVar5,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  lVar2 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f018,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar6);
  }
  lVar3 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f0d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bffabe0(param_1,param_2,puVar4,puVar5,puVar6,2,0,0);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106f4a3e0; end: 106f4a4ab; -[SCSpectaclesAssetMetadataHermosa _addImageMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f4a3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276178c);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15da0();
  _CGImageMetadataSetValueWithPath(param_3,0,&PTR____CFConstantStringClassReference_110e8f018,uVar2)
  ;
  _objc_release(uVar1);
  _CGImageMetadataSetValueWithPath
            (param_3,0,&PTR____CFConstantStringClassReference_110e8f018,
             *(undefined8 *)(param_1 + _DAT_112761790));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112761794);
  func_0x00010bf15da0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGImageMetadataSetValueWithPath_110349c00)
            (param_3,0,&PTR____CFConstantStringClassReference_110e8f0d8,uVar2);
  return;
}



/* Entry: 106f4a4ac; end: 106f4a4bb; -[SCSpectaclesAssetMetadataHermosa calibration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4a4ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276178c);
}



/* Entry: 106f4a4bc; end: 106f4a4cb; -[SCSpectaclesAssetMetadataHermosa vioCalibration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4a4bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761790);
}



/* Entry: 106f4a4cc; end: 106f4a4db; -[SCSpectaclesAssetMetadataHermosa lensMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4a4cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761794);
}



/* Entry: 106f4a4dc; end: 106f4a4eb; -[SCSpectaclesAssetMetadataHermosa primaryCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4a4dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761798);
}



/* Entry: 106f4a4ec; end: 106f4a4fb; -[SCSpectaclesAssetMetadataHermosa vioData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4a4ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276179c);
}



/* Entry: 106f4a4fc; end: 106f4a50b; -[SCSpectaclesAssetMetadataHermosa recordedLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4a4fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127617a0);
}



/* Entry: 106f4a50c; end: 106f4a57b; -[SCSpectaclesAssetMetadataHermosa .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f4a50c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127617a0,0);
  _objc_storeStrong(param_1 + _DAT_11276179c,0);
  _objc_storeStrong(param_1 + _DAT_112761794,0);
  _objc_storeStrong(param_1 + _DAT_112761790,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276178c,0);
  return;
}



/* Entry: 106f4a57c; end: 106f4a667; -[SCSpectaclesAssetMetadataMalibu initWithMediaId:metadata:imuData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f4a57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7e68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127617a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127617a4) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127617a8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127617ac;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4a668; end: 106f4a66f; -[SCSpectaclesAssetMetadataMalibu isCorrupt] */

undefined8 FUN_106f4a668(void)

{
  return 0;
}



/* Entry: 106f4a670; end: 106f4a933; -[SCSpectaclesAssetMetadataMalibu initWithAvMetadataItems:serialNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f4a670(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uStack_148;
  undefined8 uStack_138;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar1 == 0) {
    uVar12 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
  }
  else {
    uVar12 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lVar14 * 8);
        uVar2 = uVar11;
        func_0x00010c086a80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          uVar2 = uVar11;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c071ae0();
          _objc_release(uVar2);
          if ((int)uVar3 == 0) {
            uVar2 = uVar11;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c071ae0();
            _objc_release(uVar2);
            if ((int)uVar3 == 0) {
              uVar2 = uVar11;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c071ae0();
              _objc_release(uVar2);
              if ((int)uVar3 == 0) goto LAB_106f4a868;
              func_0x00010bf64960();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uStack_148;
              uStack_148 = uVar11;
            }
            else {
              func_0x00010bf64960();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uStack_138;
              uStack_138 = uVar11;
            }
          }
          else {
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar12;
            uVar12 = uVar11;
          }
          _objc_release(uVar2);
        }
LAB_106f4a868:
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  func_0x00010c029660();
  _objc_retain();
  _objc_release(uStack_148);
  _objc_release(uStack_138);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_3 + _DAT_1127617a4);
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar6 = puVar4;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    }
    PTR__OBJC_CLASS___NSData_1126ae778 = puVar9;
    if (puVar8 == (undefined *)0x0) {
      func_0x00010c029660(puVar4);
      _objc_retain();
    }
    else {
      func_0x00010bf649c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar4);
      _objc_retain();
      _objc_release(puVar9);
    }
    if (puVar7 != (undefined *)0x0) {
      _objc_release(puVar13);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    return puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 106f4a934; end: 106f4aa9b; -[SCSpectaclesAssetMetadataMalibu avMetadataItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f4a934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar8 = &lStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_1127617a4);
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8ef18,puVar1,
                      *(undefined8 *)PTR__kCMMetadataBaseDataType_UTF8_1103485c0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)PTR__kCMMetadataBaseDataType_RawData_1103485b0;
  lVar3 = param_1;
  lStack_60 = lVar2;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8ef38,
                      *(undefined8 *)(param_1 + _DAT_1127617a8),uVar9);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = lVar3;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8ef58,
                      *(undefined8 *)(param_1 + _DAT_1127617ac),uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = puVar1;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bee7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f078,plVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bee7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f098,plVar8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    }
    PTR__OBJC_CLASS___NSData_1126ae778 = puVar7;
    if (puVar6 == (undefined *)0x0) {
      func_0x00010c029660(puVar1,param_2,puVar4,puVar10,0);
      _objc_retain();
    }
    else {
      func_0x00010bf649c0(puVar7,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar1,param_2,puVar4,puVar10,puVar7);
      _objc_retain();
      _objc_release(puVar7);
    }
    if (puVar5 != (undefined *)0x0) {
      _objc_release(puVar10);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106f4aa9c; end: 106f4abef; -[SCSpectaclesAssetMetadataMalibu initWithImageMetadata:serialNumber:] */

long FUN_106f4aa9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f058,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f078,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f098,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  }
  PTR__OBJC_CLASS___NSData_1126ae778 = puVar4;
  if (lVar3 == 0) {
    func_0x00010c029660(param_1,param_2,lVar1,puVar5,0);
    _objc_retain();
  }
  else {
    func_0x00010bf649c0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029660(param_1,param_2,lVar1,puVar5,puVar4);
    _objc_retain();
    _objc_release(puVar4);
  }
  if (lVar2 != 0) {
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 106f4abf0; end: 106f4aca7; -[SCSpectaclesAssetMetadataMalibu _addImageMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f4abf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127617a4);
  func_0x00010c28ed80(uVar1);
  _CGImageMetadataSetValueWithPath(param_3,0,&PTR____CFConstantStringClassReference_110e8f058,uVar1)
  ;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127617a8);
  func_0x00010bf15da0(uVar1);
  _CGImageMetadataSetValueWithPath(param_3,0,&PTR____CFConstantStringClassReference_110e8f078,uVar1)
  ;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127617ac);
  func_0x00010bf15da0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGImageMetadataSetValueWithPath_110349c00)
            (param_3,0,&PTR____CFConstantStringClassReference_110e8f098,uVar1);
  return;
}



/* Entry: 106f4aca8; end: 106f4acb7; -[SCSpectaclesAssetMetadataMalibu mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4aca8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127617a4);
}



/* Entry: 106f4acb8; end: 106f4acc7; -[SCSpectaclesAssetMetadataMalibu metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4acb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127617a8);
}



/* Entry: 106f4acc8; end: 106f4acd7; -[SCSpectaclesAssetMetadataMalibu imuData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4acc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127617ac);
}



/* Entry: 106f4acd8; end: 106f4ad27; -[SCSpectaclesAssetMetadataMalibu .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f4acd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127617ac,0);
  _objc_storeStrong(param_1 + _DAT_1127617a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127617a4,0);
  return;
}



/* Entry: 106f4ad28; end: 106f4addf; -[SCSpectaclesAssetMetadataNewport initWithMediaId:metadata:imuData:calibration:primaryCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f4ad28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f7e70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithMediaId_metadata_imuData_1125e7f80,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127617b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127617b0) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127617b4) = param_7;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4ade0; end: 106f4ae53; -[SCSpectaclesAssetMetadataNewport isCorrupt] */

bool FUN_106f4ade0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf27c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010c112d00(param_1);
    bVar1 = param_1 == 0;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106f4ae54; end: 106f4b25b; -[SCSpectaclesAssetMetadataNewport initWithAvMetadataItems:serialNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_106f4ae54(undefined8 *****param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 *****pppppuVar20;
  undefined *puVar21;
  undefined8 ****ppppuStack_1f8;
  undefined *puStack_1f0;
  undefined8 ****ppppuStack_1e8;
  undefined8 ****ppppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 ****ppppuStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ****ppppuStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined **ppuStack_140;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar14 = 0;
    pppppuVar13 = (undefined8 *****)0x0;
    lVar12 = 0;
    pppppuVar2 = param_1;
  }
  else {
    lVar14 = 0;
    lStack_138 = 0;
    lStack_148 = 0;
    lStack_158 = 0;
    lStack_168 = 0;
    lVar15 = *plStack_120;
    ppuStack_140 = &PTR____CFConstantStringClassReference_110e8eef8;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110e8ef18;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110e8ef38;
    ppuStack_170 = &PTR____CFConstantStringClassReference_110e8ef58;
    ppppuStack_180 = param_1;
    uStack_178 = param_4;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar16 = *(long *)(lStack_128 + lVar12 * 8);
        lVar18 = lVar16;
        func_0x00010c086a80();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar18;
        func_0x00010c0720c0();
        _objc_release(lVar18);
        if ((int)lVar17 != 0) {
          lVar18 = lVar16;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar18;
          func_0x00010c071ae0();
          _objc_release(lVar18);
          if ((int)lVar17 == 0) {
            lVar18 = lVar16;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar18;
            func_0x00010c071ae0();
            _objc_release(lVar18);
            if ((int)lVar17 == 0) {
              lVar18 = lVar16;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              lVar17 = lVar18;
              func_0x00010c071ae0();
              _objc_release(lVar18);
              if ((int)lVar17 == 0) {
                lVar18 = lVar16;
                func_0x00010c086560();
                _objc_retainAutoreleasedReturnValue();
                lVar17 = lVar18;
                func_0x00010c071ae0();
                _objc_release(lVar18);
                if ((int)lVar17 == 0) {
                  lVar18 = lVar16;
                  func_0x00010c086560();
                  _objc_retainAutoreleasedReturnValue();
                  lVar17 = lVar18;
                  func_0x00010c071ae0();
                  _objc_release(lVar18);
                  if ((int)lVar17 == 0) goto LAB_106f4b10c;
                  func_0x00010bf64960();
                  _objc_retainAutoreleasedReturnValue();
                  lVar18 = lStack_168;
                  lStack_168 = lVar16;
                }
                else {
                  func_0x00010bf64960();
                  _objc_retainAutoreleasedReturnValue();
                  lVar18 = lStack_158;
                  lStack_158 = lVar16;
                }
              }
              else {
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lStack_148;
                lStack_148 = lVar16;
              }
            }
            else {
              func_0x00010c0df6a0();
              _objc_retainAutoreleasedReturnValue();
              lVar18 = lStack_138;
              lStack_138 = lVar16;
            }
          }
          else {
            func_0x00010bf64960();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar14;
            lVar14 = lVar16;
          }
          _objc_release(lVar18);
        }
LAB_106f4b10c:
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = param_3;
      func_0x00010bf52a60();
      lVar16 = lStack_138;
      lVar17 = lStack_148;
      lVar18 = lStack_158;
      lVar12 = lStack_168;
      param_4 = uStack_178;
      pppppuVar2 = (undefined8 *****)ppppuStack_180;
    } while (lVar1 != 0);
    pppppuVar13 = (undefined8 *****)0x0;
    if ((lVar14 != 0) && (lStack_138 != 0)) {
      puVar19 = PTR_PTR_1126d3038;
      func_0x00010bf27d60(PTR_PTR_1126d3038);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(lVar16);
      func_0x00010c029680();
      _objc_retain();
      _objc_release(puVar19);
      pppppuVar13 = pppppuVar2;
    }
  }
  _objc_release(lVar12);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(param_4);
  _objc_release(param_3);
  pppppuVar3 = pppppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar13;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_106f4b25c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1f0 = PTR_PTR_1126f7e70;
  pppppuVar4 = &ppppuStack_1f8;
  ppppuStack_1f8 = pppppuVar3;
  lStack_1d0 = lVar18;
  lStack_1c8 = lVar17;
  lStack_1c0 = lVar16;
  ppppuStack_1b8 = pppppuVar2;
  lStack_1b0 = lVar14;
  uStack_1a8 = param_4;
  ppppuStack_1a0 = pppppuVar13;
  lStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(pppppuVar4,PTR_s_avMetadataItems_1125a22c0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar2 = pppppuVar3;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_1127617b0);
  ppppuStack_1e8 = pppppuVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 2;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppppuStack_1e0 = pppppuVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar13 = pppppuVar4;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(pppppuVar3);
  _objc_release(uVar5);
  _objc_release(pppppuVar2);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar13);
    return pppppuVar13;
  }
  ___stack_chk_fail();
  _objc_retain(uVar11);
  pppppuVar2 = pppppuVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar13 = pppppuVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar3 = pppppuVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar7 = pppppuVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar8 = pppppuVar4;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  if (pppppuVar2 == (undefined8 *****)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppppuVar9 = pppppuVar13;
  func_0x00010c067fc0();
  pppppuVar20 = (undefined8 *****)0x0;
  if ((puVar19 == (undefined *)0x0) || (pppppuVar9 == (undefined8 *****)0x0)) goto LAB_106f4b5d8;
  puVar6 = PTR_PTR_1126d3038;
  func_0x00010bf27d60();
  _objc_retainAutoreleasedReturnValue();
  if (pppppuVar7 == (undefined8 *****)0x0) {
    puVar21 = (undefined *)0x0;
    if (pppppuVar8 == (undefined8 *****)0x0) goto LAB_106f4b644;
LAB_106f4b578:
    puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029680(pppppuVar4);
    _objc_retain();
    _objc_release(puVar10);
  }
  else {
    puVar21 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    if (pppppuVar8 != (undefined8 *****)0x0) goto LAB_106f4b578;
LAB_106f4b644:
    func_0x00010c029680(pppppuVar4);
    _objc_retain();
  }
  if (pppppuVar7 != (undefined8 *****)0x0) {
    _objc_release(puVar21);
  }
  _objc_release(puVar6);
  pppppuVar20 = pppppuVar4;
LAB_106f4b5d8:
  _objc_release(puVar19);
  _objc_release(pppppuVar8);
  _objc_release(pppppuVar7);
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar13);
  _objc_release(pppppuVar2);
  _objc_release(uVar11);
  _objc_release(pppppuVar4);
  return pppppuVar20;
}



/* Entry: 106f4b25c; end: 106f4b407; -[SCSpectaclesAssetMetadataNewport avMetadataItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_106f4b25c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  undefined *puVar15;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_1126f7e70;
  plVar1 = &lStack_78;
  lStack_78 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_avMetadataItems_1125a22c0);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127617b0);
  lStack_68 = lVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar1;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
    return plVar5;
  }
  ___stack_chk_fail();
  _objc_retain(uVar12);
  plVar5 = plVar1;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  plVar6 = plVar1;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  plVar7 = plVar1;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  plVar8 = plVar1;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  plVar9 = plVar1;
  func_0x00010bee7e80();
  _objc_retainAutoreleasedReturnValue();
  if (plVar5 == (long *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
  }
  plVar10 = plVar6;
  func_0x00010c067fc0();
  plVar14 = (long *)0x0;
  if ((puVar13 == (undefined *)0x0) || (plVar10 == (long *)0x0)) goto LAB_106f4b5d8;
  puVar4 = PTR_PTR_1126d3038;
  func_0x00010bf27d60();
  _objc_retainAutoreleasedReturnValue();
  if (plVar8 == (long *)0x0) {
    puVar15 = (undefined *)0x0;
    if (plVar9 == (long *)0x0) goto LAB_106f4b644;
LAB_106f4b578:
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029680(plVar1);
    _objc_retain();
    _objc_release(puVar11);
  }
  else {
    puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    if (plVar9 != (long *)0x0) goto LAB_106f4b578;
LAB_106f4b644:
    func_0x00010c029680(plVar1);
    _objc_retain();
  }
  if (plVar8 != (long *)0x0) {
    _objc_release(puVar15);
  }
  _objc_release(puVar4);
  plVar14 = plVar1;
LAB_106f4b5d8:
  _objc_release(puVar13);
  _objc_release(plVar9);
  _objc_release(plVar8);
  _objc_release(plVar7);
  _objc_release(plVar6);
  _objc_release(plVar5);
  _objc_release(uVar12);
  _objc_release(plVar1);
  return plVar14;
}



/* Entry: 106f4b408; end: 106f4b66b; -[SCSpectaclesAssetMetadataNewport initWithImageMetadata:serialNumber:] */

long FUN_106f4b408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f018,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f038,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f058,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f078,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f098,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = lVar2;
  func_0x00010c067fc0();
  lVar10 = 0;
  if ((puVar9 == (undefined *)0x0) || (lVar6 == 0)) goto LAB_106f4b5d8;
  puVar7 = PTR_PTR_1126d3038;
  func_0x00010bf27d60(PTR_PTR_1126d3038,param_2,puVar9,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar11 = (undefined *)0x0;
    if (lVar5 == 0) goto LAB_106f4b644;
LAB_106f4b578:
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029680(param_1,param_2,lVar3,puVar11,puVar8,puVar7,lVar6);
    _objc_retain();
    _objc_release(puVar8);
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) goto LAB_106f4b578;
LAB_106f4b644:
    func_0x00010c029680(param_1,param_2,lVar3,puVar11,0,puVar7,lVar6);
    _objc_retain();
  }
  if (lVar4 != 0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar7);
  lVar10 = param_1;
LAB_106f4b5d8:
  _objc_release(puVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_1);
  return lVar10;
}



/* Entry: 106f4b66c; end: 106f4b75b; -[SCSpectaclesAssetMetadataNewport _addImageMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f4b66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f7e70;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s__addImageMetadata__11254f5e8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _CGImageMetadataSetValueWithPath
            (param_3,0,&PTR____CFConstantStringClassReference_110e8f038,puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127617b0);
  func_0x00010bf63640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf15da0();
  _CGImageMetadataSetValueWithPath(param_3,0,&PTR____CFConstantStringClassReference_110e8f018,uVar4)
  ;
  _objc_release(uVar3);
  return;
}



/* Entry: 106f4b75c; end: 106f4b76b; -[SCSpectaclesAssetMetadataNewport calibration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4b75c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127617b0);
}



/* Entry: 106f4b76c; end: 106f4b77b; -[SCSpectaclesAssetMetadataNewport primaryCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f4b76c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127617b4);
}



/* Entry: 106f4b77c; end: 106f4b78f; -[SCSpectaclesAssetMetadataNewport .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f4b77c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127617b0,0);
  return;
}



/* Entry: 106f4b790; end: 106f4b88f; -[SCAuxiliaryDataDecryptionKeyProcessor initWithSnapId:dataObjectContext:encryptedContentManager:performer:] */

undefined1 *
FUN_106f4b790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f7e78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4b890; end: 106f4b89b; -[SCAuxiliaryDataDecryptionKeyProcessor inputDataKeys] */

undefined * FUN_106f4b890(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f4b89c; end: 106f4b8a7; -[SCAuxiliaryDataDecryptionKeyProcessor outputDataKeys] */

undefined ** FUN_106f4b89c(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111181430;
}



/* Entry: 106f4b8a8; end: 106f4b8bb; -[SCAuxiliaryDataDecryptionKeyProcessor gallerySnap] */

void FUN_106f4b8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa72f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4d0,PTR_s_fetchGallerySnapWithSnapId_dataO_1125c7660,
             *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 106f4b8bc; end: 106f4b92b; -[SCAuxiliaryDataDecryptionKeyProcessor runWithInputData:completion:] */

void FUN_106f4b8bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x00010bfbd760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135a80(uVar1,param_2,lVar2,0,uVar3,&PTR___NSConcreteGlobalBlock_110984e80);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106f4b92c; end: 106f4b92f;  */

void FUN_106f4b92c(void)

{
  return;
}



/* Entry: 106f4b930; end: 106f4b977; -[SCAuxiliaryDataDecryptionKeyProcessor .cxx_destruct] */

void FUN_106f4b930(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4b978; end: 106f4b983; +[SCDecryptionKeyAuxiliaryData key] */

undefined ** FUN_106f4b978(void)

{
  return &PTR____CFConstantStringClassReference_110e8f118;
}



/* Entry: 106f4b984; end: 106f4ba2f; -[SCDecryptionKeyAuxiliaryData initWithDecryptionKey:iv:] */

undefined1 *
FUN_106f4b984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7e80;
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



/* Entry: 106f4ba30; end: 106f4ba37; -[SCDecryptionKeyAuxiliaryData key] */

undefined8 FUN_106f4ba30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f4ba38; end: 106f4ba3f; -[SCDecryptionKeyAuxiliaryData iv] */

undefined8 FUN_106f4ba38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f4ba40; end: 106f4ba6f; -[SCDecryptionKeyAuxiliaryData .cxx_destruct] */

void FUN_106f4ba40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4ba70; end: 106f4ba7b; +[SCNewportSecondaryDepthAuxiliaryData key] */

undefined ** FUN_106f4ba70(void)

{
  return &PTR____CFConstantStringClassReference_110e8f138;
}



/* Entry: 106f4ba7c; end: 106f4ba87; +[SCNewportPrimaryDepthAuxiliaryData key] */

undefined ** FUN_106f4ba7c(void)

{
  return &PTR____CFConstantStringClassReference_110e8f158;
}



/* Entry: 106f4ba88; end: 106f4baff; -[SCDataAuxiliaryData initWithData:] */

undefined1 * FUN_106f4ba88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7e88;
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



/* Entry: 106f4bb00; end: 106f4bb07; -[SCDataAuxiliaryData data] */

undefined8 FUN_106f4bb00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f4bb08; end: 106f4bb13; -[SCDataAuxiliaryData .cxx_destruct] */

void FUN_106f4bb08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4bb14; end: 106f4bbe3; -[SCNewportDepthMetadataDownloadProcessor initWithSnapId:networker:performer:] */

undefined1 *
FUN_106f4bb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f7e90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4bbe4; end: 106f4be63; -[SCNewportDepthMetadataDownloadProcessor _loadMetadataURLWithCompletion:] */

void FUN_106f4bbe4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d2c48;
  _objc_alloc();
  func_0x00010c010420();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  func_0x00010801e908(puVar12,0,0,0,0,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar12);
  _objc_initWeak(auStack_80,param_1);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  puVar12 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_3);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e87d78;
  func_0x00010c25f400(uVar14);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = ppuVar11;
  _objc_retain(ppuVar11);
  lVar5 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar5 == 0) {
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 != 0) {
      ppuVar15 = (undefined **)0x0;
      (**(code **)(lVar7 + 0x10))(lVar7,0,0,0,0);
    }
  }
  else {
    ppuVar6 = (undefined **)PTR_PTR_1126d2c50;
    _objc_alloc();
    func_0x00010c0206e0();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if ((ppuVar11 == (undefined **)0x0) || (ppuVar6 != (undefined **)0x0)) {
      ppuVar15 = ppuVar6;
      func_0x00010c245680(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar15;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      ppuVar15 = ppuVar8;
      func_0x00010c2490e0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
      ppuVar15 = ppuVar8;
      func_0x00010c2496c0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      ppuVar15 = ppuVar8;
      func_0x00010be41f00(lVar5);
      lVar7 = *(long *)(param_3 + 0x20);
      if (lVar7 != 0) {
        lVar10 = lVar5;
        func_0x00010be41f00(lVar5);
        ppuVar15 = ppuVar9;
        (**(code **)(lVar7 + 0x10))(lVar7,lVar10,ppuVar9,puVar12,0);
      }
      _objc_release(puVar12);
      _objc_release(ppuVar9);
    }
    else {
      ppuVar15 = &PTR____CFConstantStringClassReference_110e8f1f8;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      lVar7 = *(long *)(param_3 + 0x20);
      if (lVar7 != 0) {
        ppuVar15 = (undefined **)0x0;
        (**(code **)(lVar7 + 0x10))(lVar7,0,0,0,ppuVar8);
      }
    }
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = ppuVar11[4];
  if (puVar12 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000106f4c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar12 + 0x10))(puVar12,0,0,0,ppuVar15);
    return;
  }
  return;
}



/* Entry: 106f4be64; end: 106f4c0d3;  */

void FUN_106f4be64(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_3;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      ppuVar9 = (undefined **)0x0;
      (**(code **)(lVar3 + 0x10))(lVar3,0,0,0,0);
    }
  }
  else {
    ppuVar2 = (undefined **)PTR_PTR_1126d2c50;
    _objc_alloc();
    func_0x00010c0206e0();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_3 == (undefined **)0x0) || (ppuVar2 != (undefined **)0x0)) {
      ppuVar9 = ppuVar2;
      func_0x00010c245680(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      ppuVar9 = ppuVar4;
      func_0x00010c2490e0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      ppuVar9 = ppuVar4;
      func_0x00010c2496c0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar4;
      func_0x00010be41f00(lVar1);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        lVar6 = lVar1;
        func_0x00010be41f00(lVar1);
        ppuVar9 = ppuVar5;
        (**(code **)(lVar3 + 0x10))(lVar3,lVar6,ppuVar5,puVar7,0);
      }
      _objc_release(puVar7);
      _objc_release(ppuVar5);
    }
    else {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e8f1f8;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        ppuVar9 = (undefined **)0x0;
        (**(code **)(lVar3 + 0x10))(lVar3,0,0,0,ppuVar4);
      }
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = param_3[4];
  if (puVar7 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000106f4c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar7 + 0x10))(puVar7,0,0,0,ppuVar9);
    return;
  }
  return;
}



/* Entry: 106f4c0d4; end: 106f4c0f7;  */

void FUN_106f4c0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f4c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,param_3);
    return;
  }
  return;
}



/* Entry: 106f4c0f8; end: 106f4c22f; -[SCNewportDepthMetadataDownloadProcessor _isMetadataPreparedForSnap:] */

long FUN_106f4c0f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      lVar5 = 0;
LAB_106f4c1ec:
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return lVar5;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_3 + 0x18,0);
      _objc_storeStrong(param_3 + 0x10,0);
      param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
      return param_3;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar2 = *(ulong *)(lVar6 * 8);
      func_0x00010bf0ddc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        lVar5 = 1;
        goto LAB_106f4c1ec;
      }
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106f4c230; end: 106f4c26b; -[SCNewportDepthMetadataDownloadProcessor .cxx_destruct] */

void FUN_106f4c230(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4c26c; end: 106f4c277; -[SCNewportPrimaryDepthMetadataDownloadProcessor inputDataClasses] */

undefined * FUN_106f4c26c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f4c278; end: 106f4c2e7; -[SCNewportPrimaryDepthMetadataDownloadProcessor outputDataClasses] */

void FUN_106f4c278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3528;
  _objc_opt_class();
  uVar3 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_20 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f4c36c;
  puStack_50 = &UNK_110984ed0;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  func_0x00010be4df60(puVar2,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 106f4c2e8; end: 106f4c36b; -[SCNewportPrimaryDepthMetadataDownloadProcessor runWithInputData:completion:] */

void FUN_106f4c2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f4c36c;
  puStack_30 = &UNK_110984ed0;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010be4df60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 106f4c36c; end: 106f4c437;  */

undefined *
FUN_106f4c36c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             long param_5)

{
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 == (undefined *)0x0) && (param_5 != 0)) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110e8f218;
    lStack_40 = param_5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&ppuStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_3;
  }
  ___stack_chk_fail();
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f4c438; end: 106f4c443; -[SCNewportSecondaryDepthMetadataDownloadProcessor inputDataClasses] */

undefined * FUN_106f4c438(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f4c444; end: 106f4c4b3; -[SCNewportSecondaryDepthMetadataDownloadProcessor outputDataClasses] */

void FUN_106f4c444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3530;
  _objc_opt_class();
  uVar3 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_20 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f4c538;
  puStack_50 = &UNK_110984ed0;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  func_0x00010be4df60(puVar2,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 106f4c4b4; end: 106f4c537; -[SCNewportSecondaryDepthMetadataDownloadProcessor runWithInputData:completion:] */

void FUN_106f4c4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f4c538;
  puStack_30 = &UNK_110984ed0;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010be4df60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 106f4c538; end: 106f4c603;  */

long * FUN_106f4c538(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  long *plStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) && (param_5 != 0)) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110e8f218;
    plVar3 = &lStack_40;
    lStack_40 = param_5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  plVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  pplVar2 = &plStack_80;
  pcStack_58 = FUN_106f4c604;
  lStack_70 = param_4;
  plStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  puStack_78 = PTR_PTR_1126f7e98;
  plStack_80 = plVar1;
  _objc_msgSendSuper2(&plStack_80,PTR_s_init_1125d9248);
  if (pplVar2 != (long **)0x0) {
    plVar1 = plVar3;
    func_0x00010bf51e00();
    lVar4 = (long)pplVar2[1];
    pplVar2[1] = plVar1;
    _objc_release(lVar4);
  }
  _objc_release(plVar3);
  return (long *)pplVar2;
}



/* Entry: 106f4c604; end: 106f4c67b; -[SCPathString initWithPath:] */

undefined1 * FUN_106f4c604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7e98;
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



/* Entry: 106f4c67c; end: 106f4c683; -[SCPathString depthPath] */

undefined8 FUN_106f4c67c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f4c684; end: 106f4c68f; -[SCPathString .cxx_destruct] */

void FUN_106f4c684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4c690; end: 106f4c69b; +[SCNewportPrimaryDepthPathAuxiliaryData key] */

undefined ** FUN_106f4c690(void)

{
  return &PTR____CFConstantStringClassReference_110e8f1b8;
}



/* Entry: 106f4c69c; end: 106f4c6a7; +[SCNewportStereoDepthPathAuxiliaryData key] */

undefined ** FUN_106f4c69c(void)

{
  return &PTR____CFConstantStringClassReference_110e8f1d8;
}



/* Entry: 106f4c6a8; end: 106f4c71b; -[SCURLContainer initWithUrl:] */

undefined1 * FUN_106f4c6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7ea0;
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



/* Entry: 106f4c71c; end: 106f4c723; -[SCURLContainer url] */

undefined8 FUN_106f4c71c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f4c724; end: 106f4c72f; -[SCURLContainer .cxx_destruct] */

void FUN_106f4c724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4c730; end: 106f4c73b; +[SCPrimaryDepthURLAuxiliaryData key] */

undefined ** FUN_106f4c730(void)

{
  return &PTR____CFConstantStringClassReference_110e8f238;
}



/* Entry: 106f4c73c; end: 106f4c747; +[SCSecondaryDepthURLAuxiliaryData key] */

undefined ** FUN_106f4c73c(void)

{
  return &PTR____CFConstantStringClassReference_110e8f258;
}



/* Entry: 106f4c748; end: 106f4c86b; -[SCSpectaclesAssetMetadataExtractor initWithSnap:media:encryptedContentManager:cloudFS:performer:] */

undefined1 *
FUN_106f4c748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f7ea8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4c86c; end: 106f4c877; -[SCSpectaclesAssetMetadataExtractor inputDataKeys] */

undefined * FUN_106f4c86c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f4c878; end: 106f4c8e7; -[SCSpectaclesAssetMetadataExtractor outputDataKeys] */

void FUN_106f4c878(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar5 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e8f418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar5);
  uVar2 = *(undefined8 *)(puVar1 + 8);
  func_0x00010b697ae8(uVar2,3);
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  if ((int)uVar2 == 0) {
    func_0x00010c13a8c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR_PTR_110d59b18;
  }
  else {
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR_PTR_110d59b30;
  }
  puVar7 = *ppuVar6;
  _objc_retain(puVar7);
  uVar4 = *(ulong *)(puVar1 + 8);
  func_0x00010b5fa088();
  uVar8 = *(undefined8 *)(puVar1 + 0x18);
  uVar2 = *(undefined8 *)(puVar1 + 0x28);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar4 < 0xd) && ((0x1566U >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
    _objc_retain(pppuVar5);
    func_0x00010c1346e0(uVar8);
    _objc_release(uVar2);
  }
  else {
    _objc_retain(pppuVar5);
    func_0x00010c1351c0(uVar8);
    _objc_release(uVar2);
  }
  _objc_release(pppuVar5);
  _objc_release(puVar7);
  _objc_release(pppuVar5);
  _objc_release(uVar3);
  return;
}



/* Entry: 106f4c8e8; end: 106f4cabf; -[SCSpectaclesAssetMetadataExtractor _fetchMediaWithCompletion:] */

void FUN_106f4c8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010b697ae8(uVar1,3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((int)uVar1 == 0) {
    func_0x00010c13a8c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR_PTR_110d59b18;
  }
  else {
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR_PTR_110d59b30;
  }
  puVar5 = *ppuVar4;
  _objc_retain(puVar5);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010b5fa088();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 < 0xd) && ((0x1566U >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)) {
    _objc_retain(param_3);
    func_0x00010c1346e0(uVar6);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_3);
    func_0x00010c1351c0(uVar6);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106f4cac0; end: 106f4cb8f;  */

void FUN_106f4cac0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126d3538;
    func_0x00010bf0b9a0(PTR_PTR_1126d3538,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106f4cb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2);
  return;
}



/* Entry: 106f4cb90; end: 106f4cc93; -[SCSpectaclesAssetMetadataExtractor _fetchMetadataWithCompletion:] */

void FUN_106f4cb90(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000109023b84();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    FUN_106f4cc94(uVar2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f7e0();
    if ((uVar3 & 1) == 0) {
      (**(code **)(param_3 + 0x10))(param_3,uVar2,0);
      goto LAB_106f4cc6c;
    }
    _objc_release(uVar2);
  }
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010be12840(param_1);
  _objc_release(param_3);
  uVar2 = uVar1;
LAB_106f4cc6c:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106f4cc94; end: 106f4cddb;  */

void FUN_106f4cc94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106f4d0b4;
  uStack_50 = 0x106f4d0c4;
  uStack_48 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bc900(param_1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f4cddc; end: 106f4cea7;  */

void FUN_106f4cddc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 != 0) {
    FUN_106f4cc94(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c06f7e0();
    lVar3 = *(long *)(param_1 + 0x28);
    if ((int)lVar1 == 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106f4ce7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106f4cea8; end: 106f4cf2b; -[SCSpectaclesAssetMetadataExtractor runWithInputData:completion:] */

void FUN_106f4cea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f4cf2c;
  puStack_30 = &UNK_110984f40;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010be129a0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 106f4cf2c; end: 106f4d05f;  */

void FUN_106f4cf2c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c06f7e0();
    lVar6 = *(long *)(param_1 + 0x20);
    if ((int)lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = *(code **)(lVar6 + 0x10);
      puVar3 = (undefined *)0x0;
      puVar7 = puVar2;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = *(code **)(lVar6 + 0x10);
      puVar2 = (undefined *)0x0;
      puVar7 = puVar3;
    }
    (*pcVar5)(lVar6,puVar2,puVar3,0);
    _objc_release(puVar7);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3,0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x28,0);
  _objc_storeStrong(param_2 + 0x20,0);
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 106f4d060; end: 106f4d0b3; -[SCSpectaclesAssetMetadataExtractor .cxx_destruct] */

void FUN_106f4d060(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f4d0b4; end: 106f4d0cb;  */

void FUN_106f4d0b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f4d0cc; end: 106f4d19b;  */

void FUN_106f4d0cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d3508;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bff42c0();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f4d19c; end: 106f4d243; -[SCSpectaclesDepthDownloader initWithPart:performer:] */

undefined1 *
FUN_106f4d19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7eb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f4d244; end: 106f4d28f; -[SCSpectaclesDepthDownloader _inputDataKey] */

void FUN_106f4d244(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar1 = &PTR_PTR_110985200;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_106f4d280;
    ppuVar1 = &PTR_PTR_110985208;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_106f4d280:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f4d290; end: 106f4d31b; -[SCSpectaclesDepthDownloader inputDataKeys] */

void FUN_106f4d290(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be3c180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_30 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (*(long *)(param_1 + 8) == 0) {
      ppuVar1 = &PTR_PTR_110985210;
    }
    else {
      if (*(long *)(param_1 + 8) != 1) goto _objc_autoreleaseReturnValue;
      ppuVar1 = &PTR_PTR_110985218;
    }
    puVar2 = *ppuVar1;
    _objc_retain(puVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f4d31c; end: 106f4d367; -[SCSpectaclesDepthDownloader _outputDataKey] */

void FUN_106f4d31c(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar1 = &PTR_PTR_110985210;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_106f4d358;
    ppuVar1 = &PTR_PTR_110985218;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_106f4d358:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106f4d368; end: 106f4d3f3; -[SCSpectaclesDepthDownloader outputDataKeys] */

void FUN_106f4d368(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  long lStack_30;
  long lStack_28;
  
  plVar8 = &lStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be6e940();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_30 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(plVar8);
  _objc_retain(uVar9);
  lVar3 = param_1;
  func_0x00010be3c180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)plVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar2);
  puVar1 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126b4960;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_initWeak(auStack_b0,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106f4d6e8;
  puStack_c0 = &UNK_110984fa0;
  _objc_copyWeak(auStack_b8,auStack_b0);
  func_0x00010c0d0c40(uVar10);
  puVar6 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar2;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x106f4d8fc;
  puStack_f0 = &UNK_110984fd0;
  _objc_copyWeak(auStack_e0,auStack_b0);
  _objc_retain(uVar9);
  uStack_e8 = uVar9;
  _objc_copyWeak(auStack_110,auStack_b0);
  _objc_retain(uVar9);
  func_0x00010c25f660(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_110);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(plVar8);
  return;
}



/* Entry: 106f4d3f4; end: 106f4d6e7; -[SCSpectaclesDepthDownloader runWithInputData:completion:] */

void FUN_106f4d3f4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010be3c180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b4960;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar4;
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106f4d6e8;
  puStack_90 = &UNK_110984fa0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c0d0c40(uVar8);
  puVar6 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar4;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106f4d8fc;
  puStack_c0 = &UNK_110984fd0;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_copyWeak(auStack_e0,auStack_80);
  _objc_retain(param_4);
  func_0x00010c25f660(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f4d6e8; end: 106f4d7d7;  */

void FUN_106f4d6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f4d7d8; end: 106f4d9fb;  */

void FUN_106f4d7d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfb67a0(*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    lVar9 = *(long *)(lVar1 + 0x20);
    _objc_retain(lVar9);
    param_5 = auStack_c8;
    lVar2 = lVar9;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar9);
        }
        (**(code **)(*(long *)(lVar10 * 8) + 0x10))((float)*(double *)(lVar1 + 0x28));
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      param_5 = auStack_c8;
      lVar2 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  _objc_retain(param_5);
  lVar2 = lVar1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(lVar2 + 0x20));
    *(undefined8 *)(lVar2 + 0x28) = 0;
    lVar9 = *(long *)(lVar1 + 0x20);
    lVar1 = lVar2;
    func_0x00010be6e940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)0x0;
    (**(code **)(lVar9 + 0x10))(lVar9,puVar3,0);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar4 = param_5 + 0x28;
  _objc_loadWeakRetained();
  if (puVar4 != (undefined1 *)0x0) {
    func_0x00010c12adc0(*(undefined8 *)(puVar4 + 0x20));
    *(undefined8 *)(puVar4 + 0x28) = 0;
    puVar5 = puVar7;
    func_0x00010bf3ec40();
    puVar6 = puVar7;
    if (puVar5 == (undefined1 *)0xfffffffffffffc19) {
      puVar6 = (undefined1 *)0x0;
    }
    (**(code **)(*(long *)(param_5 + 0x20) + 0x10))
              (*(long *)(param_5 + 0x20),0,puVar6,puVar5 == (undefined1 *)0xfffffffffffffc19);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106f4d9fc; end: 106f4da8f;  */

void FUN_106f4d9fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(lVar1 + 0x20));
    *(undefined8 *)(lVar1 + 0x28) = 0;
    lVar2 = param_4;
    func_0x00010bf3ec40();
    lVar3 = param_4;
    if (lVar2 == -999) {
      lVar3 = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,lVar3,lVar2 == -999)
    ;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106f4da90; end: 106f4da97; -[SCSpectaclesDepthDownloader isExpensive] */

undefined8 FUN_106f4da90(void)

{
  return 1;
}



/* Entry: 106f4da98; end: 106f4da9f; -[SCSpectaclesDepthDownloader suspend] */

void FUN_106f4da98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_cancel_1125a9090);
  return;
}


