/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105baeae8; end: 105baeb83;  */

void FUN_105baeae8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105baeb84; end: 105baecaf;  */

void FUN_105baeb84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105baead0;
  uStack_40 = 0x105baeae0;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105baecb0; end: 105baed4b;  */

void FUN_105baecb0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105baed4c; end: 105baef4b;  */

void FUN_105baed4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puVar1 = &UNK_10f32dafd;
  func_0x0001000ba800(&UNK_10f32dafd);
  lVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105baead0;
    uStack_70 = 0x105baeae0;
    uStack_68 = 0;
    lVar2 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0c0020(lVar2);
    _objc_release(lVar2);
    uVar3 = puStack_88[5];
    _objc_retain(uVar3);
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105baef4c; end: 105baef8f;  */

void FUN_105baef4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105baef90(uVar1,*(undefined1 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105baef90; end: 105baf4bb;  */

void FUN_105baef90(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 0;
  uVar1 = param_1;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100bf4a30();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    func_0x00010c0bfe20(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  if (param_2 != 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110eb85b8;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb85b8);
    uVar10 = 0;
    goto LAB_105baf410;
  }
  uVar1 = param_1;
  if (*(char *)(puStack_d8 + 3) == '\x01') {
    ppuVar9 = &PTR____CFConstantStringClassReference_110eb83f8;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb83f8);
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105baead0;
    uStack_70 = 0x105baeae0;
    uStack_68 = 0;
    uVar2 = uVar1;
    puStack_88 = &uStack_90;
    func_0x00010c0cb340(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105bb27b0;
    puStack_a8 = &UNK_1108d9e20;
    puStack_98 = &uStack_90;
    _objc_retain(uVar1);
    uStack_a0 = uVar1;
    func_0x00010c0bfe20(uVar2);
LAB_105baf2f8:
    _objc_release(uVar2);
    uVar10 = puStack_88[5];
    _objc_retain(uVar10);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    uVar2 = uVar1;
  }
  else {
    if (*(char *)(puStack_f8 + 3) == '\x01') {
      ppuVar9 = &PTR____CFConstantStringClassReference_110eb8418;
      _objc_retain(&PTR____CFConstantStringClassReference_110eb8418);
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_105baead0;
      uStack_70 = 0x105baeae0;
      uStack_68 = 0;
      uVar2 = uVar1;
      puStack_88 = &uStack_90;
      func_0x00010c0cb340(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_105bb28d0;
      puStack_a8 = &UNK_1108d9e20;
      puStack_98 = &uStack_90;
      _objc_retain(uVar1);
      uStack_a0 = uVar1;
      func_0x00010c0bfe20(uVar2);
      goto LAB_105baf2f8;
    }
    ppuVar9 = &PTR____CFConstantStringClassReference_110eb83b8;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb83b8);
    uVar2 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x000100bf377c(param_1);
    uVar5 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000107cfeed8();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    FUN_105baf8a8(uVar1,uVar3,uVar4,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_105baf410:
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  __Block_object_dispose(&uStack_100,8);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(ppuVar9);
  _objc_release(uVar10);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105baf4bc; end: 105baf4ff;  */

void FUN_105baf4bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105baef90(uVar1,*(undefined1 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105baf500; end: 105baf5ef;  */

void FUN_105baf500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar3 = uVar5;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc();
    uVar3 = uVar5;
    FUN_105bb0ad4(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar6,param_2,&PTR____CFConstantStringClassReference_110eb8498,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105baf5f0; end: 105baf75b;  */

void FUN_105baf5f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = &UNK_10f32db5c;
  func_0x0001000ba800(&UNK_10f32db5c);
  lVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = 0;
  if (lVar2 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105baead0;
    uStack_40 = 0x105baeae0;
    uStack_38 = 0;
    lVar2 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    func_0x00010c0c0020(lVar2);
    _objc_release(lVar2);
    uVar3 = puStack_58[5];
    _objc_retain(uVar3);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105baf75c; end: 105baf8a7;  */

void FUN_105baf75c(long param_1)

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
  long lVar10;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96da0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100bf377c(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000107cfeed8();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  FUN_105baf8a8(uVar3,uVar4,uVar5,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105baf8a8; end: 105bafa03;  */

void FUN_105baf8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105baead0;
  uStack_40 = 0x105baeae0;
  uStack_38 = 0;
  _objc_retain(param_1);
  func_0x00010c0c0020(param_2);
  puVar1 = PTR_PTR_1126c2988;
  _objc_alloc(PTR_PTR_1126c2988);
  func_0x00010c004bc0();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bafa04; end: 105bafb07;  */

void FUN_105bafa04(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = &UNK_10f32db7a;
  func_0x0001000ba800(&UNK_10f32db7a);
  uVar2 = param_1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107cf95f0();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar2 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f680();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      goto LAB_105bafac8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_105bafac8:
  func_0x0001000e2a84(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105bafb08; end: 105bb0053;  */

void FUN_105bafb08(undefined **param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puVar1 = &UNK_10f32db9c;
  func_0x0001000ba800(&UNK_10f32db9c);
  ppuVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000107cff1b4();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c0720c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if ((((uint)ppuVar4 | (uint)ppuVar5) & 1) == 0) {
    ppuVar2 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000107cf95f0();
    _objc_release(ppuVar2);
    if ((int)ppuVar3 == 0) {
LAB_105bafdb4:
      puVar6 = (undefined *)0x0;
      goto LAB_105bafdb8;
    }
    ppuVar2 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000107cf9e44();
    if (((ulong)ppuVar3 & 1) == 0) {
      _objc_release(ppuVar2);
    }
    else {
      ppuVar3 = param_1;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c06f680();
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      if (((ulong)ppuVar4 & 1) != 0) goto LAB_105bafdb4;
    }
    ppuVar2 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar3 = ppuVar2;
    func_0x00010c0de060();
    if ((int)ppuVar3 < 1) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126c28e0;
      _objc_alloc();
      ppuVar3 = ppuVar2;
      func_0x00010bf50280(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0de060(ppuVar2);
      func_0x00010bfd9160(ppuVar2);
      func_0x00010c005340();
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    if (puVar7 == (undefined *)0x0) {
      ppuVar2 = param_1;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar3 = ppuVar2;
      func_0x00010bfd9160();
      if ((((ulong)ppuVar3 & 1) == 0) &&
         (ppuVar3 = ppuVar2, func_0x00010bfd9180(), (int)ppuVar3 == 0)) {
        puVar7 = (undefined *)0x0;
      }
      else {
        ppuVar4 = ppuVar2;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar3 = ppuVar4;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar4);
        puVar6 = PTR_PTR_1126c28e8;
        func_0x00010bfd9180(ppuVar2);
        func_0x00010c131480(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c2e10;
        _objc_alloc();
        func_0x00010c005400();
        _objc_release(ppuVar3);
        _objc_release(puVar6);
      }
      _objc_release(ppuVar2);
      _objc_release(ppuVar2);
      puVar6 = PTR_PTR_1126b02a8;
      if (puVar7 == (undefined *)0x0) {
        _objc_alloc(PTR_PTR_1126b02a8);
        ppuVar2 = param_1;
        FUN_105bb0054(param_1,0,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b460(puVar6);
        _objc_release(ppuVar2);
      }
      else {
        _objc_alloc();
        func_0x00010c01b460();
      }
      _objc_release(puVar7);
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
    }
  }
  else {
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    _objc_retain(param_1);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105baead0;
    uStack_70 = 0x105baeae0;
    uStack_68 = 0;
    ppuVar2 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0c0020(ppuVar2);
    _objc_release(ppuVar2);
    puVar7 = (undefined *)puStack_88[5];
    _objc_retain(puVar7);
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(param_1);
    func_0x00010c01b460(puVar6);
  }
  _objc_release(puVar7);
LAB_105bafdb8:
  func_0x0001000e2a84(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105bb0054; end: 105bb0263;  */

void FUN_105bb0054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3740();
  _objc_release(uVar1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105baead0;
  uStack_80 = 0x105baeae0;
  uStack_78 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_4);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_98[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb0264; end: 105bb049b;  */

void FUN_105bb0264(undefined *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f32dbbe;
  func_0x0001000ba800(&UNK_10f32dbbe);
  puVar4 = param_1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x000107cf95f0();
  _objc_release(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
LAB_105bb0344:
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x000107cf9e44();
    if (((ulong)puVar2 & 1) == 0) {
      _objc_release(puVar4);
    }
    else {
      puVar2 = param_1;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c06f680();
      _objc_release(puVar2);
      _objc_release(puVar4);
      if (((ulong)puVar3 & 1) != 0) goto LAB_105bb0344;
    }
    puVar4 = PTR_PTR_1126b02a8;
    if (param_2 == 0) {
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar2 = param_1;
      FUN_105bb0054(param_1,param_3,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar4);
    }
    else {
      _objc_alloc();
      puVar2 = PTR_PTR_1126c2dc0;
      _objc_retain(param_1);
      _objc_alloc(puVar2);
      puVar3 = param_1;
      func_0x00010c258f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      func_0x00010c007360(puVar2);
      _objc_release(puVar3);
      func_0x00010c01b460(puVar4);
    }
    _objc_release(puVar2);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105bb049c; end: 105bb0807;  */

void FUN_105bb049c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = &UNK_10f32dbe0;
  func_0x0001000ba800(&UNK_10f32dbe0);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105baead0;
  uStack_70 = 0x105baeae0;
  uStack_68 = 0;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0bf920(param_3);
  uVar2 = puStack_88[5];
  _objc_retain(uVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105bb0808; end: 105bb0887;  */

void FUN_105bb0808(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_105bb0888(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb0888; end: 105bb0a13;  */

void FUN_105bb0888(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105baead0;
  uStack_70 = 0x105baeae0;
  uStack_68 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb0a14; end: 105bb0ad3;  */

void FUN_105bb0a14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107cf9f24();
  lVar4 = 0x40;
  if ((int)uVar3 == 0) {
    lVar4 = 0x38;
  }
  uVar5 = *(undefined8 *)((long)&PTR_PTR_110a089d8 + lVar4);
  _objc_retain(uVar5);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_105bb0ad4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar2,param_2,uVar5,uVar3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105bb0ad4; end: 105bb0c5f;  */

void FUN_105bb0ad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105baead0;
  uStack_60 = 0x105baeae0;
  uStack_58 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb0c60; end: 105bb0ec3;  */

void FUN_105bb0c60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
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
  
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105baead0;
  uStack_70 = 0x105baeae0;
  uStack_68 = 0;
  uVar4 = uVar6;
  puStack_88 = &uStack_90;
  func_0x00010bf96da0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105bb3230;
  puStack_a0 = &UNK_110854c00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105bb3294;
  puStack_d0 = &UNK_110854ad0;
  puStack_c0 = &uStack_90;
  puStack_98 = &uStack_90;
  _objc_retain(uVar6);
  uStack_c8 = uVar6;
  func_0x00010c0c0020(uVar4);
  _objc_release(uVar4);
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x2020000000;
  uStack_f0 = 0;
  uVar4 = uVar6;
  func_0x00010bef0e60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcd20();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c2e18;
  _objc_alloc(PTR_PTR_1126c2e18);
  func_0x00010bffdb40();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar6);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 105bb0ec4; end: 105bb104b;  */

void FUN_105bb0ec4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef0c80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x000107cfeed8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96da0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_105baf8a8(uVar2,uVar3,1,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105bb104c; end: 105bb10cb;  */

void FUN_105bb104c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_105bb0888(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb10cc; end: 105bb127b;  */

void FUN_105bb10cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105baead0;
  uStack_60 = 0x105baeae0;
  uStack_58 = 0;
  uVar2 = uVar4;
  func_0x00010bf96da0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  _objc_retain(uVar4);
  func_0x00010c0c0020(uVar2);
  _objc_release(uVar2);
  uVar5 = puStack_78[5];
  _objc_retain(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar4);
  func_0x00010c01b460();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(uVar5);
  return;
}



/* Entry: 105bb127c; end: 105bb12fb;  */

void FUN_105bb127c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_105bb0888(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb12fc; end: 105bb144b;  */

void FUN_105bb12fc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bef4a80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bef4a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    _objc_retain(lVar1);
    puVar2 = &UNK_10f32dce6;
    func_0x0001000ba800(&UNK_10f32dce6);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126c2e20;
    _objc_alloc(PTR_PTR_1126c2e20);
    func_0x00010bff1de0();
    func_0x00010c01b460();
    _objc_release(puVar4);
    func_0x0001000e2a84(puVar2);
    _objc_release(lVar1);
    _objc_release(uVar6);
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar6);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb144c; end: 105bb163b;  */

void FUN_105bb144c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010bf25ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bf960(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb163c; end: 105bb173b;  */

void FUN_105bb163c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_105bb0888(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb173c; end: 105bb198b;  */

void FUN_105bb173c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105baead0;
  uStack_60 = 0x105baeae0;
  uStack_58 = 0;
  uVar4 = uVar6;
  puStack_78 = &uStack_80;
  func_0x00010bf96da0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105bb3488;
  puStack_90 = &UNK_110854c00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105bb34ec;
  puStack_c0 = &UNK_110854ad0;
  puStack_b0 = &uStack_80;
  puStack_88 = &uStack_80;
  _objc_retain(uVar6);
  uStack_b8 = uVar6;
  func_0x00010c0c0020(uVar4);
  _objc_release(uVar4);
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  uVar4 = uVar6;
  func_0x00010bef0c80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfe20();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c2e18;
  _objc_alloc(PTR_PTR_1126c2e18);
  func_0x00010bffdb40();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar6);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  return;
}



/* Entry: 105bb198c; end: 105bb1b0f;  */

void FUN_105bb198c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105baead0;
  uStack_50 = 0x105baeae0;
  uStack_48 = 0;
  uVar2 = uVar3;
  func_0x00010bf96da0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  func_0x00010c0c0020(uVar2);
  _objc_release(uVar2);
  if (puStack_68[5] == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(uVar3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar5;
  _objc_release(uVar3);
  return;
}



/* Entry: 105bb1b10; end: 105bb1bcf;  */

void FUN_105bb1b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = uVar4;
  FUN_105bb0054(uVar4,0,0,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_2);
  func_0x00010c01b460();
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb1bd0; end: 105bb1e2b;  */

void FUN_105bb1bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = &UNK_10f32dc53;
  func_0x0001000ba800(&UNK_10f32dc53);
  uVar2 = param_1;
  FUN_105bae104();
  if ((int)uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_1);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105baead0;
    uStack_70 = 0x105baeae0;
    uStack_68 = 0;
    uVar2 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0020();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf9caa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c2d20;
    _objc_alloc(PTR_PTR_1126c2d20);
    uVar2 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25be80(uVar3);
    func_0x00010c270aa0(uVar3);
    func_0x00010c03d560(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar4);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(param_1);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105bb1e2c; end: 105bb1f8f;  */

undefined8 FUN_105bb1e2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puVar1 = &UNK_10f32dc7c;
  func_0x0001000ba800(&UNK_10f32dc7c);
  uVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bec110();
  _objc_release(uVar2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar2 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar2);
  uVar2 = puStack_58[3];
  __Block_object_dispose(&uStack_60,8);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105bb1f90; end: 105bb2087;  */

void FUN_105bb1f90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c26e7a0();
  if ((int)lVar1 == 3) {
    lVar1 = param_2;
    func_0x00010bf5b820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf15520();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((*(char *)(param_1 + 0x28) != '\x01') || ((int)lVar2 == 0)) goto LAB_105bb2024;
    uVar4 = 2;
  }
  else {
    _objc_release(lVar3);
LAB_105bb2024:
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2;
      func_0x000108f47298();
    }
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar3;
    if ((*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) != 0) ||
       (lVar3 = param_2, func_0x00010c102000(), (int)lVar3 == 0)) goto LAB_105bb2070;
    uVar4 = 4;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar4;
LAB_105bb2070:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb2088; end: 105bb2107;  */

void FUN_105bb2088(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c261460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb2108; end: 105bb2127;  */

void FUN_105bb2108(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 105bb2128; end: 105bb2243;  */

double FUN_105bb2128(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f32dc9b;
  func_0x0001000ba800(&UNK_10f32dc9b);
  func_0x00010c0992a0(PTR_PTR_1126c2e00);
  func_0x00010c23d0a0(param_4);
  param_1 = param_1 + param_2;
  dVar3 = param_1 * 1.5 - param_1;
  dVar2 = 30.0;
  if (dVar3 <= 30.0) {
    dVar2 = dVar3;
  }
  dVar2 = (double)(float)(int)(param_1 + dVar2);
  if (dVar2 <= 60.0) {
    dVar2 = 60.0;
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return dVar2;
}



/* Entry: 105bb2244; end: 105bb231b;  */

void FUN_105bb2244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105bb231c;
  puStack_48 = &UNK_1108da470;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100504554(param_1,&puStack_60);
  uVar1 = param_1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb231c; end: 105bb2647;  */

void FUN_105bb231c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  puVar13 = PTR_PTR_1126c29a8;
  _objc_retain(param_2);
  _objc_opt_class(puVar13);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar13);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_105baead0;
    uStack_78 = 0x105baeae0;
    uStack_70 = 0;
    uVar4 = param_2;
    func_0x00010bfa3920(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf86020();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    func_0x00010c0bd8e0(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = param_2;
    func_0x00010bf33f20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bfa3920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf0e4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bfa3920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c1409a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010bfa3920();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar13);
    _objc_retainAutoreleasedReturnValue();
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
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105bb2648; end: 105bb2793;  */

void FUN_105bb2648(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  
  func_0x00010c281c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107cff210();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x20);
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      uVar4 = 1;
      lVar5 = 0x30;
      goto LAB_105bb2720;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  lVar5 = 0x28;
LAB_105bb2720:
  *(undefined1 *)(*(long *)(*(long *)(param_1 + lVar5) + 8) + 0x18) = uVar4;
  return;
}



/* Entry: 105bb2794; end: 105bb27af;  */

void FUN_105bb2794(void)

{
  return;
}



/* Entry: 105bb27b0; end: 105bb28b3;  */

void FUN_105bb27b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c2ce8;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c281c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c06f680(*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0051c0();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb28b4; end: 105bb28cf;  */

void FUN_105bb28b4(void)

{
  return;
}



/* Entry: 105bb28d0; end: 105bb298f;  */

void FUN_105bb28d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c2e08;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c281c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c005160();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb2990; end: 105bb29ab;  */

void FUN_105bb2990(void)

{
  return;
}



/* Entry: 105bb29ac; end: 105bb2a57;  */

void FUN_105bb29ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb2a58; end: 105bb2c77;  */

void FUN_105bb2a58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar6 = PTR_PTR_1126c2cc8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_105bb0054(uVar5,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23cca0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb2c78; end: 105bb2d67;  */

void FUN_105bb2c78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107cfa0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126c2cc8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  func_0x00010c0d1f00(puVar5,param_2,uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar5;
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105bb2d68; end: 105bb2e83;  */

void FUN_105bb2d68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
  }
  puVar2 = PTR_PTR_1126c2cd0;
  func_0x00010c244900();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined **)(lVar1 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb2e84; end: 105bb2ff3;  */

void FUN_105bb2e84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar7 = PTR_PTR_1126c2980;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010901d7c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96da0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cf94b0();
  func_0x000100bf0d4c(param_2,0);
  _objc_release(param_2);
  func_0x00010c244920();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar7;
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb2ff4; end: 105bb322f;  */

void FUN_105bb2ff4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126c2980;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf5c0(puVar3,param_2,uVar2,0,*(undefined1 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb3230; end: 105bb3293;  */

void FUN_105bb3230(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb3294; end: 105bb3303;  */

void FUN_105bb3294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b01c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf680(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb3304; end: 105bb3347;  */

void FUN_105bb3304(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf28160();
  uVar1 = 1;
  if (param_2 == 1) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = uVar1;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  return;
}



/* Entry: 105bb3348; end: 105bb334b;  */

void FUN_105bb3348(void)

{
  return;
}



/* Entry: 105bb334c; end: 105bb3417;  */

void FUN_105bb334c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126c2d38;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfa3d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105bb3418; end: 105bb3487;  */

void FUN_105bb3418(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126c2d38;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf600(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb3488; end: 105bb34eb;  */

void FUN_105bb3488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb34ec; end: 105bb355b;  */

void FUN_105bb34ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b01c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf680(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb355c; end: 105bb359f;  */

void FUN_105bb355c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf28160();
  uVar1 = 1;
  if (param_2 == 1) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = uVar1;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  return;
}



/* Entry: 105bb35a0; end: 105bb372f;  */

void FUN_105bb35a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf50580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100504554();
  _objc_release(lVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((((param_2 != 0) && (lVar4 != 0)) && (*(long *)(param_1 + 0x28) != 0)) &&
     ((lVar1 = lVar3, func_0x00010bf529e0(), lVar1 != 0 && (lVar2 != 0)))) {
    puVar5 = PTR_PTR_1126c2d40;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010bfcef60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018a60();
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb3730; end: 105bb37ef;  */

void FUN_105bb3730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb37f0; end: 105bb38b3;  */

void FUN_105bb37f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_3);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  func_0x000107cf7ddc(param_4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000108ef620c(param_1,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105bb38b4; end: 105bb3e8f;  */

void FUN_105bb38b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lStack_248;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  func_0x00010bf070e0(puVar3);
  func_0x00010bf529e0();
  lVar13 = param_2;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain();
  lStack_248 = lVar13;
  func_0x00010bf52a60();
  if (lStack_248 != 0) {
    lVar14 = *plStack_140;
    do {
      lVar15 = 0;
      do {
        if (*plStack_140 != lVar14) {
          _objc_enumerationMutation(lVar13);
        }
        puVar4 = PTR_PTR_1126c29a8;
        uVar16 = *(ulong *)(lStack_148 + lVar15 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar4);
        uVar5 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar4);
        uVar1 = uVar16;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar16);
        if (uVar1 != 0) {
          uStack_180 = 0;
          uStack_170 = 0x3032000000;
          pcStack_168 = FUN_105bb3e90;
          uStack_160 = 0x105bb3ea0;
          uStack_158 = 0;
          uVar5 = uVar16;
          puStack_178 = &uStack_180;
          func_0x00010bfa3920(uVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf86020();
          _objc_retainAutoreleasedReturnValue();
          puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1a0 = 0xc2000000;
          pcStack_198 = FUN_105bb3ea8;
          puStack_190 = &UNK_1108d7fe0;
          puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1d8 = 0xc2000000;
          pcStack_1d0 = FUN_105bb3ee8;
          puStack_1c8 = &UNK_1108da860;
          puStack_188 = &uStack_180;
          _objc_retain(param_4);
          uStack_1c0 = param_4;
          _objc_retain(param_5);
          uStack_1b8 = param_5;
          puStack_1b0 = &uStack_180;
          func_0x00010c0bd8e0(uVar6);
          _objc_release(uVar6);
          _objc_release(uVar5);
          uVar5 = uVar16;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x000107cf92c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar5 = uVar16;
          func_0x000105bb5a48();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(puVar3);
          func_0x00010bf070e0(puVar3);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(puVar3);
          puStack_208 = &uStack_210;
          uStack_210 = 0;
          uStack_200 = 0x3032000000;
          pcStack_1f8 = FUN_105bb3e90;
          uStack_1f0 = 0x105bb3ea0;
          uStack_1e8 = 0;
          func_0x00010bf50940(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bcde0();
          _objc_release(uVar16);
          lVar7 = puStack_208[5];
          func_0x00010c08fa60();
          if (lVar7 != 0) {
            uVar8 = param_3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0f3e20();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010bef2c20();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(puVar3);
            _objc_release(puVar12);
            _objc_release(uVar11);
          }
          func_0x00010bf070e0(puVar3);
          __Block_object_dispose(&uStack_210,8);
          _objc_release(uStack_1e8);
          _objc_release(puVar4);
          _objc_release(uVar5);
          _objc_release(uVar6);
          _objc_release(uStack_1b8);
          _objc_release(uStack_1c0);
          __Block_object_dispose(&uStack_180,8);
          _objc_release(uStack_158);
        }
        _objc_release(uVar1);
        lVar15 = lVar15 + 1;
      } while (lStack_248 != lVar15);
      lStack_248 = lVar13;
      func_0x00010bf52a60();
    } while (lStack_248 != 0);
  }
  _objc_release(lVar13);
  func_0x00010bf070e0(puVar3);
  _objc_release(lVar13);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_210,8);
  lVar13 = 8;
  __Block_object_dispose(&uStack_180);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = 0;
  return;
}



/* Entry: 105bb3e90; end: 105bb3ea7;  */

void FUN_105bb3e90(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bb3ea8; end: 105bb3ee7;  */

void FUN_105bb3ea8(long param_1,undefined8 param_2)

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



/* Entry: 105bb3ee8; end: 105bb3fab;  */

void FUN_105bb3ee8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_3);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  func_0x000107cf7ddc(param_4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000108ef620c(param_1,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105bb3fac; end: 105bb3fe3;  */

void FUN_105bb3fac(long param_1,undefined8 param_2)

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



/* Entry: 105bb3fe4; end: 105bb3fef; -[SCFriendsFeedCellViewModel reusableCellIdentifier] */

undefined ** FUN_105bb3fe4(void)

{
  return &PTR____CFConstantStringClassReference_110e20798;
}



/* Entry: 105bb3ff0; end: 105bb40f7; -[SCFriendsFeedCellViewModel hasUnreadMessages] */

ulong FUN_105bb3ff0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x000105bb4f38();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bfa3920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      func_0x00010bfa3920(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_1);
    }
    else {
      uVar6 = 1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 105bb40f8; end: 105bb41b7; -[SCFriendsFeedCellViewModel isGroupConversation] */

undefined1 FUN_105bb40f8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105bb41b8; end: 105bb41cb;  */

void FUN_105bb41b8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105bb41cc; end: 105bb42bf; -[SCFriendsFeedCellViewModel shouldAllowTapToRetryOnCell] */

ulong FUN_105bb41cc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    func_0x00010bfa3920(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  else {
    uVar6 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 105bb42c0; end: 105bb4303; -[SCFriendsFeedCellViewModel tapActionModel] */

void FUN_105bb42c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4304; end: 105bb4347; -[SCFriendsFeedCellViewModel doubleTapActionModel] */

void FUN_105bb4304(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf883e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4348; end: 105bb438b; -[SCFriendsFeedCellViewModel longPressActionModel] */

void FUN_105bb4348(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb438c; end: 105bb43cf; -[SCFriendsFeedCellViewModel avatarTapActionModel] */

void FUN_105bb438c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf131e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb43d0; end: 105bb4413; -[SCFriendsFeedCellViewModel primaryButtonTapActionModel] */

void FUN_105bb43d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c112c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4414; end: 105bb4457; -[SCFriendsFeedCellViewModel streakRestoreTapActionModel] */

void FUN_105bb4414(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4458; end: 105bb45a3; -[SCFriendsFeedCellViewModel shouldDisableFeedSwiping] */

uint FUN_105bb4458(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bfd5ca0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bfa3920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010bfa3920();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126c2998;
      _objc_opt_class(PTR_PTR_1126c2998);
      uVar1 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      _objc_release(uVar3);
      if (((uVar1 & 1) == 0) || (uVar3 == 0)) {
        func_0x00010bfa3920(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c268c60();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(param_1);
        puVar4 = PTR_PTR_1126c2cd0;
        _objc_opt_class(PTR_PTR_1126c2cd0);
        uVar1 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar4);
        _objc_release(uVar2);
        return (uint)uVar1 & (uint)(uVar2 != 0);
      }
    }
  }
  return 1;
}



/* Entry: 105bb45a4; end: 105bb45e7; -[SCFriendsFeedCellViewModel cellHeight] */

undefined8 FUN_105bb45a4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33e20();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105bb45e8; end: 105bb462b; -[SCFriendsFeedCellViewModel displayNameViewModel] */

void FUN_105bb45e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf86020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb462c; end: 105bb466f; -[SCFriendsFeedCellViewModel attributedSublabelText] */

void FUN_105bb462c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0e4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4670; end: 105bb46bb; -[SCFriendsFeedCellViewModel isSubLabelTappable] */

bool FUN_105bb4670(long param_1)

{
  long lVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c25e660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 105bb46bc; end: 105bb46ff; -[SCFriendsFeedCellViewModel truncatedSubstringViewModel] */

void FUN_105bb46bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4700; end: 105bb4743; -[SCFriendsFeedCellViewModel attributedTrailingTextString] */

void FUN_105bb4700(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0e6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4744; end: 105bb4787; -[SCFriendsFeedCellViewModel separatorFont] */

void FUN_105bb4744(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15e480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4788; end: 105bb47cb; -[SCFriendsFeedCellViewModel friendsFeedAvatarConfiguration] */

void FUN_105bb4788(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfba6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb47cc; end: 105bb480f; -[SCFriendsFeedCellViewModel friendsFeedAvatarViewModel] */

void FUN_105bb47cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb9d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4810; end: 105bb484b; -[SCFriendsFeedCellViewModel isSpotlightStoryAvatar] */

undefined8 FUN_105bb4810(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07f600();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bb484c; end: 105bb488f; -[SCFriendsFeedCellViewModel friendmojiViewModel] */

void FUN_105bb484c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb9b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4890; end: 105bb48d3; -[SCFriendsFeedCellViewModel sublabelFriendmojiViewModel] */

void FUN_105bb4890(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ec00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb48d4; end: 105bb4917; -[SCFriendsFeedCellViewModel avatarViewFriendmojiViewModel] */

void FUN_105bb48d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf132e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4918; end: 105bb495b; -[SCFriendsFeedCellViewModel feedIcon] */

void FUN_105bb4918(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb495c; end: 105bb499f; -[SCFriendsFeedCellViewModel avatarIconInfo] */

void FUN_105bb495c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb49a0; end: 105bb49e3; -[SCFriendsFeedCellViewModel animationModel] */

void FUN_105bb49a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf03de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb49e4; end: 105bb4a57; -[SCFriendsFeedCellViewModel typingAnimationState] */

undefined8 FUN_105bb49e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb9d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1aa00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 105bb4a58; end: 105bb4a9b; -[SCFriendsFeedCellViewModel streakRestoreButtonViewModel] */

void FUN_105bb4a58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4a9c; end: 105bb4adf; -[SCFriendsFeedCellViewModel rightButtonViewModel] */

void FUN_105bb4a9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4ae0; end: 105bb4b1b; -[SCFriendsFeedCellViewModel officialBadgeType] */

undefined8 FUN_105bb4ae0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e1a60();
  _objc_release(param_1);
  return uVar1;
}


