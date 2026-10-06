/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084559f0; end: 108455a1f; -[SCPreviewUCOProviderData .cxx_destruct] */

void FUN_1084559f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108455a20; end: 108455a87; +[SCUnifiedCameraObjectCarouselConfig descriptor] */

void FUN_108455a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b8d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9e550,
                        &PTR____CFConstantStringClassReference_110e8cdd8,&PTR_DAT_11325bed8,
                        &PTR_DAT_11325bef0,4,0x28,0x1c);
    puRam000000011372b8d0 = puVar1;
  }
  return;
}



/* Entry: 108455a88; end: 108455ba3;  */

void FUN_108455a88(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain(param_4);
  if ((param_2 == 0) || (param_3 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _CACurrentMediaTime();
    FUN_108455ba4();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108455bf8;
    puStack_68 = &UNK_110845188;
    _objc_retain(param_2);
    lStack_60 = param_2;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_4);
    lStack_50 = param_4;
    uStack_48 = param_1;
    func_0x000107c27d8c(lVar1,&puStack_80);
    _objc_release(lVar1);
    _objc_release(lStack_50);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108455ba4; end: 108455bf7;  */

void FUN_108455ba4(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372b8d8 != -1) {
    func_0x000107c27d9c(0x11372b8d8,&PTR___NSConcreteGlobalBlock_110a49098);
  }
  uVar1 = uRam000000011372b8e0;
  _objc_retain(uRam000000011372b8e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108455bf8; end: 108455ef7;  */

void FUN_108455bf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9fa8;
  puVar2 = puVar1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ed2d78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d78);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  func_0x00010bf09600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b9fa8;
  puVar5 = puVar4;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110ed2d98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar11);
  func_0x00010bf09600();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126b9fb0;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008480();
  _objc_retain(0);
  _objc_release(puVar7);
  if (puVar4 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    puVar7 = puVar4;
    func_0x00010c2858e0();
    _objc_retain(0);
    _objc_release(0);
    puVar2 = puVar1;
    if (((ulong)puVar7 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar2);
  }
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(puVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    uVar10 = *(undefined8 *)(puVar1 + 0x20);
    _objc_retain(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  return;
}



/* Entry: 108455ef8; end: 108455f47;  */

void FUN_108455ef8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108455f48; end: 108456027;  */

void FUN_108455f48(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 == 0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0);
  }
  else {
    FUN_108455ba4();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108456028;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_1);
    lStack_40 = param_1;
    _objc_retain(param_2);
    lStack_38 = param_2;
    func_0x000107c27d8c(lVar1,&puStack_60);
    _objc_release(lVar1);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108456028; end: 1084562a7;  */

void FUN_108456028(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uStack_150;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126b9fb0;
  _objc_alloc();
  func_0x00010c008480();
  _objc_retain(0);
  if (puVar5 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    puVar6 = puVar5;
    func_0x00010bf96fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar7 == (undefined *)0x0) {
      uStack_150 = 0;
      uVar15 = 0;
    }
    else {
      uStack_150 = 0;
      uVar15 = 0;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar6);
          }
          uVar13 = *(ulong *)((long)puVar14 * 8);
          uVar8 = uVar13;
          func_0x00010c0d8860();
          _objc_retain(0);
          _objc_release(0);
          if (uVar8 != 0) {
            uVar9 = uVar13;
            func_0x00010bfacec0();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010bfda7c0();
            _objc_release(uVar9);
            uVar9 = uStack_150;
            uVar3 = uVar15;
            uVar4 = uVar8;
            if ((uVar10 & 1) == 0) {
              func_0x00010bfacec0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar13;
              func_0x00010bfda7c0();
              _objc_release(uVar13);
              uVar9 = uVar15;
              uVar3 = uVar8;
              uVar4 = uStack_150;
              if ((int)uVar10 == 0) goto LAB_1084561d0;
            }
            uStack_150 = uVar4;
            uVar15 = uVar3;
            _objc_retain(uVar8);
            _objc_release(uVar9);
          }
LAB_1084561d0:
          _objc_release(uVar8);
          puVar14 = puVar14 + 1;
        } while (puVar7 != puVar14);
        puVar7 = puVar6;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uStack_150,uVar15);
    _objc_release(uVar15);
    _objc_release(uStack_150);
  }
  _objc_release(puVar5);
  _objc_release(0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    uVar11 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = &UNK_10f499dfc;
    _dispatch_queue_create(&UNK_10f499dfc,uVar11);
    uVar2 = puRam000000011372b8e0;
    puRam000000011372b8e0 = puVar5;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar11);
    return;
  }
  return;
}



/* Entry: 1084562a8; end: 108456303;  */

void FUN_1084562a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_10f499dfc;
  _dispatch_queue_create(&UNK_10f499dfc,uVar2);
  uVar1 = puRam000000011372b8e0;
  puRam000000011372b8e0 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108456304; end: 108456463; -[Media upload] */

void FUN_108456304(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x00010c28db60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28e200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126bc530;
    func_0x00010c069ca0(PTR_PTR_1126bc530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0c5a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108456464;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x000107c312d0("APPSTORE",&puStack_68);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bee5e80(param_1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 108456464; end: 1084564ab;  */

void FUN_108456464(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c21d020(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28db60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084564ac; end: 10845692f; -[Media _uploadValidatedDataWithMediaId:] */

void FUN_1084564ac(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c4980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0ef740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c28db60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c28db60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf93e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126d96a8;
  func_0x00010c22b6a0(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(uVar1);
  func_0x00010c08fa60(uVar2);
  func_0x00010c28dbc0(puVar6);
  _objc_release(puVar6);
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    func_0x00010be994c0(param_1);
  }
  uVar3 = param_1;
  func_0x00010c28db60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar10 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c28db60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc508);
  uVar7 = uVar3;
  func_0x00010beecc40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar7;
  func_0x00010bfe63a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf8b340();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  _objc_retain(param_3);
  func_0x00010c21d0e0(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar8);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc508);
  uVar3 = uVar8;
  func_0x00010beecc40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar7 = uVar3;
  func_0x00010bfe63a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  func_0x00010c13db80(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar3 = param_1;
  func_0x00010c28db60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar7 & 1) != 0) {
    func_0x00010c28db60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6ea0();
    _objc_release(param_1);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108456930; end: 108456a53;  */

void FUN_108456930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0880(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108456a54; end: 108456a63;  */

void FUN_108456a54(void)

{
  return;
}



/* Entry: 108456a64; end: 108456ba3;  */

void FUN_108456a64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c08a0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 108456ba4; end: 108456cdb;  */

void FUN_108456ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d96b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05a000(puVar1);
  func_0x00010c21d020(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bee5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__uploadDidSucceedWithMediaId__112596fa8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108456cdc; end: 108456d5f; -[Media _uploadDidSucceedWithMediaId:] */

void FUN_108456cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d96a8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28dbe0();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c28db60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108456d60; end: 108456e03; -[Media _uploadDidFailWithMediaId:reason:] */

void FUN_108456d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c21d020(param_1,param_2,0);
  puVar1 = PTR_PTR_1126d96a8;
  func_0x00010c22b6a0(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28dba0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c28db60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108456e04; end: 108456ee7; -[Media _saveLocalContentWithMediaData:mediaId:] */

void FUN_108456e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba128;
  _objc_opt_class(PTR_PTR_1126ba128);
  uVar3 = uVar1;
  func_0x00010beecc40(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a491d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfe63a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c14a8a0(uVar4,param_2,param_3,param_4,0,0);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108456ee8; end: 108456eff;  */

void FUN_108456ee8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaDataIngesterLazy_11260ec30);
  return;
}



/* Entry: 108456f00; end: 108456f07; -[SCMediaEndpointParameters storyId] */

undefined8 FUN_108456f00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108456f08; end: 108456f0f; -[SCMediaEndpointParameters setStoryId:] */

void FUN_108456f08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108456f10; end: 108456f17; -[SCMediaEndpointParameters chatId] */

undefined8 FUN_108456f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108456f18; end: 108456f1f; -[SCMediaEndpointParameters setChatId:] */

void FUN_108456f18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108456f20; end: 108456f27; -[SCMediaEndpointParameters conversationId] */

undefined8 FUN_108456f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108456f28; end: 108456f2f; -[SCMediaEndpointParameters setConversationId:] */

void FUN_108456f28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108456f30; end: 108456f6b; -[SCMediaEndpointParameters .cxx_destruct] */

void FUN_108456f30(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108456f6c; end: 108456f73; -[Media initWithJSONDictionary:] */

void FUN_108456f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c020710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithJSONDictionary_legacySto_1125e5ba8,param_3,0);
  return;
}



/* Entry: 108456f74; end: 108457183; -[Media initWithJSONDictionary:legacyStoryMediaCache:] */

undefined1 *
FUN_108456f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ba740(puVar1);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178800(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178700(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ac0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1d77a0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d020(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c1c5060(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108457184; end: 1084573af; -[Media initWithCoder:] */

undefined1 * FUN_108457184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178800(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178700(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ac0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1d77a0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    func_0x00010c1cea80(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d020(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c1c5060(puVar1);
    _objc_release(uVar2);
    func_0x00010be5e600(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1084573b0; end: 1084573b3; -[Media didDecodeObject] */

void FUN_1084573b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaDidDecodeObject_112575320);
  return;
}



/* Entry: 1084573b4; end: 10845758b; -[Media _mediaDidDecodeObject] */

void FUN_1084573b4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  func_0x00010c28e9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c28e9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010c28e9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126d96b8;
      func_0x00010c2b1e40(PTR_PTR_1126d96b8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010beec820(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c21d340(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c198da0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x112f7;
      func_0x00010b79e0ec(0x112f7);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c21acc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      func_0x00010c21d020(param_1);
      _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10845758c; end: 1084577a3; -[Media encodeWithCoder:] */

void FUN_10845758c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf30240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110edbd18);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf30140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110edbd38);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf30620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea21f8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf0d6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110edbcb8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c297e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ed8a38);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_1;
  func_0x00010c0efce0(param_1);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110edbcd8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_1;
  func_0x00010c0ddce0(param_1);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110ea2c18);
  _objc_release(puVar2);
  uVar1 = param_1;
  func_0x00010c28e9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea6f38);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c60a0(param_1);
  func_0x00010c0df780(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110edbcf8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1084577a4; end: 1084577f3; -[Media updateAnnouncer] */

void FUN_1084577a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d96c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1084577f4; end: 10845789b; -[Media legacyMediaCache] */

void FUN_1084577f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bf430;
    _objc_opt_class(PTR_PTR_1126bf430);
    lVar2 = lVar4;
    func_0x00010beecc40(lVar4,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110a491f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar4;
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10845789c; end: 1084578a3;  */

void FUN_10845789c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_legacyMediaCache_112601668);
  return;
}



/* Entry: 1084578a4; end: 1084578ef; -[Media hasSeparateCaption] */

uint FUN_1084578a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar1,param_2,param_1);
  _objc_release(param_1);
  return (uint)puVar1 ^ 1;
}



/* Entry: 1084578f0; end: 108457977; -[Media removeFromCache] */

void FUN_1084578f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be44460();
  uVar2 = param_1;
  if ((int)uVar1 == 0) {
    func_0x00010c08f160(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bec4b80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12c870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeFromDisk_112628c38);
  return;
}



/* Entry: 108457978; end: 1084579b3; -[Media removeFromDisk] */

void FUN_108457978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29a880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c880(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084579b4; end: 1084579ef; -[Media removeFromDiskMP4] */

void FUN_1084579b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29a8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c880(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084579f0; end: 108457acf; -[Media removeFromDisk:] */

void FUN_1084579f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0830a0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uStack_38 = 0;
    func_0x00010c12cc40();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    uVar3 = param_1;
    func_0x00010c0efce0();
    if ((int)uVar3 != 0) {
      _objc_release(uVar1);
      func_0x00010c0efc60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uStack_40 = 0;
      func_0x00010c12cc40(puVar2,param_2,param_1,&uStack_40);
      uVar1 = uStack_40;
      _objc_retain(uStack_40);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108457ad0; end: 108457b87; -[Media isLoaded] */

undefined8 FUN_108457ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be44460();
  uVar2 = param_1;
  if ((int)uVar1 == 0) {
    func_0x00010c08f160(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf4b520(uVar2,param_2,param_1,0,1);
  }
  else {
    func_0x00010bec4b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf4b4c0(uVar2,param_2,param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 108457b88; end: 108457bd3; -[Media mediaId] */

void FUN_108457b88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c51c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108457bd4; end: 108457ccf; -[Media dataToUpload] */

void FUN_108457bd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  _dispatch_semaphore_create();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108457cd0;
  uStack_30 = 0x108457ce0;
  uStack_28 = 0;
  _objc_retain();
  func_0x00010bf64860(param_1);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108457cd0; end: 108457ce7;  */

void FUN_108457cd0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108457ce8; end: 108457d43;  */

void FUN_108457ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108457d44; end: 108457df7; -[Media dataToUploadWithCompletion:] */

void FUN_108457d44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0efce0();
  if ((int)lVar1 == 0) {
    func_0x00010c0c4980(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0c4980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ef740(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_108455a88(lVar1,param_1,param_3);
    _objc_release(param_3);
    param_3 = param_1;
    param_1 = lVar1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108457df8; end: 108457e47; -[Media setMediaDataToUpload:] */

void FUN_108457df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  func_0x00010c2836a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c49a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108457e48; end: 108457f47; -[Media setOverlayDataToUpload:] */

void FUN_108457e48(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  func_0x00010c28db60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c28e200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if ((lVar2 != 0) && (lVar3 = param_3, func_0x00010c08fa60(), lVar3 != 0)) {
    if (lRam000000011372b8f8 != -1) {
      func_0x000107c27d9c(0x11372b8f8,&PTR___NSConcreteGlobalBlock_110a49418);
    }
    uVar1 = uRam000000011372b900;
    func_0x00010bfe63a0(uRam000000011372b900);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c1d7520(uVar4);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108457f48; end: 108457fc7; -[Media setArchivedDataToUpload:] */

void FUN_108457f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c105b00(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108457fc8;
  puStack_30 = &UNK_110a49218;
  uStack_28 = param_1;
  func_0x00010c27f200(param_1,param_2,param_3,&puStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108457fc8; end: 10845801b;  */

void FUN_108457fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c1c4480(uVar1);
  func_0x00010c1d7540(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10845801c; end: 1084581c3; -[Media copyDataFromMedia:] */

void FUN_10845801c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0c4980(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4480(param_2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c08f760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba740(param_2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf30620(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ac0(param_2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf0d6a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b3c0(param_2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c297e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(param_2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf30240(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178800(param_2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf30140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178700(param_2);
  _objc_release(uVar1);
  func_0x00010c0efce0(param_4);
  func_0x00010c1d77a0(param_2);
  uVar1 = param_4;
  func_0x00010c28e9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d020(param_2);
  _objc_release(uVar1);
  func_0x00010c117720(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1e4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setProgress__112656bc8);
  return;
}



/* Entry: 1084581c4; end: 108458507; -[Media unarchiveSnapAndOverlayFromData:completionHandler:] */

void FUN_1084581c4(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b9fb0;
  _objc_alloc();
  uStack_f8 = 0;
  func_0x00010c008480();
  uVar5 = uStack_f8;
  _objc_retain(uStack_f8);
  if (puVar1 == (undefined *)0x0) {
    lVar9 = 0;
    (**(code **)(param_4 + 0x10))(param_4,0,0,0);
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    uStack_188 = uVar5;
    puStack_198 = param_1;
    puStack_190 = puVar1;
    lStack_180 = param_4;
    uStack_178 = param_3;
    func_0x00010bf96fc0();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain();
    puStack_160 = puVar1;
    func_0x00010bf52a60();
    if (puVar1 == (undefined *)0x0) {
      lVar11 = 0;
      unaff_x20 = 0;
      uStack_168 = 0;
      lVar12 = 0;
    }
    else {
      lVar11 = 0;
      unaff_x20 = 0;
      uStack_168 = 0;
      lVar12 = 0;
      lVar9 = *plStack_130;
      ppuStack_170 = &PTR____CFConstantStringClassReference_110de71b8;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(puStack_160);
          }
          lVar10 = *(long *)(lStack_138 + (long)puVar13 * 8);
          lVar2 = lVar10;
          func_0x00010bfacec0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bfda7c0();
          _objc_release(lVar2);
          if ((int)lVar3 == 0) {
            lVar2 = lVar10;
            func_0x00010bfacec0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010bfda7c0();
            _objc_release(lVar2);
            uVar5 = uStack_168;
            if ((int)lVar3 != 0) {
              uStack_150 = uStack_168;
              func_0x00010c0d8860();
              uStack_168 = uStack_150;
              uVar4 = unaff_x20;
              lVar2 = lVar11;
              lVar11 = lVar10;
              goto LAB_108458398;
            }
          }
          else {
            uStack_148 = unaff_x20;
            func_0x00010c0d8860();
            uVar4 = uStack_148;
            lVar2 = lVar12;
            lVar12 = lVar10;
            uVar5 = unaff_x20;
LAB_108458398:
            _objc_retain();
            _objc_release(uVar5);
            _objc_release(lVar2);
            unaff_x20 = uVar4;
          }
          if ((lVar12 != 0) && (lVar11 != 0)) goto LAB_108458414;
          puVar13 = puVar13 + 1;
        } while (puVar1 != puVar13);
        puVar1 = puStack_160;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
LAB_108458414:
    _objc_release(puStack_160);
    puVar13 = puStack_198;
    func_0x00010c0833a0();
    puVar1 = puStack_190;
    if ((int)puVar13 == 0) {
      param_1 = (undefined *)0x0;
    }
    else {
      uStack_158 = 0;
      param_1 = puStack_190;
      FUN_108463624(puStack_190,&uStack_158);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = uStack_168;
    param_3 = uStack_178;
    param_4 = lStack_180;
    uVar5 = uStack_188;
    lVar9 = lVar11;
    (**(code **)(lStack_180 + 0x10))(lStack_180,lVar12,lVar11,param_1);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(unaff_x20);
    _objc_release(puStack_160);
  }
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(lVar11);
  _objc_release(lVar12);
  _objc_release(param_4);
  uVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar8 = &puStack_220;
    pcStack_1a8 = FUN_108458508;
    puStack_1e0 = puVar1;
    uStack_1d8 = uVar5;
    lStack_1d0 = param_4;
    uStack_1c8 = param_3;
    uStack_1c0 = unaff_x20;
    puStack_1b8 = param_1;
    puStack_1b0 = &stack0xfffffffffffffff0;
    _objc_retain(lVar9);
    uVar5 = uVar4;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf93d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_108458650;
    puStack_208 = &UNK_110a49278;
    uStack_200 = uVar4;
    uStack_1f8 = uVar5;
    uStack_1f0 = uVar7;
    lStack_1e8 = lVar9;
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    _objc_retain(lVar9);
    _objc_retainBlock(&puStack_220);
    func_0x00010c08f160(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114fe0();
    _objc_release(uVar4);
    _objc_release(ppuVar8);
    _objc_release(uStack_1f0);
    _objc_release(uStack_1f8);
    _objc_release(lStack_1e8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar9);
    return;
  }
  return;
}



/* Entry: 108458508; end: 10845864f; -[Media _blobFromCacheWithCompletionHandler:] */

void FUN_108458508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_80;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf93d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108458650;
  puStack_68 = &UNK_110a49278;
  uStack_60 = param_1;
  uStack_58 = uVar1;
  uStack_50 = uVar3;
  uStack_48 = param_3;
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_80);
  func_0x00010c08f160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c114fe0();
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108458650; end: 1084587b7;  */

void FUN_108458650(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,0,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c105b00();
    if (lVar2 == 6) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(puVar1);
      func_0x00010c27f200(uVar4);
      puVar3 = puVar1;
      func_0x00010c0e00e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                (*(long *)(param_1 + 0x38),puVar1,0,1,puVar3 == (undefined *)0x0);
      _objc_release(puVar1);
    }
    else {
      func_0x00010c1d0640(puVar1);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar1,0,1,0);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1084587b8; end: 108458857;  */

void FUN_1084587b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1d0640(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108458858; end: 1084588f7; -[Media mediaFromCacheWithCompletionHandler:] */

void FUN_108458858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1084588f8;
  puStack_48 = &UNK_110a492a8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  func_0x00010c0c6640(param_1,param_2,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1084588f8; end: 1084589cf;  */

void FUN_1084588f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23d0a0(puVar1);
    func_0x00010bf1cba0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),uVar2,param_3,param_4,param_5);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084589d0; end: 108458a8b; -[Media mediaSeparatedOverlaysFromCacheWithCompletionHandler:] */

void FUN_1084589d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108458a8c;
  puStack_40 = &UNK_110a492d8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  uVar2 = param_1;
  func_0x00010be44460();
  if ((int)uVar2 == 0) {
    func_0x00010bdd4dc0(param_1,param_2,ppuVar1);
  }
  else {
    func_0x00010bdd4de0(param_1,param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108458a8c; end: 108458b5f;  */

void FUN_108458a8c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_4 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,param_5);
  }
  else {
    uVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,uVar2,1,param_5)
    ;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108458b60; end: 108458c1b; -[Media streamingMediaFromCacheWithCompletionHandler:] */

void FUN_108458b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108458c1c;
  puStack_40 = &UNK_110a492d8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  uVar2 = param_1;
  func_0x00010be44460();
  if ((int)uVar2 == 0) {
    func_0x00010bdd4dc0(param_1,param_2,ppuVar1);
  }
  else {
    func_0x00010bdd4de0(param_1,param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108458c1c; end: 108458ceb;  */

void FUN_108458c1c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_4 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,param_5);
  }
  else {
    uVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,uVar2,1,param_5)
    ;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108458cec; end: 108458d57; -[Media saveDataToCache:] */

void FUN_108458cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be44460();
  if ((int)uVar1 == 0) {
    func_0x00010c14a360(param_1,param_2,param_3,0,0,0);
  }
  else {
    func_0x00010be98e40(param_1,param_2,param_3,0,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108458d58; end: 108458f5b; -[Media saveDataToCache:alreadyEncrypted:successBlock:failureBlock:] */

void FUN_108458d58(long param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      lVar8 = 0;
      lVar1 = param_3;
    }
    else {
      lVar8 = param_1;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar8;
      func_0x00010bf67820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      lVar8 = param_3;
    }
    _objc_retain(param_3);
    if (lVar1 == 0) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))(param_6);
      }
    }
    else {
      lVar2 = param_1;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf93d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010c08f160(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0c5180(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf643e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0f9f00();
      func_0x00010bf643e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf93820();
      func_0x00010c1d0540(lVar2,param_2,lVar1,lVar8,lVar4,lVar6,lVar7,lVar3);
      _objc_release(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108458f5c; end: 108458f97; -[Media _isStoryMedia] */

undefined8 FUN_108458f5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07fc60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108458f98; end: 10845919f; -[Media _saveDataToSCCache:alreadyEncrypted:successBlock:failureBlock:] */

void FUN_108458f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf26760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf9c760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bf26760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c230320();
    _objc_release(lVar5);
    if ((int)lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1;
      func_0x00010bf94040(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1084591a0;
    puStack_78 = &UNK_110a49308;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(param_6);
    ppuVar3 = &puStack_90;
    uStack_68 = param_6;
    _objc_retainBlock();
    lVar2 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bec4b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0620(lVar4,param_2,param_3,lVar2,lVar5,param_1,lVar1,param_4,ppuVar3);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(ppuVar3);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1084591a0; end: 10845921b;  */

void FUN_1084591a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10845921c; end: 1084592bf; -[Media storyBundleFromSCCacheWithCompletionBlock:] */

void FUN_10845921c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bec4b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0080(uVar2,param_2,uVar1,param_1,PTR___dispatch_main_q_11034be20,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084592c0; end: 1084593db; -[Media _blobFromSCCacheWithCompletionHandler:] */

void FUN_1084592c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084593dc;
  puStack_60 = &UNK_110992908;
  uStack_58 = param_1;
  uStack_50 = uVar1;
  uStack_48 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  ppuVar2 = &puStack_78;
  _objc_retainBlock(ppuVar2);
  uVar3 = param_1;
  func_0x00010bec4b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0080(uVar3,param_2,uVar1,param_1,PTR___dispatch_main_q_11034be20,ppuVar2);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1084593dc; end: 1084595c7;  */

void FUN_1084593dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c076b80();
    if (iVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bec4b80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
      _objc_release(uVar5);
    }
    lVar3 = *(long *)(param_1 + 0x30);
    pcVar4 = *(code **)(lVar3 + 0x10);
    uVar5 = 0;
  }
  else {
    lVar3 = param_4;
    func_0x00010c105b00();
    if (lVar3 == 6) {
      _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(puVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      uStack_60 = param_4 != 0;
      func_0x00010c27f200(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      goto LAB_108459570;
    }
    func_0x00010c1d0640(puVar2);
    lVar3 = *(long *)(param_1 + 0x30);
    pcVar4 = *(code **)(lVar3 + 0x10);
    uVar5 = 1;
  }
  (*pcVar4)(lVar3,puVar2,0,uVar5,0);
LAB_108459570:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1084595c8; end: 108459757;  */

void FUN_1084595c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = lVar1;
      func_0x00010bf26760(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf93ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf26760(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf93ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,
                 *(undefined1 *)(param_1 + 0x38),1);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,
                 *(undefined1 *)(param_1 + 0x38),0);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108459758; end: 108459827; -[Media encryptor] */

void FUN_108459758(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bf26760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf93ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf26760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf93ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (lVar3 = lVar1, func_0x00010c08fa60(), lVar3 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d5158;
    _objc_alloc(PTR_PTR_1126d5158);
    func_0x00010c00fd60();
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108459828; end: 108459833; -[Media writeVideoToURL:completion:] */

void FUN_108459828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2be750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_writeVideoToURL_callbackOnMainTh_11268d3f8,param_3,1,param_4);
  return;
}



/* Entry: 108459834; end: 10845994b; -[Media writeVideoToURL:callbackOnMainThread:completion:] */

void FUN_108459834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10845994c;
  puStack_60 = &UNK_110a49368;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  uVar1 = param_3;
  uStack_58 = param_5;
  FUN_10845c614(param_3,param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c50a0(param_1);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10845994c; end: 1084599cb;  */

void FUN_10845994c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3,param_4)
  ;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1084599cc; end: 108459a2f; -[Media thumbnailCacheId] */

void FUN_1084599cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcac98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108459a30; end: 108459a83; -[Media videoPath] */

void FUN_108459a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5200;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29a8c0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108459a84; end: 108459b0f; -[Media videoPathMP4] */

void FUN_108459a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4e638);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108459b10; end: 108459b8f; +[Media videoPathWithMediaId:] */

void FUN_108459b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110edbd58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108459b90; end: 108459be3; -[Media overlayPath] */

void FUN_108459b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5200;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efc80(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108459be4; end: 108459c63; +[Media overlayPathWithMediaId:] */

void FUN_108459be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110edbd78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108459c64; end: 108459d0f; -[Media imageFromCacheWithCompletion:] */

void FUN_108459c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108459d10;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108459d10; end: 108459d83;  */

void FUN_108459d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108459d84;
  puStack_38 = &UNK_110a49398;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = uVar1;
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010c0c50a0(uVar1,param_2,&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 108459d84; end: 108459e7f;  */

void FUN_108459d84(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)0x0;
  if ((param_2 != 0) && (param_4 != 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108459e80;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_48 = lVar2;
    _objc_retain(puVar1);
    puStack_50 = puVar1;
    func_0x000107c312d0("APPSTORE",&puStack_70);
    _objc_release(puStack_50);
    _objc_release(lStack_48);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108459e80; end: 108459e8f;  */

void FUN_108459e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108459e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108459e90; end: 108459fd7; -[Media blendOverlayIfNeededWithSnapData:overlayData:size:] */

void FUN_108459e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_5);
  puVar5 = param_5;
  if ((param_6 != 0) && (uVar1 = param_3, func_0x00010c0797c0(), (int)uVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c07f0e0();
    if ((int)uVar1 != 0) {
      func_0x00010c23d0a0(puVar2);
      func_0x00010c06e920(param_3);
      puVar4 = puVar3;
      FUN_10854478c(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000,puVar3,0,puVar2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar5 = puVar4;
      _UIImagePNGRepresentation(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      puVar2 = puVar4;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108459fd8; end: 10845a057; -[Media baseNoteMediaProcessingDone] */

void FUN_108459fd8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf16180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf16180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf161a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10845a058; end: 10845a0d7; -[Media imageProcessingDone] */

void FUN_10845a058(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bfe8680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bfe8680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe86a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10845a0d8; end: 10845a0db; -[Media requestKey] */

void FUN_10845a0d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 10845a0dc; end: 10845a3af; -[Media fetchMediaUserInitiated:forPrefetch:userSession:completion:] */

void FUN_10845a0dc(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_10845a34c:
    if (param_6 == 0) goto LAB_10845a368;
    pcVar5 = *(code **)(param_6 + 0x10);
    uVar4 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 == 0) goto LAB_10845a34c;
    uVar1 = param_1;
    func_0x00010c076b80();
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar1 == 0) {
      uVar1 = uVar2;
      _objc_opt_respondsToSelector(uVar2,PTR_s_fetchMediaIsLoadingForMedia__1125c7b58);
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar2;
        _objc_opt_respondsToSelector(uVar2,PTR_s_fetchMediaIsLoadingForMedia_user_1125c7b60);
        _objc_release(uVar2);
        if ((uVar1 & 1) != 0) {
          uVar2 = param_1;
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa86e0();
          goto LAB_10845a2a0;
        }
      }
      else {
        func_0x00010bfa86c0(uVar2);
LAB_10845a2a0:
        _objc_release(uVar2);
      }
      if (*(char *)(param_1 + 0x22) != '\x01') {
        *(undefined1 *)(param_1 + 0x22) = 1;
        _CACurrentMediaTime();
        func_0x00010be12780(param_1);
        goto LAB_10845a368;
      }
      if ((param_4 & 1) == 0) {
        puVar3 = PTR_PTR_1126b7f68;
        func_0x00010c22b6a0(PTR_PTR_1126b7f68);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c135a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f7e0(puVar3);
        _objc_release(uVar1);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126b7f68;
        func_0x00010c22b6a0(PTR_PTR_1126b7f68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c135a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f800(puVar3);
        _objc_release(param_1);
        _objc_release(puVar3);
      }
      goto LAB_10845a34c;
    }
    uVar1 = uVar2;
    _objc_opt_respondsToSelector(uVar2,PTR_s_fetchMediaDidSucceedForMedia_isF_1125c7af8);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar2;
      _objc_opt_respondsToSelector(uVar2,PTR_s_fetchMediaDidSucceedForMedia__1125c7af0);
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa8520();
        goto LAB_10845a240;
      }
    }
    else {
      func_0x00010bfa8540(uVar2);
      param_1 = uVar2;
LAB_10845a240:
      _objc_release(param_1);
    }
    if (param_6 == 0) goto LAB_10845a368;
    pcVar5 = *(code **)(param_6 + 0x10);
    uVar4 = 1;
  }
  (*pcVar5)(0,param_6,uVar4,0);
LAB_10845a368:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10845a3b0; end: 10845a3eb; -[Media isVideo] */

undefined8 FUN_10845a3b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0830a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10845a3ec; end: 10845a427; -[Media isSpectaclesVideo] */

undefined8 FUN_10845a3ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07f180();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10845a428; end: 10845a463; -[Media isVideoWithSound] */

undefined8 FUN_10845a428(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c083400();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10845a464; end: 10845a49f; -[Media isVideoStreaming] */

undefined8 FUN_10845a464(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0833a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10845a4a0; end: 10845a4db; -[Media isImage] */

undefined8 FUN_10845a4a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074fe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10845a4dc; end: 10845a517; -[Media isSpectaclesImage] */

undefined8 FUN_10845a4dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07f0e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10845a518; end: 10845a553; -[Media isCircularMedia] */

undefined8 FUN_10845a518(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e920();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10845a554; end: 10845a557; -[Media isOverlaySeparatedFromImageMedia] */

void FUN_10845a554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isSpectaclesImage_1125fd648);
  return;
}



/* Entry: 10845a558; end: 10845a647; -[Media _fetchMediaSuccessCallbackWithCachedMediaId:request:downloadStartTime:completion:] */

void FUN_10845a558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10845a648;
  puStack_70 = &UNK_110a493c8;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_68 = param_4;
  uStack_60 = param_6;
  uStack_50 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_4);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10845a648; end: 10845a8e7;  */

void FUN_10845a648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      _objc_retain(param_4);
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10845a8e8;
      puStack_a0 = &UNK_110875f70;
      lStack_98 = lVar2;
      uStack_90 = param_4;
      _objc_retain(lVar3);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      lStack_88 = lVar3;
      _objc_retain(uVar9);
      uStack_78 = *(undefined8 *)(param_1 + 0x38);
      ppuVar4 = &puStack_b8;
      uStack_80 = uVar9;
      _objc_retainBlock();
      puVar5 = PTR_PTR_1126ae520;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf07b60();
      _objc_release(puVar5);
      if ((puVar6 == (undefined *)0x2) || (uVar9 = param_2, func_0x00010c292920(), (int)uVar9 != 0))
      {
        uVar9 = 0x15;
        func_0x000107c312b8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_e0 = puVar8;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_10845ae94;
        puStack_c8 = &UNK_110849530;
        _objc_retain(ppuVar4);
        ppuStack_c0 = ppuVar4;
        func_0x000107c27d8c(uVar9,&puStack_e0);
        _objc_release(uVar9);
        ppuVar7 = ppuStack_c0;
      }
      else {
        ppuVar7 = (undefined **)PTR_PTR_1126b6ae8;
        func_0x00010c22ba80(PTR_PTR_1126b6ae8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126ae960;
        puVar5 = PTR_PTR_1126bdfe0;
        func_0x00010c08ef40(PTR_PTR_1126bdfe0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c49e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126ae970;
        func_0x00010c292920(PTR_PTR_1126ae970);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = 0x15;
        func_0x000107c312b8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a1620(ppuVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar5);
      }
      _objc_release(ppuVar7);
      _objc_release(ppuVar4);
      _objc_release(uStack_80);
      _objc_release(lStack_88);
      _objc_release(uStack_90);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}


