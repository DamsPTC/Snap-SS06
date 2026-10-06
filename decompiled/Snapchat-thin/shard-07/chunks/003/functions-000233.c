/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105424fdc; end: 1054251db;  */

undefined * FUN_105424fdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain(uVar7);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar8);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar9 = 0;
  }
  else {
    uStack_c0 = *(undefined8 *)(lVar3 + 0x28);
    uStack_b8 = *(undefined8 *)(lVar3 + 0x30);
    uVar9 = *(undefined8 *)(lVar3 + 0x38);
  }
  _objc_retain(uVar9);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uVar13 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar11 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uVar5 = 0;
    uVar10 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    uStack_c8 = *(undefined8 *)(lVar3 + 0x40);
    uStack_d0 = *(undefined8 *)(lVar3 + 0x48);
    uVar11 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x58);
    uVar4 = *(undefined8 *)(lVar3 + 0x60);
    uVar16 = *(undefined8 *)(lVar3 + 0x68);
    uVar6 = *(undefined8 *)(lVar3 + 0x70);
    uVar10 = *(undefined8 *)(lVar3 + 0x78);
    uVar15 = *(undefined8 *)(lVar3 + 0x80);
    uVar17 = *(undefined8 *)(lVar3 + 0x88);
    uVar14 = *(undefined8 *)(lVar3 + 0x90);
    uVar18 = *(undefined8 *)(lVar3 + 0x98);
    uVar13 = *(undefined8 *)(lVar3 + 0xa0);
    uVar12 = *(undefined8 *)(lVar3 + 0xa8);
  }
  _objc_retain(uVar12);
  FUN_10542cd0c(uVar16,uVar15,uVar17,uVar14,uVar18,param_2,uVar1,uVar2,uVar7,uVar8,uStack_c0,
                uStack_b8,uVar9,uStack_c8,uStack_d0,uVar11,uVar5,uVar4,uVar6,uVar10,uVar13,uVar12);
  _objc_release(param_2);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 1054251dc; end: 10542540b; -[SCAdTrackEventRepositoryV1 _handleSqlTrackEventsForFetchedResult:adIdentifier:trackSeqNum:viewSeqNum:snapIndex:adType:] */

void FUN_1054251dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_d8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10542540c;
  uStack_80 = 0x10542541c;
  uStack_78 = 0;
  puStack_100 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10542540c;
  uStack_b0 = 0x10542541c;
  uStack_a8 = 0;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105425424;
  puStack_e0 = &UNK_110850558;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10542545c;
  puStack_108 = &UNK_11084d888;
  puStack_c8 = puStack_100;
  puStack_98 = puStack_d8;
  func_0x00010c0c0800(param_3);
  if (puStack_c8[5] == 0) {
    uVar1 = puStack_98[5];
    _objc_retain(uVar1);
  }
  else {
    _objc_initWeak(auStack_128,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_150,auStack_128);
    _objc_retain(param_4);
    uStack_148 = param_5;
    uStack_140 = param_6;
    uStack_138 = param_7;
    uStack_130 = param_8;
    func_0x00010c0f7fc0(uVar1);
    uVar1 = puStack_98[5];
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_128);
  }
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10542540c; end: 105425423;  */

void FUN_10542540c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105425424; end: 105425493;  */

void FUN_105425424(long param_1,undefined8 param_2)

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



/* Entry: 105425494; end: 105425587;  */

void FUN_105425494(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0xb);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddd638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar2,param_2,uVar6,puVar3,puVar4,
                        &PTR____CFConstantStringClassReference_110ddd658,0,in_x7,uVar7,uVar8,uVar9,
                        uVar10,uVar11,uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105425588; end: 1054257a3; -[SCAdTrackEventRepositoryV1 _handleSqlTrackWebViewEventsForFetchedResult:adIdentifier:trackSeqNum:snapIndex:] */

void FUN_105425588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_c8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10542540c;
  uStack_70 = 0x10542541c;
  uStack_68 = 0;
  puStack_f0 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10542540c;
  uStack_a0 = 0x10542541c;
  uStack_98 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1054257a4;
  puStack_d0 = &UNK_110850558;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1054257dc;
  puStack_f8 = &UNK_11084d888;
  puStack_b8 = puStack_f0;
  puStack_88 = puStack_c8;
  func_0x00010c0c0800(param_3);
  if (puStack_b8[5] == 0) {
    uVar1 = puStack_88[5];
    _objc_retain(uVar1);
  }
  else {
    _objc_initWeak(auStack_118,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_130,auStack_118);
    _objc_retain(param_4);
    uStack_128 = param_5;
    uStack_120 = param_6;
    func_0x00010c0f7fc0(uVar1);
    uVar1 = puStack_88[5];
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_118);
  }
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054257a4; end: 105425813;  */

void FUN_1054257a4(long param_1,undefined8 param_2)

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



/* Entry: 105425814; end: 1054258ff;  */

void FUN_105425814(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddd678);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar2,param_2,uVar6,puVar3,puVar4,
                        &PTR____CFConstantStringClassReference_110ddd698,0,in_x7,uVar7,uVar8,uVar9,
                        uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105425900; end: 105425b1b; -[SCAdTrackEventRepositoryV1 _handleSqlTrackDeeplinkEventsForFetchedResult:adIdentifier:viewSeqNum:snapIndex:] */

void FUN_105425900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_c8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10542540c;
  uStack_70 = 0x10542541c;
  uStack_68 = 0;
  puStack_f0 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10542540c;
  uStack_a0 = 0x10542541c;
  uStack_98 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105425b1c;
  puStack_d0 = &UNK_110850558;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105425b54;
  puStack_f8 = &UNK_11084d888;
  puStack_b8 = puStack_f0;
  puStack_88 = puStack_c8;
  func_0x00010c0c0800(param_3);
  if (puStack_b8[5] == 0) {
    uVar1 = puStack_88[5];
    _objc_retain(uVar1);
  }
  else {
    _objc_initWeak(auStack_118,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_130,auStack_118);
    _objc_retain(param_4);
    uStack_128 = param_5;
    uStack_120 = param_6;
    func_0x00010c0f7fc0(uVar1);
    uVar1 = puStack_88[5];
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_118);
  }
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105425b1c; end: 105425b8b;  */

void FUN_105425b1c(long param_1,undefined8 param_2)

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



/* Entry: 105425b8c; end: 105425c77;  */

void FUN_105425b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0x14);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddd6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar2,param_2,uVar6,puVar3,puVar4,
                        &PTR____CFConstantStringClassReference_110ddd6d8,0,in_x7,uVar7,uVar8,uVar9,
                        uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105425c78; end: 105425e27; -[SCAdTrackEventRepositoryV1 _handleSqlMutationResult:adIdentifier:trackSeqNum:viewSeqNum:snapIndex:] */

void FUN_105425c78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10542540c;
  uStack_70 = 0x10542541c;
  uStack_68 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105425e2c;
  puStack_a0 = &UNK_11084d888;
  puStack_88 = puStack_98;
  func_0x00010c0c0800(param_3);
  if (puStack_88[5] != 0) {
    _objc_initWeak(auStack_c0,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_e0,auStack_c0);
    _objc_retain(param_4);
    uStack_d8 = param_5;
    uStack_d0 = param_6;
    uStack_c8 = param_7;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_c0);
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105425e28; end: 105425e2b;  */

void FUN_105425e28(void)

{
  return;
}



/* Entry: 105425e2c; end: 105425e63;  */

void FUN_105425e2c(long param_1,undefined8 param_2)

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



/* Entry: 105425e64; end: 105425f57;  */

void FUN_105425e64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0xc);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddd6f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar2,param_2,uVar7,puVar3,puVar4,
                        &PTR____CFConstantStringClassReference_110ddd718,0,in_x7,uVar8,uVar9,uVar10,
                        uVar5,uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105425f58; end: 105425f87; -[SCAdTrackEventRepositoryV1 setTransactor:] */

void FUN_105425f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105425f88; end: 105425f8f; -[SCAdTrackEventRepositoryV1 repositoryAdaptor] */

undefined8 FUN_105425f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105425f90; end: 105425f97; -[SCAdTrackEventRepositoryV1 adCrashLogger] */

undefined8 FUN_105425f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105425f98; end: 105425f9f; -[SCAdTrackEventRepositoryV1 performer] */

undefined8 FUN_105425f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105425fa0; end: 10542600b; -[SCAdTrackEventRepositoryV1 .cxx_destruct] */

void FUN_105425fa0(long param_1)

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



/* Entry: 10542600c; end: 1054261e3; -[SCAdTrackFunnelEventTracker initWithBlizzardLogger:performer:enableAdTrackFunnelValidator:] */

undefined8 *
FUN_10542600c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e8468;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 3) = param_5;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    uVar4 = puVar1[4];
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054261e4; end: 10542622b;  */

void FUN_1054261e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a620();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10542622c; end: 105426477; -[SCAdTrackFunnelEventTracker beginObservationWithAdUnifiedEventStreams:] */

void FUN_10542622c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105426478;
  puStack_78 = &UNK_110887e20;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef2720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1054264c0;
  puStack_a0 = &UNK_110887e50;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef65c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105426478; end: 10542654f;  */

void FUN_105426478(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105426550; end: 105426557; -[SCAdTrackFunnelEventTracker nextTrackFunnelEvent:] */

void FUN_105426550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028);
  return;
}



/* Entry: 105426558; end: 1054265a7; -[SCAdTrackFunnelEventTracker funnelEventMap] */

void FUN_105426558(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054265a8; end: 105426abf; -[SCAdTrackFunnelEventTracker _onNextTrackFunnelEvent:] */

void FUN_1054265a8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_2 + 0x30);
  func_0x00010c071ae0(uVar1,param_3,param_4);
  puVar2 = PTR_PTR_1126b8f48;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_4);
    _objc_opt_new();
    lVar3 = param_4;
    func_0x00010bf428e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd160(puVar2,param_3,lVar7);
    _objc_release(lVar7);
    lVar7 = lVar3;
    func_0x00010bef2c20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar2,param_3,lVar7);
    _objc_release(lVar7);
    lVar7 = lVar3;
    func_0x00010c278820(lVar3);
    func_0x00010c219120(puVar2,param_3,lVar7);
    lVar7 = lVar3;
    func_0x00010c29e160(lVar3);
    func_0x00010c222b20(puVar2,param_3,lVar7);
    lVar7 = lVar3;
    func_0x00010bef60a0(lVar3);
    func_0x0001084baa08();
    func_0x00010c164dc0(puVar2,param_3,lVar7);
    lVar7 = lVar3;
    func_0x00010bef4240(lVar3);
    func_0x0001084b952c();
    func_0x00010c163f80(puVar2,param_3,lVar7);
    func_0x00010c2709c0(lVar3);
    func_0x00010c160b40(puVar2,param_3,(long)param_1);
    lVar7 = lVar3;
    func_0x00010c106900(lVar3);
    func_0x0001084b94a8();
    func_0x00010c1dfe40(puVar2,param_3,lVar7);
    lVar7 = lVar3;
    func_0x00010bef19e0(lVar3);
    func_0x0001084b94a8();
    func_0x00010c162ea0(puVar2,param_3,lVar7);
    lVar7 = param_4;
    func_0x00010c27dd80(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1054270d8;
    puStack_80 = &UNK_110842e18;
    _objc_retain(puVar2);
    puStack_c0 = puVar6;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1054270e4;
    puStack_a8 = &UNK_110855e40;
    puStack_78 = puVar2;
    _objc_retain(puVar2);
    puStack_e8 = puVar6;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x105427120;
    puStack_d0 = &UNK_110855e40;
    puStack_a0 = puVar2;
    _objc_retain(puVar2);
    puStack_110 = puVar6;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_105427170;
    puStack_f8 = &UNK_110842e18;
    puStack_c8 = puVar2;
    _objc_retain(puVar2);
    puStack_138 = puVar6;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10542717c;
    puStack_120 = &UNK_110887eb0;
    puStack_f0 = puVar2;
    _objc_retain(puVar2);
    puStack_160 = puVar6;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1054271e0;
    puStack_148 = &UNK_110887ee0;
    puStack_118 = puVar2;
    _objc_retain(puVar2);
    puStack_188 = puVar6;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_105427270;
    puStack_170 = &UNK_110887f10;
    puStack_140 = puVar2;
    _objc_retain(puVar2);
    puStack_1b0 = puVar6;
    uStack_1a8 = 0xc2000000;
    uStack_1a0 = 0x1054272f8;
    puStack_198 = &UNK_110887f40;
    puStack_168 = puVar2;
    _objc_retain(puVar2);
    puStack_1d8 = puVar6;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_10542738c;
    puStack_1c0 = &UNK_1108724a0;
    puStack_190 = puVar2;
    _objc_retain(puVar2);
    puStack_1b8 = puVar2;
    func_0x00010c0c0dc0(lVar7,param_3,&puStack_98,&puStack_c0,&puStack_e8,&puStack_110,&puStack_138,
                        &puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8);
    _objc_release(lVar7);
    puVar6 = puStack_1b8;
    _objc_retain(puVar2);
    _objc_release(puVar6);
    _objc_release(puStack_190);
    _objc_release(puStack_168);
    _objc_release(puStack_140);
    _objc_release(puStack_118);
    _objc_release(puStack_f0);
    _objc_release(puStack_c8);
    _objc_release(puStack_a0);
    _objc_release(puStack_78);
    _objc_release(puVar2);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    *(long *)(param_2 + 0x30) = param_4;
    _objc_release(uVar4);
    if (*(char *)(param_2 + 0x18) == '\x01') {
      lVar3 = param_4;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bef2c60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      _objc_release(lVar3);
      if (lVar5 != 0) {
        lVar3 = param_4;
        func_0x00010bf428e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b8f30;
        _objc_alloc(PTR_PTR_1126b8f30);
        lVar7 = lVar3;
        func_0x00010bef2c60(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c29e160(lVar3);
        func_0x00010bff1860(puVar6,param_3,lVar7,lVar5);
        _objc_release(lVar7);
        lVar7 = *(long *)(param_2 + 0x38);
        func_0x00010c0e00e0(lVar7,param_3,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 == 0) {
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,puVar8,puVar6);
          _objc_release(puVar8);
        }
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        func_0x00010c0e00e0(uVar4,param_3,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(uVar4);
        _objc_release(puVar6);
        _objc_release(lVar3);
      }
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105426ac0; end: 105426cb7; -[SCAdTrackFunnelEventTracker _onAdLifecycleEventV2:] */

void FUN_105426ac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    _objc_release();
LAB_105426bb0:
    puVar5 = (undefined *)0x0;
LAB_105426bb4:
    lVar4 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
LAB_105426c0c:
      _objc_release();
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x28);
      _objc_release();
      if ((lVar4 == 3) || (lVar4 == 9)) {
        puVar5 = PTR_PTR_1126b8f38;
        func_0x00010bf0d5c0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105426c0c;
      }
    }
    if (puVar5 == (undefined *)0x0) goto LAB_105426c90;
    puVar2 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    lVar4 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bdc58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar2);
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010be6a620(param_1);
    _objc_release(puVar2);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x18);
    _objc_release();
    if (lVar4 == 10) {
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
LAB_105426b98:
      puVar5 = PTR_PTR_1126b8f38;
      func_0x00010c277e00();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105426bb4;
    }
    if (lVar4 != 2) {
      if (lVar4 != 1) goto LAB_105426bb0;
      puVar5 = PTR_PTR_1126b8f38;
      func_0x00010c274d80();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105426bb4;
    }
    lVar4 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      cVar1 = *(char *)(lVar4 + 10);
      _objc_release();
      if (cVar1 != '\x01') goto LAB_105426c90;
      goto LAB_105426b98;
    }
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105426c90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105426cb8; end: 105426dcb; -[SCAdTrackFunnelEventTracker _onAdDeeplinkEventV2:] */

void FUN_105426cb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    _objc_release();
    uVar3 = 5;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x18);
    _objc_release();
    if (lVar4 == 9) goto LAB_105426da8;
    uVar3 = 5;
    if (lVar4 == 2) {
      uVar3 = 4;
    }
  }
  puVar1 = PTR_PTR_1126b8f38;
  func_0x00010c277e00(PTR_PTR_1126b8f38,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    lVar4 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bdc58a0(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar2,param_2,uVar3,puVar1);
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010be6a620(param_1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
LAB_105426da8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105426dcc; end: 105426ecf; -[SCAdTrackFunnelEventTracker _onWebviewEventV2:] */

void FUN_105426dcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x10);
    _objc_release();
    if (lVar3 != 10) goto LAB_105426eb0;
    puVar4 = PTR_PTR_1126b8f38;
    func_0x00010c277e00(PTR_PTR_1126b8f38,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) goto LAB_105426eb0;
    puVar1 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    lVar3 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bdc58a0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar1,param_2,uVar2,puVar4);
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010be6a620(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
LAB_105426eb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105426ed0; end: 105427077; -[SCAdTrackFunnelEventTracker _adTrackCommon:] */

void FUN_105426ed0(undefined8 param_1,undefined8 param_2,long param_3)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_PTR_1126b8e38;
  _objc_retain(param_3);
  _objc_alloc();
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar2 = 0;
    uVar8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uStack_80 = 0;
    uVar6 = 0;
    uStack_98 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    uStack_80 = *(undefined8 *)(param_3 + 0x50);
    _objc_retain(uVar4);
    uVar11 = *(undefined8 *)(param_3 + 0x78);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar6);
    uStack_98 = *(undefined8 *)(param_3 + 0x38);
    uStack_90 = *(undefined8 *)(param_3 + 0x58);
    uVar9 = *(undefined8 *)(param_3 + 0x70);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    uStack_88 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    uVar2 = *(undefined8 *)(param_3 + 0x68);
    uVar10 = *(undefined8 *)(param_3 + 0x80);
  }
  _objc_retain(uVar10);
  _objc_release(param_3);
  func_0x00010bff1840(uVar11,puVar1,param_2,uVar3,uStack_80,uVar4,uVar5,uVar6,uStack_88,uStack_98,
                      uStack_90,uVar9,uVar8,uVar7,uVar2,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105427078; end: 1054270d7; -[SCAdTrackFunnelEventTracker .cxx_destruct] */

void FUN_105427078(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054270d8; end: 1054270e3;  */

void FUN_1054270d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c164d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAdTrackStage__112636d70,0);
  return;
}



/* Entry: 1054270e4; end: 10542716f;  */

void FUN_1054270e4(long param_1,long param_2)

{
  ulong uVar1;
  
  func_0x00010c164d40(*(undefined8 *)(param_1 + 0x20),param_2,1);
  uVar1 = param_2 - 1;
  if (2 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAttachmentTriggerType__1126386d0,uVar1);
  return;
}



/* Entry: 105427170; end: 10542717b;  */

void FUN_105427170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c164d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAdTrackStage__112636d70,8);
  return;
}



/* Entry: 10542717c; end: 1054271df;  */

void FUN_10542717c(long param_1,long param_2)

{
  func_0x00010c164d40(*(undefined8 *)(param_1 + 0x20),param_2,3);
  func_0x00010c1644e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b2200(*(undefined8 *)(param_1 + 0x20));
  if (3 < param_2 - 1U) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1c75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setMetadataReadyStart__11264f790,param_2);
  return;
}



/* Entry: 1054271e0; end: 10542726f;  */

void FUN_1054271e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c164d40(uVar1);
  func_0x00010c16b460(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1644e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b2200(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c220e20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105427270; end: 10542738b;  */

void FUN_105427270(long param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(in_x4);
  func_0x00010c164d40(uVar1);
  func_0x00010c16b460(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b4d40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c2190c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c220e20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 10542738c; end: 1054273eb;  */

void FUN_10542738c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c164d40(uVar1);
  func_0x00010c16b460(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c220e20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054273ec; end: 10542767b; -[SCAdTrackFunnelEventValidator initWithAdConfigProvider:adCrashLogger:adTrackEventRepository:funnelEventTracker:playbackSessionObservableRepository:performer:] */

undefined8 *
FUN_1054273ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e8470;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b8cf0;
    func_0x00010c0ccf00();
    if ((int)puVar3 == 0) {
      uVar2 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c067f60();
      puVar1[5] = uVar4;
      _objc_release(uVar2);
    }
    else {
      puVar1[5] = 2;
    }
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bef3ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10542767c; end: 1054276a7;  */

void FUN_10542767c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054276a8; end: 1054277d3; -[SCAdTrackFunnelEventValidator _onOperaSessionEnd] */

void FUN_1054276a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfbc140();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar15 = auStack_d8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar17 = *plStack_110;
    do {
      lVar18 = 0;
      do {
        if (*plStack_110 != lVar17) {
          _objc_enumerationMutation(lVar1);
        }
        uVar16 = *(undefined8 *)(lStack_118 + lVar18 * 8);
        lVar3 = lVar1;
        func_0x00010c0e00e0(lVar1,param_2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee7ae0(param_1,param_2,lVar3,uVar16);
        _objc_release(lVar3);
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      puVar15 = auStack_d8;
      lVar2 = lVar1;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  FUN_105427a6c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar4;
    FUN_105427b48();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf529e0();
    if (puVar7 == (undefined1 *)0x0) {
      func_0x00010bf070e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110ddd758);
    }
    puVar7 = (undefined1 *)puVar4;
    FUN_105427c24();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar7 == (undefined1 *)0x0) &&
       (puVar8 = puVar5, func_0x00010bf529e0(), puVar8 != (undefined1 *)0x0)) {
      func_0x00010bf070e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110ddd778);
    }
    puVar9 = puVar6;
    func_0x00010c08fa60();
    if (puVar9 != (undefined *)0x0) {
      uVar16 = 0;
      if (*(long *)(lVar1 + 0x28) != 1) {
        uVar16 = 2;
      }
      if (*(long *)(lVar1 + 0x28) == 2) {
        uVar16 = 1;
      }
      puVar8 = (undefined1 *)puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = puVar15;
      func_0x00010bef2c60(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e160(puVar15);
      uVar11 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c277d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar11 = uVar12;
      FUN_10546443c();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110ddd798);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126b3e90;
      func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0xd);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ada0(uVar13,param_2,puVar8,puVar14,puVar9,
                          &PTR____CFConstantStringClassReference_110ddd7b8,uVar16);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(puVar9);
      _objc_release(uVar11);
      _objc_release(uVar12);
      _objc_release(puVar8);
      _objc_release(puVar10);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 1054277d4; end: 105427a6b; -[SCAdTrackFunnelEventValidator _validateOnFunnelEvents:trackViewIdentifier:] */

void FUN_1054277d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  _objc_retain(param_4);
  FUN_105427a6c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    FUN_105427b48();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      func_0x00010bf070e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd758);
    }
    lVar4 = param_3;
    FUN_105427c24();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 == 0) && (lVar5 = lVar2, func_0x00010bf529e0(), lVar5 != 0)) {
      func_0x00010bf070e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd778);
    }
    puVar6 = puVar3;
    func_0x00010c08fa60();
    if (puVar6 != (undefined *)0x0) {
      uVar1 = 0;
      if (*(long *)(param_1 + 0x28) != 1) {
        uVar1 = 2;
      }
      if (*(long *)(param_1 + 0x28) == 2) {
        uVar1 = 1;
      }
      lVar5 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      uVar8 = param_4;
      func_0x00010bef2c60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e160(param_4);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c277d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      uVar9 = uVar10;
      FUN_10546443c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110ddd798);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b3e90;
      func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0xd);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ada0(uVar11,param_2,uVar8,puVar12,puVar6,
                          &PTR____CFConstantStringClassReference_110ddd7b8,uVar1);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(puVar6);
      _objc_release(uVar9);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(lVar7);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105427a6c; end: 105427b47;  */

void FUN_105427a6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010bf97e80(param_1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105427b48; end: 105427c23;  */

void FUN_105427b48(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010bf97e80(param_1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105427c24; end: 105427cff;  */

void FUN_105427c24(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010bf97e80(param_1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105427d00; end: 105427dcf; -[SCAdTrackFunnelEventValidator _subFunnelEvents:typeSymbol:] */

void FUN_105427d00(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ddd7d8);
  puVar2 = param_3;
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ddd7f8);
    if ((int)uVar1 == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ddd818);
      puVar2 = PTR____NSArray0__struct_11034ab48;
      if ((int)uVar1 != 0) {
        puVar2 = param_3;
        FUN_105427c24(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      FUN_105427b48(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    FUN_105427a6c(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105427dd0; end: 105427e17; -[SCAdTrackFunnelEventValidator .cxx_destruct] */

void FUN_105427dd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105427e18; end: 105427f43;  */

void FUN_105427e18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = param_2;
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    func_0x00010c0c0dc0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105427f44; end: 105427f7f;  */

void FUN_105427f44(void)

{
  return;
}



/* Entry: 105427f80; end: 1054280ab;  */

void FUN_105427f80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = param_2;
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    func_0x00010c0c0dc0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054280ac; end: 1054280e7;  */

void FUN_1054280ac(void)

{
  return;
}



/* Entry: 1054280e8; end: 105428213;  */

void FUN_1054280e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = param_2;
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    func_0x00010c0c0dc0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105428214; end: 10542824f;  */

void FUN_105428214(void)

{
  return;
}



/* Entry: 105428250; end: 10542831b; -[SCAdTrackRealTimeBlizzardLoggerV1 initWithBlizzardLogger:performer:adCrashLogger:] */

undefined1 *
FUN_105428250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8478;
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



/* Entry: 10542831c; end: 1054283f3; -[SCAdTrackRealTimeBlizzardLoggerV1 logRealTimeAdTrackEvent:] */

void FUN_10542831c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054283f4; end: 105428427;  */

void FUN_1054283f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be505e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105428428; end: 1054286af; -[SCAdTrackRealTimeBlizzardLoggerV1 _logAttachmentInteractionEventWithTrackEventIfNecessary:] */

void FUN_105428428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1054286b0;
  uStack_a0 = 0x1054286c0;
  uStack_98 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  pcStack_f8 = FUN_1054286b0;
  uStack_f0 = 0x1054286c0;
  uStack_e8 = 0;
  func_0x00010c0be9e0(param_3);
  if (((*(byte *)(puStack_68 + 3) & 1) != 0) || (puStack_48[3] - 0x13 < 3)) {
    func_0x00010be5a9c0(puStack_88[3],param_1);
  }
  __Block_object_dispose(&uStack_110,8);
  _objc_release(uStack_e8);
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1054286b0; end: 1054286c7;  */

void FUN_1054286b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054286c8; end: 10542888b;  */

void FUN_1054286c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf428e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0c0da0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10542888c; end: 1054288f3;  */

void FUN_10542888c(void)

{
  return;
}



/* Entry: 1054288f4; end: 105428ae3;  */

void FUN_1054288f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf428e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf9a440();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) = uVar1;
  uVar1 = param_3;
  func_0x00010c2648c0();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18) = uVar1;
  uVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105428ae4; end: 105428aff;  */

void FUN_105428ae4(void)

{
  return;
}



/* Entry: 105428b00; end: 105428d03; -[SCAdTrackRealTimeBlizzardLoggerV1 _logWithAttachmentInteractionType:isTapInteraction:timestamp:adServeItemId:swipeFailReason:adId:] */

void FUN_105428b00(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b8f50;
  _objc_opt_new(PTR_PTR_1126b8f50);
  if ((param_5 & 1) == 0) {
    if (param_4 == 0x13) {
      uVar6 = 5;
    }
    else {
      if (param_4 != 0x14) {
        func_0x00010c1ae260(puVar1,param_3,2);
        func_0x00010c215e20(puVar1,param_3,(long)param_1);
        func_0x00010c1fd160(puVar1,param_3,param_6);
        lVar2 = param_2;
        func_0x00010be0e460(param_2,param_3,param_7);
        if (lVar2 == -1) {
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126b3e90;
          func_0x00010befde40(PTR_PTR_1126b3e90,param_3,0xf);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lVar4 = param_2;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar5,param_3,&PTR____CFConstantStringClassReference_110ddd838);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0ad80(uVar6,param_3,param_8,puVar3,puVar5,
                              &PTR____CFConstantStringClassReference_110ddd858);
          _objc_release(puVar5);
          _objc_release(lVar4);
          _objc_release(puVar3);
          _objc_release(uVar6);
        }
        func_0x00010c199e60(puVar1,param_3,lVar2);
        goto LAB_105428ca8;
      }
      uVar6 = 4;
    }
    func_0x00010c1ae260(puVar1,param_3,uVar6);
    func_0x00010c215e20(puVar1,param_3,(long)param_1);
    func_0x00010c1fd160(puVar1,param_3,param_6);
  }
  else {
    func_0x00010c1ae260(puVar1,param_3,3);
  }
LAB_105428ca8:
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105428d04; end: 105428d13; -[SCAdTrackRealTimeBlizzardLoggerV1 _failureTypeFromSwipeFailReason:] */

ulong FUN_105428d04(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 1;
  if (3 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 105428d14; end: 105428d4f; -[SCAdTrackRealTimeBlizzardLoggerV1 .cxx_destruct] */

void FUN_105428d14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105428d50; end: 105428df3; -[SCAdTrackRealTimeBlizzardLoggerV2 initWithBlizzardLogger:performer:] */

undefined1 *
FUN_105428d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8480;
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



/* Entry: 105428df4; end: 105428ecb; -[SCAdTrackRealTimeBlizzardLoggerV2 logRealTimeAdTrackEvent:] */

void FUN_105428df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105428ecc; end: 105428eff;  */

void FUN_105428ecc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105428f00; end: 105429197; -[SCAdTrackRealTimeBlizzardLoggerV2 _logWithAdTrackEvent:] */

void FUN_105428f00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) goto LAB_105429174;
  puVar4 = PTR_PTR_1126b8f58;
  _objc_opt_new(PTR_PTR_1126b8f58);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c098ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_3;
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c068380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c068380(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x0001084b9bd4();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      goto LAB_105429024;
    }
  }
  else {
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x0001084b9594();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
LAB_105429024:
    func_0x00010befa120(puVar7,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  lVar2 = lVar1;
  func_0x00010bef2c20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bef4d20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bef60a0(lVar1);
  func_0x0001084baa08();
  func_0x00010c164dc0(puVar4,param_2,lVar2);
  lVar2 = lVar1;
  func_0x00010bef4240(lVar1);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar4,param_2,lVar2);
  lVar2 = lVar1;
  func_0x00010c278820(lVar1);
  func_0x00010c219120(puVar4,param_2,lVar2);
  lVar2 = lVar1;
  func_0x00010c29e160(lVar1);
  func_0x00010c222b20(puVar4,param_2,lVar2);
  lVar2 = lVar1;
  func_0x00010c106900(lVar1);
  func_0x0001084b94a8();
  func_0x00010c1dfe40(puVar4,param_2,lVar2);
  lVar2 = lVar1;
  func_0x00010bef19e0(lVar1);
  func_0x0001084b94a8();
  func_0x00010c162ea0(puVar4,param_2,lVar2);
  func_0x00010c1bd940(puVar4,param_2,puVar5);
  func_0x00010c1ae0e0(puVar4,param_2,puVar6);
  func_0x00010c1b4bc0(puVar4,param_2,1);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_105429174:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105429198; end: 1054291c7; -[SCAdTrackRealTimeBlizzardLoggerV2 .cxx_destruct] */

void FUN_105429198(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054291c8; end: 10542932b; -[SCAdTrackSeqNumProviderImpl initWithAdCrashLogger:adConfigProviderV2:] */

undefined1 *
FUN_1054291c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8488;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10542932c; end: 105429353; -[SCAdTrackSeqNumProviderImpl viewSeqNumObservable] */

void FUN_10542932c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105429354; end: 105429407; -[SCAdTrackSeqNumProviderImpl trackSeqNumForAdIdentifier:] */

long FUN_105429354(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010bece100(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105429408; end: 1054294bb; -[SCAdTrackSeqNumProviderImpl spectrumTrackSeqNumForAdIdentifier:] */

long FUN_105429408(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010bebeac0(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1054294bc; end: 10542956f; -[SCAdTrackSeqNumProviderImpl viewSeqNumForAdIdentifier:] */

long FUN_1054294bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010bee9c80(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105429570; end: 105429623; -[SCAdTrackSeqNumProviderImpl feedSeqNumForAdIdentifier:] */

long FUN_105429570(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010be0edc0(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105429624; end: 1054296c7; -[SCAdTrackSeqNumProviderImpl incrementTrackSeqNumForAdIdentifier:] */

void FUN_105429624(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010be38a00(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054296c8; end: 10542976b; -[SCAdTrackSeqNumProviderImpl incrementSpectrumTrackSeqNumWithAdIdentifier:] */

void FUN_1054296c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010be38940(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10542976c; end: 10542980f; -[SCAdTrackSeqNumProviderImpl incrementViewSeqNumForAdIdentifier:] */

void FUN_10542976c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010be38a60(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105429810; end: 1054298b3; -[SCAdTrackSeqNumProviderImpl incrementFeedSeqNumForAdIdentifier:] */

void FUN_105429810(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010be38460(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054298b4; end: 10542997b; -[SCAdTrackSeqNumProviderImpl _trackSeqNumForAdIdentifier:] */

undefined ** FUN_1054298b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    ppuVar3 = (undefined **)0x0;
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x30);
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfb60;
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    }
    ppuVar3 = ppuVar2;
    func_0x00010c2827c0(ppuVar2);
    _objc_release(ppuVar2);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 10542997c; end: 105429a43; -[SCAdTrackSeqNumProviderImpl _spectrumTrackSeqNumAdIdentifier:] */

undefined ** FUN_10542997c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    ppuVar3 = (undefined **)0x0;
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x38);
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfb60;
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
    }
    ppuVar3 = ppuVar2;
    func_0x00010c2827c0(ppuVar2);
    _objc_release(ppuVar2);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 105429a44; end: 105429b1f; -[SCAdTrackSeqNumProviderImpl _viewSeqNumForAdIdentifier:] */

undefined * FUN_105429a44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x40);
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
    }
    puVar3 = puVar2;
    func_0x00010c2827c0(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105429b20; end: 105429be7; -[SCAdTrackSeqNumProviderImpl _feedSeqNumForAdIdentifier:] */

undefined ** FUN_105429b20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
    ppuVar3 = (undefined **)0x0;
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x48);
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfb60;
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48));
    }
    ppuVar3 = ppuVar2;
    func_0x00010c2827c0(ppuVar2);
    _objc_release(ppuVar2);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 105429be8; end: 105429c9f; -[SCAdTrackSeqNumProviderImpl _incrementTrackSeqNumForAdIdentifier:] */

void FUN_105429be8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    func_0x00010bece100(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105429ca0; end: 105429d57; -[SCAdTrackSeqNumProviderImpl _incrementSpectrumTrackSeqNumForAdIdentifier:] */

void FUN_105429ca0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    func_0x00010bebeac0(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105429d58; end: 105429e4b; -[SCAdTrackSeqNumProviderImpl _incrementViewNumForAdIdentifier:] */

void FUN_105429d58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    func_0x00010bee9c80(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126b8f30;
    _objc_alloc(PTR_PTR_1126b8f30);
    func_0x00010bff1860();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105429e4c; end: 105429f03; -[SCAdTrackSeqNumProviderImpl _incrementFeedSeqNumForAdIdentifier:] */

void FUN_105429e4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be24e60(param_1);
  }
  else {
    func_0x00010be0edc0(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48));
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105429f04; end: 105429fb7; -[SCAdTrackSeqNumProviderImpl _guardOnNullAdIdentifierWithS2R:funcName:] */

void FUN_105429f04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddd878);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3e90;
  func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ada0(uVar2,param_2,0,puVar3,puVar1,&PTR____CFConstantStringClassReference_110ddd898
                      ,1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105429fb8; end: 105429fbf; -[SCAdTrackSeqNumProviderImpl adPlaybackSessionEndSubject] */

undefined8 FUN_105429fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105429fc0; end: 105429fc7; -[SCAdTrackSeqNumProviderImpl identifierToTrackSeqNumMapping] */

undefined8 FUN_105429fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105429fc8; end: 105429fcf; -[SCAdTrackSeqNumProviderImpl setIdentifierToTrackSeqNumMapping:] */

void FUN_105429fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105429fd0; end: 105429fd7; -[SCAdTrackSeqNumProviderImpl identifierToSpectrumTrackSeqNumMapping] */

undefined8 FUN_105429fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105429fd8; end: 105429fdf; -[SCAdTrackSeqNumProviderImpl setIdentifierToSpectrumTrackSeqNumMapping:] */

void FUN_105429fd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105429fe0; end: 105429fe7; -[SCAdTrackSeqNumProviderImpl identifierToViewSeqNumMapping] */

undefined8 FUN_105429fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105429fe8; end: 105429fef; -[SCAdTrackSeqNumProviderImpl setIdentifierToViewSeqNumMapping:] */

void FUN_105429fe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105429ff0; end: 105429ff7; -[SCAdTrackSeqNumProviderImpl identifierToFeedSeqNumMapping] */

undefined8 FUN_105429ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105429ff8; end: 105429fff; -[SCAdTrackSeqNumProviderImpl setIdentifierToFeedSeqNumMapping:] */

void FUN_105429ff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10542a000; end: 10542a077; -[SCAdTrackSeqNumProviderImpl .cxx_destruct] */

void FUN_10542a000(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


