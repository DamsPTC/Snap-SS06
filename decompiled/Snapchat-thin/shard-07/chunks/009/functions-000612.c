/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b66528; end: 105b6659f; -[SCFriendsFeedItemImpressionTracker .cxx_destruct] */

void FUN_105b66528(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105b665a0; end: 105b665ab;  */

void FUN_105b665a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba1f8;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bf33f20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x000105bb5a48();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105b62674();
  _objc_retain(param_2);
  ppuStack_c8 = &puStack_d0;
  puStack_d0 = (undefined *)0x0;
  uStack_c0 = 0x2020000000;
  puStack_b8 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff00);
  lVar7 = param_2;
  func_0x00010bfa3920(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfa3ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_a0 = (undefined **)0xc2000000;
  pcStack_98 = FUN_105b66e18;
  pcStack_90 = (code *)&UNK_1108d8010;
  ppuStack_88 = &puStack_d0;
  func_0x00010c0be3e0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  __Block_object_dispose(&puStack_d0,8);
  _objc_release(param_2);
  func_0x00010bfddd60();
  lVar7 = param_2;
  FUN_105b66d18();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66e68;
  puStack_b8 = &UNK_1108d6e70;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf920(lVar9);
  puVar10 = ppuStack_a0[5];
  _objc_retain();
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar9);
  _objc_retain(param_3);
  lVar11 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c25ec00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c25c3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  if (lVar13 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    func_0x00010c25c340();
    puVar24 = PTR_PTR_1126c2a80;
    _objc_alloc();
    func_0x00010c25be80(lVar13);
    func_0x00010c073f40(lVar13);
    func_0x00010c067fc0(param_3);
    func_0x00010c04e640();
  }
  _objc_release(lVar13);
  _objc_release(param_3);
  lVar11 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  lVar13 = lVar12;
  ppuStack_a0 = &puStack_a8;
  func_0x00010bf25ae0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66ea0;
  puStack_b8 = &UNK_1108d7f30;
  ppuStack_b0 = &puStack_a8;
  func_0x00010c0bf960();
  _objc_release(lVar13);
  puVar14 = ppuStack_a0[5];
  _objc_retain();
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar12);
  lVar13 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar16 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar18 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66ed8;
  puStack_b8 = &UNK_1108d6ea0;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf920(lVar19);
  puVar23 = ppuStack_a0[5];
  _objc_retain(puVar23);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar19);
  lVar20 = param_2;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66f10;
  puStack_b8 = &UNK_1108d7d70;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf920(lVar21);
  puVar22 = ppuStack_a0[5];
  _objc_retain(puVar22);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar21);
  func_0x00010bffd1c0();
  _objc_release(puVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(puVar23);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(puVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar24);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b665ac; end: 105b66d17;  */

void FUN_105b665ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba1f8;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bf33f20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x000105bb5a48();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105b62674();
  _objc_retain(param_1);
  ppuStack_c8 = &puStack_d0;
  puStack_d0 = (undefined *)0x0;
  uStack_c0 = 0x2020000000;
  puStack_b8 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff00);
  lVar7 = param_1;
  func_0x00010bfa3920(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfa3ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_a0 = (undefined **)0xc2000000;
  pcStack_98 = FUN_105b66e18;
  pcStack_90 = (code *)&UNK_1108d8010;
  ppuStack_88 = &puStack_d0;
  func_0x00010c0be3e0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  __Block_object_dispose(&puStack_d0,8);
  _objc_release(param_1);
  func_0x00010bfddd60();
  lVar7 = param_1;
  FUN_105b66d18();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66e68;
  puStack_b8 = &UNK_1108d6e70;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf920(lVar9);
  puVar10 = ppuStack_a0[5];
  _objc_retain();
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar9);
  _objc_retain(param_2);
  lVar11 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c25ec00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c25c3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  if (lVar13 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    func_0x00010c25c340();
    puVar24 = PTR_PTR_1126c2a80;
    _objc_alloc();
    func_0x00010c25be80(lVar13);
    func_0x00010c073f40(lVar13);
    func_0x00010c067fc0(param_2);
    func_0x00010c04e640();
  }
  _objc_release(lVar13);
  _objc_release(param_2);
  lVar11 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  lVar13 = lVar12;
  ppuStack_a0 = &puStack_a8;
  func_0x00010bf25ae0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66ea0;
  puStack_b8 = &UNK_1108d7f30;
  ppuStack_b0 = &puStack_a8;
  func_0x00010c0bf960();
  _objc_release(lVar13);
  puVar14 = ppuStack_a0[5];
  _objc_retain();
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar12);
  lVar13 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar16 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar18 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66ed8;
  puStack_b8 = &UNK_1108d6ea0;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf920(lVar19);
  puVar23 = ppuStack_a0[5];
  _objc_retain(puVar23);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar19);
  lVar20 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105b664cc;
  ppuStack_88 = (undefined **)0x105b664dc;
  uStack_80 = 0;
  puStack_d0 = puVar22;
  ppuStack_c8 = (undefined **)0xc2000000;
  uStack_c0 = 0x105b66f10;
  puStack_b8 = &UNK_1108d7d70;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf920(lVar21);
  puVar22 = ppuStack_a0[5];
  _objc_retain(puVar22);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar21);
  func_0x00010bffd1c0();
  _objc_release(puVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(puVar23);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(puVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar24);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b66d18; end: 105b66e17;  */

void FUN_105b66d18(undefined8 param_1)

{
  undefined8 uVar1;
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
  pcStack_48 = FUN_105b664cc;
  uStack_40 = 0x105b664dc;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b66e18; end: 105b66e27;  */

void FUN_105b66e18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 105b66e28; end: 105b66f47;  */

void FUN_105b66e28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b66f48; end: 105b66f4f;  */

void FUN_105b66f48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf33f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cellIdentifier_1125aa970);
  return;
}



/* Entry: 105b66f50; end: 105b67037;  */

void FUN_105b66f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b67038; end: 105b67157;  */

void FUN_105b67038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b67158; end: 105b67193;  */

void FUN_105b67158(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b67194; end: 105b67243;  */

void FUN_105b67194(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b67244; end: 105b672c7; -[SCFriendsFeedSnapchatBotImpressionTracker init] */

undefined1 * FUN_105b67244(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec100;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b672c8; end: 105b67317; -[SCFriendsFeedSnapchatBotImpressionTracker botImpressions] */

void FUN_105b672c8(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b67318; end: 105b675c3; -[SCFriendsFeedSnapchatBotImpressionTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105b67318(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 != 0) {
      func_0x00010bdfdd00(param_1);
      goto LAB_105b6757c;
    }
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0720c0();
      if ((int)lVar1 == 0) goto LAB_105b6757c;
      uVar2 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ba1f8;
      _objc_opt_class(PTR_PTR_1126ba1f8);
      uVar7 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar4 = uVar2;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar2);
      func_0x00010be5d240(param_1);
    }
    else {
      uVar2 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ba1f8;
      _objc_opt_class(PTR_PTR_1126ba1f8);
      uVar7 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar4 = uVar2;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar2);
      func_0x00010be5d260(param_1);
    }
  }
  else {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar7 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar4 = uVar2;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
    _objc_retain(uVar4);
    uVar2 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        func_0x00010be5d260(param_1);
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      uVar2 = uVar4;
      func_0x00010bf52a60();
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar4);
LAB_105b6757c:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(param_3 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar3;
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar3;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_3 + 0x18);
  return;
}



/* Entry: 105b675c4; end: 105b67637; -[SCFriendsFeedSnapchatBotImpressionTracker _didFeedDisappear] */

void FUN_105b675c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 105b67638; end: 105b6776b; -[SCFriendsFeedSnapchatBotImpressionTracker _markBotAsVisibleWithTrackingData:] */

void FUN_105b67638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107cfa64c();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000107cf92c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf4b900(uVar3,param_2,uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
      _os_unfair_lock_lock(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010c0e00e0(lVar4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2827c0();
      _objc_release(lVar4);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar6,uVar2);
      _objc_release(puVar6);
      _os_unfair_lock_unlock(param_1 + 0x18);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b6776c; end: 105b67807; -[SCFriendsFeedSnapchatBotImpressionTracker _markBotAsNonVisibleWithTrackingData:] */

void FUN_105b6776c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107cfa64c();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000107cf92c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b67808; end: 105b67837; -[SCFriendsFeedSnapchatBotImpressionTracker .cxx_destruct] */

void FUN_105b67808(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b67838; end: 105b678cb; -[SCFriendsFeedStreakImpressionTracker initWithGraphene:] */

undefined1 * FUN_105b67838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec108;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b678cc; end: 105b6791b; -[SCFriendsFeedStreakImpressionTracker streakImpressions] */

void FUN_105b678cc(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b6791c; end: 105b67ac3; -[SCFriendsFeedStreakImpressionTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105b6791c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 != 0) {
      func_0x00010bdfdd00(param_1);
      goto LAB_105b67a88;
    }
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) goto LAB_105b67a88;
    uVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba1f8;
    _objc_opt_class(PTR_PTR_1126ba1f8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    _os_unfair_lock_lock(param_1 + 0x18);
    func_0x00010be59400(param_1);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  else {
    uVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010bdfdce0(param_1);
  }
  _objc_release(uVar2);
LAB_105b67a88:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b67ac4; end: 105b67bff; -[SCFriendsFeedStreakImpressionTracker _didFeedAppearWithTrackingData:] */

void FUN_105b67ac4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be59400(param_1,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  __Unwind_Resume();
  _os_unfair_lock_lock(param_3 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_3 + 0x18);
  return;
}



/* Entry: 105b67c00; end: 105b67c57; -[SCFriendsFeedStreakImpressionTracker _didFeedDisappear] */

void FUN_105b67c00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 105b67c58; end: 105b67e6b; -[SCFriendsFeedStreakImpressionTracker _logStreakDisplayCountForTrackingData:] */

void FUN_105b67c58(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x18);
  uVar5 = param_3;
  func_0x00010bf96da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x000107cf92c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c25c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_retain(uVar5);
  if (uVar2 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar2;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_105b67e30;
    }
    if (uVar2 != 0) {
      uVar5 = param_3;
      func_0x00010c25c000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 == 0) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
        goto LAB_105b67e30;
      }
    }
    uVar5 = param_3;
    func_0x00010c25c000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c25c000(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c25c340();
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c122e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c08fa60();
    _objc_release(uVar5);
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d064c4(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064e8a7c(uVar5,uVar4 == 0,uVar3,1);
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
LAB_105b67e30:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b67e6c; end: 105b67e9b; -[SCFriendsFeedStreakImpressionTracker .cxx_destruct] */

void FUN_105b67e6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b67e9c; end: 105b67f0f; -[SCFriendsFeedFirstRenderLatencyLogger initWithGraphene:] */

undefined1 * FUN_105b67e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec110;
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



/* Entry: 105b67f10; end: 105b67f3b; -[SCFriendsFeedFirstRenderLatencyLogger recordFFVCInitStart] */

void FUN_105b67f10(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x10) = param_1;
  }
  return;
}



/* Entry: 105b67f3c; end: 105b67fcb; -[SCFriendsFeedFirstRenderLatencyLogger didFFVCInit] */

void FUN_105b67f3c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    return;
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bfac120(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b67fcc; end: 105b6805b; -[SCFriendsFeedFirstRenderLatencyLogger recordUserDidSwipeIntoFeed] */

void FUN_105b67fcc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    return;
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bfac140(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b6805c; end: 105b68323; -[SCFriendsFeedFirstRenderLatencyLogger didRenderFeedItemsWithViewModelCount:viewModelGenerationMs:source:priorWarmupCount:] */

void FUN_105b6805c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b2cb0;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  _objc_retain(param_4);
  func_0x00010bfabe20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b2cb0;
  func_0x00010bfabe00(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
  _CACurrentMediaTime();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2cb0;
  func_0x00010bfb1b40(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b2cb0;
  func_0x00010bfac160(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x28) = 1;
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b68324; end: 105b6832f; -[SCFriendsFeedFirstRenderLatencyLogger .cxx_destruct] */

void FUN_105b68324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b68330; end: 105b683a3; -[SCFriendsFeedPaginationLoggerObjc initWithGraphene:] */

undefined1 * FUN_105b68330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec118;
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



/* Entry: 105b683a4; end: 105b68437; -[SCFriendsFeedPaginationLoggerObjc didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105b683a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb8178);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb81f8);
    if ((int)uVar1 != 0) {
      func_0x00010be5a960(param_1,param_2,param_5);
    }
  }
  else {
    func_0x00010be5a840(param_1,param_2,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b68438; end: 105b684bf; -[SCFriendsFeedPaginationLoggerObjc _logVisibleFeedItemIfNeededForExtraData:] */

void FUN_105b68438(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb82d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba1f8;
  _objc_opt_class(PTR_PTR_1126ba1f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010be5a7c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b684c0; end: 105b6866b; -[SCFriendsFeedPaginationLoggerObjc _logWholeFeedVisibleIfNeededForExtraData:] */

void FUN_105b684c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar6 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR____CFConstantStringClassReference_110eb82b8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar5 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_3);
  if (uVar5 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar10 = *plStack_120;
      do {
        uVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          puVar2 = PTR_PTR_1126ba1f8;
          uVar9 = *(ulong *)(lStack_128 + uVar11 * 8);
          _objc_retain(uVar9);
          _objc_opt_class(puVar2);
          uVar4 = uVar9;
          _objc_opt_isKindOfClass(uVar9,puVar2);
          uVar1 = uVar9;
          if ((uVar4 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar9);
          func_0x00010be5a7c0(param_1);
          _objc_release(uVar1);
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
        uVar3 = param_3;
        ppuVar6 = &puStack_130;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
    _objc_release(param_3);
    ppuVar8 = ppuVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  if ((ppuVar8 != (undefined **)0x0) &&
     (ppuVar6 = ppuVar8, func_0x00010c082080(), (int)ppuVar6 != 0)) {
    puVar2 = PTR_PTR_1126b2cb0;
    func_0x00010bfac100(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(uVar5 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 105b6866c; end: 105b686f3; -[SCFriendsFeedPaginationLoggerObjc _logViewModelIfNeeded:] */

void FUN_105b6866c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c082080(), (int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b2cb0;
    func_0x00010bfac100(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b686f4; end: 105b686ff; -[SCFriendsFeedPaginationLoggerObjc .cxx_destruct] */

void FUN_105b686f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b68700; end: 105b687db; -[SCFriendsFeedShortcutsGrapheneLogger initWithGrapheneLogger:performerProvider:] */

undefined1 *
FUN_105b68700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec120;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b687dc; end: 105b68893; -[SCFriendsFeedShortcutsGrapheneLogger recordSelectedShortcut:] */

void FUN_105b687dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b68894; end: 105b688c7;  */

void FUN_105b68894(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea72e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b688c8; end: 105b6891f; -[SCFriendsFeedShortcutsGrapheneLogger incrementShortcutUpdateCount] */

void FUN_105b688c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105b68920;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 105b68920; end: 105b68933;  */

void FUN_105b68920(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x20) = *(long *)(*(long *)(param_1 + 0x20) + 0x20) + 1;
  return;
}



/* Entry: 105b68934; end: 105b689db; -[SCFriendsFeedShortcutsGrapheneLogger logShortcutUpdates] */

void FUN_105b68934(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b689dc; end: 105b68a23;  */

void FUN_105b689dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be58a40();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be932c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b68a24; end: 105b68aff; -[SCFriendsFeedShortcutsGrapheneLogger logBatchSyncConversationsForShortcutType:success:conversationsCount:elapsedTimeMs:] */

void FUN_105b68a24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_80,auStack_58);
  uStack_78 = param_4;
  uStack_70 = param_6;
  uStack_68 = param_1;
  uStack_60 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105b68b00; end: 105b68b3b;  */

void FUN_105b68b00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be508e0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b68b3c; end: 105b68bf7; -[SCFriendsFeedShortcutsGrapheneLogger logShortcutCellsRenderedWithShortcut:count:] */

void FUN_105b68b3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b68bf8; end: 105b68c2b;  */

void FUN_105b68bf8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be589c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b68c2c; end: 105b68ce3; -[SCFriendsFeedShortcutsGrapheneLogger logBatchCameraReplyTapWithShortcut:] */

void FUN_105b68c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b68ce4; end: 105b68d17;  */

void FUN_105b68ce4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b68d18; end: 105b68e7b; -[SCFriendsFeedShortcutsGrapheneLogger _logBatchSyncConversationsMetricForShortcutType:success:conversationsCount:elapsedTimeMs:] */

void FUN_105b68d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bf172e0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105bddfd4(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1f8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105b68e7c; end: 105b68f33; -[SCFriendsFeedShortcutsGrapheneLogger _logShortcutUpdateMetric] */

void FUN_105b68e7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010c22d780(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000105bddfd4(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1f8d8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105b68f34; end: 105b68f3b; -[SCFriendsFeedShortcutsGrapheneLogger _resetLogger] */

void FUN_105b68f34(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 105b68f3c; end: 105b6901b; -[SCFriendsFeedShortcutsGrapheneLogger _logShortcutCellsRenderedWithShortcut:count:] */

void FUN_105b68f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c22d560(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105bddfd4(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1f8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b6901c; end: 105b690c7; -[SCFriendsFeedShortcutsGrapheneLogger _logBatchCameraReplyTapWithShortcut:] */

void FUN_105b6901c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bf166c0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105bddfd4(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1f8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b690c8; end: 105b69177; -[SCFriendsFeedShortcutsGrapheneLogger _setSelectedShortcut:] */

void FUN_105b690c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x18) = param_3;
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c22d6e0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105bddfd4(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1f8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b69178; end: 105b691a7; -[SCFriendsFeedShortcutsGrapheneLogger .cxx_destruct] */

void FUN_105b69178(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b691a8; end: 105b692b3; -[SCFriendsFeedSnapPushLogger initWithGraphene:startupInfoService:] */

undefined1 *
FUN_105b691a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec128;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b692b4; end: 105b69383; -[SCFriendsFeedSnapPushLogger logUserEnteredFeedForSnapNotificationForMessageId:conversationId:isGroupConversation:currentViewModels:] */

void FUN_105b692b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b69384;
  puStack_70 = &UNK_1108b0960;
  lStack_68 = param_2;
  uStack_60 = param_5;
  uStack_58 = param_7;
  uStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 105b69384; end: 105b693eb;  */

void FUN_105b69384(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x29) = *(undefined1 *)(param_1 + 0x40);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = *(undefined8 *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be828d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s__processViewModels_currentTime__11257e3d0,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105b693ec; end: 105b69483; -[SCFriendsFeedSnapPushLogger updateWithViewModels:] */

void FUN_105b693ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b69484;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 105b69484; end: 105b694a3;  */

void FUN_105b69484(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be828d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x20),
               PTR_s__processViewModels_currentTime__11257e3d0,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 105b694a4; end: 105b695b7; -[SCFriendsFeedSnapPushLogger _processViewModels:currentTime:] */

void FUN_105b694a4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b698d8;
  puStack_50 = &UNK_1108d80d0;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  func_0x0001006372a4(param_4,&puStack_68);
  uVar1 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  uVar2 = uVar1;
  func_0x000105bb4db8();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x000105bb4e38();
    if (((uVar2 & 1) != 0) || (uVar2 = uVar1, func_0x000105bb5cb4(), (int)uVar2 != 0)) {
      func_0x00010be51ee0(param_1,param_2);
    }
  }
  else {
    func_0x00010be51ee0(param_1,param_2);
    func_0x00010be56040(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b695b8; end: 105b6966b; -[SCFriendsFeedSnapPushLogger logUserExitedFeed] */

void FUN_105b695b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105b69620;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_50);
  return;
}



/* Entry: 105b6966c; end: 105b696e3; -[SCFriendsFeedSnapPushLogger _logContentMetricWithSuccess:currentTime:] */

void FUN_105b6966c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c242a20(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55fe0(param_1,param_2,param_3,puVar1,param_4);
  *(undefined1 *)(param_2 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b696e4; end: 105b69753; -[SCFriendsFeedSnapPushLogger _logMetricForLoadedSnapWithSuccess:currentTime:] */

void FUN_105b696e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c242a40(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55fe0(param_1,param_2,param_3,puVar1,param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b69754; end: 105b6988f; -[SCFriendsFeedSnapPushLogger _logMetric:success:withTime:] */

void FUN_105b69754(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  func_0x00010c2ac460(param_4,param_3,&PTR____CFConstantStringClassReference_110dab0d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c2523e0(uVar2);
  func_0x0001005a8a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c2ac460(param_4,param_3,&PTR____CFConstantStringClassReference_110e1f8f8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (*(char *)(param_2 + 0x29) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  uVar2 = uVar3;
  func_0x00010c2ac460(uVar3,param_3,&PTR____CFConstantStringClassReference_110dbce78,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - *(double *)(param_2 + 0x18));
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b69890; end: 105b698d7; -[SCFriendsFeedSnapPushLogger .cxx_destruct] */

void FUN_105b69890(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b698d8; end: 105b6996f;  */

ulong FUN_105b698d8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar3 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x000105bb5a48(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c0720c0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105b69970; end: 105b69e6f; -[SCFriendsFeedStateLogger initWithPerformer:dataCoordinator:userTrackedLogger:nativeSessionManagerFuture:conversationUpdaterEventPublisher:conversationManager:messagingExperimentService:feedInteractionEventObservable:feedCellVisibilityObservable:conversationEventObservable:friendsFeedViewLifecycleListener:sponsoredSnapAdResponseParser:friendsFeedStreakImpressionTracker:friendsFeedSnapchatBotImpressionTracker:chatPeekEvents:feedReadyLogger:] */

undefined8 *
FUN_105b69970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126ec130;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[5];
    puVar1[5] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[6];
    puVar1[6] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_14);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7760(puVar1);
    func_0x00010bec7e40(puVar1);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b3b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7d60(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bec7740(puVar1);
    func_0x00010bec7500(puVar1);
    func_0x00010bec7d80(puVar1);
    func_0x00010bec7460(puVar1);
    _objc_release(param_14);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b69e70; end: 105b69ee7;  */

void FUN_105b69e70(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfa4080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_class(PTR_PTR_1126ae820);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b69ee8; end: 105b6a06f; -[SCFriendsFeedStateLogger didEnterFeedWithSessionId:previousPageName:visibleCellViewModels:friendsFeedViewModelIndexes:visibleSnapchatterCells:] */

void FUN_105b69ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6a070; end: 105b6a0ab;  */

void FUN_105b6a070(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6a0ac; end: 105b6af4f; -[SCFriendsFeedStateLogger _didEnterFeedWithSessionId:previousPageName:visibleCellViewModels:friendsFeedViewModelIndexes:visibleSnapchatterCells:] */

void FUN_105b6a0ac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uStack_208;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  char *pcStack_160;
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
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar18 = *(ulong *)(param_1 + 0x68);
  _objc_retain(uVar18);
  _objc_retain(param_3);
  if (uVar18 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar18);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar18);
    }
    else {
      uVar2 = uVar18;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar18);
      if ((uVar2 & 1) != 0) goto LAB_105b6aebc;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(long *)(param_1 + 0xd0) = param_5;
    _objc_release(uVar1);
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar2;
    func_0x00010bfba060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_retain(uVar18);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(uVar18);
    uVar2 = uVar18;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar20 = *plStack_130;
      do {
        uVar22 = 0;
        do {
          if (*plStack_130 != lVar20) {
            _objc_enumerationMutation(uVar18);
          }
          uVar3 = *(ulong *)(lStack_138 + uVar22 * 8);
          func_0x00010bef0e60();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x000107cf78f4();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) goto LAB_105b6a2c0;
          uVar22 = uVar22 + 1;
        } while (uVar2 != uVar22);
        uVar2 = uVar18;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
LAB_105b6a2c0:
    _objc_release(uVar18);
    _objc_release(uVar18);
    uVar2 = uVar18;
    func_0x00010c099060();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar2;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar22;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(uVar18);
    _objc_opt_new();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = (code *)0x105b6fe20;
    puStack_e8 = &UNK_1108d8340;
    puStack_e0 = puVar5;
    _objc_retain();
    func_0x00010bf97e80(uVar18);
    _objc_release(uVar18);
    puVar6 = puVar5;
    func_0x000105b6ffa8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_e0);
    _objc_release(puVar5);
    uVar2 = uVar18;
    FUN_105b6af50();
    _objc_retainAutoreleasedReturnValue();
    FUN_105b6afb8(uVar2,*(undefined8 *)(param_1 + 0x78));
    uVar22 = uVar18;
    FUN_105b6b014();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar18;
    func_0x000105b6b07c();
    _objc_retainAutoreleasedReturnValue();
    FUN_105b6afb8(uVar22,*(undefined8 *)(param_1 + 0x80));
    FUN_105b6afb8(uVar3,*(undefined8 *)(param_1 + 0x88));
    uVar7 = uVar18;
    func_0x0001006372a4(uVar18,&PTR___NSConcreteGlobalBlock_1108d83f0);
    func_0x00010bf529e0();
    uVar8 = uVar18;
    func_0x0001006372a4(uVar18,&PTR___NSConcreteGlobalBlock_1108d8410);
    func_0x00010bf529e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar7 = uVar18;
    func_0x00010c099060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar7 = uVar18;
    func_0x00010bd86870(uVar18,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                        &PTR___NSConcreteGlobalBlock_1108d8470);
    uVar8 = uVar18;
    func_0x00010bd86870(uVar18,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                        &PTR___NSConcreteGlobalBlock_1108d8490);
    uVar10 = uVar18;
    func_0x00010bd86870(uVar18,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                        &PTR___NSConcreteGlobalBlock_1108d84b0);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_retain(uVar18);
    _objc_opt_new(puVar5);
    uVar11 = uVar18;
    func_0x00010bd86870(uVar18,puVar5,&PTR___NSConcreteGlobalBlock_1108d84d0);
    _objc_release(uVar18);
    _objc_release(puVar5);
    func_0x00010bf529e0();
    _objc_release(uVar11);
    uVar11 = uVar18;
    func_0x0001006372a4(uVar18,&PTR___NSConcreteGlobalBlock_1108d84f0);
    func_0x00010bf529e0();
    _objc_release(uVar11);
    uVar11 = uVar18;
    func_0x000105b6b0e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_retain(uVar18);
    uVar12 = uVar18;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uStack_208 = 0;
      do {
        uVar12 = uVar18;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar23;
        func_0x000107cfa560();
        _objc_release(uVar23);
        _objc_release(uVar12);
        if ((uVar13 & 1) != 0) goto LAB_105b6a63c;
        uVar12 = uVar18;
        func_0x00010bf529e0();
        uStack_208 = uStack_208 + 1;
      } while (uStack_208 < uVar12);
    }
    uStack_208 = 0xffffffffffffffff;
LAB_105b6a63c:
    _objc_release(uVar18);
    lVar20 = param_5;
    func_0x000105b6b14c(param_5,uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar21 = lVar20;
    func_0x00010bd86870(lVar20,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                        &PTR___NSConcreteGlobalBlock_1108d8470);
    func_0x00010c0b4fe0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x00010bd86870(lVar20,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                        &PTR___NSConcreteGlobalBlock_1108d8490);
    func_0x00010c0b4fe0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x00010bd86870(lVar20,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                        &PTR___NSConcreteGlobalBlock_1108d84b0);
    func_0x00010c0b4fe0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x000105b6b0e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x0001006372a4(lVar20,&PTR___NSConcreteGlobalBlock_1108d83f0);
    func_0x00010bf529e0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x0001006372a4(lVar20,&PTR___NSConcreteGlobalBlock_1108d8410);
    func_0x00010bf529e0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x0001006372a4(lVar20,&PTR___NSConcreteGlobalBlock_1108d85a0);
    func_0x00010bf529e0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x0001006372a4(lVar20,&PTR___NSConcreteGlobalBlock_1108d85c0);
    func_0x00010bf529e0();
    _objc_release(lVar21);
    lVar21 = lVar20;
    func_0x0001006372a4(lVar20,&PTR___NSConcreteGlobalBlock_1108d85e0);
    func_0x00010bf529e0();
    _objc_release(lVar21);
    _objc_retain(param_5);
    puStack_170 = &uStack_178;
    uStack_178 = 0;
    uStack_168 = 0x3810000000;
    pcStack_160 = "";
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_5);
    lVar21 = param_5;
    func_0x00010bf52a60();
    if (lVar21 != 0) {
      lVar25 = *plStack_130;
      do {
        lVar24 = 0;
        do {
          if (*plStack_130 != lVar25) {
            _objc_enumerationMutation(param_5);
          }
          lVar14 = *(long *)(lStack_138 + lVar24 * 8);
          func_0x00010bfa3920();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar14;
          func_0x00010c24d520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          if (lVar16 != 0) {
            func_0x00010c0c0200(lVar16);
          }
          _objc_release(lVar16);
          lVar24 = lVar24 + 1;
        } while (lVar21 != lVar24);
        lVar21 = param_5;
        func_0x00010bf52a60();
      } while (lVar21 != 0);
    }
    _objc_release(param_5);
    __Block_object_dispose(&uStack_178,8);
    _objc_release(param_5);
    puVar5 = PTR_PTR_1126c2a90;
    _objc_opt_new(PTR_PTR_1126c2a90);
    func_0x00010c1b1c40();
    func_0x00010c17a480(puVar5);
    func_0x00010c184480(puVar5);
    func_0x00010c1c8620(puVar5);
    func_0x00010c1cf840(puVar5);
    func_0x00010c1cf820(puVar5);
    func_0x00010c1cf860(puVar5);
    func_0x00010c218180(puVar5);
    func_0x00010c0b4fe0(uVar8);
    func_0x00010c1d0320(puVar5);
    func_0x00010bf529e0(uVar2);
    func_0x00010c1d0340(puVar5);
    func_0x00010c0b4fe0(uVar7);
    func_0x00010c1d0380(puVar5);
    func_0x00010c0b4fe0(uVar10);
    func_0x00010c1d03a0(puVar5);
    func_0x00010c1e26a0(puVar5);
    lVar25 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar25;
    func_0x00010bfb11a0();
    _objc_release(lVar25);
    if (lVar21 != -1) {
      func_0x00010c19cf60(puVar5);
    }
    func_0x00010c2238e0(puVar5);
    func_0x00010c223ca0(puVar5);
    func_0x00010c223ce0(puVar5);
    func_0x00010c223cc0(puVar5);
    func_0x00010c223b80(puVar5);
    func_0x00010c223a40(puVar5);
    func_0x00010c223b60(puVar5);
    func_0x00010c223d00(puVar5);
    func_0x00010c223d60(puVar5);
    func_0x00010bf529e0(param_7);
    func_0x00010c223a20(puVar5);
    func_0x00010c183de0(puVar5);
    func_0x00010c17be60(puVar5);
    func_0x00010c1d0360(puVar5);
    func_0x00010c20e2a0(puVar5);
    func_0x00010c223c60(puVar5);
    func_0x00010c1bf6c0(puVar5);
    func_0x00010c19dc40(puVar5);
    func_0x00010c208560(puVar5);
    func_0x00010c212a20(puVar5);
    if (-1 < (long)uStack_208) {
      _objc_retain(uVar18);
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uVar12 = uVar18;
      func_0x00010bf52a60();
      if (uVar12 != 0) {
        lVar21 = *plStack_130;
        do {
          uVar23 = 0;
          do {
            if (*plStack_130 != lVar21) {
              _objc_enumerationMutation(uVar18);
            }
            uVar19 = *(ulong *)(lStack_138 + uVar23 * 8);
            uVar13 = uVar19;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar13;
            func_0x000107cfa560();
            _objc_release(uVar13);
            if ((uVar15 & 1) != 0) {
              _objc_retain(uVar19);
              goto LAB_105b6ac08;
            }
            uVar23 = uVar23 + 1;
          } while (uVar12 != uVar23);
          uVar12 = uVar18;
          func_0x00010bf52a60();
        } while (uVar12 != 0);
      }
      uVar19 = 0;
LAB_105b6ac08:
      _objc_release(uVar18);
      FUN_105b6b1fc(uVar19);
      func_0x00010c212a40(puVar5);
      _objc_release(uVar19);
    }
    lVar16 = *(long *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar16;
    func_0x00010c25c020();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar25 = lVar21;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_105b70e74;
    puStack_e8 = &UNK_1108d8600;
    puStack_e0 = (undefined *)lVar21;
    _objc_retain(lVar21);
    lVar24 = lVar25;
    func_0x000100504554(lVar25,&puStack_100);
    _objc_release(puStack_e0);
    _objc_release(lVar21);
    _objc_release(lVar25);
    _objc_release(lVar21);
    _objc_release(lVar16);
    lVar21 = lVar24;
    func_0x00010bf529e0();
    if (lVar21 != 0) {
      func_0x00010c1ab500(puVar5);
    }
    lVar21 = lVar20;
    func_0x000100817178(lVar20,&PTR___NSConcreteGlobalBlock_1108d8630);
    uVar12 = uVar18;
    func_0x0001006372a4(uVar18,&PTR___NSConcreteGlobalBlock_1108d8650);
    puVar17 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(lVar21);
    _objc_retain(param_6);
    _objc_retain(puVar17);
    _objc_retain(uVar1);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_105b70f50;
    puStack_e8 = &UNK_1108d8670;
    puStack_e0 = puVar17;
    uStack_d8 = uVar1;
    lStack_d0 = lVar21;
    uStack_c8 = param_6;
    _objc_retain(uVar1);
    uVar23 = uVar12;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar23;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar23);
    _objc_release(uStack_c8);
    _objc_release(lStack_d0);
    _objc_release(uStack_d8);
    _objc_release(puStack_e0);
    _objc_release(uVar1);
    uVar23 = uVar13;
    func_0x00010c08fa60();
    if (uVar23 != 0) {
      func_0x00010c1632c0(puVar5);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar1);
    _objc_release(uVar13);
    _objc_release(puVar17);
    _objc_release(uVar12);
    _objc_release(lVar21);
    _objc_release(lVar24);
    _objc_release(puVar5);
    _objc_release(lVar20);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uVar22);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar18);
  }
LAB_105b6aebc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_178,8);
    __Unwind_Resume(param_3);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_retain();
    _objc_opt_new(puVar5);
    uVar18 = param_3;
    func_0x00010bd86870(param_3,puVar5,&PTR___NSConcreteGlobalBlock_1108d8390);
    _objc_release(param_3);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar18);
    return;
  }
  return;
}



/* Entry: 105b6af50; end: 105b6afb7;  */

void FUN_105b6af50(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain();
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bd86870(param_1,puVar1,&PTR___NSConcreteGlobalBlock_1108d8390);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b6afb8; end: 105b6b013;  */

undefined8 FUN_105b6afb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c0d3c80(param_1);
  func_0x00010c0ce860();
  _objc_release(param_2);
  uVar1 = param_1;
  func_0x00010bf529e0(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105b6b014; end: 105b6b1fb;  */

void FUN_105b6b014(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain();
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bd86870(param_1,puVar1,&PTR___NSConcreteGlobalBlock_1108d83b0);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b6b1fc; end: 105b6b3c3;  */

undefined8 FUN_105b6b1fc(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x000107cff7d8();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar3;
    func_0x000107cff3d0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010bef0e60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x000107cf78f4();
      _objc_release(uVar2);
      if ((uVar5 & 1) == 0) {
        uVar2 = uVar4;
        func_0x000107cfd324();
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar4;
          func_0x000107cfce24();
          if ((int)uVar2 == 0) {
            uVar2 = uVar4;
            func_0x000107cfcf34();
            if ((int)uVar2 == 0) {
              uVar2 = uVar4;
              func_0x000107cfd048();
              if ((int)uVar2 == 0) {
                uVar2 = uVar4;
                func_0x000107cfd240();
                if ((int)uVar2 == 0) {
                  uVar7 = 0xffffffffffffffff;
                  goto LAB_105b6b394;
                }
                uVar2 = uVar4;
                func_0x000100bf3858();
                iVar1 = (int)uVar2;
                uVar6 = 8;
                uVar7 = 4;
              }
              else {
                uVar2 = uVar4;
                func_0x000100bf3858();
                iVar1 = (int)uVar2;
                uVar6 = 5;
                uVar7 = 2;
              }
              if (iVar1 == 0) {
                uVar7 = uVar6;
              }
              goto LAB_105b6b394;
            }
            uVar2 = uVar4;
            func_0x000107cfd128();
            if ((uVar2 & 1) == 0) {
              uVar2 = uVar4;
              func_0x000100bf3858();
              uVar7 = 7;
              if ((int)uVar2 != 0) {
                uVar7 = 1;
              }
              goto LAB_105b6b394;
            }
          }
          else {
            uVar2 = uVar4;
            func_0x000107cfd128();
            if ((uVar2 & 1) == 0) {
              uVar2 = uVar4;
              func_0x000100bf3858();
              uVar7 = 0;
              if ((int)uVar2 == 0) {
                uVar7 = 6;
              }
              goto LAB_105b6b394;
            }
          }
          uVar7 = 3;
        }
        else {
          uVar7 = 0xc;
        }
      }
      else {
        uVar7 = 0xb;
      }
    }
    else {
      uVar7 = 10;
    }
  }
  else {
    uVar7 = 9;
  }
LAB_105b6b394:
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 105b6b3c4; end: 105b6b41b; -[SCFriendsFeedStateLogger _startTimer:] */

void FUN_105b6b3c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(double *)(param_2 + 0xb8) != 0.0) {
    uVar2 = *(undefined8 *)(param_2 + 200);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  *(undefined8 *)(param_2 + 0xb8) = param_1;
  return;
}



/* Entry: 105b6b41c; end: 105b6b4d7; -[SCFriendsFeedStateLogger pauseTimer] */

void FUN_105b6b41c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b6b4d8; end: 105b6b50b;  */

void FUN_105b6b4d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be70f60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b6b50c; end: 105b6b54f; -[SCFriendsFeedStateLogger _pauseTimer:] */

void FUN_105b6b50c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b6b550; end: 105b6b693; -[SCFriendsFeedStateLogger didExitFeedWithSessionId:visibleCellViewModels:friendsFeedViewModelIndexes:] */

void FUN_105b6b550(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_60 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b6b694; end: 105b6b703;  */

void FUN_105b6b694(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be08120(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfd9e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be940c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6b704; end: 105b6b7c7; -[SCFriendsFeedStateLogger _emitPageCloseWithSessionId:visibleCellViewModels:friendsFeedViewModelIndexes:currentTime:] */

void FUN_105b6b704(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be19920(param_1,param_2,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2a98;
  func_0x00010bfba1a0(PTR_PTR_1126c2a98,param_3,param_4,lVar1,*(undefined1 *)(param_2 + 0xa1));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b6b7c8; end: 105b6b8ef; -[SCFriendsFeedStateLogger _didExitFeedWithSessionId:] */

void FUN_105b6b7c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
LAB_105b6b840:
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfba060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    FUN_105b6af50();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar1;
    _objc_release(uVar2);
    lVar1 = lVar3;
    FUN_105b6b014();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar1;
    _objc_release(uVar2);
    lVar1 = lVar3;
    func_0x000105b6b07c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = lVar1;
    _objc_release(uVar2);
    func_0x00010be92140(param_1);
  }
  else if (param_3 != 0) {
    lVar1 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,param_3);
    _objc_release(param_3);
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_105b6b8dc;
    goto LAB_105b6b840;
  }
  _objc_release(lVar3);
LAB_105b6b8dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b6b8f0; end: 105b6b9db; -[SCFriendsFeedStateLogger feedDidAppearWithSessionId:] */

void FUN_105b6b8f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105b6b9dc; end: 105b6ba2b;  */

void FUN_105b6b9dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be0ec00();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec1c60(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b6ba2c; end: 105b6baab; -[SCFriendsFeedStateLogger _feedDidAppearWithSessionId:] */

void FUN_105b6ba2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c2a98;
  func_0x00010bfba340(PTR_PTR_1126c2a98,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b6baac; end: 105b6bb63; -[SCFriendsFeedStateLogger didRenderStoriesCarouselWithVisibleCellCount:] */

void FUN_105b6baac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b6bb64; end: 105b6bb97;  */

void FUN_105b6bb64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6bb98; end: 105b6bb9f; -[SCFriendsFeedStateLogger _setNumVisibleCellsPostStoriesCarouselRender:] */

void FUN_105b6bb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 105b6bba0; end: 105b6bc57; -[SCFriendsFeedStateLogger setIsDisplayingBillboard:] */

void FUN_105b6bba0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b6bc58; end: 105b6bc8b;  */

void FUN_105b6bc58(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6bc8c; end: 105b6bd33; -[SCFriendsFeedStateLogger incrementBillboardTapCount] */

void FUN_105b6bc8c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b6bd34; end: 105b6bd5f;  */

void FUN_105b6bd34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be38280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6bd60; end: 105b6be07; -[SCFriendsFeedStateLogger incrementBillboardDismissCount] */

void FUN_105b6bd60(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b6be08; end: 105b6be33;  */

void FUN_105b6be08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be38260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6be34; end: 105b6bf0b; -[SCFriendsFeedStateLogger setShortcutSessionId:] */

void FUN_105b6be34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6bf0c; end: 105b6bf3f;  */

void FUN_105b6bf0c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


