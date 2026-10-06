/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cfed38; end: 107cfeda7;  */

void FUN_107cfed38(long param_1,undefined8 param_2)

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



/* Entry: 107cfeda8; end: 107cfedab;  */

void FUN_107cfeda8(void)

{
  return;
}



/* Entry: 107cfedac; end: 107cfee27;  */

void FUN_107cfedac(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cfee28;
  puStack_20 = &UNK_1108d75d0;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107cfee60;
  puStack_48 = &UNK_110842b58;
  uStack_18 = uStack_40;
  func_0x00010c0bf7e0(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 107cfee28; end: 107cfef1b;  */

void FUN_107cfee28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfef1c; end: 107cff02f;  */

ulong FUN_107cfef1c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48418);
  if (((((((uVar1 & 1) == 0) &&
         (uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48438),
         (uVar1 & 1) == 0)) &&
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f484d8),
        (uVar1 & 1) == 0)) &&
       ((uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48558),
        (uVar1 & 1) == 0 &&
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f484f8),
        (uVar1 & 1) == 0)))) &&
      ((uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48518),
       (uVar1 & 1) == 0 &&
       ((uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48538),
        (uVar1 & 1) == 0 &&
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f485f8),
        (uVar1 & 1) == 0)))))) &&
     ((uVar1 = param_1,
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48618),
      (uVar1 & 1) == 0 &&
      ((uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48578),
       (uVar1 & 1) == 0 &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f48598),
       (uVar1 & 1) == 0)))))) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f485b8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff030; end: 107cff03f;  */

void FUN_107cff030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f483b8);
  return;
}



/* Entry: 107cff040; end: 107cff2d7;  */

ulong FUN_107cff040(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f483b8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f485f8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff2d8; end: 107cff397;  */

undefined1 FUN_107cff2d8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcd20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff398; end: 107cff3cf;  */

void FUN_107cff398(long param_1,long param_2)

{
  func_0x00010c09de00();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 0;
  return;
}



/* Entry: 107cff3d0; end: 107cff48f;  */

undefined1 FUN_107cff3d0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcd20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff490; end: 107cff4ff;  */

void FUN_107cff490(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c07cb80();
  if ((int)lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010bf28700();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
    _objc_release();
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cff500; end: 107cff5bf;  */

undefined1 FUN_107cff500(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcd20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff5c0; end: 107cff5f7;  */

void FUN_107cff5c0(long param_1,long param_2)

{
  func_0x00010c09de00();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 != 0;
  return;
}



/* Entry: 107cff5f8; end: 107cff6b7;  */

undefined1 FUN_107cff5f8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcd20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff6b8; end: 107cff703;  */

void FUN_107cff6b8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cff704; end: 107cff7c3;  */

undefined1 FUN_107cff704(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcd20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff7c4; end: 107cff7d7;  */

void FUN_107cff7c4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cff7d8; end: 107cff897;  */

undefined1 FUN_107cff7d8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcd20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff898; end: 107cff8cf;  */

void FUN_107cff898(long param_1,long param_2)

{
  func_0x00010c27e1e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 1;
  return;
}



/* Entry: 107cff8d0; end: 107cff98f;  */

undefined8 FUN_107cff8d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcd20(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cff990; end: 107cff9ff;  */

void FUN_107cff990(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c27e1e0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cffa00; end: 107cffb6b;  */

long FUN_107cffa00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c0fc580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0fc580();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 != 0)) {
    if ((lVar1 == 0) && (lVar2 != 0)) {
      lVar7 = 1;
    }
    else if ((lVar1 == 0) || (lVar2 == 0)) {
      lVar3 = param_2;
      func_0x000100bf4908();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x000100bf4908(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x000100bf4b48(lVar3,lVar4);
      if (lVar7 == 0) {
        lVar5 = param_2;
        func_0x00010bfa3d00(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00010bfa3d00(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010bf433a0(lVar5);
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    else {
      lVar7 = lVar1;
      func_0x00010bf433a0(lVar1);
    }
  }
  else {
    lVar7 = -1;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar7;
}



/* Entry: 107cffb6c; end: 107cffc23;  */

bool FUN_107cffb6c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain();
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar3 = puVar1;
  func_0x00010bf44660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = puVar3;
  func_0x00010bf65700(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_2 <= (long)puVar4;
}



/* Entry: 107cffc24; end: 107cffdeb;  */

void FUN_107cffc24(ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0 || param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      puVar3 = (undefined *)0x0;
      if (uVar2 == 0) goto LAB_107cffd18;
      uVar1 = param_1;
      func_0x000100bf377c();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010bef0e60();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x000100bf4a30();
        _objc_release(uVar1);
        if (((uVar2 & 1) == 0) &&
           (uVar1 = param_1, func_0x000107cfb628(param_1,param_4,param_5), (uVar1 & 1) == 0)) {
          uVar1 = param_1;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf866a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          uVar1 = uVar2;
          FUN_107cffb6c(uVar2,3);
          if ((int)uVar1 == 0) {
LAB_107cffddc:
            puVar3 = (undefined *)0x0;
          }
          else {
            puVar3 = PTR_PTR_1126d78c0;
            if (param_3 == 0) {
              if (param_2 == 0) goto LAB_107cffddc;
              func_0x00010c09f920(PTR_PTR_1126d78c0);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bfba7a0(PTR_PTR_1126d78c0);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          _objc_release(uVar2);
          goto LAB_107cffd18;
        }
      }
    }
  }
  puVar3 = (undefined *)0x0;
LAB_107cffd18:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cffdec; end: 107cffe1b;  */

void FUN_107cffdec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb80f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb80f8,
                      &PTR____CFConstantStringClassReference_110eb8118,0);
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



/* Entry: 107cffe1c; end: 107d002ff;  */

void FUN_107cffe1c(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bdd30;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c237cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b1e0();
  func_0x00010bf8c980();
  uVar5 = param_1;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c11b6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c238a20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bfe42a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23aa60();
  func_0x00010bf984c0();
  func_0x00010c154b00();
  func_0x00010c11ae60();
  uVar11 = param_1;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bef3720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01420();
  func_0x00010c0800e0();
  uVar13 = param_1;
  func_0x00010c116fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bf45500();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bf82000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077680();
  uVar16 = param_1;
  func_0x00010c112fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010c155040();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c940();
  func_0x00010c0822a0();
  uVar21 = param_1;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b7c0();
  uVar23 = param_1;
  func_0x00010c259c60();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010bf1f940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2bc0();
  func_0x00010c22ed80();
  func_0x00010c079c60();
  uVar25 = param_1;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f940();
  _objc_release(param_1);
  func_0x00010c059080();
  _objc_release(param_2);
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
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d00300; end: 107d0049b;  */

void FUN_107d00300(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfa4340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d0049c();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  puVar3 = PTR_PTR_1126bdd30;
  uVar5 = param_1;
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    puVar3 = PTR_PTR_1126bdd28;
    if ((uVar4 & 1) == 0) {
      _objc_retain(param_1);
      uVar4 = param_1;
      goto LAB_107d00474;
    }
    _objc_retain(param_1);
    _objc_opt_class(puVar3);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_1);
    func_0x00010bfa4340(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    FUN_107d0050c(uVar5,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar3);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_1);
    func_0x00010bfa4340(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    FUN_107cffe1c(uVar5,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
LAB_107d00474:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d0049c; end: 107d0050b;  */

undefined8 FUN_107d0049c(int param_1)

{
  func_0x00010c067ec0();
  if (param_1 < 0x102) {
    if (param_1 == 2) {
      return 0x2d;
    }
    if ((param_1 == 3) || (param_1 == 0xf7)) {
      return 0x2c;
    }
  }
  else {
    if ((param_1 == 0x102) || (param_1 == 0x107)) {
      return 0x62;
    }
    if (param_1 == 0x106) {
      return 0x5b;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 107d0050c; end: 107d0085f;  */

void FUN_107d0050c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ca868;
  func_0x00010bf827a0(PTR_PTR_1126ca868);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adcc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc8c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d00860; end: 107d0088f;  */

void FUN_107d00860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 107d00890; end: 107d00a07;  */

void FUN_107d00890(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  func_0x00010bf97e80(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010bf09f80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d00a08; end: 107d00a7f;  */

void FUN_107d00a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  FUN_107d00a80(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d00798();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d00a80; end: 107d00cbf;  */

void FUN_107d00a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100817178(param_1,&PTR___NSConcreteGlobalBlock_110a08728);
  uVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69f00();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126c11f8;
  func_0x00010c282fc0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf602c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf009e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(param_1);
  _objc_retain(uVar5);
  func_0x00010bf97e80(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d00cc0; end: 107d00cc3;  */

void FUN_107d00cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100817178(param_1,&PTR___NSConcreteGlobalBlock_110a08728);
  uVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69f00();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126c11f8;
  func_0x00010c282fc0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf602c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf009e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(param_1);
  _objc_retain(uVar5);
  func_0x00010bf97e80(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d00cc4; end: 107d00cf3;  */

void FUN_107d00cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 107d00cf4; end: 107d00f43;  */

void FUN_107d00cf4(long param_1,undefined *param_2,undefined *param_3,undefined1 *param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong unaff_x22;
  undefined *unaff_x23;
  undefined1 uVar9;
  undefined *unaff_x24;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain(param_2);
  puVar11 = param_2;
  func_0x00010c25b720();
  if (puVar11 != (undefined *)0x5) {
    unaff_x22 = *(ulong *)(param_1 + 0x20);
    bVar1 = *(byte *)(param_1 + 0x40);
    _objc_retain(unaff_x22);
    unaff_x23 = param_2;
    if ((unaff_x22 == 0) || ((bVar1 & 1) == 0)) {
      func_0x00010c0741a0();
      _objc_release(unaff_x22);
      puVar11 = (undefined *)((ulong)unaff_x23 & 1);
    }
    else {
      func_0x000108f4c1d0();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      unaff_x24 = unaff_x23;
      func_0x00010bf52a60();
      if (unaff_x24 != (undefined *)0x0) {
        lVar10 = *plStack_120;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(unaff_x23);
            }
            uVar3 = unaff_x22;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar3;
            func_0x00010c29ea60();
            _objc_release(uVar3);
            if ((int)uVar2 == 0) {
              _objc_release(unaff_x23);
              _objc_release(unaff_x23);
              _objc_release(unaff_x22);
              goto LAB_107d00e7c;
            }
            puVar11 = puVar11 + 1;
          } while (unaff_x24 != puVar11);
          unaff_x24 = unaff_x23;
          puVar8 = &uStack_130;
          func_0x00010bf52a60();
        } while (unaff_x24 != (undefined *)0x0);
      }
      _objc_release(unaff_x23);
      unaff_x24 = unaff_x23;
      func_0x00010bf529e0();
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      param_3 = (undefined *)puVar8;
      puVar11 = unaff_x24;
    }
    if (puVar11 == (undefined *)0x0) {
LAB_107d00e7c:
      unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      unaff_x22 = *(ulong *)(param_1 + 0x28);
      func_0x00010c259740(param_2);
      func_0x00010c0df880();
      _objc_retainAutoreleasedReturnValue();
      param_3 = unaff_x23;
      func_0x00010bf4b900();
      _objc_release(unaff_x23);
      if ((unaff_x22 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf529e0();
        if (uVar3 < *(ulong *)(param_1 + 0x38)) {
          param_3 = param_2;
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
        }
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar10 == *(long *)(param_1 + 0x38)) {
    *param_4 = 1;
  }
  puVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107d00f44;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = param_4;
  puStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar7);
  _objc_retain(param_3);
  puVar4 = puVar11;
  func_0x00010c078f60();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar11;
    func_0x00010c238c20();
    uVar9 = SUB81(puVar4,0);
  }
  else {
    uVar9 = 1;
  }
  puVar4 = puVar11;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  puVar4 = puVar11;
  if (puVar5 == (undefined *)0x0) {
    FUN_107d04d4c();
    func_0x00010c2923e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c292e20(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar11;
  func_0x00010c245680(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_107d010c0;
  puStack_198 = &UNK_110a08778;
  puStack_190 = puVar7;
  puStack_188 = puVar11;
  puStack_180 = param_3;
  uStack_178 = uVar9;
  _objc_retain(param_3);
  _objc_retain(puVar11);
  _objc_retain(puVar7);
  puVar6 = puVar5;
  func_0x000100504554(puVar5,&puStack_1b0);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(puStack_190);
  _objc_release(param_3);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d00f44; end: 107d010bf;  */

void FUN_107d00f44(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c078f60();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c238c20();
    uVar4 = (undefined1)uVar1;
  }
  else {
    uVar4 = 1;
  }
  uVar1 = param_1;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  uVar1 = param_1;
  if (uVar2 == 0) {
    FUN_107d04d4c();
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c292e20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010c245680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107d010c0;
  puStack_68 = &UNK_110a08778;
  uStack_60 = param_2;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = uVar4;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_2);
  uVar3 = uVar2;
  func_0x000100504554(uVar2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107d010c0; end: 107d01327;  */

void FUN_107d010c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
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
  
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c29ea60();
  _objc_release(uVar13);
  _objc_release(uVar2);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ecc0();
  _objc_release(uVar13);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf24ec0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf1ade0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0b8260();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  FUN_107d03434(param_1,param_3,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,0,(char)uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 107d01328; end: 107d01513;  */

void FUN_107d01328(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  
  bVar11 = *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar11 = bVar11 ^ 1;
  }
  else {
    bVar11 = 0;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c292e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf24ec0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1acc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1ade0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0b8260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  FUN_107d03434(0,param_2,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,0,bVar11 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 107d01514; end: 107d01837;  */

void FUN_107d01514(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar8 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (uVar2 == 0) {
    uVar8 = 0;
  }
  else {
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_107d01838;
    uStack_e8 = 0x107d01848;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110daafd8;
    uVar8 = uVar2;
    func_0x00010c245680(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar3 = uVar8;
    func_0x000100504554();
    _objc_release(uVar8);
    uVar7 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c121820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar5 = puStack_100[5];
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      uVar6 = param_1;
      func_0x00010c25a160(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      FUN_107d00f44(uVar2,uVar4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    else {
      uVar7 = puStack_100[5];
      _objc_retain(uVar2);
      _objc_retain(param_3);
      _objc_retain(uVar7);
      uVar8 = uVar2;
      func_0x00010c078f60();
      if ((uVar8 & 1) == 0) {
        uVar8 = uVar2;
        func_0x00010c238c20();
        uStack_a0 = (undefined1)uVar8;
      }
      else {
        uStack_a0 = 1;
      }
      uStack_98 = 0;
      uStack_88 = 0x2020000000;
      uStack_80 = 0;
      uVar6 = uVar2;
      puStack_90 = &uStack_98;
      func_0x00010c245680(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_107d01328;
      puStack_c0 = &UNK_110a087a8;
      puStack_a8 = &uStack_98;
      _objc_retain(uVar7);
      uStack_b8 = uVar7;
      _objc_retain(uVar2);
      uVar8 = uVar6;
      uStack_b0 = uVar2;
      func_0x000100504554(uVar6,&puStack_d8);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uVar6);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(uVar7);
      _objc_release(param_3);
      _objc_release(uVar2);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(ppuStack_e0);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107d01838; end: 107d0184f;  */

void FUN_107d01838(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107d01850; end: 107d018ef;  */

void FUN_107d01850(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0b8260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a040();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d018f0; end: 107d019f7;  */

void FUN_107d018f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b4d28;
    _objc_alloc(PTR_PTR_1126b4d28);
    lVar1 = lVar2;
    func_0x00010c2923e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0822a0();
    func_0x00010c04dcc0(puVar5,param_2,lVar1,1,0,(uint)lVar4 ^ 1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d019f8; end: 107d01acb;  */

void FUN_107d019f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c245680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d01acc;
  puStack_50 = &UNK_110a08808;
  uStack_48 = param_2;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_1);
  _objc_retain(param_2);
  uVar2 = uVar1;
  func_0x000100504554(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d01acc; end: 107d01cd7;  */

void FUN_107d01acc(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c29ea60();
  if ((int)uVar8 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0b8260();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
  }
  _objc_release(uVar9);
  _objc_release(lVar2);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ecc0();
  _objc_release(uVar8);
  _objc_release(lVar2);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c078f60(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c291e80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c291e80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf24ec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_107d03434(param_1,param_3,uVar8,uVar9,uVar4,uVar5,uVar6,0,0,uVar7,bVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d01cd8; end: 107d01e13;  */

void FUN_107d01cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010afefd10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x00010c245680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x000100504554();
    _objc_release(lVar5);
    uVar3 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c121820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c073600(param_1);
    lVar5 = lVar1;
    FUN_107d019f8(lVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107d01e14; end: 107d01e1b;  */

void FUN_107d01e14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107d01e1c; end: 107d02053;  */

void FUN_107d01e1c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010afefd10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = param_1;
  func_0x00010c073600();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar3 == 0) {
    puVar1 = puVar2;
    func_0x00010bf454e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d02054; end: 107d020b3;  */

void FUN_107d02054(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf454e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d020b4; end: 107d0225f;  */

void FUN_107d020b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c245680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107d02260;
    puStack_88 = &UNK_110a08888;
    _objc_retain(param_2);
    uStack_80 = param_2;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(lVar1);
    lStack_70 = lVar1;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_1);
    lVar3 = lVar2;
    lStack_58 = param_1;
    func_0x000100504554(lVar2,&puStack_a0);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d02260; end: 107d0296f;  */

long FUN_107d02260(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lStack_198;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar21;
  func_0x00010c29ea60();
  _objc_release(uVar21);
  _objc_release(lVar8);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ecc0();
  _objc_release(uVar21);
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puVar2 = *(undefined **)(param_2 + 0x28);
  func_0x00010bf93460();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar3 = puVar2;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar8 = param_3;
  func_0x00010c079800();
  if ((int)lVar8 != 0) {
    puVar2 = PTR_PTR_1126d5ca0;
    _objc_opt_new();
    _objc_release(puVar3);
    lVar8 = param_3;
    func_0x00010c24cfc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar2);
    _objc_release(lVar8);
    puVar3 = PTR_PTR_1126c9298;
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_new(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c20a2c0(puVar3);
    puVar4 = puVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_new(PTR__OBJC_CLASS___NSData_1126ae778);
    }
    else {
      puVar5 = puVar3;
      func_0x00010bf63640(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c195720(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c182a00(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
  }
  uVar21 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_2 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_2 + 0x40);
  func_0x00010c131c00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if ((lVar8 == 0) && (lVar6 == 0)) {
    lVar8 = *(long *)(param_2 + 0x38);
    func_0x00010bf529e0();
    if (lVar8 != 0) {
      lStack_198 = 0;
      goto LAB_107d027a0;
    }
  }
  lVar8 = *(long *)(param_2 + 0x40);
  _objc_retain(lVar8);
  _objc_retain(param_3);
  if (lVar8 == 0) {
    lStack_198 = 0;
  }
  else {
    lVar7 = lVar8;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    lStack_198 = lVar8;
    if (lVar22 == 0) {
      lVar7 = lVar8;
      func_0x00010c131c00();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar7;
      func_0x00010bf529e0();
      if (lVar22 == 0) {
        _objc_retain(lVar8);
      }
      else {
        _objc_retain(lVar7);
        lVar22 = param_3;
        func_0x00010c24c480();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar22;
        func_0x00010bf28980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar22);
        lVar22 = lVar9;
        func_0x00010c27dd80();
        if (lVar22 == 4) {
          lVar10 = lVar9;
          func_0x00010bfb9180();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf52a60();
          lVar12 = lRam0000000000000000;
          if (lVar11 == 0) {
            lVar22 = 0;
          }
          else {
            do {
              lVar23 = 0;
              do {
                if (lRam0000000000000000 != lVar12) {
                  _objc_enumerationMutation(lVar10);
                }
                lVar22 = lVar7;
                func_0x000107d02e14(lVar7,*(undefined8 *)(lVar23 * 8));
                _objc_retainAutoreleasedReturnValue();
                if (lVar22 != 0) goto LAB_107d026d0;
                lVar23 = lVar23 + 1;
              } while (lVar11 != lVar23);
              lVar11 = lVar10;
              func_0x00010bf52a60();
            } while (lVar11 != 0);
            lVar22 = 0;
          }
LAB_107d026d0:
          _objc_release(lVar10);
        }
        else {
          lVar22 = 0;
        }
        _objc_release(lVar9);
        _objc_release(lVar7);
        if (lVar22 == 0) {
          lVar9 = param_3;
          func_0x00010bf5b480(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar9;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar7;
          func_0x000107d02e14(lVar7,lVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          _objc_release(lVar9);
          if (lVar10 == 0) {
            lStack_198 = 0;
          }
          else {
            lStack_198 = lVar10;
            func_0x000107d02c70(lVar10,lVar7);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar10);
        }
        else {
          lStack_198 = lVar22;
          func_0x000107d02c70(lVar22,lVar7);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar22);
      }
      _objc_release(lVar7);
    }
    else {
      _objc_retain();
    }
  }
  _objc_release(param_3);
  _objc_release(lVar8);
LAB_107d027a0:
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c26fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  lVar8 = param_3;
  FUN_107d03434(param_1,param_3,0,uVar13,0,lVar1,uVar14,0,0,uVar21,(char)uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lStack_198);
  _objc_release(lVar6);
  _objc_release(uVar21);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    func_0x00010c241220(lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c241220(uVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0720c0(lVar7);
    _objc_release(uVar19);
    _objc_release(lVar7);
    return lVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return lVar8;
}



/* Entry: 107d02970; end: 107d029df;  */

undefined8 FUN_107d02970(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107d029e0; end: 107d02b4b;  */

void FUN_107d029e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x00010c245680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x000100504554();
    _objc_release(lVar5);
    uVar3 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c121820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar5 = param_1;
    FUN_107d020b4(param_1,uVar4,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107d02b4c; end: 107d02b53;  */

void FUN_107d02b4c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107d02b54; end: 107d02c6f;  */

void FUN_107d02b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_107d02054(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c04dcc0(puVar1,param_2,uVar2,6,0,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d02c70; end: 107d03433;  */

void FUN_107d02c70(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    puVar2 = PTR_PTR_1126b6068;
    _objc_alloc();
    puVar3 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010bf02680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c122b20(param_1);
    func_0x00010c0748c0();
    puVar8 = param_1;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c11eb80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c0a0(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d03434; end: 107d048b3;  */

void FUN_107d03434(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  long param_13,undefined *param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined *param_19,long param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puStack_298;
  undefined *puStack_288;
  undefined *puStack_278;
  undefined *puStack_218;
  undefined *puStack_1e0;
  undefined *puStack_1d0;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puVar1 = param_2;
  func_0x000107d03060(param_2,param_14);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  puVar3 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010c24cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_1d0 = PTR_PTR_1126d5188;
  puVar8 = param_2;
  if (param_13 == 0xe) {
    func_0x00010bf1f720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010b611778();
    func_0x00010c14bd80();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_13 == 0xd) {
    puVar8 = param_19;
    func_0x00010bf51e00();
    if ((param_20 != 0) && (puVar8 != (undefined *)0x0)) {
      lVar5 = param_20;
      func_0x00010bf490e0(param_20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6d00(puVar8);
      _objc_release(lVar5);
      lVar5 = param_20;
      func_0x00010bf026e0(param_20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6c80(puVar8);
      _objc_release(lVar5);
    }
    puStack_1d0 = PTR_PTR_1126d5188;
    puVar9 = param_2;
    func_0x00010c24cfc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_2;
    func_0x00010bf1f720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010b611778();
    puVar7 = param_2;
    func_0x00010c24b260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ce60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar10);
  }
  else {
    func_0x00010bf1f720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010b611778();
    puVar10 = param_2;
    func_0x00010c24b260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c293cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_8);
  puVar8 = param_2;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c08fa60();
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = param_4;
  if (puVar10 != (undefined *)0x0) {
    puVar9 = param_2;
    func_0x00010bf5b480(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar9);
    func_0x00010c08fa60(puVar8);
  }
  puVar9 = PTR_PTR_1126d5198;
  _objc_alloc();
  puVar10 = param_2;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar10;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0068e0();
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_retain(param_2);
  puVar8 = param_2;
  func_0x00010c0b8260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = param_2;
    func_0x00010c2436c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    if (puVar10 != (undefined *)0x0) {
      puVar8 = PTR_PTR_1126c6940;
      _objc_alloc(PTR_PTR_1126c6940);
      puVar10 = param_2;
      func_0x00010c2436c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar10;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051fe0(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar10);
      puStack_1e0 = PTR_PTR_1126c3398;
      _objc_alloc();
      func_0x00010bffa8e0();
      _objc_release(puVar8);
      goto LAB_107d03ab8;
    }
  }
  puStack_1e0 = (undefined *)0x0;
LAB_107d03ab8:
  _objc_release(param_2);
  puVar10 = PTR_PTR_1126d51a0;
  _objc_retain(param_2);
  _objc_alloc();
  puVar8 = param_2;
  func_0x00010c0fc8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010c0fc8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bfc11c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_2;
  func_0x00010c0922e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_2;
  func_0x00010c0922e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar15 = puVar14;
  func_0x00010c096600(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0607c0();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar7 = PTR_PTR_1126d51a8;
  _objc_alloc();
  func_0x00010c01fba0(param_1);
  puVar6 = PTR_PTR_1126d51b0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bf8b160(param_2);
  func_0x00010c075780(param_2);
  puVar11 = param_2;
  func_0x00010bf9c800(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar12 = param_2;
  func_0x00010bf5aac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c26f320(puVar12);
  func_0x00010bf655e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00eaa0(param_1);
  _objc_release(puVar8);
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar8 = PTR_PTR_1126d51b8;
  _objc_retain(param_2);
  _objc_alloc();
  puVar11 = param_2;
  func_0x00010bf93ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c032400();
  _objc_release(puVar11);
  _objc_retain(param_2);
  func_0x00010c247d20();
  puVar11 = PTR_PTR_1126d51c0;
  _objc_alloc(PTR_PTR_1126d51c0);
  puVar12 = param_2;
  func_0x00010bf5aac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006760(puVar11);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126d51c8;
  _objc_alloc();
  puVar13 = param_2;
  func_0x00010bf0d6a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff4d60();
  _objc_release(puVar13);
  _objc_release(puVar11);
  func_0x00010bf20ec0();
  func_0x00010bfbe4e0();
  puVar11 = param_2;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdc5a0();
  _objc_retain(param_2);
  puVar14 = param_2;
  func_0x00010c15ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar14 == (undefined *)0x0) {
    puStack_218 = (undefined *)0x0;
  }
  else {
    puStack_218 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    puVar14 = param_2;
    func_0x00010c15ece0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20();
    _objc_release(puVar14);
  }
  _objc_release(param_2);
  _objc_retain(param_2);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_2;
  func_0x00010bf10000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar14 = (undefined *)0x0;
  if (puVar16 != (undefined *)0x0) {
    puVar14 = PTR_PTR_1126d5240;
    _objc_alloc();
    puVar16 = param_2;
    func_0x00010bf10000(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_retain(0);
    _objc_release(puVar16);
    puVar16 = puVar14;
    func_0x00010bf100a0();
    if (puVar16 != (undefined *)0x0) {
      uVar30 = 0;
      puVar17 = puVar14;
      func_0x00010bf10080();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar17;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (puVar16 != (undefined *)0x0) {
        puVar28 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(puVar17);
          }
          uVar29 = *(undefined8 *)((long)puVar28 * 8);
          puVar18 = PTR_PTR_1126d51d0;
          _objc_alloc(PTR_PTR_1126d51d0);
          uVar19 = uVar29;
          func_0x00010c25ece0(uVar29);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c250f20(uVar29);
          uVar31 = uVar30;
          func_0x00010bf95780(uVar29);
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c104340(uVar29);
          func_0x00010c0df760(puVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c04eec0(uVar30,uVar31,puVar18);
          _objc_release(puVar20);
          _objc_release(uVar19);
          func_0x00010befa120(puVar15);
          _objc_release(puVar18);
          puVar28 = puVar28 + 1;
        } while (puVar16 != puVar28);
        puVar16 = puVar17;
        func_0x00010bf52a60();
      }
      _objc_release(puVar17);
    }
    _objc_release(0);
  }
  puVar16 = PTR_PTR_1126d51d8;
  _objc_alloc();
  puVar17 = puVar14;
  func_0x00010bfe5ea0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245860(puVar14);
  func_0x00010c245820(puVar14);
  puVar28 = puVar15;
  func_0x00010bf51e00(puVar15);
  func_0x00010bff56a0();
  _objc_release(puVar28);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(param_2);
  func_0x00010c141c40();
  _objc_retain(param_2);
  puVar14 = param_2;
  func_0x00010c0b8260();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c241720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar14);
  if (puVar15 == (undefined *)0x0) {
    puStack_278 = (undefined *)0x0;
  }
  else {
    puStack_278 = PTR_PTR_1126d5180;
    _objc_alloc();
    puVar14 = param_2;
    func_0x00010c0b8260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06820();
    puVar15 = param_2;
    func_0x00010c0b8260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d060();
    puVar17 = param_2;
    func_0x00010c0b8260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b200();
    puVar28 = param_2;
    func_0x00010c0b8260(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar28;
    func_0x00010c241720();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_2;
    func_0x00010c0b8260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b200();
    func_0x00010c046240();
    _objc_release(puVar18);
    _objc_release(puVar20);
    _objc_release(puVar28);
    _objc_release(puVar17);
    _objc_release(puVar15);
    _objc_release(puVar14);
  }
  _objc_release(param_2);
  puVar17 = param_2;
  func_0x00010c243cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_20);
  puVar28 = param_2;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar28 == (undefined *)0x0) {
    puStack_288 = (undefined *)0x0;
  }
  else {
    puVar18 = param_2;
    func_0x00010c24b260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c5c0();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar21 = param_2;
    func_0x00010c24b260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f680();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar22 = param_2;
    func_0x00010c24b260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a980();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(puVar22);
    _objc_release(puVar28);
    _objc_release(puVar21);
    _objc_release(puVar15);
    _objc_release(puVar18);
    lVar5 = param_20;
    func_0x000107d04fac(param_20);
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = PTR_PTR_1126d6268;
    _objc_alloc();
    func_0x00010c00ff00();
    _objc_release(lVar5);
    _objc_release(puVar14);
  }
  _objc_release(param_20);
  _objc_release(param_2);
  puVar14 = param_2;
  func_0x00010c23fd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar15 = param_2;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar15 == (undefined *)0x0) {
    puStack_298 = (undefined *)0x0;
  }
  else {
    puStack_298 = PTR_PTR_1126d51f0;
    _objc_alloc();
    puVar15 = param_2;
    func_0x00010c24a0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar15;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_2;
    func_0x00010c24a0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar20;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_2;
    func_0x00010c24a0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60();
    _objc_release(puVar21);
    _objc_release(puVar18);
    _objc_release(puVar20);
    _objc_release(puVar28);
    _objc_release(puVar15);
  }
  _objc_release(param_2);
  puVar15 = param_2;
  func_0x00010befe1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126d78c8;
  _objc_alloc();
  func_0x00010c08a7a0(param_2);
  func_0x00010c0218e0();
  puVar20 = param_2;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24be20();
  func_0x00010c14ede0();
  puVar18 = param_2;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b820();
  puVar22 = param_2;
  func_0x00010bfeb4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = param_2;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = param_2;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbafa0();
  puVar25 = param_2;
  func_0x00010c262160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2621c0();
  func_0x00010c1029e0();
  puVar26 = param_2;
  func_0x00010c25b0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0a00();
  func_0x00010c07dce0();
  func_0x00010c044c40();
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar20);
  _objc_release(puVar28);
  _objc_release(puVar15);
  _objc_release(puStack_298);
  _objc_release(puVar14);
  _objc_release(puStack_288);
  _objc_release(puVar17);
  _objc_release(puStack_278);
  _objc_release(puVar16);
  _objc_release(puStack_218);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puStack_1e0);
  _objc_release(puVar9);
  _objc_release(puStack_1d0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
    ___stack_chk_fail();
    _objc_retain(param_14);
    if (param_2 == (undefined *)0x0) {
      _objc_retain(param_14);
      puVar2 = param_14;
    }
    else {
      func_0x00010c0d3c80(param_2);
      func_0x00010bef7f60();
      puVar2 = param_2;
      func_0x00010bf51e00(param_2);
      _objc_release(param_2);
    }
    _objc_release(param_14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d048b4; end: 107d0492b;  */

void FUN_107d048b4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 == 0) {
    _objc_retain(param_2);
    lVar1 = param_2;
  }
  else {
    func_0x00010c0d3c80(param_1);
    func_0x00010bef7f60();
    lVar1 = param_1;
    func_0x00010bf51e00(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d0492c; end: 107d04ae7;  */

void FUN_107d0492c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) {
    puVar3 = param_1;
    if (param_1 == (undefined *)0x0) {
      puVar3 = param_2;
    }
    _objc_retain(puVar3);
  }
  else {
    puVar1 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    puVar2 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    puVar3 = param_2;
    func_0x00010c0f1980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c0f1980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010bf0d180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bf0d180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    puVar4 = puVar1;
    func_0x00010c1531a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c1531a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033240(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d04ae8; end: 107d04caf;  */

void FUN_107d04ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1088;
  _objc_alloc_init(PTR_PTR_1126c1088);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_6 == 0) {
    if (param_7 == 0) goto LAB_107d04c74;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c0b4ca0(puVar1);
    func_0x00010852c6ec(puVar2,puVar4,puVar6,param_4,param_5,puVar7);
  }
  else {
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c0b4ca0(puVar1);
    func_0x00010852c244(puVar2,puVar4,puVar6,param_4,param_5,puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107d04c74:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d04cb0; end: 107d04d4b;  */

void FUN_107d04cb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c1088;
  _objc_retain();
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852bbf8(puVar1,puVar3,param_1,1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d04d4c; end: 107d04d7f;  */

void FUN_107d04d4c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1088;
  _objc_alloc_init(PTR_PTR_1126c1088);
  func_0x00010852be28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d04d80; end: 107d04e9f;  */

void FUN_107d04d80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c1088;
  _objc_alloc_init(PTR_PTR_1126c1088);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852ba60(puVar1,puVar3,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d04ea0; end: 107d04eeb;  */

undefined ** FUN_107d04ea0(ulong param_1)

{
  if (param_1 < 4) {
    return (undefined **)(&PTR_PTR_110a088d8)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110ddeaf8;
}



/* Entry: 107d04eec; end: 107d04f3b;  */

void FUN_107d04eec(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d04f3c; end: 107d0506b;  */

void FUN_107d04f3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf6e760();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d0506c; end: 107d05203;  */

void FUN_107d0506c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be938;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010c0844e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b480();
  func_0x00010c25b7c0(uVar1);
  uVar4 = uVar1;
  func_0x00010c1057a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf5b440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120();
  _objc_release(param_1);
  uVar6 = uVar1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  uVar7 = uVar1;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60(puVar2);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d05204; end: 107d05283;  */

void FUN_107d05204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  _objc_release(param_2);
  if ((int)uVar1 == 0) {
    func_0x00010c0c7340(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107d05284(param_1,0x4036000000000000,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccad8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d05284; end: 107d05453;  */

void FUN_107d05284(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107d061dc;
  uStack_40 = 0x107d061ec;
  uStack_38 = 0;
  func_0x00010bf0e920(param_2,PTR_PTR_1126c4e78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = (undefined *)puStack_58[5];
  if (puVar1 == (undefined *)0x0) {
    ppuVar2 = param_3;
    func_0x00010c067fc0();
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccad8;
    func_0x00010c067fc0();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    if (ppuVar2 == ppuVar3) {
      func_0x00010c0c7380(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf1ed00(param_1,param_2,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d05454; end: 107d0561b;  */

void FUN_107d05454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    func_0x00010bf1ed00(param_1,param_2,PTR__OBJC_CLASS___UIFont_1126aec38,param_4,
                        *(undefined8 *)PTR__UIFontTextStyleHeadline_110345c00,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107d05284(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccaf0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0561c; end: 107d056ef;  */

void FUN_107d0561c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if ((int)uVar2 == 0) {
    FUN_107d056f0(param_2);
    _objc_release(param_2);
    func_0x00010bf1ed00(param_1,0x4036000000000000,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107d056f0(param_2);
    _objc_release(param_2);
    FUN_107d05284(param_1,0x4036000000000000,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccaf0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d056f0; end: 107d0573b;  */

undefined8 FUN_107d056f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c282760();
  _objc_release(param_1);
  uVar2 = 0x402c000000000000;
  if (((uint)uVar1 & 0xfffffffe) != 2) {
    uVar2 = 0x4028000000000000;
  }
  return uVar2;
}



/* Entry: 107d0573c; end: 107d058e3;  */

void FUN_107d0573c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if ((int)uVar2 == 0) {
    FUN_107d056f0(param_2);
    _objc_release(param_2);
    func_0x00010bf6d6c0(param_1,0x4036000000000000,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107d056f0(param_2);
    _objc_release(param_2);
    FUN_107d05284(param_1,0x4036000000000000,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccaf0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d058e4; end: 107d05a7f;  */

void FUN_107d058e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_2;
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    _objc_release(param_2);
    param_3 = param_1;
    func_0x00010c04e840();
    _objc_release(param_1);
    _objc_release(puVar1);
    param_2 = uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    _objc_retain();
    func_0x000107d05810(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    FUN_107d058e4(puVar1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d05a80; end: 107d05cdf;  */

void FUN_107d05a80(undefined *param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar5 = (undefined *)0x0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  if (((param_1 != (undefined *)0x0) && (param_2 != 0)) && (param_3 != (undefined *)0x0)) {
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    _objc_release(param_3);
    _objc_release(param_2);
    param_3 = param_1;
    func_0x00010c04e840();
    _objc_release(param_1);
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(lVar3);
    puVar5 = param_3;
    _objc_retain(param_3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_1 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      if (lVar3 == 0) {
        _objc_retain(param_1);
        puVar1 = param_1;
      }
      else {
        func_0x00010b0aefe4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      FUN_107d058e4(puVar1,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c0d3c80();
      _objc_release(puVar5);
      if (lVar3 != 0) {
        func_0x00010c08fa60(param_1);
        func_0x00010bef6f20(puVar2);
      }
      puVar5 = puVar2;
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_release(param_3);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d05ce0; end: 107d05d6f;  */

void FUN_107d05ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x000107d05810(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107d05ba0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d05d70; end: 107d061db;  */

void FUN_107d05d70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_1 != 0) && (param_3 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_1);
    lVar3 = param_1;
    func_0x000107d05efc(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0d3c80();
    _objc_release(lVar3);
    func_0x00010c08fa60(param_1);
    func_0x00010c08fa60(param_1);
    func_0x00010c08fa60(lVar1);
    func_0x00010c08fa60(param_1);
    _objc_release(param_1);
    func_0x00010bf17fe0(lVar1);
    uVar2 = param_4;
    FUN_107d0561c(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6f20(lVar1);
    _objc_release(uVar2);
    uVar2 = param_4;
    FUN_107d0573c(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_4);
    func_0x00010bef6f20(lVar1);
    _objc_release(uVar2);
    func_0x00010bf947e0(lVar1);
    lVar3 = lVar1;
    func_0x00010bf51e00(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d061dc; end: 107d061f3;  */

void FUN_107d061dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107d061f4; end: 107d0622b;  */

void FUN_107d061f4(long param_1,undefined8 param_2)

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



/* Entry: 107d0622c; end: 107d0622f;  */

void FUN_107d0622c(void)

{
  return;
}



/* Entry: 107d06230; end: 107d062b3;  */

uint FUN_107d06230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf370e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100bc4cf0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf28800(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x000100bc4cf0(uVar1);
  _objc_release(uVar1);
  return ((uint)uVar2 | (uint)uVar3) & 1;
}



/* Entry: 107d062b4; end: 107d0643b;  */

void FUN_107d062b4(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf370e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b2e0();
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 107d0643c; end: 107d064af; -[SCFriendsFeedUIServices initWithFriendsFeedItemImpressionTracker:] */

undefined1 * FUN_107d0643c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa888;
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



/* Entry: 107d064b0; end: 107d064b7; -[SCFriendsFeedUIServices friendsFeedItemImpressionTracker] */

undefined8 FUN_107d064b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d064b8; end: 107d064e7; -[SCFriendsFeedUIServices .cxx_destruct] */

void FUN_107d064b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d064e8; end: 107d0654b; +[SCFriendsFeedItemDisplayName displayNameWithDisplayName:] */

void FUN_107d064e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d78b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d0654c; end: 107d065bf; +[SCFriendsFeedItemDisplayName unnamedGroupWithParticipantDisplayNames:hasConsumable:] */

void FUN_107d0654c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d78b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
  puVar2[0x20] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d065c0; end: 107d065e3; -[SCFriendsFeedItemDisplayName copyWithZone:] */

undefined8 FUN_107d065c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d065e4; end: 107d0665f; -[SCFriendsFeedItemDisplayName hash] */

void FUN_107d065e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fa890;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d06660; end: 107d066a3; -[SCFriendsFeedItemDisplayName internalInit] */

void FUN_107d06660(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fa890;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d066a4; end: 107d0676b; -[SCFriendsFeedItemDisplayName isEqual:] */

long FUN_107d066a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d06744:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d06750;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d06750;
        }
        goto LAB_107d06744;
      }
    }
    lVar3 = 0;
  }
LAB_107d06750:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0676c; end: 107d067f7; -[SCFriendsFeedItemDisplayName matchDisplayName:unnamedGroup:] */

void FUN_107d0676c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d067f8; end: 107d06827; -[SCFriendsFeedItemDisplayName .cxx_destruct] */

void FUN_107d067f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d06828; end: 107d06a5b; -[SCFriendsFeedItemImpressionTrackingData initWithCellIdentifier:conversationId:entity:rightHandButtonType:isLoading:isUnread:recipientUserId:lensSuggestionParams:streakImpressionData:expiredStreakMetadata:hasMapIcon:hasSaturnStatusVisible:hasActionmoji:liveGamingParams:contextPostSnapParams:] */

undefined8 *
FUN_107d06828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126fa898;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    puVar1[5] = param_6;
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_13._2_1_;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d06a5c; end: 107d06a7f; -[SCFriendsFeedItemImpressionTrackingData copyWithZone:] */

undefined8 FUN_107d06a5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d06a80; end: 107d06b6f; -[SCFriendsFeedItemImpressionTrackingData hash] */

undefined8 * FUN_107d06a80(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  uStack_80 = (ulong)*(byte *)(param_1 + 8);
  uStack_78 = (ulong)*(byte *)(param_1 + 9);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d06cf8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d06d04;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(char *)((long)puVar3 + 8) == param_3[8])) &&
          (*(char *)((long)puVar3 + 9) == param_3[9])) &&
         ((*(char *)((long)puVar3 + 10) == param_3[10] &&
          (*(char *)((long)puVar3 + 0xb) == param_3[0xb])))))) &&
       (*(char *)((long)puVar3 + 0xc) == param_3[0xc])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x48);
                  if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x50);
                    if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                        func_0x00010c071ae0();
                        goto LAB_107d06d04;
                      }
                      goto LAB_107d06cf8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d06d04:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d06b70; end: 107d06d1f; -[SCFriendsFeedItemImpressionTrackingData isEqual:] */

long FUN_107d06b70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d06cf8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d06d04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
       (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if (lVar3 != *(long *)(param_3 + 0x58)) {
                        func_0x00010c071ae0();
                        goto LAB_107d06d04;
                      }
                      goto LAB_107d06cf8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d06d04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d06d20; end: 107d06d27; -[SCFriendsFeedItemImpressionTrackingData cellIdentifier] */

undefined8 FUN_107d06d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d06d28; end: 107d06d2f; -[SCFriendsFeedItemImpressionTrackingData conversationId] */

undefined8 FUN_107d06d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d06d30; end: 107d06d37; -[SCFriendsFeedItemImpressionTrackingData entity] */

undefined8 FUN_107d06d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


