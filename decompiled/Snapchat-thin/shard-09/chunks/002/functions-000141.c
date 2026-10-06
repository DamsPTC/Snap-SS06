/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106aa2ac0; end: 106aa2acf; -[SCSnapchatNetworkRequestSender _isAuthed] */

bool FUN_106aa2ac0(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}



/* Entry: 106aa2ad0; end: 106aa2c83; -[SCSnapchatNetworkRequestSender uploadShakeLogs:uploadUrl:workQueue:successBlock:failureBlock:] */

void FUN_106aa2ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_1;
  func_0x00010be791c0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106aa2c84;
  puStack_80 = &UNK_1108ab6a0;
  uStack_78 = param_6;
  _objc_retain(param_6);
  ppuVar3 = &puStack_98;
  _objc_retainBlock();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106aa2c90;
  puStack_a8 = &UNK_1108ab6d0;
  uStack_a0 = param_7;
  _objc_retain(param_7);
  ppuVar4 = &puStack_c0;
  _objc_retainBlock();
  _CACurrentMediaTime();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_a0);
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 106aa2c84; end: 106aa2c9b;  */

void FUN_106aa2c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106aa2c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106aa2c9c; end: 106aa2da7;  */

void FUN_106aa2c9c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_5);
  func_0x00010be3e420(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c252ee0(param_5);
  func_0x00010be5a280(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x38);
  func_0x00010c252ee0(param_5);
  func_0x00010be5a2a0(param_1 - dVar3,uVar2);
  lVar1 = 0x28;
  uVar2 = param_6;
  if (param_4 != 0) {
    lVar1 = 0x30;
    uVar2 = param_7;
  }
  (**(code **)(*(long *)(param_2 + lVar1) + 0x10))(*(long *)(param_2 + lVar1),param_5,uVar2);
  _objc_release(param_5);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106aa2da8; end: 106aa2e67; -[SCSnapchatNetworkRequestSender _prepareShakeUploadToGCS:uploadUrl:] */

void FUN_106aa2da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar3;
  func_0x00010bf225e0(uVar3,param_2,3,puVar1,&PTR__OBJC_CLASS___NSConstantDictionary_111174b58,
                      param_3,&PTR___NSConcreteGlobalBlock_11095b110);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106aa2e68; end: 106aa2e6b;  */

void FUN_106aa2e68(void)

{
  return;
}



/* Entry: 106aa2e6c; end: 106aa4767; -[SCSnapchatNetworkRequestSender _reportToAirRequest:] */

void FUN_106aa2e6c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined **ppuVar33;
  ulong uVar34;
  undefined **ppuVar35;
  undefined *puVar36;
  undefined **ppuVar37;
  undefined *puStack_518;
  undefined *puStack_4b8;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_4b8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar6 = param_3;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x00010bf64920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar5 = puStack_4b8;
    _objc_opt_isKindOfClass(puStack_4b8,puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c1d0640(puStack_4b8);
      }
      func_0x00010be90520();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      puVar5 = (undefined *)0x0;
      goto LAB_106aa46d8;
    }
    _objc_release(puStack_4b8);
    _objc_release(0);
  }
  puVar4 = PTR_PTR_1126d01d0;
  _objc_opt_new();
  puVar5 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a840(puVar4);
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ec80(puVar4);
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1fbba0(puVar4);
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6ae0(puVar4);
  _objc_release(puVar5);
  puStack_4b8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puStack_4b8;
  func_0x00010c0720c0();
  if ((((ulong)puVar5 & 1) == 0) &&
     (puVar5 = puStack_4b8, func_0x00010c0720c0(), ((ulong)puVar5 & 1) == 0)) {
    func_0x00010c0720c0();
  }
  func_0x00010c180f60(puVar4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c0720c0();
  if ((((((ulong)puVar5 & 1) == 0) &&
       (puVar5 = puVar6, func_0x00010c0720c0(), ((ulong)puVar5 & 1) == 0)) &&
      (puVar5 = puVar6, func_0x00010c0720c0(), ((ulong)puVar5 & 1) == 0)) &&
     (puVar5 = puVar6, func_0x00010c0720c0(), ((ulong)puVar5 & 1) == 0)) {
    func_0x00010c0720c0();
  }
  func_0x00010c1eb5c0(puVar4);
  puVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0720c0();
  if ((((((((ulong)puVar7 & 1) == 0) &&
         (puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
        ((puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
         ((puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
          (puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))))) &&
       (puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
      (((puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
        (puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
       (puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))) &&
     (((puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
       (puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
      ((puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
       (puVar7 = puVar5, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))))) {
    func_0x00010c0720c0();
  }
  func_0x00010c1eb540(puVar4);
  puVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar7;
  func_0x00010c0720c0();
  if (((((ulong)puVar31 & 1) == 0) &&
      (puVar31 = puVar7, func_0x00010c0720c0(), ((ulong)puVar31 & 1) == 0)) &&
     (puVar31 = puVar7, func_0x00010c0720c0(), ((ulong)puVar31 & 1) == 0)) {
    func_0x00010c0720c0();
  }
  func_0x00010c1fe940(puVar4);
  puVar31 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar4);
  _objc_release(puVar31);
  puVar31 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5ca0(puVar4);
  _objc_release(puVar31);
  puVar31 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c16eec0(puVar4);
  _objc_release(puVar31);
  puVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar9 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar31);
  puVar31 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar11 = puVar8;
  if (((ulong)puVar9 & 1) == 0) {
    if (puVar8 != (undefined *)0x0) {
      puVar9 = puVar8;
      func_0x00010bf64920(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(puVar9);
      puVar11 = puVar31;
    }
  }
  else {
    _objc_retain(puVar8);
  }
  puVar31 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar9 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar31);
  if (((ulong)puVar9 & 1) != 0) {
    _objc_retain(puVar11);
    puVar31 = puVar11;
    func_0x00010bf529e0();
    if (puVar31 != (undefined *)0x0) {
      puVar31 = puVar11;
      func_0x00010bf529e0();
      if (puVar31 == (undefined *)0x1) {
        puVar31 = puVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (puVar31 != (undefined *)0x0) {
          puVar9 = puVar11;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0720c0();
          _objc_release(puVar9);
          _objc_release(puVar31);
          if (((ulong)puVar10 & 1) != 0) goto LAB_106aa35bc;
        }
      }
      func_0x00010c1ce040(puVar4);
    }
LAB_106aa35bc:
    _objc_release(puVar11);
  }
  _objc_release(puVar11);
  puVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar11 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar31);
  puVar31 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (((ulong)puVar11 & 1) == 0) {
    if (puVar9 == (undefined *)0x0) {
      puVar31 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar9;
      func_0x00010bf64920(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(0);
      _objc_release(puVar11);
    }
  }
  else {
    _objc_retain(puVar9);
    puVar31 = puVar9;
  }
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar10 = puVar31;
  _objc_opt_isKindOfClass(puVar31,puVar11);
  if (((ulong)puVar10 & 1) != 0) {
    _objc_retain(puVar31);
    puVar11 = PTR_PTR_1126d01d8;
    _objc_opt_new(PTR_PTR_1126d01d8);
    puVar10 = puVar31;
    func_0x00010c0e00e0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185180(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar31;
    func_0x00010c0e00e0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ce60(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar31;
    func_0x00010c0e00e0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1160(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar31;
    func_0x00010c0e00e0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6680(puVar11);
    _objc_release(puVar10);
    func_0x00010c1eb4e0(puVar4);
    _objc_release(puVar11);
    _objc_release(puVar31);
  }
  puVar11 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c140(puVar4);
  _objc_release(puVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15ffa0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fda20(puVar4);
  _objc_release(uVar12);
  puVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    puStack_518 = param_1;
    func_0x00010bf317e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179500(param_1);
    puVar10 = puStack_518;
    if (puStack_518 != (undefined *)0x0) goto LAB_106aa3858;
    puVar10 = param_1;
    func_0x00010c277820();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(puVar10);
    puStack_518 = (undefined *)0x0;
  }
  else {
    puStack_518 = (undefined *)0x0;
    puVar10 = puVar11;
LAB_106aa3858:
    _objc_retain(puVar10);
  }
  func_0x00010c218e40(puVar4);
  puVar13 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168d00(puVar4);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126b8460;
  _objc_opt_new(PTR_PTR_1126b8460);
  func_0x00010c1c73c0(puVar4);
  _objc_release(puVar13);
  puVar13 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfc7860(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0caba0(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126bb918;
  _objc_opt_new(PTR_PTR_1126bb918);
  puVar14 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd640();
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c0985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162840();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126d01e0;
  _objc_opt_new(PTR_PTR_1126d01e0);
  puVar14 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176820();
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf29a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b78a0();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126d01e8;
  _objc_opt_new(PTR_PTR_1126d01e8);
  puVar14 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7300();
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126cbba0;
  func_0x00010c088820(PTR_PTR_1126cbba0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c0cbda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7ac0();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126d01f0;
  _objc_opt_new(PTR_PTR_1126d01f0);
  puVar14 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce1e0();
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126cbba0;
  func_0x00010c089800(PTR_PTR_1126cbba0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c0cc0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c0dc160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce180();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126ae4f8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0753a0();
  func_0x00010c1b1c80(puVar4);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126cbba0;
  func_0x00010c149260(PTR_PTR_1126cbba0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1f5180(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar13);
  ppuVar17 = *(undefined ***)(param_1 + 0x40);
  func_0x00010c0cc2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c0edea0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c08fa60();
  _objc_release(puVar14);
  if (puVar15 != (undefined *)0x0) {
    puVar14 = puVar4;
    func_0x00010c0edea0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    if (puVar15 != (undefined *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar32 = puVar14;
      _objc_opt_isKindOfClass(puVar14,puVar16);
      if (((ulong)puVar32 & 1) != 0) {
        func_0x00010bef7f60(puVar13);
      }
      _objc_release(puVar14);
    }
    _objc_release(puVar15);
  }
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar32 = puVar16;
  _objc_opt_isKindOfClass(puVar16,puVar14);
  puVar14 = puVar16;
  if (((ulong)puVar32 & 1) == 0) {
    puVar14 = (undefined *)0x0;
  }
  _objc_retain(puVar14);
  _objc_release(puVar16);
  _objc_retain(puVar14);
  puVar16 = puVar14;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar16 != (undefined *)0x0) {
    puVar32 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar14);
      }
      uVar34 = *(ulong *)((long)puVar32 * 8);
      _objc_retain(uVar34);
      puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar29 = uVar34;
      _objc_opt_isKindOfClass(uVar34,puVar18);
      uVar27 = uVar34;
      if ((uVar29 & 1) == 0) {
        uVar27 = 0;
      }
      _objc_retain(uVar27);
      _objc_release(uVar34);
      uVar34 = uVar27;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar19 = uVar34;
      _objc_opt_isKindOfClass(uVar34,puVar18);
      uVar29 = uVar34;
      if ((uVar19 & 1) == 0) {
        uVar29 = 0;
      }
      _objc_retain(uVar29);
      _objc_release(uVar34);
      uVar34 = uVar29;
      func_0x00010c08fa60();
      if (uVar34 != 0) {
        uVar19 = uVar27;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar20 = uVar19;
        _objc_opt_isKindOfClass(uVar19,puVar18);
        uVar34 = uVar19;
        if ((uVar20 & 1) == 0) {
          uVar34 = 0;
        }
        _objc_retain(uVar34);
        _objc_release(uVar19);
        func_0x00010c1d0640(puVar15);
        _objc_release(uVar34);
      }
      _objc_release(uVar29);
      _objc_release(uVar27);
      puVar32 = puVar32 + 1;
    } while (puVar16 != puVar32);
    puVar16 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  _objc_retain(ppuVar17);
  ppuVar21 = ppuVar17;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar33 = *(undefined ***)PTR__kCFNull_11034abd8;
    do {
      ppuVar35 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar17);
        }
        uVar34 = *(ulong *)((long)ppuVar35 * 8);
        _objc_retain(uVar34);
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar29 = uVar34;
        _objc_opt_isKindOfClass(uVar34,puVar16);
        uVar27 = uVar34;
        if ((uVar29 & 1) == 0) {
          uVar27 = 0;
        }
        _objc_retain(uVar27);
        _objc_release(uVar34);
        uVar29 = uVar27;
        func_0x00010c08fa60();
        if (uVar29 != 0) {
          ppuVar22 = ppuVar17;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          ppuVar24 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuVar22 != (undefined **)0x0 && ppuVar22 != ppuVar33) {
            ppuVar23 = ppuVar22;
            _CFGetTypeID();
            ppuVar37 = ppuVar23;
            _CFBooleanGetTypeID();
            if (ppuVar23 != ppuVar37) {
              puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar23 = ppuVar22;
              _objc_opt_isKindOfClass(ppuVar22,puVar16);
              if (((ulong)ppuVar23 & 1) == 0) {
                puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                ppuVar23 = ppuVar22;
                _objc_opt_isKindOfClass(ppuVar22,puVar16);
                if (((ulong)ppuVar23 & 1) == 0) {
                  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
                  ppuVar23 = ppuVar22;
                  _objc_opt_isKindOfClass(ppuVar22,puVar16);
                  if (((ulong)ppuVar23 & 1) != 0) {
                    _objc_retain(ppuVar22);
                    ppuVar23 = ppuVar22;
                    func_0x00010bf52a60();
                    lVar2 = lRam0000000000000000;
                    while (ppuVar23 != (undefined **)0x0) {
                      ppuVar37 = (undefined **)0x0;
                      do {
                        if (lRam0000000000000000 != lVar2) {
                          _objc_enumerationMutation(ppuVar22);
                        }
                        uVar29 = *(ulong *)((long)ppuVar37 * 8);
                        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                        _objc_opt_isKindOfClass(uVar29,puVar16);
                        if ((uVar29 & 1) == 0) {
                          _objc_release(ppuVar22);
                          goto LAB_106aa4044;
                        }
                        ppuVar37 = (undefined **)((long)ppuVar37 + 1);
                      } while (ppuVar23 != ppuVar37);
                      ppuVar23 = ppuVar22;
                      func_0x00010bf52a60();
                    }
                    _objc_release(ppuVar22);
                    ppuVar24 = ppuVar22;
                    func_0x00010bf446e0();
                    _objc_retainAutoreleasedReturnValue();
                  }
                }
                else {
                  _objc_retain(ppuVar22);
                  ppuVar24 = ppuVar22;
                }
              }
              else {
                ppuVar24 = ppuVar22;
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
              }
            }
          }
LAB_106aa4044:
          _objc_release(ppuVar22);
          func_0x00010c1d0640(puVar15);
          _objc_release(ppuVar24);
          _objc_release(ppuVar22);
        }
        _objc_release(uVar27);
        ppuVar35 = (undefined **)((long)ppuVar35 + 1);
      } while (ppuVar35 != ppuVar21);
      ppuVar21 = ppuVar17;
      func_0x00010bf52a60();
    } while (ppuVar21 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  puVar16 = puVar15;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar32 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar18);
  func_0x00010bf0a0e0(puVar32);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar18);
  puVar16 = puVar18;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar16 != (undefined *)0x0) {
    puVar36 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar18);
      }
      puVar25 = puVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar32);
      _objc_release(puVar26);
      _objc_release(puVar25);
      puVar36 = puVar36 + 1;
    } while (puVar16 != puVar36);
    puVar16 = puVar18;
    func_0x00010bf52a60();
  }
  _objc_release(puVar18);
  func_0x00010c1d0640(puVar13);
  puVar16 = puVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar16 == (undefined *)0x0) {
    func_0x00010c1d0640(puVar13);
  }
  puVar16 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (puVar16 != (undefined *)0x0) {
    puVar36 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    func_0x00010c1d6ae0(puVar4);
    _objc_release(puVar36);
  }
  uVar27 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0cc2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar27);
  puVar36 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar34 = uVar29;
  _objc_opt_isKindOfClass(uVar29,puVar36);
  uVar27 = uVar29;
  if ((uVar34 & 1) == 0) {
    uVar27 = 0;
  }
  _objc_retain(uVar27);
  _objc_release(uVar29);
  uVar29 = uVar27;
  func_0x00010bf529e0();
  if (uVar29 != 0) {
    puVar36 = PTR_PTR_1126d01f8;
    _objc_opt_new();
    puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar27);
    uVar29 = uVar27;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar29 != 0) {
      uVar34 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar27);
        }
        uVar30 = *(ulong *)(uVar34 * 8);
        _objc_retain(uVar30);
        puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar20 = uVar30;
        _objc_opt_isKindOfClass(uVar30,puVar26);
        uVar19 = uVar30;
        if ((uVar20 & 1) == 0) {
          uVar19 = 0;
        }
        _objc_retain(uVar19);
        _objc_release(uVar30);
        uVar20 = uVar19;
        func_0x00010c08fa60();
        if (uVar20 != 0) {
          puVar26 = PTR_PTR_1126d0200;
          _objc_opt_new(PTR_PTR_1126d0200);
          func_0x00010c1d87a0();
          func_0x00010befa120(puVar25);
          _objc_release(puVar26);
        }
        _objc_release(uVar19);
        uVar34 = uVar34 + 1;
      } while (uVar29 != uVar34);
      uVar29 = uVar27;
      func_0x00010bf52a60();
    }
    _objc_release(uVar27);
    puVar26 = puVar25;
    func_0x00010bf529e0();
    if (puVar26 != (undefined *)0x0) {
      func_0x00010c173be0(puVar36);
      func_0x00010c173bc0(puVar4);
    }
    _objc_release(puVar25);
    _objc_release(puVar36);
  }
  _objc_retain(puVar4);
  _objc_release(uVar27);
  _objc_release(puVar16);
  _objc_release(0);
  _objc_release(puVar32);
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(ppuVar17);
  _objc_release(puVar10);
  _objc_release(puStack_518);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar31);
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = puVar4;
LAB_106aa46d8:
  _objc_release(puVar6);
  _objc_release(puStack_4b8);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
    ___stack_chk_fail();
    puVar3 = param_3;
    func_0x00010c277820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179500(param_3);
    _objc_release(puVar3);
    func_0x00010bf317e0(param_3);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106aa4768; end: 106aa47b7; -[SCSnapchatNetworkRequestSender captureTraceIDForShake] */

void FUN_106aa4768(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c277820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179500(param_1,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bf317e0(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106aa47b8; end: 106aa484b; -[SCSnapchatNetworkRequestSender traceSessionIDWithRenewal] */

void FUN_106aa47b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b6a90;
  func_0x00010c22c420();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c256c80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c277800(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c251380(puVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106aa484c; end: 106aa4a63; -[SCSnapchatNetworkRequestSender _logUploadGraphene:statusCode:isAuthed:isManualEmail:isSpectrum:] */

void FUN_106aa484c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d0168;
  func_0x00010c143040(PTR_PTR_1126d0168);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db9558,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd2cf8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dadab8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e69878,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106aa4a64; end: 106aa4ba7; -[SCSnapchatNetworkRequestSender _logMetadataGraphene:isManualEmail:isSpectrum:] */

void FUN_106aa4a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d0168;
  func_0x00010c143080(PTR_PTR_1126d0168);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd2cf8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dadab8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e69878,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106aa4ba8; end: 106aa4d2f; -[SCSnapchatNetworkRequestSender _isManualEmailReport:] */

bool FUN_106aa4ba8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (puVar2 == (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      bVar1 = true;
      goto LAB_106aa4cfc;
    }
    puVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar5 != (undefined *)0x0;
  }
  else {
    puVar5 = puVar2;
    func_0x00010bf64920(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar3 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    if (((ulong)puVar3 & 1) == 0) {
      bVar1 = false;
      goto LAB_106aa4cfc;
    }
    puVar5 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x00010c0e00e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar5 != (undefined *)0x0;
      _objc_release();
    }
    else {
      bVar1 = true;
    }
  }
  _objc_release();
LAB_106aa4cfc:
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106aa4d30; end: 106aa4d3b; -[SCSnapchatNetworkRequestSender capturedTraceSessionID] */

void FUN_106aa4d30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 106aa4d3c; end: 106aa4d43; -[SCSnapchatNetworkRequestSender setCapturedTraceSessionID:] */

void FUN_106aa4d3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106aa4d44; end: 106aa4d9b; -[SCVersionUpdateMetadata initWithIsOldVersion:versionInstallAge:] */

void FUN_106aa4d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f49a8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 106aa4d9c; end: 106aa4e37; -[SCVersionUpdateMetadata getMetaInfo] */

void FUN_106aa4d9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined1 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e69e58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106aa4e38; end: 106aa4ebb; -[SCVersionUpdateTime initWithVersion:updated:] */

undefined1 *
FUN_106aa4e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f49b0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106aa4ebc; end: 106aa4f5b; +[SCVersionUpdateTime updateVersionUpdateTime:] */

void FUN_106aa4ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106aa4f5c;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106aa4f5c; end: 106aa512f;  */

void FUN_106aa4f5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0dff20(puVar1,param_2,&PTR____CFConstantStringClassReference_110e69e78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if ((puVar3 == (undefined *)0x0) ||
     (puVar2 = puVar3, func_0x00010c0720c0(puVar3,param_2,puVar4), ((ulong)puVar2 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110dd8fd8;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e0fc38;
    puStack_58 = puVar4;
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1d0560(puVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110e69e78);
    func_0x00010c266b80(puVar1);
    _objc_release(puVar5);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d01a0;
  _objc_alloc(PTR_PTR_1126d01a0);
  puVar4 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd8fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fc38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c060a60(puVar3,param_2,puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106aa5130; end: 106aa5207; +[SCVersionUpdateTime getVersionUpdateTime] */

void FUN_106aa5130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d01a0;
  _objc_alloc(PTR_PTR_1126d01a0);
  puVar4 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd8fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fc38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c060a60(puVar3,param_2,puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106aa5208; end: 106aa5213; -[SCVersionUpdateTime version] */

void FUN_106aa5208(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 106aa5214; end: 106aa521b; -[SCVersionUpdateTime setVersion:] */

void FUN_106aa5214(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106aa521c; end: 106aa5223; -[SCVersionUpdateTime updated] */

undefined8 FUN_106aa521c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106aa5224; end: 106aa522b; -[SCVersionUpdateTime setUpdated:] */

void FUN_106aa5224(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 106aa522c; end: 106aa5237; -[SCVersionUpdateTime .cxx_destruct] */

void FUN_106aa522c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106aa5238; end: 106aa53af; -[SCInternalShakeMenuViewController initWithTitle:message:sections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106aa5238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f49b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    func_0x00010c189400(puVar1);
    func_0x00010c21e060(puVar1);
    func_0x00010c20eaa0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199da0();
    _objc_release(puVar2);
    lVar4 = (long)_DAT_112757340;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112757344;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106aa53b0; end: 106aa560b; -[SCInternalShakeMenuViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa53b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  dVar8 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar8,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c16d4a0();
  func_0x00010c18b5e0(puVar1);
  func_0x00010c189840(puVar1);
  _objc_opt_class(PTR_PTR_1126b5a18);
  func_0x00010c125fe0(puVar1);
  func_0x00010c1fce40(puVar1);
  func_0x00010c1f92c0(0x3ff0000000000000,puVar1);
  func_0x00010c160fc0(puVar1);
  _objc_storeWeak(param_1 + _DAT_112757348,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  func_0x00010c212f20();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3);
  _objc_release(puVar4);
  func_0x00010c21ad00(puVar3);
  func_0x00010c1bdb00(puVar3);
  func_0x00010c1cfce0(puVar3);
  func_0x00010c213040(puVar3);
  func_0x00010befbb60(puVar2);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar6 = dVar8 + -30.0 + -30.0;
  uVar7 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(dVar6,0x7fefffffffffffff,puVar3);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(0,0,puVar2);
  _objc_release(lVar5);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0((dVar8 - dVar6) * 0.5,0x4014000000000000,dVar6,uVar7,puVar3);
  _objc_release(param_1);
  func_0x00010c211680(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aa560c; end: 106aa570f; -[SCInternalShakeMenuViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa560c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f49b8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07f8c0();
  *(char *)(param_1 + _DAT_11275734c) = (char)puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_112757350) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  return;
}



/* Entry: 106aa5710; end: 106aa57cb; -[SCInternalShakeMenuViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5710(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f49b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
  _objc_release(puVar1);
  return;
}



/* Entry: 106aa57cc; end: 106aa5853; -[SCInternalShakeMenuViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa57cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f49b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  lVar2 = (long)_DAT_112757354;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74ea0();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(lVar1);
  return;
}



/* Entry: 106aa5854; end: 106aa5863; -[SCInternalShakeMenuViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757344),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106aa5864; end: 106aa58cf; -[SCInternalShakeMenuViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106aa5864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112757344);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106aa58d0; end: 106aa5923; -[SCInternalShakeMenuViewController tableView:titleForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa58d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112757344);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106aa5924; end: 106aa5a33; -[SCInternalShakeMenuViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5924(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + _DAT_112757344);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(uVar5,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar4 = param_3;
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e22938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bde4da0(param_1,param_2,uVar4,param_4);
  lVar1 = param_4;
  func_0x00010c142240();
  _objc_release(param_4);
  uVar2 = 0;
  if (uVar3 <= lVar1 + 1U) {
    uVar2 = 4;
  }
  if (lVar1 == 0) {
    uVar2 = uVar2 + 1;
  }
  func_0x00010c20eaa0(uVar4,param_2,1,uVar2 | 10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106aa5a34; end: 106aa5adb; -[SCInternalShakeMenuViewController _itemForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112757344);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1554e0(param_3);
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c142240(param_3);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106aa5adc; end: 106aa5cd3; -[SCInternalShakeMenuViewController _configureCell:forRowAtIndexPath:] */

void FUN_106aa5adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010be45c60(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c260dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfe90c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar1 = param_1;
  func_0x00010bf8e5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7c00(puVar4,param_2,uVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe90c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3,param_2,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106aa5cd4; end: 106aa5dbf; -[SCInternalShakeMenuViewController tableView:viewForHeaderInSection:] */

void FUN_106aa5cd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c267fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      puVar3 = PTR_PTR_1126c3020;
      _objc_alloc(PTR_PTR_1126c3020);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c216240();
      func_0x00010c20eaa0(puVar3);
      _objc_release(uVar2);
      goto LAB_106aa5da4;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106aa5da4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106aa5dc0; end: 106aa5e9f; -[SCInternalShakeMenuViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_106aa5dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_4;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c267fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = uVar2;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bfe09e0(PTR_PTR_1126b78f0);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106aa5ea0; end: 106aa5f73; -[SCInternalShakeMenuViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3);
  lVar1 = param_1;
  func_0x00010be45c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = (long)_DAT_112757354;
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  _objc_release(uVar2);
  lVar4 = lVar1;
  func_0x00010bf843e0();
  lVar3 = lVar1;
  func_0x00010beedca0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar4 == 0) {
    func_0x000100162d98("APPSTORE",lVar3);
  }
  else {
    func_0x00010bf84b00(param_1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106aa5f74; end: 106aa5f93; -[SCInternalShakeMenuViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5f74(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112757358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aa5f94; end: 106aa5fa7; -[SCInternalShakeMenuViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5f94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112757358,param_3);
  return;
}



/* Entry: 106aa5fa8; end: 106aa600f; -[SCInternalShakeMenuViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa5fa8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757358);
  _objc_storeStrong(param_1 + _DAT_112757354,0);
  _objc_destroyWeak(param_1 + _DAT_112757348);
  _objc_storeStrong(param_1 + _DAT_112757344,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757340,0);
  return;
}



/* Entry: 106aa6010; end: 106aa60df; -[SCShakeTouchTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106aa6010(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f49c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithTarget_action__1125f1c48,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c178280(puVar1);
    func_0x00010c18b5a0(puVar1);
    func_0x00010c18b5c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127573a0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127573a0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127573a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127573a4) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106aa60e0; end: 106aa62a3; -[SCShakeTouchTracker touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa60e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
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
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar10 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_100,0x10);
  if (lVar3 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        uVar6 = uVar5;
        func_0x00010c2a71e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(uVar5,param_2,uVar6);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_1 + _DAT_1127573a0);
        puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297180(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar6,param_2,puVar1);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar6 = *(undefined8 *)(param_1 + _DAT_1127573a4);
        _CACurrentMediaTime();
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar6,param_2,puVar1);
        _objc_release(puVar1);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar3 != 0);
  }
  func_0x00010c209fc0(param_1,param_2,5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar11 = dVar10;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_1127573a4;
  lVar3 = *(long *)(param_3 + lVar8);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      uVar6 = *(undefined8 *)(param_3 + lVar8);
      func_0x00010c0dfd40(uVar6,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar12 = dVar10 - dVar11;
      _objc_release(uVar6);
      if (dVar12 <= 1.8) {
        uVar6 = *(undefined8 *)(param_3 + _DAT_1127573a0);
        func_0x00010c0dfd40(uVar6,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar6);
        _objc_release(uVar6);
      }
      else {
        func_0x00010bef92c0(puVar2,param_2,uVar7);
      }
      uVar7 = uVar7 + 1;
      uVar4 = *(ulong *)(param_3 + lVar8);
      func_0x00010bf529e0();
    } while (uVar7 < uVar4);
  }
  func_0x00010c12d480(*(undefined8 *)(param_3 + _DAT_1127573a0),param_2,puVar2);
  func_0x00010c12d480(*(undefined8 *)(param_3 + lVar8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aa62a4; end: 106aa63ef; -[SCShakeTouchTracker visiblePoints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa62a4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar8 = param_1;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127573a4;
  lVar3 = *(long *)(param_2 + lVar7);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c0dfd40(uVar4,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar9 = param_1 - dVar8;
      _objc_release(uVar4);
      if (dVar9 <= 1.8) {
        uVar4 = *(undefined8 *)(param_2 + _DAT_1127573a0);
        func_0x00010c0dfd40(uVar4,param_3,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_3,uVar4);
        _objc_release(uVar4);
      }
      else {
        func_0x00010bef92c0(puVar2,param_3,uVar6);
      }
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_2 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  func_0x00010c12d480(*(undefined8 *)(param_2 + _DAT_1127573a0),param_3,puVar2);
  func_0x00010c12d480(*(undefined8 *)(param_2 + lVar7),param_3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aa63f0; end: 106aa63f7; -[SCShakeTouchTracker canPreventGestureRecognizer:] */

undefined8 FUN_106aa63f0(void)

{
  return 0;
}



/* Entry: 106aa63f8; end: 106aa63ff; -[SCShakeTouchTracker canBePreventedByGestureRecognizer:] */

undefined8 FUN_106aa63f8(void)

{
  return 0;
}



/* Entry: 106aa6400; end: 106aa640f; -[SCShakeTouchTracker touchPoints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106aa6400(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127573a0);
}



/* Entry: 106aa6410; end: 106aa644f; -[SCShakeTouchTracker setTouchPoints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa6410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127573a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa6450; end: 106aa645f; -[SCShakeTouchTracker touchTimestamps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106aa6450(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127573a4);
}



/* Entry: 106aa6460; end: 106aa649f; -[SCShakeTouchTracker setTouchTimestamps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa6460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127573a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa64a0; end: 106aa64df; -[SCShakeTouchTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa64a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127573a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127573a0,0);
  return;
}



/* Entry: 106aa64e0; end: 106aa65ef; -[SCShakeScreenRecorder init] */

undefined1 *
FUN_106aa64e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f49c8;
  uStack_30 = param_5;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    *(undefined8 *)((long)puVar1 + 0x58) = param_1;
    *(undefined8 *)((long)puVar1 + 0x60) = param_2;
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    *(undefined8 *)((long)puVar1 + 0x70) = param_4;
    _objc_release(puVar2);
    *(undefined8 *)((long)puVar1 + 0x78) = 0x3ff0000000000000;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    uVar3 = 1;
    _dispatch_semaphore_create();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    _objc_release(uVar4);
    uVar3 = 1;
    _dispatch_semaphore_create();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106aa65f0; end: 106aa67db; -[SCShakeScreenRecorder startRecording] */

void FUN_106aa65f0(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  double dVar19;
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
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010bea9d80();
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c252d60();
    *(bool *)(param_1 + 0x30) = lVar2 == 1;
    puVar3 = PTR_PTR_1126d0208;
    _objc_alloc_init();
    lVar6 = *(long *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar3;
    _objc_release();
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    FUN_106aa67dc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_120;
      dVar19 = *(double *)PTR__UIWindowLevelNormal_110345e88;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar6);
          }
          uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
          func_0x00010c2a72a0(uVar8);
          bVar1 = false;
          if (!NAN((double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(
                                                  uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))
                                                  ))) && !NAN(dVar19)) {
            bVar1 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13
                                                  (uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))
                                                  ))) == dVar19;
          }
          if ((bVar1) && (uVar4 = uVar8, func_0x00010c074c20(), (uVar4 & 1) == 0)) {
            func_0x00010bef9040(uVar8,param_2,*(undefined8 *)(param_1 + 0xa0));
            goto LAB_106aa6720;
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
LAB_106aa6720:
    _objc_release(lVar6);
    puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                        PTR_s__writeVideoFrame_112532e80);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar7);
    func_0x00010c1dffe0(*(undefined8 *)(param_1 + 0x20),param_2,2);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar7,param_2,puVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106aa67dc; end: 106aa6827;  */

void FUN_106aa67dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106aa6828; end: 106aa68bb; -[SCShakeScreenRecorder stopRecordingWithCompletionHandler:] */

void FUN_106aa6828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010c0b6be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c900(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
    _objc_release(puVar1);
    func_0x00010bde3160(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106aa68bc; end: 106aa68c7; -[SCShakeScreenRecorder setDelegate:] */

void FUN_106aa68bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 106aa68c8; end: 106aa6ccb; -[SCShakeScreenRecorder _setUpWriter] */

void FUN_106aa68c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  _CGColorSpaceCreateDeviceRGB();
  *(long *)(param_1 + 0x80) = lVar2;
  dVar10 = *(double *)(param_1 + 0x58);
  _CGRectGetWidth(dVar10,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                  *(undefined8 *)(param_1 + 0x70));
  dVar11 = *(double *)(param_1 + 0x58);
  _CGRectGetHeight(dVar11,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(param_1 + 0x70));
  uStack_c8 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  uStack_c0 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7f60;
  puStack_98 = PTR____kCFBooleanTrue_11034ab68;
  uStack_b8 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar10 * *(double *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar3;
  func_0x00010c0df720(dVar11 * *(double *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferBytesPerRowAlignmentKey_11034a370;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar4;
  func_0x00010c0df720(dVar10 * *(double *)(param_1 + 0x78) * 4.0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar7 = 0;
  _CVPixelBufferPoolCreate(0,0,puVar6);
  FUN_106aa6ccc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8da00(param_1);
  puVar3 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = 0;
  func_0x00010c057a20();
  uVar1 = uStack_120;
  _objc_retain(uStack_120);
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar3;
  _objc_release(uVar8);
  _objc_release(puVar4);
  uStack_d8 = *(undefined8 *)PTR__AVVideoAverageBitRateKey_110348108;
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7f78;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
  uStack_f8 = *(undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
  uStack_110 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar10 * *(double *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f0 = puVar4;
  func_0x00010c0df720(dVar11 * *(double *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_e8 = puVar5;
  puStack_e0 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
  func_0x00010bf0ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar8);
  func_0x00010c198a40(*(undefined8 *)(param_1 + 0x10));
  puVar4 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
  func_0x00010bf0ba60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar4;
  _objc_release(uVar8);
  func_0x00010bef93a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c251d20(*(undefined8 *)(param_1 + 8));
  uVar8 = *(undefined8 *)(param_1 + 8);
  _CMTimeMake(auStack_138,0,1000);
  func_0x00010c2508a0(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106aa6ccc; end: 106aa6d17;  */

void FUN_106aa6ccc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106aa6d18; end: 106aa6da7; -[SCShakeScreenRecorder _completeRecordingSession:] */

void FUN_106aa6d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106aa6da8;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106aa6da8; end: 106aa6f2b;  */

void FUN_106aa6da8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(lStack_30 + 0x40);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106aa6e20;
  puStack_38 = &UNK_11084aaa8;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010c0f8240(uVar2,param_2,&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106aa6f2c; end: 106aa6f93;  */

void FUN_106aa6f2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = param_1;
    FUN_106aa6ccc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106aa6f94; end: 106aa709b; -[SCShakeScreenRecorder _cleanup] */

void FUN_106aa6f94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  _CGColorSpaceRelease(*(undefined8 *)(param_1 + 0x80));
  _CVPixelBufferPoolRelease(*(undefined8 *)(param_1 + 0x88));
  lVar2 = *(long *)(param_1 + 0xa0);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  if (lVar2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106aa7060;
    puStack_30 = &UNK_110842e18;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106aa709c; end: 106aa710b; -[SCShakeScreenRecorder _writeVideoFrame] */

void FUN_106aa709c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  _dispatch_semaphore_wait(lVar1,0);
  if (lVar1 == 0) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38));
  }
  return;
}



/* Entry: 106aa710c; end: 106aa7387;  */

void FUN_106aa710c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c07bca0();
  if (iVar3 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    dVar9 = *(double *)(lVar8 + 0x28);
    if (dVar9 == 0.0) {
      func_0x00010c2709c0(*(undefined8 *)(lVar8 + 0x20));
      *(double *)(*(long *)(param_1 + 0x20) + 0x28) = dVar9;
      lVar8 = *(long *)(param_1 + 0x20);
    }
    func_0x00010c2709c0(*(undefined8 *)(lVar8 + 0x20));
    dVar9 = dVar9 - *(double *)(*(long *)(param_1 + 0x20) + 0x28);
    _CMTimeMakeWithSeconds(auStack_d8,dVar9,1000);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_106aa7388;
    puStack_f0 = &UNK_110848c48;
    uStack_e8 = *(undefined8 *)(param_1 + 0x20);
    dStack_e0 = dVar9;
    func_0x000100162d98("APPSTORE",&puStack_108);
    uStack_110 = 0;
    lVar8 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(lVar8 + 0x80);
    uVar14 = *(undefined8 *)(lVar8 + 0x70);
    uVar10 = *(undefined8 *)(lVar8 + 0x78);
    uVar11 = *(undefined8 *)(lVar8 + 0x58);
    uVar12 = *(undefined8 *)(lVar8 + 0x60);
    uVar13 = *(undefined8 *)(lVar8 + 0x68);
    _CVPixelBufferPoolCreatePixelBuffer(0,*(undefined8 *)(lVar8 + 0x88),&uStack_110);
    _CVPixelBufferLockBaseAddress(uStack_110,0);
    uVar4 = uStack_110;
    _CVPixelBufferGetBaseAddress();
    uVar5 = uStack_110;
    _CVPixelBufferGetWidth(uStack_110);
    uVar6 = uStack_110;
    _CVPixelBufferGetHeight(uStack_110);
    uVar7 = uStack_110;
    _CVPixelBufferGetBytesPerRow(uStack_110);
    _CGBitmapContextCreate(uVar4,uVar5,uVar6,8,uVar7,uVar1,0x2002);
    _CGContextScaleCTM(uVar10,uVar10);
    _CGRectGetHeight(uVar11,uVar12,uVar13,uVar14);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0x3ff0000000000000;
    uStack_a0 = 0;
    uStack_a8 = 0xbff0000000000000;
    uStack_98 = uVar11;
    _CGContextConcatCTM(uVar4,&uStack_c0);
    puStack_140 = puVar2;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_106aa7408;
    puStack_128 = &UNK_110848c48;
    uStack_120 = *(undefined8 *)(param_1 + 0x20);
    uStack_118 = uVar4;
    func_0x00010bcbe2c4("APPSTORE",&puStack_140);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
    _dispatch_semaphore_wait(lVar8,0);
    if (lVar8 == 0) {
      func_0x00010c0f7fc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    }
    else {
      _CGContextRelease(uVar4);
      _CVPixelBufferUnlockBaseAddress(uStack_110,0);
      _CVPixelBufferRelease(uStack_110);
    }
    _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  }
  return;
}



/* Entry: 106aa7388; end: 106aa7407;  */

void FUN_106aa7388(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar2 + 0x98) == 0) && (3.0 < *(double *)(param_1 + 0x28))) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c151860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x98) = puVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  lVar2 = lVar2 + 0x90;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c22a380(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106aa7408; end: 106aa76df;  */

void FUN_106aa7408(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xa0);
  func_0x00010c29ffe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_3 + 0x28);
  _UIGraphicsPushContext();
  FUN_106aa67dc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar6 = uVar9;
      func_0x00010c074c20();
      puVar2 = PTR_DAT_1126a5700;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar9);
        uVar6 = uVar9;
        func_0x00010010fab4(uVar9,puVar2);
        _objc_release(uVar9);
        if ((uVar9 == 0) || ((uVar6 & 1) == 0)) {
          lVar8 = *(long *)(param_3 + 0x20);
          uVar11 = *(undefined8 *)(lVar8 + 0x58);
          _CGRectGetWidth(uVar11,*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68),
                          *(undefined8 *)(lVar8 + 0x70));
          lVar8 = *(long *)(param_3 + 0x20);
          uVar12 = *(undefined8 *)(lVar8 + 0x58);
          _CGRectGetHeight(uVar12,*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68),
                           *(undefined8 *)(lVar8 + 0x70));
          param_2 = 0.0;
          func_0x00010bf89ce0(0,0,uVar11,uVar12,uVar9);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  dVar13 = 0.0;
  _objc_retain(lVar3);
  lVar5 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010bdc1060(*(undefined8 *)(lVar4 * 8));
      dVar13 = dVar13 + -22.0;
      param_2 = param_2 + -22.0;
      _CGContextSetRGBFillColor
                (0x3ff0000000000000,0,0,0x3fe0000000000000,*(undefined8 *)(param_3 + 0x28));
      _CGContextFillEllipseInRect
                (dVar13,param_2,0x4046000000000000,0x4046000000000000,
                 *(undefined8 *)(param_3 + 0x28));
      _CGContextSetRGBStrokeColor
                (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe999999999999a,
                 *(undefined8 *)(param_3 + 0x28));
      _CGContextSetLineWidth(0x4000000000000000,*(undefined8 *)(param_3 + 0x28));
      _CGContextStrokeEllipseInRect
                (dVar13,param_2,0x4046000000000000,0x4046000000000000,
                 *(undefined8 *)(param_3 + 0x28));
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
    lVar5 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _UIGraphicsPopContext();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf06f60(*(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x18));
  _CGContextRelease(*(undefined8 *)(lVar3 + 0x30));
  _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(lVar3 + 0x28),0);
  _CVPixelBufferRelease(*(undefined8 *)(lVar3 + 0x28));
  _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x50));
  return;
}



/* Entry: 106aa76e0; end: 106aa774b;  */

void FUN_106aa76e0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf06f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x28),&uStack_40);
  _CGContextRelease(*(undefined8 *)(param_1 + 0x30));
  _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_1 + 0x28),0);
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x28));
  _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  return;
}



/* Entry: 106aa774c; end: 106aa77bf; -[SCShakeScreenRecorder _removeTempFilePath:] */

void FUN_106aa774c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfacbe0();
  if ((int)puVar2 != 0) {
    uStack_28 = 0;
    func_0x00010c12cc40(puVar1,param_2,param_3,&uStack_28);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106aa77c0; end: 106aa7857; -[SCShakeScreenRecorder .cxx_destruct] */

void FUN_106aa77c0(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106aa7858; end: 106aa7e33; -[SCShakeScreenRecordingMenuWindow init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106aa7858(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  puVar2 = &uStack_b0;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar7 = param_1;
  _objc_release(puVar1);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar6 = 10.0;
  if (10.0 <= dVar7) {
    dVar6 = dVar7;
  }
  dVar6 = dVar6 + 5.0;
  dVar7 = dVar6 + 44.0 + 10.0;
  puStack_a8 = PTR_PTR_1126f49d0;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(0,0,param_3,dVar7,&uStack_b0,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010bd86158(puVar2);
    func_0x00010c225b00(*(double *)PTR__UIWindowLevelAlert_110345e80 + 1.0,puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar1);
    func_0x00010c17d4c0(puVar2);
    *(double *)((long)puVar2 + (long)_DAT_1127573a8) = dVar7;
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127573ac;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar1;
    _objc_release(uVar4);
    func_0x00010c216260(*(undefined8 *)((long)puVar2 + lVar5));
    func_0x00010c19f0e0(0x4024000000000000,dVar6,0x4054000000000000,0x4046000000000000,
                        *(undefined8 *)((long)puVar2 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar4);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff8000000000000);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar5));
    func_0x00010befbb60(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127573b0;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar1;
    _objc_release(uVar4);
    func_0x00010c216260(*(undefined8 *)((long)puVar2 + lVar5));
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    func_0x00010c19f0e0(param_1 + -80.0 + -10.0,dVar6,0x4054000000000000,0x4046000000000000,
                        *(undefined8 *)((long)puVar2 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar4);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff8000000000000);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar5));
    func_0x00010befbb60(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,param_3,0x4014000000000000);
    lVar5 = (long)_DAT_1127573b4;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar5));
    _objc_release(puVar1);
    func_0x00010c21e900(*(undefined8 *)((long)puVar2 + lVar5));
  }
  return (undefined1 *)puVar2;
}



/* Entry: 106aa7e34; end: 106aa7ef3; -[SCShakeScreenRecordingMenuWindow show] */

void FUN_106aa7e34(undefined8 param_1)

{
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(param_1);
  return;
}



/* Entry: 106aa7ef4; end: 106aa7f3f; -[SCShakeScreenRecordingMenuWindow cancelButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa7ef4(long param_1,undefined8 param_2)

{
  func_0x00010be8b780();
  func_0x00010c1a7f60(param_1,param_2,1);
  param_1 = param_1 + _DAT_1127573b8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c151280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106aa7f40; end: 106aa8027; -[SCShakeScreenRecordingMenuWindow takeButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa7f40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_1127573ac));
  lVar3 = (long)_DAT_1127573b0;
  func_0x00010c12e940(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bebfa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startCapture_11258d838);
  return;
}



/* Entry: 106aa8028; end: 106aa8093; -[SCShakeScreenRecordingMenuWindow stopRecordButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8028(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010be8b780();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106aa8094;
  puStack_30 = &UNK_11095b130;
  lStack_28 = param_1;
  func_0x00010c2567a0(*(undefined8 *)(param_1 + _DAT_1127573bc),param_2,&puStack_48);
  return;
}



/* Entry: 106aa8094; end: 106aa811b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c1a7f60(uVar2);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127573b8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c151260();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106aa811c; end: 106aa8287; -[SCShakeScreenRecordingMenuWindow _startCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa811c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126d0210;
  _objc_alloc_init();
  lVar5 = (long)_DAT_1127573bc;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c2501c0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar1;
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127573c0);
  *(undefined **)(param_1 + _DAT_1127573c0) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106aa8288; end: 106aa82b3;  */

void FUN_106aa8288(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd1960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106aa82b4; end: 106aa83ef; -[SCShakeScreenRecordingMenuWindow _autoStopRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa82b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar3 = (long)_DAT_1127573bc;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127573c0;
    func_0x00010c12d560();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x106aa8368;
    puStack_40 = &UNK_11095b130;
    lStack_38 = param_1;
    func_0x00010c2567a0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  }
  return;
}



/* Entry: 106aa83f0; end: 106aa8463; -[SCShakeScreenRecordingMenuWindow _removeBackgroundObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa83f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127573c0;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106aa8464; end: 106aa84a7; -[SCShakeScreenRecordingMenuWindow dealloc] */

void FUN_106aa8464(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8b780();
  puStack_28 = PTR_PTR_1126f49d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106aa84a8; end: 106aa8593; -[SCShakeScreenRecordingMenuWindow shakeScreenRecorder:didRecordVideoLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa84a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  dVar2 = param_1;
  _objc_retain(param_7);
  lVar1 = (long)_DAT_1127573b4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  dVar3 = 30.0;
  dVar4 = (30.0 - param_1) / 30.0;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  func_0x00010c19f0e0(dVar2,param_2,dVar4 * dVar3,param_4,*(undefined8 *)(param_5 + lVar1));
  if (dVar4 <= 0.0) {
    func_0x00010be8b780(param_5);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106aa8594;
    puStack_60 = &UNK_11095b130;
    lStack_58 = param_5;
    func_0x00010c2567a0(param_7,param_6,&puStack_78);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106aa8594; end: 106aa861b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c1a7f60(uVar2);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127573b8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c151260();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106aa861c; end: 106aa86cf; -[SCShakeScreenRecordingMenuWindow hitTest:withEvent:] */

void FUN_106aa861c(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &puStack_40;
  puStack_38 = PTR_PTR_1126f49d0;
  puStack_40 = param_1;
  _objc_msgSendSuper2(&puStack_40,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined1 **)param_1) {
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
    if (ppuVar1 != (undefined1 **)puVar2) {
      _objc_retain(ppuVar1);
      puVar2 = (undefined1 *)ppuVar1;
      goto LAB_106aa86b0;
    }
  }
  puVar2 = (undefined1 *)0x0;
LAB_106aa86b0:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106aa86d0; end: 106aa86ef; -[SCShakeScreenRecordingMenuWindow delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa86d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127573b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aa86f0; end: 106aa8703; -[SCShakeScreenRecordingMenuWindow setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa86f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127573b8,param_3);
  return;
}



/* Entry: 106aa8704; end: 106aa8713; -[SCShakeScreenRecordingMenuWindow presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106aa8704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127573c4);
}



/* Entry: 106aa8714; end: 106aa8753; -[SCShakeScreenRecordingMenuWindow setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127573c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa8754; end: 106aa8773; -[SCShakeScreenRecordingMenuWindow shakeWindowToHide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8754(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127573c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aa8774; end: 106aa8787; -[SCShakeScreenRecordingMenuWindow setShakeWindowToHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8774(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127573c8,param_3);
  return;
}



/* Entry: 106aa8788; end: 106aa881f; -[SCShakeScreenRecordingMenuWindow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8788(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127573c8);
  _objc_storeStrong(param_1 + _DAT_1127573c4,0);
  _objc_destroyWeak(param_1 + _DAT_1127573b8);
  _objc_storeStrong(param_1 + _DAT_1127573c0,0);
  _objc_storeStrong(param_1 + _DAT_1127573bc,0);
  _objc_storeStrong(param_1 + _DAT_1127573b4,0);
  _objc_storeStrong(param_1 + _DAT_1127573ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127573b0,0);
  return;
}



/* Entry: 106aa8820; end: 106aa8823; -[SCShakeToReportSettingsViewController getInfo] */

void FUN_106aa8820(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6b678;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e6b678,
                      &PTR____CFConstantStringClassReference_110e6b458,0);
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



/* Entry: 106aa8824; end: 106aa8903; -[SCShakeToReportSettingsViewController initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106aa8824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f49d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127573cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127573cc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127573d0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127573d0) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127573d4),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106aa8904; end: 106aa8dbb; -[SCShakeToReportSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa8904(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f49d8;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  func_0x00010c213040();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bfc65c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
  _objc_release(lVar1);
  func_0x00010c1cfce0(puVar2);
  dVar6 = 12.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2);
  _objc_release(puVar3);
  func_0x00010c1bdb00(puVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar6 = dVar6 + -64.0;
  func_0x00010c1e0180(dVar6,puVar2);
  _objc_release(lVar1);
  func_0x00010c106d40(puVar2);
  dVar7 = 1.79769313486232e+308;
  func_0x00010c23d5a0(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,dVar6,dVar7 + 16.0);
  _objc_release(lVar1);
  func_0x00010befbb60(puVar3);
  puVar4 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(uVar8,uVar9,uVar10,uVar11);
  lVar5 = (long)_DAT_1127573d8;
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar4;
  _objc_release(uVar8);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar4);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar5));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar4);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d0218;
  func_0x00010bfc6ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010be94440(param_1);
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(puVar4);
  func_0x00010c0bbfc0(uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c211680(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 106aa8dbc; end: 106aa8f63;  */

void FUN_106aa8dbc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106aa8f64; end: 106aa95f3;  */

void FUN_106aa8f64(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106aa95f4; end: 106aa9673; -[SCShakeToReportSettingsViewController viewDidLoad] */

void FUN_106aa95f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f49d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 106aa9674; end: 106aa9763; -[SCShakeToReportSettingsViewController viewWillAppear:] */

void FUN_106aa9674(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f49d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008522a8();
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  func_0x00010be94440(param_1);
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0(PTR_PTR_1126d0160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07db40();
  func_0x00010bf917a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106aa9764; end: 106aa97c3; -[SCShakeToReportSettingsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aa9764(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f49d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  param_1 = param_1 + _DAT_1127573d4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22a260();
  _objc_release(param_1);
  return;
}



/* Entry: 106aa97c4; end: 106aa97cf; -[SCShakeToReportSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_106aa97c4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}


