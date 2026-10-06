/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ef8918; end: 107ef8ca7;  */

void FUN_107ef8918(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  ppuVar8 = &puStack_150;
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf64080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(uVar11);
  _objc_retain(lVar1);
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107ef86f4;
  puStack_a8 = &UNK_11084c9b0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_107ef8724;
  puStack_d8 = &UNK_1108b17b8;
  puStack_a0 = &uStack_98;
  puStack_90 = &uStack_98;
  _objc_retain(uVar11);
  uStack_d0 = uVar11;
  puStack_c8 = &uStack_98;
  func_0x00010c0be5c0(uVar2);
  uVar12 = uVar11;
  func_0x00010bf3e4a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf727a0();
  _objc_release(uVar3);
  _objc_release(uVar12);
  uVar12 = uVar11;
  func_0x00010c0b3760(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar12);
  if (lVar1 != 0) {
    lVar6 = lVar1;
    func_0x00010bf1f3c0(lVar1);
    func_0x00010b5f1acc(uVar5,lVar6);
  }
  _objc_release(uVar5);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(lVar1);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar2);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107ef8ca8;
  puStack_110 = &UNK_11086e228;
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uStack_108 = uVar11;
  _objc_retain(uVar12);
  uStack_100 = uVar12;
  _objc_retain(param_2);
  ppuVar7 = &puStack_128;
  uStack_f8 = param_2;
  _objc_retainBlock(ppuVar7);
  puStack_150 = puVar10;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_107ef8d74;
  puStack_138 = &UNK_11086e258;
  uStack_130 = param_2;
  _objc_retain(param_2);
  _objc_retainBlock(&puStack_150);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1ef00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f98a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28eb40(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(uStack_130);
  _objc_release(ppuVar7);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107ef8ca8; end: 107ef8d73;  */

void FUN_107ef8ca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d84b0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bf0b760(*(undefined8 *)(param_1 + 0x28));
  uVar3 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff4400(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ef8d74; end: 107ef8de3;  */

void FUN_107ef8d74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ef8de4; end: 107ef8fbf;  */

void FUN_107ef8de4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_b0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ef8fc0;
  puStack_68 = &UNK_110a12360;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar6;
  _objc_retain(uVar7);
  uStack_58 = uVar7;
  _objc_retain(param_2);
  ppuVar1 = &puStack_80;
  _objc_retainBlock(ppuVar1);
  puStack_b0 = puVar3;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x107ef904c;
  puStack_98 = &UNK_110a12390;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar6;
  _objc_retain(uVar7);
  uStack_88 = uVar7;
  _objc_retainBlock(&puStack_b0);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28eb40();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126d84b0;
  _objc_alloc(PTR_PTR_1126d84b0);
  func_0x00010bf0b760(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bff4400(puVar3);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ef8fc0; end: 107ef90d7;  */

void FUN_107ef8fc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec3d98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c236ee0(PTR_PTR_1126d82c0,param_2,puVar2,*(undefined8 *)(param_1 + 0x28),2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ef90d8; end: 107ef9c53;  */

/* WARNING: Possible PIC construction at 0x000107ef94cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107ef9b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ef94d0) */
/* WARNING: Removing unreachable block (ram,0x000107ef9b88) */

void FUN_107ef90d8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bf42aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf147c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(lVar3);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = param_2;
  func_0x00010c28e600();
  uVar6 = uVar4;
  func_0x00010bf16080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar6 != 0) && ((uVar2 & 1) == 0)) {
    uVar2 = param_2;
    func_0x00010c0c6c00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c2413a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf3e200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    uVar8 = uVar7;
    FUN_107effb70();
    if ((int)uVar8 == 0) {
      uVar8 = uVar6;
      func_0x00010c13a8c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bfad280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
    }
    else {
      uVar9 = uVar7;
      func_0x00010bfad160(uVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR_PTR_1126b5988;
    func_0x00010c09d8a0(PTR_PTR_1126b5988);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_1);
    lVar11 = lVar3;
    FUN_107ef832c(lVar3,5,uVar1,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(lVar3);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar1 == 2) {
      uVar1 = param_3;
      func_0x00010bf1ef00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0f98a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dc640();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar11);
      _objc_retain(0);
      _objc_retain(uVar1);
      _objc_retain(uVar2);
      _objc_retain(param_3);
      puVar5 = PTR_PTR_1126ae6b8;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_107ef8de4;
      puStack_d8 = &UNK_110a123c0;
      uStack_b0 = 0;
      lStack_d0 = lVar11;
      uStack_c8 = param_3;
      uStack_c0 = uVar1;
      uStack_b8 = uVar2;
      _objc_retain(0);
      _objc_retain(uVar2);
      _objc_retain(uVar1);
      _objc_retain(param_3);
      _objc_retain(lVar11);
      ppuVar17 = &puStack_f0;
      goto code_r0x00010bf54280;
    }
    func_0x00010b5fa088(param_1);
    func_0x00010b5fa4c8();
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x000107ef8804(lVar11,0,param_3,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    func_0x00010befa120(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar11);
    _objc_release(uVar7);
  }
  puVar10 = puVar5;
  if (uVar1 == 2) {
    func_0x00010bf51e00();
  }
  else {
    uVar1 = uVar4;
    func_0x00010c0ef580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      lVar3 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf3e200(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b5988;
      uVar7 = uVar6;
      func_0x00010bfad280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09d8a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      lVar11 = lVar3;
      FUN_107ef832c(lVar3,6,1,puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(lVar3);
      lVar3 = lVar11;
      func_0x000107ef8804(lVar11,0,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar11);
    }
    uVar1 = uVar4;
    func_0x00010c26d7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      lVar3 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_2;
      func_0x00010bf42aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2412e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b5988;
      uVar6 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeb740(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      lVar13 = lVar3;
      FUN_107ef832c(lVar3,9,1,puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(lVar11);
      _objc_release(lVar3);
      lVar3 = lVar13;
      func_0x000107ef8804(lVar13,0,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar13);
    }
    lVar13 = param_1;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar13);
        }
        uVar18 = *(undefined8 *)(lVar19 * 8);
        uVar20 = uVar18;
        func_0x00010bf0b760();
        if ((uint)uVar20 < 0x16) {
          func_0x00010b697928();
        }
        else {
          uVar20 = 0xfffffffffbadbeef;
        }
        lVar14 = param_1;
        func_0x00010c241220(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar18;
        func_0x00010bf0b760(uVar18);
        uVar1 = param_3;
        func_0x00010bf3e200(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c13a8e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126b5988;
        func_0x000108018d28(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bfad280(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09d8a0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar20);
        _objc_release(uVar6);
        lVar16 = lVar14;
        FUN_107ef832c(lVar14,uVar15,1,puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(lVar14);
        func_0x00010bf0b260(uVar18);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar16;
        func_0x000107ef8804(lVar16,uVar18,param_3,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(lVar14);
        _objc_release(uVar18);
        _objc_release(lVar16);
        lVar19 = lVar19 + 1;
      } while (lVar3 != lVar19);
      lVar3 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    func_0x00010bf51e00();
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (puVar10 == (undefined *)0x0) {
    ppuVar17 = &PTR___NSConcreteGlobalBlock_110a123f0;
    puVar5 = PTR_PTR_1126ae6b8;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    uVar4 = uVar2;
    FUN_107effdb0(puVar10,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(param_2);
    puVar12 = puVar5;
    func_0x00010c0b8600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar10);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
      return;
    }
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126af5d0;
    _objc_retain(uVar4);
    func_0x00010c2619e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(uVar4);
    _objc_release(puVar5);
    ppuVar17 = (undefined **)0x0;
    puVar5 = PTR_PTR_1126b0418;
  }
code_r0x00010bf54280:
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_create__1125b2a48,ppuVar17);
  return;
}



/* Entry: 107ef9c54; end: 107ef9cc3;  */

void FUN_107ef9c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107ef9cc4; end: 107ef9e0b;  */

void FUN_107ef9cc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107ef9e0c;
  uStack_60 = 0x107ef9e1c;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ef9e0c; end: 107ef9e23;  */

void FUN_107ef9e0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ef9e24; end: 107efa1ab;  */

void FUN_107ef9e24(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = &PTR___NSConcreteGlobalBlock_110a12430;
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110a12430,
                      &PTR___NSConcreteGlobalBlock_110a12470);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_retain(param_2);
  lVar15 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar15;
  func_0x000107ef865c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar15;
  func_0x000107ef865c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x000107ef865c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar15 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar15 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      iVar2 = (int)*(undefined8 *)(lVar16 * 8);
      func_0x00010c067ec0();
      FUN_107f00280();
      if (iVar2 != 0) {
        lVar8 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126d8480;
        _objc_retain();
        _objc_alloc(puVar9);
        lVar10 = lVar8;
        func_0x00010bf0b260(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760(lVar8);
        func_0x00010b697928();
        lVar11 = lVar8;
        func_0x00010bf4db80(lVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        lVar12 = lVar11;
        func_0x00010beec820(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4440(puVar9);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar8);
        func_0x00010befa120(puVar7);
        _objc_release(puVar9);
      }
      lVar16 = lVar16 + 1;
    } while (lVar15 != lVar16);
    lVar15 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar9 = PTR_PTR_1126d82d8;
  _objc_alloc();
  func_0x00010c02a140();
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar7;
  _objc_release(uVar3);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf0b760(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_numberWithInt__1126157f0,ppuVar13);
  return;
}



/* Entry: 107efa1ac; end: 107efa203;  */

void FUN_107efa1ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf0b760(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 107efa204; end: 107efa27b;  */

void FUN_107efa204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107f18e20(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107efa27c; end: 107efa43f;  */

void FUN_107efa27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d84b8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0105c0();
  uVar2 = 3;
  FUN_107f194d4(3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  FUN_107ef8454(param_1,param_4,param_2,puVar1,param_6,param_7,uVar2,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107efa440; end: 107efa4d7;  */

void FUN_107efa440(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_107effc6c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  if (param_2 == 0) {
    puVar2 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar2);
  }
  else {
    lVar1 = param_2;
    func_0x000107f18f1c(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107efa4d8; end: 107efa5b7;  */

void FUN_107efa4d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d8470;
  _objc_retain(param_2);
  func_0x00010c261b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d8358;
  func_0x00010bf3e420(PTR_PTR_1126d8358);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010c2a7f00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2bc140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107efa5b8; end: 107efa853;  */

void FUN_107efa5b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar11 = param_1;
  func_0x00010bf67b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c28ec20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bf67b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar1 = lVar11;
  func_0x00010c0dba00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf529e0(lVar2);
  _objc_release(lVar13);
  _objc_release(lVar1);
  _objc_release(lVar11);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(lVar2);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d8488;
  _objc_alloc();
  func_0x00010c059c60();
  puVar6 = PTR_PTR_1126d82d8;
  _objc_alloc();
  uVar9 = 0;
  func_0x00010c02a140();
  uStack_130 = 0;
  _objc_retain(lVar2);
  iVar8 = (int)auStack_e8;
  lVar11 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c1d0640(puVar4);
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    iVar8 = (int)auStack_e8;
    lVar11 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar7 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  puVar4 = puVar7;
  func_0x00010bef7f60(puVar3);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(0);
  _objc_retain(uVar9);
  _objc_retain(lVar2);
  _objc_retain(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  lVar11 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      puVar5 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar5 != (undefined *)0x0) &&
         ((iVar8 == 0 || (puVar6 = puVar5, func_0x00010c15e520(), puVar6 != (undefined *)0x0)))) {
        puVar6 = PTR_PTR_1126d8280;
        func_0x00010c2b1ce0(PTR_PTR_1126d8280);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15e520(puVar5);
        func_0x00010c1fce80(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf97200(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1968c0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar5;
        func_0x00010bf9e140(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199560(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar5;
        func_0x00010bfbdda0(puVar5);
        FUN_107ee8bec((long)(int)puVar7);
        func_0x00010c196ba0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010bf977c0(puVar5);
        func_0x00010c196b20(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c18b740(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126d84c0;
  func_0x00010c2b1cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1966e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(lVar2);
  ppuVar10 = &PTR____CFConstantStringClassReference_110ec35f8;
  puVar4 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_retain(0);
  _objc_retain(0);
  func_0x00010c25f400(uVar9);
  _objc_release(uVar9);
  _objc_release(uStack_130);
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(0);
  _objc_release(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126d84c8;
  _objc_retain(ppuVar10);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar10);
  puVar5 = puVar4;
  func_0x00010c15f8c0();
  puVar3 = PTR_PTR_1126d84d0;
  if (puVar5 == (undefined *)0x7d0) {
    puVar3 = puVar4;
    func_0x00010bf96fc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar11 = *(long *)(puVar6 + 0x20);
    puVar7 = PTR_PTR_1126d84d0;
    func_0x00010c261920(PTR_PTR_1126d84d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar11 + 0x10))(lVar11,puVar7);
  }
  else {
    lVar11 = *(long *)(puVar6 + 0x20);
    func_0x00010c15f8c0(puVar4);
    puVar5 = puVar4;
    func_0x00010bf96fc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf148e0(puVar4);
    puVar7 = puVar4;
    func_0x00010bf66200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar6,puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar11 + 0x10))(lVar11,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107efa854; end: 107efac8f;  */

void FUN_107efa854(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_1);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar10 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar3 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar3 != (undefined *)0x0) &&
         ((param_4 == 0 || (puVar4 = puVar3, func_0x00010c15e520(), puVar4 != (undefined *)0x0)))) {
        puVar4 = PTR_PTR_1126d8280;
        func_0x00010c2b1ce0(PTR_PTR_1126d8280);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15e520(puVar3);
        func_0x00010c1fce80(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf97200(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1968c0(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = puVar3;
        func_0x00010bf9e140(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199560(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = puVar3;
        func_0x00010bfbdda0(puVar3);
        FUN_107ee8bec((long)(int)puVar5);
        func_0x00010c196ba0(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010bf977c0(puVar3);
        func_0x00010c196b20(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c18b740(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf21f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    lVar10 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d84c0;
  func_0x00010c2b1cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1966e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_1);
  ppuVar9 = &PTR____CFConstantStringClassReference_110ec35f8;
  puVar2 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_9;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_retain(param_10);
  _objc_retain(param_10);
  func_0x00010c25f400(param_7);
  _objc_release(param_7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(param_10);
  _objc_release(param_10);
  _objc_release(param_10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d84c8;
  _objc_retain(ppuVar9);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar9);
  puVar5 = puVar2;
  func_0x00010c15f8c0();
  puVar3 = PTR_PTR_1126d84d0;
  if (puVar5 == (undefined *)0x7d0) {
    puVar3 = puVar2;
    func_0x00010bf96fc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar10 = *(long *)(puVar4 + 0x20);
    puVar7 = PTR_PTR_1126d84d0;
    func_0x00010c261920(PTR_PTR_1126d84d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))(lVar10,puVar7);
  }
  else {
    lVar10 = *(long *)(puVar4 + 0x20);
    func_0x00010c15f8c0(puVar2);
    puVar5 = puVar2;
    func_0x00010bf96fc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf148e0(puVar2);
    puVar7 = puVar2;
    func_0x00010bf66200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))(lVar10,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107efac90; end: 107efadff;  */

void FUN_107efac90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d84c8;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR_PTR_1126d84d0;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar6 = *(long *)(param_1 + 0x20);
    puVar4 = PTR_PTR_1126d84d0;
    func_0x00010c261920(PTR_PTR_1126d84d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar4);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107efae00; end: 107efae47;  */

void FUN_107efae00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d84d0;
  func_0x00010c0d7b00(PTR_PTR_1126d84d0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107efae48; end: 107efb0ff;  */

void FUN_107efae48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107efb100;
  uStack_60 = 0x107efb110;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar17);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
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
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107efb100; end: 107efb117;  */

void FUN_107efb100(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107efb118; end: 107efb807;  */

void FUN_107efb118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  puVar5 = PTR_PTR_1126d8490;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar22 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar24 = *(undefined8 *)(param_1 + 0x68);
  uVar23 = *(undefined8 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    uVar21 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar17);
    _objc_retain(uVar1);
    _objc_retain(uVar20);
    _objc_retain(uVar2);
    _objc_retain(uVar22);
    _objc_retain(uVar3);
    _objc_retain(uVar23);
    _objc_retain(uVar21);
    _objc_alloc();
    func_0x00010c00b840();
    puVar6 = PTR_PTR_1126d8510;
    _objc_alloc();
    uVar7 = uVar21;
    func_0x00010bf173a0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
    uVar21 = uVar17;
    func_0x00010c0b3760(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar17;
    func_0x00010bface80(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010c0f98a0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a3a0();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126d8498;
    _objc_alloc();
    uVar7 = uVar17;
    func_0x00010c0c7dc0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar17;
    func_0x00010c0b3760(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a360();
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(uVar7);
    puVar10 = PTR_PTR_1126d84a0;
    _objc_alloc();
    func_0x00010c00b860(uVar24);
    puVar4 = PTR_PTR_1126d8518;
    _objc_alloc();
    uVar7 = uVar17;
    func_0x00010bf3e200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar17;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010c0c7dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar17;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff2a0(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar3);
    _objc_release(uVar22);
    _objc_release(uVar2);
    _objc_release(uVar20);
    _objc_release(uVar1);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(uVar7);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
  }
  else {
    _objc_retain(uVar17);
    _objc_retain(uVar1);
    _objc_retain(uVar20);
    _objc_retain(uVar2);
    _objc_retain(uVar22);
    _objc_retain(uVar3);
    _objc_retain(uVar23);
    _objc_alloc();
    func_0x00010c00b840();
    puVar6 = PTR_PTR_1126d8498;
    _objc_alloc();
    uVar7 = uVar17;
    func_0x00010c0c7dc0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar17;
    func_0x00010c0b3760(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a360();
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126d84a0;
    _objc_alloc();
    func_0x00010c00b860(uVar24);
    puVar10 = PTR_PTR_1126d8518;
    _objc_alloc();
    uVar7 = uVar17;
    func_0x00010bf3e200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar17;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010c0c7dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar17;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff2a0(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar3);
    _objc_release(uVar22);
    _objc_release(uVar2);
    _objc_release(uVar20);
    _objc_release(uVar1);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(uVar7);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  lVar19 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  lVar16 = *(long *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  uVar22 = *(undefined8 *)(lVar16 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0b3760(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_2;
  FUN_107f1949c(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0a1700(uVar17);
  _objc_release(uVar20);
  _objc_release(uVar17);
  _objc_release(uVar22);
  uVar17 = *(undefined8 *)(lVar16 + 0x28);
  FUN_107efb8e4(*(undefined8 *)(lVar16 + 0x70),uVar17,*(undefined8 *)(lVar16 + 0x30),
                *(undefined8 *)(lVar16 + 0x38),*(undefined8 *)(lVar16 + 0x40),
                *(undefined8 *)(lVar16 + 0x48),*(undefined8 *)(lVar16 + 0x50),
                *(undefined8 *)(lVar16 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  lVar18 = *(long *)(*(long *)(lVar16 + 0x60) + 8);
  uVar20 = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = uVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar20);
  return;
}



/* Entry: 107efb808; end: 107efb8e3;  */

void FUN_107efb808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_107f1949c(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0a1700(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_107efb8e4(*(undefined8 *)(param_1 + 0x70),uVar1,*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107efb8e4; end: 107efc383;  */

void FUN_107efb8e4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined **ppuVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uStack_148;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar1 = PTR_PTR_1126d8490;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = param_3;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c00b840();
  puVar2 = PTR_PTR_1126d84f8;
  _objc_alloc();
  uVar3 = param_2;
  func_0x00010bf3e200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff280();
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
  puVar15 = PTR_PTR_1126d8500;
  _objc_alloc();
  uVar3 = param_2;
  func_0x00010bf3e200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0b3760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0c7dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff2e0(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar16 = PTR_PTR_1126d8518;
  _objc_alloc();
  uVar3 = param_2;
  func_0x00010bf3e200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0c7dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = param_8 & 0xffffffffffffff00;
  uVar29 = param_4;
  uVar30 = param_5;
  uVar10 = uVar6;
  func_0x00010bfff2a0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  ppuVar27 = &puStack_a0;
  uVar28 = 4;
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar1;
  puStack_98 = puVar2;
  puStack_90 = puVar15;
  puStack_88 = puVar16;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar26);
    _objc_retain(ppuVar27);
    _objc_retain(uVar28);
    _objc_retain(uVar29);
    _objc_retain(uVar30);
    _objc_retain(uVar10);
    _objc_retain(uStack_148);
    _objc_retain(param_7);
    puVar2 = param_7;
    func_0x00010befb600();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010bf529e0();
    if (puVar17 < (undefined *)0x2) {
      puVar15 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_retain(puVar16);
      _objc_retain(uVar26);
      _objc_retain(ppuVar27);
      _objc_retain(uVar28);
      _objc_retain(uVar29);
      _objc_retain(uVar30);
      _objc_retain(uVar10);
      _objc_retain(uStack_148);
      _objc_retain(param_7);
      puVar20 = puVar1;
      func_0x00010c0c7dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar1;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar21;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar1;
      func_0x00010c0f98a0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar16;
      FUN_107f00410(param_1,puVar16,puVar20,param_7,puVar22,puVar24,uStack_148,uVar7 >> 8 & 0xff);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      _objc_retain(puVar16);
      _objc_retain(uVar10);
      _objc_retain(uStack_148);
      _objc_retain(uVar30);
      _objc_retain(uVar29);
      _objc_retain(uVar28);
      _objc_retain(ppuVar27);
      _objc_retain(uVar26);
      _objc_retain(puVar1);
      puVar17 = puVar25;
      func_0x00010c0b8600(puVar25);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(uVar10);
      _objc_release(uStack_148);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(ppuVar27);
      _objc_release(uVar26);
      _objc_release(puVar1);
      _objc_release(puVar16);
      _objc_release(uVar10);
      _objc_release(uStack_148);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(ppuVar27);
      _objc_release(uVar26);
      _objc_release(puVar1);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(param_7);
      _objc_release(puVar16);
    }
    else {
      puVar17 = puVar1;
      func_0x00010c0b3760(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = 0x1a;
      FUN_107f188fc(0x1a,0,param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      uVar19 = uVar18;
      FUN_107f1949c(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1700(puVar15);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(puVar15);
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126ae6b8;
      _objc_retain(puVar1);
      _objc_retain(uVar26);
      _objc_retain(ppuVar27);
      _objc_retain(uVar28);
      _objc_retain(uVar29);
      _objc_retain(uVar30);
      _objc_retain(uStack_148);
      func_0x00010bf54280(puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_148);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(ppuVar27);
      _objc_release(uVar26);
      puVar15 = puVar1;
    }
    _objc_release(puVar15);
    _objc_release(puVar2);
    _objc_release(uStack_148);
    _objc_release(uVar10);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(ppuVar27);
    _objc_release(uVar26);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 107efc384; end: 107efc433;  */

void FUN_107efc384(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_2);
  FUN_107efb8e4(uVar8,uVar6,uVar3,uVar1,uVar4,uVar2,uVar5,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107efc434; end: 107efc93f;  */

void FUN_107efc434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010befb620();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain();
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107efc940; end: 107efcb03;  */

void FUN_107efc940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(uVar1);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107efcb04; end: 107efd0bb;  */

void FUN_107efcb04(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
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
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  long lVar27;
  undefined8 uVar28;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf6f520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      _objc_release(lVar3);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c0ce1e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar26 = PTR_PTR_1126d8490;
      if (lVar5 != 0) {
        uVar25 = *(undefined8 *)(param_1 + 0x28);
        uVar20 = *(undefined8 *)(param_1 + 0x30);
        uVar24 = *(undefined8 *)(param_1 + 0x38);
        uVar21 = *(undefined8 *)(param_1 + 0x40);
        uVar28 = *(undefined8 *)(param_1 + 0x58);
        uVar1 = *(undefined8 *)(param_1 + 0x48);
        uVar2 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain();
        _objc_retain(uVar1);
        _objc_retain(uVar21);
        _objc_retain(uVar24);
        _objc_retain(uVar20);
        _objc_retain(uVar25);
        _objc_alloc();
        func_0x00010c00b840();
        puVar6 = PTR_PTR_1126d84f8;
        _objc_alloc();
        uVar7 = uVar25;
        func_0x00010bf3e200();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar25;
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bfcdfa0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar25;
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c293fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar25;
        func_0x00010c0f98a0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar25;
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar17;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfff280();
        _objc_release(uVar21);
        _objc_release(uVar20);
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
        puVar19 = PTR_PTR_1126d8500;
        _objc_alloc();
        uVar20 = uVar25;
        func_0x00010bf3e200();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar25;
        func_0x00010c0b3760(uVar25);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar25;
        func_0x00010c0c7dc0(uVar25);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar25;
        func_0x00010c0f98a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar25;
        func_0x00010bface80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfff2e0(uVar28);
        _objc_release(uVar2);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar21);
        _objc_release(uVar20);
        puVar22 = PTR_PTR_1126d8508;
        _objc_alloc();
        uVar20 = uVar25;
        func_0x00010c0f98a0(uVar25);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar25);
        uVar25 = uVar20;
        func_0x00010c269d40(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0089c0();
        _objc_release(uVar1);
        _objc_release(uVar24);
        _objc_release(uVar25);
        _objc_release(uVar20);
        puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
        _objc_release(puVar19);
        _objc_release(puVar6);
        _objc_release(puVar26);
        func_0x00010c0d9840(param_2);
        goto LAB_107efd050;
      }
    }
  }
  puVar23 = PTR_PTR_1126d8508;
  _objc_alloc();
  uVar24 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f98a0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0089c0();
  _objc_release(uVar25);
  _objc_release(uVar24);
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(puVar26);
LAB_107efd050:
  _objc_release(puVar23);
  puVar26 = PTR_PTR_1126b0418;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
    ___stack_chk_fail();
    _objc_retain();
    puVar26 = PTR_PTR_1126bc828;
    func_0x00010bf5aa00(PTR_PTR_1126bc828);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar26;
    func_0x00010c0fd900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f00(param_2);
    _objc_release(puVar23);
    _objc_release(puVar26);
    puVar26 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 107efd0bc; end: 107efd133;  */

void FUN_107efd0bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bc828;
  func_0x00010bf5aa00(PTR_PTR_1126bc828);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0fd900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203f00(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107efd134; end: 107efd8bb;  */

undefined **
FUN_107efd134(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined1 *puVar22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *unaff_x26;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *unaff_x27;
  undefined **ppuVar27;
  undefined **unaff_x28;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined auStack_6d8 [128];
  long lStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined *puStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined *puStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  undefined **ppuStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_390;
  undefined1 ***pppuStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar27 = param_2;
  ppuVar14 = param_3;
  ppuVar20 = param_4;
  _objc_retain();
  iVar12 = (int)ppuVar14;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != (undefined **)0x0) {
    unaff_x23 = (undefined **)PTR_PTR_1126bc808;
    ppuVar14 = param_2;
    ppuVar20 = param_3;
    func_0x00010bfa6fc0();
    iVar12 = (int)ppuVar14;
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = unaff_x23;
    func_0x00010bf529e0();
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar14 = unaff_x23;
      func_0x00010c12c1a0(param_1);
      iVar12 = (int)ppuVar14;
    }
    _objc_release(unaff_x23);
  }
  ppuVar14 = param_4;
  func_0x00010bf529e0();
  if (ppuVar14 != (undefined **)0x0) {
    unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_138 = param_3;
    _objc_opt_new();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_4);
    param_5 = (undefined **)0x10;
    ppuVar14 = param_4;
    func_0x00010bf52a60();
    if (ppuVar14 != (undefined **)0x0) {
      unaff_x27 = (undefined *)*puStack_120;
      unaff_x28 = &PTR_PTR_1126bc000;
      do {
        ppuVar20 = (undefined **)0x0;
        do {
          if ((undefined *)*puStack_120 != unaff_x27) {
            _objc_enumerationMutation(param_4);
          }
          puVar23 = PTR_PTR_1126bc820;
          func_0x00010bf5a960();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar23;
          func_0x00010c0fd880();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x23);
          _objc_release(unaff_x26);
          _objc_release(puVar23);
          ppuVar20 = (undefined **)((long)ppuVar20 + 1);
        } while (ppuVar14 != ppuVar20);
        param_5 = (undefined **)0x10;
        ppuVar14 = param_4;
        func_0x00010bf52a60();
      } while (ppuVar14 != (undefined **)0x0);
    }
    _objc_release(param_4);
    unaff_x24 = unaff_x23;
    func_0x00010bf51e00();
    unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(unaff_x23);
    func_0x00010bfed320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = unaff_x24;
    ppuVar20 = unaff_x25;
    func_0x00010c066780(param_1);
    iVar12 = (int)ppuVar14;
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    param_3 = ppuStack_138;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  uStack_148 = 0x107efd37c;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar25 = ppuVar27;
  ppuVar8 = param_6;
  ppuStack_278 = ppuVar14;
  ppuStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = unaff_x23;
  ppuStack_170 = param_4;
  ppuStack_168 = param_3;
  ppuStack_160 = param_2;
  ppuStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar27);
  _objc_retain(ppuVar20);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (iVar12 != 0) {
    puVar23 = PTR_PTR_1126af4d0;
    func_0x00010bfa74e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar23;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
      func_0x00010c12e860(ppuVar20);
      func_0x00010c12e820(ppuVar20);
      func_0x00010c2ac260(param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar23);
  }
  puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_298 = param_5;
  ppuStack_290 = ppuVar27;
  ppuStack_288 = ppuVar20;
  _objc_opt_new();
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppuVar27 = ppuStack_278;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = (undefined **)0x10;
  ppuStack_280 = ppuVar27;
  func_0x00010bf52a60();
  if (ppuVar27 != (undefined **)0x0) {
    lVar16 = *plStack_260;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if (*plStack_260 != lVar16) {
          _objc_enumerationMutation(ppuStack_280);
        }
        unaff_x27 = PTR_PTR_1126af4d0;
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x27 != (undefined *)0x0) {
          unaff_x28 = (undefined **)PTR_PTR_1126bc7f8;
          func_0x00010bf35100();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7000();
          ppuVar14 = ppuStack_278;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          param_5 = ppuVar14;
          func_0x00010c0c6f20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = param_5;
          func_0x00010bf7ef60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c4520(unaff_x28);
          _objc_release(ppuVar20);
          _objc_release(param_5);
          puVar4 = unaff_x27;
          func_0x00010bfd9dc0();
          if ((int)puVar4 != 0) {
            ppuVar20 = ppuVar14;
            func_0x00010c0efe20();
            _objc_retainAutoreleasedReturnValue();
            param_5 = ppuVar20;
            func_0x00010bf7ef60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d7560(unaff_x28);
            _objc_release(param_5);
            _objc_release(ppuVar20);
          }
          func_0x00010befa120(puVar23);
          _objc_release(ppuVar14);
          _objc_release(unaff_x28);
        }
        _objc_release(unaff_x27);
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar27 != unaff_x24);
      ppuVar14 = (undefined **)0x10;
      ppuVar27 = ppuStack_280;
      func_0x00010bf52a60();
      unaff_x26 = (undefined *)0x0;
    } while (ppuVar27 != (undefined **)0x0);
  }
  _objc_release(ppuStack_280);
  puVar4 = puVar23;
  func_0x00010bf51e00(puVar23);
  ppuVar20 = ppuStack_298;
  func_0x00010c2a7f60(ppuStack_298);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  ppuVar27 = (undefined **)PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0(puVar23);
  func_0x00010bfed320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuStack_288;
  puVar4 = puVar23;
  ppuVar6 = ppuVar27;
  func_0x00010c0670a0(ppuStack_288);
  _objc_release(ppuVar27);
  _objc_release(puVar23);
  _objc_release(param_6);
  _objc_release(ppuVar20);
  _objc_release(ppuStack_290);
  ppuVar5 = ppuStack_278;
  _objc_release();
  param_1 = ppuVar21;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  param_1 = ppuVar6;
  ___stack_chk_fail();
  ppuStack_2c8 = ppuVar20;
  ppuStack_2c0 = ppuVar21;
  uStack_2a8 = 0x107efd6ec;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar21 = ppuVar25;
  ppuStack_300 = unaff_x28;
  puStack_2f8 = unaff_x27;
  puStack_2f0 = unaff_x26;
  puStack_2e8 = puVar23;
  ppuStack_2e0 = unaff_x24;
  ppuStack_2d8 = param_6;
  ppuStack_2d0 = param_5;
  ppuStack_2b8 = ppuVar27;
  ppuStack_2b0 = &puStack_150;
  _objc_retain(ppuVar25);
  _objc_retain(puVar4);
  _objc_retain(param_1);
  _objc_retain(ppuVar14);
  puVar23 = PTR_PTR_1126bc800;
  ppuVar20 = &PTR_PTR_1126bc000;
  _objc_retain(ppuVar5);
  ppuVar6 = ppuVar14;
  func_0x00010bfa71e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126bc828;
  ppuVar27 = &PTR_PTR_1126bc000;
  if (puVar23 != (undefined *)0x0) {
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_310 = puVar23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bec0(puVar15);
    _objc_release(puVar18);
    func_0x00010c210f20(param_1);
  }
  puVar15 = PTR_PTR_1126bc800;
  if (ppuVar25 == (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
    ppuVar6 = ppuVar14;
    func_0x00010bfa7180();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = ppuVar14;
    func_0x00010bfa71c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar18 = PTR_PTR_1126bc828;
  func_0x00010bf35120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  func_0x00010c203f40(puVar18);
  _objc_release(ppuVar5);
  func_0x00010c210f20(param_1);
  _objc_release(puVar18);
  _objc_release(puVar15);
  _objc_release(puVar23);
  _objc_release(ppuVar14);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_318 = FUN_107efd8bc;
  lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar21;
  ppuVar5 = ppuVar8;
  ppuStack_4a8 = ppuVar25;
  pppuStack_320 = &ppuStack_2b0;
  _objc_retain();
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar7);
  ppuStack_4b8 = ppuVar6;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar8);
  ppuVar25 = (undefined **)PTR_PTR_1126bc808;
  func_0x00010bfa7000();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar25;
  func_0x00010bf529e0();
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010c12e7e0(ppuVar7);
    func_0x00010bf6bea0(PTR_PTR_1126bc820);
  }
  puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_4c0 = ppuVar25;
  ppuStack_4b0 = ppuVar7;
  _objc_opt_new();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  ppuVar25 = ppuStack_4a8;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar25;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    lVar16 = *plStack_440;
    do {
      ppuVar27 = (undefined **)0x0;
      do {
        if (*plStack_440 != lVar16) {
          _objc_enumerationMutation(ppuVar25);
        }
        ppuVar20 = *(undefined ***)(lStack_448 + (long)ppuVar27 * 8);
        ppuVar7 = ppuVar21;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar4 = PTR_PTR_1126bc808;
        if (ppuVar7 == (undefined **)0x0) {
          func_0x00010bfa6f80();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR_PTR_1126bc820;
        }
        else {
          ppuVar7 = ppuVar21;
          func_0x00010c0e00e0(ppuVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa6fa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar7);
          puVar15 = PTR_PTR_1126bc820;
        }
        PTR_PTR_1126bc820 = puVar15;
        if (puVar4 != (undefined *)0x0) {
          func_0x00010bf350a0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7000();
          ppuVar20 = ppuStack_4a8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16aa40(puVar15);
          _objc_release(ppuVar20);
          func_0x00010befa120(puVar23);
          _objc_release(puVar15);
        }
        _objc_release(puVar4);
        ppuVar27 = (undefined **)((long)ppuVar27 + 1);
      } while (ppuVar6 != ppuVar27);
      ppuVar6 = ppuVar25;
      func_0x00010bf52a60();
      ppuVar27 = (undefined **)0x0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar25);
  puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0(puVar23);
  func_0x00010bfed320(puVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = ppuStack_4b0;
  func_0x00010c067060(ppuStack_4b0);
  _objc_release(puVar4);
  ppuVar25 = ppuStack_4c0;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_478 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_470 = 0xc2000000;
  pcStack_468 = FUN_107efdcb0;
  puStack_460 = &UNK_110a12550;
  ppuStack_458 = ppuStack_4c0;
  _objc_retain(ppuStack_4c0);
  puVar15 = puVar23;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puStack_4a0 = puVar4;
  uStack_498 = 0xc2000000;
  uStack_490 = 0x107efde1c;
  puStack_488 = &UNK_110a12550;
  puStack_480 = puVar23;
  _objc_retain(puVar23);
  ppuVar7 = ppuVar25;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuStack_4b8;
  func_0x00010c2a7f40(ppuStack_4b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac220(ppuVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(puStack_480);
  _objc_release(puVar15);
  _objc_release(ppuStack_458);
  _objc_release(puVar23);
  _objc_release(ppuVar25);
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar21);
  ppuVar17 = ppuStack_4a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_390) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuStack_510 = ppuVar25;
  ppuStack_500 = param_1;
  ppuStack_4e0 = ppuVar6;
  pcStack_4c8 = FUN_107efdcb0;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar14;
  ppuStack_520 = ppuVar20;
  ppuStack_518 = ppuVar27;
  puStack_508 = puVar23;
  ppuStack_4f8 = ppuVar8;
  ppuStack_4f0 = ppuVar7;
  ppuStack_4e8 = ppuVar21;
  puStack_4d8 = puVar15;
  pppuStack_4d0 = &pppuStack_320;
  _objc_retain(ppuVar14);
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  puStack_5e0 = (undefined8 *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  ppuVar17 = (undefined **)ppuVar17[4];
  _objc_retain(ppuVar17);
  ppuVar21 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar21 != (undefined **)0x0) {
    puVar23 = (undefined *)*puStack_5e0;
    do {
      ppuVar25 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_5e0 != puVar23) {
          _objc_enumerationMutation(ppuVar17);
        }
        ppuVar7 = *(undefined ***)(lStack_5e8 + (long)ppuVar25 * 8);
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar14;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        param_1 = ppuVar7;
        func_0x00010c0720c0();
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        if (((ulong)param_1 & 1) != 0) {
          ppuVar21 = (undefined **)0x0;
          goto LAB_107efddcc;
        }
        ppuVar25 = (undefined **)((long)ppuVar25 + 1);
      } while (ppuVar21 != ppuVar25);
      ppuVar21 = ppuVar17;
      func_0x00010bf52a60();
    } while (ppuVar21 != (undefined **)0x0);
  }
  ppuVar21 = (undefined **)0x1;
LAB_107efddcc:
  _objc_release(ppuVar17);
  ppuVar9 = ppuVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar21;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_720;
  uStack_5f8 = 0x107efde1c;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar6;
  ppuStack_650 = ppuVar20;
  ppuStack_648 = ppuVar27;
  ppuStack_640 = ppuVar25;
  puStack_638 = puVar23;
  ppuStack_630 = param_1;
  ppuStack_628 = ppuVar8;
  ppuStack_620 = ppuVar7;
  ppuStack_618 = ppuVar21;
  ppuStack_610 = ppuVar17;
  ppuStack_608 = ppuVar14;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar6);
  lStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  plStack_710 = (long *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  puVar18 = ppuVar9[4];
  _objc_retain(puVar18);
  puVar23 = auStack_6d8;
  puVar15 = (undefined *)0x10;
  puVar4 = puVar18;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar16 = *plStack_710;
    do {
      puVar26 = (undefined *)0x0;
      do {
        if (*plStack_710 != lVar16) {
          _objc_enumerationMutation(puVar18);
        }
        puVar22 = *(undefined1 **)(lStack_718 + (long)puVar26 * 8);
        ppuVar27 = ppuVar6;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar27;
        puVar13 = (undefined8 *)puVar22;
        func_0x00010c0720c0();
        _objc_release(puVar22);
        _objc_release(ppuVar27);
        if (((ulong)ppuVar14 & 1) != 0) {
          ppuVar27 = (undefined **)0x0;
          goto LAB_107efdf3c;
        }
        puVar26 = puVar26 + 1;
      } while (puVar4 != puVar26);
      puVar23 = auStack_6d8;
      puVar15 = (undefined *)0x10;
      puVar4 = puVar18;
      puVar13 = &uStack_720;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  ppuVar27 = (undefined **)0x1;
LAB_107efdf3c:
  _objc_release(puVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return ppuVar27;
  }
  ___stack_chk_fail();
  uVar2 = uStack_720;
  cVar3 = (char)lStack_718;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar27 = ppuVar11;
  _objc_retain();
  _objc_retain(ppuVar11);
  _objc_retain(puVar13);
  _objc_retain(puVar23);
  _objc_retain(puVar15);
  _objc_retain(ppuVar5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uVar2);
  if (ppuVar11 == (undefined **)0x0) {
    puVar4 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar18;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar4);
    param_1 = (undefined **)PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(param_1);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = param_1;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar4);
    _objc_release(puVar18);
    _objc_release(ppuVar14);
    _objc_release(puVar4);
    _objc_release(puVar26);
  }
  else {
    param_1 = (undefined **)PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar14 = ppuVar6;
  func_0x00010bf12220(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500(param_1);
  _objc_release(ppuVar14);
  func_0x00010c0f7a20(param_1);
  func_0x00010c1da4e0(param_1);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar23);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(ppuVar5);
  _objc_retain(puVar4);
  _objc_retain(param_8);
  _objc_retain(param_1);
  func_0x00010bf97e80(puVar23);
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (ppuVar11 == (undefined **)0x0) {
    puVar26 = puVar23;
    FUN_107ee8a94(puVar23,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar19 = puVar26;
    func_0x00010c0b8600(puVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0();
    func_0x00010bfed320(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(param_1);
    _objc_release(puVar18);
    ppuVar27 = (undefined **)0x0;
    puVar18 = puVar23;
    func_0x00010b5fb890(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(param_1);
    _objc_release(puVar18);
    puVar18 = puVar23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010c14be80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(param_1);
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar19);
    puVar18 = puVar4;
  }
  else if (cVar3 == '\0') {
    func_0x00010bf529e0(puVar15);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar15);
    puVar26 = puVar15;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar26 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar15);
        }
        uVar24 = *(undefined8 *)((long)puVar19 * 8);
        func_0x00010c241220(uVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar18);
        _objc_release(uVar24);
        puVar19 = puVar19 + 1;
      } while (puVar26 != puVar19);
      puVar26 = puVar15;
      func_0x00010bf52a60();
    }
    _objc_release(puVar15);
    puVar26 = puVar15;
    FUN_107ee8a94(puVar15,puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar18);
    puVar10 = puVar26;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3a0(param_1);
    puVar19 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(puVar10);
    func_0x00010bfed320(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(param_1);
    _objc_release(puVar19);
    ppuVar14 = ppuVar11;
    func_0x00010c2457c0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar23;
    ppuVar27 = ppuVar14;
    func_0x00010b5fb890(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(param_1);
    _objc_release(puVar19);
    _objc_release(ppuVar14);
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c12e3a0(param_1);
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(param_1);
  }
  _objc_release(puVar18);
  _objc_release(puVar26);
  _objc_retain(param_1);
  _objc_release(param_1);
  _objc_release(param_8);
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_release(param_7);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuVar5);
  _objc_release(puVar15);
  _objc_release(puVar23);
  _objc_release(puVar13);
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar27);
  puVar4 = PTR_PTR_1126bc7f8;
  func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  puVar23 = PTR_PTR_1126bf8e8;
  puVar15 = ppuVar6[4];
  if (puVar15 != (undefined *)0x0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a9e0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = puVar23;
    func_0x00010c0fd8e0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar4);
    _objc_release(puVar15);
    _objc_release(puVar23);
  }
  func_0x00010c1d7bc0(puVar4);
  puVar23 = puVar4;
  func_0x00010c0fd8c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = ppuVar6[6];
  ppuVar14 = ppuVar27;
  func_0x00010c241220(ppuVar27);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar15);
  _objc_release(ppuVar14);
  _objc_release(puVar23);
  puVar23 = ppuVar6[7];
  if (puVar23 != (undefined *)0x0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar23;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar23);
    puVar23 = PTR_PTR_1126bf8f0;
    if (puVar15 != (undefined *)0x0) {
      puVar15 = ppuVar6[7];
      func_0x00010c0dfd40(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20(puVar23);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar15 = puVar23;
      func_0x00010c0fd920(puVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar4);
      _objc_release(puVar15);
      _objc_release(puVar23);
    }
  }
  ppuVar14 = (undefined **)ppuVar6[8];
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar14 == (undefined **)0x0) {
LAB_107efe930:
    if (*(char *)(ppuVar6 + 9) == '\x01') {
      puVar23 = ppuVar6[8];
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar23 != (undefined *)0x0) goto LAB_107efe980;
    }
    ppuVar14 = ppuVar27;
    func_0x00010bf59960(ppuVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(ppuVar6[8]);
LAB_107efe978:
    _objc_release(ppuVar14);
  }
  else {
    ppuVar20 = ppuVar27;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar20 == (undefined **)0x0) goto LAB_107efe978;
    ppuVar8 = ppuVar27;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = ppuVar6[8];
    func_0x00010bf59960(puVar23);
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar8;
    func_0x00010bf433a0();
    _objc_release(puVar23);
    _objc_release(ppuVar8);
    _objc_release(ppuVar20);
    _objc_release(ppuVar14);
    if (ppuVar25 == (undefined **)0x1) goto LAB_107efe930;
  }
LAB_107efe980:
  ppuVar14 = ppuVar27;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar20 = ppuVar27;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar14);
    ppuVar20 = ppuVar14;
  }
  _objc_release(ppuVar14);
  puVar23 = ppuVar6[8];
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar23 == (undefined *)0x0) {
LAB_107efea1c:
    func_0x00010c193320(ppuVar6[8]);
  }
  else if (ppuVar20 == (undefined **)0x0) {
    _objc_release(puVar23);
  }
  else {
    puVar15 = ppuVar6[8];
    func_0x00010bf8be20(puVar15);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar20;
    func_0x00010bf433a0();
    _objc_release(puVar15);
    _objc_release(puVar23);
    if (ppuVar14 == (undefined **)0xffffffffffffffff) goto LAB_107efea1c;
  }
  puVar23 = ppuVar6[8];
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar23 != (undefined *)0x0) {
    if (ppuVar20 == (undefined **)0x0) {
      _objc_release(puVar23);
      goto LAB_107efeaa4;
    }
    puVar15 = ppuVar6[8];
    func_0x00010c08b1e0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar20;
    func_0x00010bf433a0();
    _objc_release(puVar15);
    _objc_release(puVar23);
    if (ppuVar14 != (undefined **)0x1) goto LAB_107efeaa4;
  }
  func_0x00010c1b94c0(ppuVar6[8]);
LAB_107efeaa4:
  puVar18 = ppuVar6[8];
  func_0x00010c245780(puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar4;
  func_0x00010c241220(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar18;
  func_0x00010b704538(puVar18,puVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(ppuVar6[8]);
  _objc_release(puVar15);
  _objc_release(puVar23);
  _objc_release(puVar18);
  puVar23 = PTR_PTR_1126d82c0;
  func_0x00010c247f00(ppuVar6[8]);
  func_0x00010c247520(puVar4);
  func_0x00010bf977a0(puVar23);
  func_0x00010c207320(ppuVar6[8]);
  _objc_release(ppuVar20);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar27);
  return ppuVar27;
}



/* Entry: 107efd8bc; end: 107efdcaf;  */

undefined *
FUN_107efd8bc(long param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined auStack_3c8 [128];
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined1 **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  puVar8 = param_6;
  lStack_198 = param_1;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  uStack_1a8 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar22 = PTR_PTR_1126bc808;
  func_0x00010bfa7000();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar22;
  func_0x00010bf529e0();
  if (puVar21 != (undefined *)0x0) {
    func_0x00010c12e7e0(param_4);
    func_0x00010bf6bea0(PTR_PTR_1126bc820);
  }
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1b0 = puVar22;
  puStack_1a0 = param_4;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar13 = lStack_198;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar13;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar14 = *plStack_130;
    do {
      lVar19 = 0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(lVar13);
        }
        unaff_x28 = *(long *)(lStack_138 + lVar19 * 8);
        puVar2 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar22 = PTR_PTR_1126bc808;
        if (puVar2 == (undefined *)0x0) {
          func_0x00010bfa6f80();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126bc820;
        }
        else {
          puVar2 = param_2;
          func_0x00010c0e00e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa6fa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126bc820;
        }
        PTR_PTR_1126bc820 = puVar2;
        if (puVar22 != (undefined *)0x0) {
          func_0x00010bf350a0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7000();
          unaff_x28 = lStack_198;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16aa40(puVar2);
          _objc_release(unaff_x28);
          func_0x00010befa120(puVar21);
          _objc_release(puVar2);
        }
        _objc_release(puVar22);
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      lVar16 = lVar13;
      func_0x00010bf52a60();
      unaff_x27 = 0;
    } while (lVar16 != 0);
  }
  _objc_release(lVar13);
  puVar22 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0(puVar21);
  func_0x00010bfed320(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_1a0;
  func_0x00010c067060(puStack_1a0);
  _objc_release(puVar22);
  puVar22 = puStack_1b0;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_107efdcb0;
  puStack_150 = &UNK_110a12550;
  puStack_148 = puStack_1b0;
  _objc_retain(puStack_1b0);
  puVar17 = puVar21;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar2;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x107efde1c;
  puStack_178 = &UNK_110a12550;
  puStack_170 = puVar21;
  _objc_retain(puVar21);
  puVar2 = puVar22;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uStack_1a8;
  func_0x00010c2a7f40(uStack_1a8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac220(uVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puStack_170);
  _objc_release(puVar17);
  _objc_release(puStack_148);
  _objc_release(puVar21);
  _objc_release(puVar22);
  _objc_release(param_6);
  _objc_release(uVar20);
  _objc_release(param_2);
  lVar13 = lStack_198;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puStack_200 = puVar22;
  puStack_1f0 = puVar3;
  uStack_1d0 = uVar20;
  pcStack_1b8 = FUN_107efdcb0;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar9;
  lStack_210 = unaff_x28;
  uStack_208 = unaff_x27;
  puStack_1f8 = puVar21;
  puStack_1e8 = param_6;
  puStack_1e0 = puVar2;
  puStack_1d8 = param_2;
  puStack_1c8 = puVar17;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  puVar15 = *(undefined **)(lVar13 + 0x20);
  _objc_retain(puVar15);
  puVar17 = puVar15;
  func_0x00010bf52a60();
  if (puVar17 != (undefined *)0x0) {
    puVar21 = (undefined *)*puStack_2d0;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_2d0 != puVar21) {
          _objc_enumerationMutation(puVar15);
        }
        puVar2 = *(undefined **)(lStack_2d8 + (long)puVar22 * 8);
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        param_6 = puVar9;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(param_6);
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          puVar17 = (undefined *)0x0;
          goto LAB_107efddcc;
        }
        puVar22 = puVar22 + 1;
      } while (puVar17 != puVar22);
      puVar17 = puVar15;
      func_0x00010bf52a60();
    } while (puVar17 != (undefined *)0x0);
  }
  puVar17 = (undefined *)0x1;
LAB_107efddcc:
  _objc_release(puVar15);
  puVar4 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_410;
  uStack_2e8 = 0x107efde1c;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar5;
  lStack_340 = unaff_x28;
  uStack_338 = unaff_x27;
  puStack_330 = puVar22;
  puStack_328 = puVar21;
  puStack_320 = puVar3;
  puStack_318 = param_6;
  puStack_310 = puVar2;
  puStack_308 = puVar17;
  puStack_300 = puVar15;
  puStack_2f8 = puVar9;
  ppuStack_2f0 = &puStack_1c0;
  _objc_retain(puVar5);
  lStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  plStack_400 = (long *)0x0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  lVar16 = *(long *)(puVar4 + 0x20);
  _objc_retain(lVar16);
  puVar9 = auStack_3c8;
  puVar22 = (undefined *)0x10;
  lVar13 = lVar16;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar14 = *plStack_400;
    do {
      lVar19 = 0;
      do {
        if (*plStack_400 != lVar14) {
          _objc_enumerationMutation(lVar16);
        }
        puVar18 = *(undefined1 **)(lStack_408 + lVar19 * 8);
        puVar21 = puVar5;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar21;
        puVar12 = (undefined8 *)puVar18;
        func_0x00010c0720c0();
        _objc_release(puVar18);
        _objc_release(puVar21);
        if (((ulong)puVar2 & 1) != 0) {
          puVar21 = (undefined *)0x0;
          goto LAB_107efdf3c;
        }
        lVar19 = lVar19 + 1;
      } while (lVar13 != lVar19);
      puVar9 = auStack_3c8;
      puVar22 = (undefined *)0x10;
      lVar13 = lVar16;
      puVar12 = &uStack_410;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  puVar21 = (undefined *)0x1;
LAB_107efdf3c:
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return puVar21;
  }
  ___stack_chk_fail();
  uVar20 = uStack_410;
  cVar1 = (char)lStack_408;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = puVar11;
  _objc_retain();
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  _objc_retain(puVar22);
  _objc_retain(puVar8);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uVar20);
  if (puVar11 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar3;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar15);
    _objc_release(puVar2);
    _objc_release(puVar17);
  }
  else {
    puVar3 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar5;
  func_0x00010bf12220(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500(puVar3);
  _objc_release(puVar2);
  func_0x00010c0f7a20(puVar3);
  func_0x00010c1da4e0(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar9);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  _objc_retain(param_8);
  _objc_retain(puVar3);
  func_0x00010bf97e80(puVar9);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (puVar11 == (undefined *)0x0) {
    puVar15 = puVar9;
    FUN_107ee8a94(puVar9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar17 = puVar15;
    func_0x00010c0b8600(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0();
    func_0x00010bfed320(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar3);
    _objc_release(puVar21);
    puVar21 = (undefined *)0x0;
    puVar4 = puVar9;
    func_0x00010b5fb890(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar3);
    _objc_release(puVar4);
    puVar4 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c14be80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar17);
    puVar17 = puVar2;
  }
  else if (cVar1 == '\0') {
    func_0x00010bf529e0(puVar22);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar22);
    puVar21 = puVar22;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (puVar21 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(puVar22);
        }
        uVar10 = *(undefined8 *)((long)puVar15 * 8);
        func_0x00010c241220(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar17);
        _objc_release(uVar10);
        puVar15 = puVar15 + 1;
      } while (puVar21 != puVar15);
      puVar21 = puVar22;
      func_0x00010bf52a60();
    }
    _objc_release(puVar22);
    puVar15 = puVar22;
    FUN_107ee8a94(puVar22,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar17);
    puVar4 = puVar15;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3a0(puVar3);
    puVar21 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(puVar4);
    func_0x00010bfed320(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar3);
    _objc_release(puVar21);
    puVar6 = puVar11;
    func_0x00010c2457c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    puVar21 = puVar6;
    func_0x00010b5fb890(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c12e3a0(puVar3);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar3);
  }
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_retain(puVar3);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar20);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar8);
  _objc_release(puVar22);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar21);
  puVar8 = PTR_PTR_1126bc7f8;
  func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  puVar9 = PTR_PTR_1126bf8e8;
  lVar13 = *(long *)(puVar5 + 0x20);
  if (lVar13 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a9e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    puVar22 = puVar9;
    func_0x00010c0fd8e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar8);
    _objc_release(puVar22);
    _objc_release(puVar9);
  }
  func_0x00010c1d7bc0(puVar8);
  puVar9 = puVar8;
  func_0x00010c0fd8c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar5 + 0x30);
  puVar22 = puVar21;
  func_0x00010c241220(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar20);
  _objc_release(puVar22);
  _objc_release(puVar9);
  lVar13 = *(long *)(puVar5 + 0x38);
  if (lVar13 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar13;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    puVar9 = PTR_PTR_1126bf8f0;
    if (lVar16 != 0) {
      uVar20 = *(undefined8 *)(puVar5 + 0x38);
      func_0x00010c0dfd40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar20);
      puVar22 = puVar9;
      func_0x00010c0fd920(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar8);
      _objc_release(puVar22);
      _objc_release(puVar9);
    }
  }
  puVar9 = *(undefined **)(puVar5 + 0x40);
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
LAB_107efe930:
    if (puVar5[0x48] == '\x01') {
      lVar13 = *(long *)(puVar5 + 0x40);
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar13 != 0) goto LAB_107efe980;
    }
    puVar9 = puVar21;
    func_0x00010bf59960(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(*(undefined8 *)(puVar5 + 0x40));
LAB_107efe978:
    _objc_release(puVar9);
  }
  else {
    puVar22 = puVar21;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    if (puVar22 == (undefined *)0x0) goto LAB_107efe978;
    puVar2 = puVar21;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar5 + 0x40);
    func_0x00010bf59960(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf433a0();
    _objc_release(uVar20);
    _objc_release(puVar2);
    _objc_release(puVar22);
    _objc_release(puVar9);
    if (puVar3 == (undefined *)0x1) goto LAB_107efe930;
  }
LAB_107efe980:
  puVar9 = puVar21;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    puVar22 = puVar21;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar9);
    puVar22 = puVar9;
  }
  _objc_release(puVar9);
  lVar13 = *(long *)(puVar5 + 0x40);
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
LAB_107efea1c:
    func_0x00010c193320(*(undefined8 *)(puVar5 + 0x40));
  }
  else if (puVar22 == (undefined *)0x0) {
    _objc_release(lVar13);
  }
  else {
    uVar20 = *(undefined8 *)(puVar5 + 0x40);
    func_0x00010bf8be20(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar22;
    func_0x00010bf433a0();
    _objc_release(uVar20);
    _objc_release(lVar13);
    if (puVar9 == (undefined *)0xffffffffffffffff) goto LAB_107efea1c;
  }
  lVar13 = *(long *)(puVar5 + 0x40);
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 != 0) {
    if (puVar22 == (undefined *)0x0) {
      _objc_release(lVar13);
      goto LAB_107efeaa4;
    }
    uVar20 = *(undefined8 *)(puVar5 + 0x40);
    func_0x00010c08b1e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar22;
    func_0x00010bf433a0();
    _objc_release(uVar20);
    _objc_release(lVar13);
    if (puVar9 != (undefined *)0x1) goto LAB_107efeaa4;
  }
  func_0x00010c1b94c0(*(undefined8 *)(puVar5 + 0x40));
LAB_107efeaa4:
  uVar10 = *(undefined8 *)(puVar5 + 0x40);
  func_0x00010c245780(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c241220(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar10;
  func_0x00010b704538(uVar10,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(*(undefined8 *)(puVar5 + 0x40));
  _objc_release(uVar20);
  _objc_release(puVar9);
  _objc_release(uVar10);
  puVar9 = PTR_PTR_1126d82c0;
  func_0x00010c247f00(*(undefined8 *)(puVar5 + 0x40));
  func_0x00010c247520(puVar8);
  func_0x00010bf977a0(puVar9);
  func_0x00010c207320(*(undefined8 *)(puVar5 + 0x40));
  _objc_release(puVar22);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar21);
  return puVar21;
}



/* Entry: 107efdcb0; end: 107efdf8b;  */

undefined * FUN_107efdcb0(long param_1,undefined *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined auStack_218 [128];
  long lStack_198;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain(param_2);
  lVar17 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar17);
  lVar16 = lVar17;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  while (lVar16 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar18) {
        _objc_enumerationMutation(lVar17);
      }
      uVar2 = *(ulong *)(lVar24 * 8);
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_2;
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(puVar20);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        puVar20 = (undefined *)0x0;
        goto LAB_107efddcc;
      }
      lVar24 = lVar24 + 1;
    } while (lVar16 != lVar24);
    lVar16 = lVar17;
    func_0x00010bf52a60();
  }
  puVar20 = (undefined *)0x1;
LAB_107efddcc:
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return puVar20;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar5;
  _objc_retain(puVar5);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar18 = *(long *)(param_2 + 0x20);
  _objc_retain(lVar18);
  puVar20 = auStack_218;
  puVar14 = (undefined *)0x10;
  lVar16 = lVar18;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar15 = *plStack_250;
    do {
      lVar17 = 0;
      do {
        if (*plStack_250 != lVar15) {
          _objc_enumerationMutation(lVar18);
        }
        puVar22 = *(undefined1 **)(lStack_258 + lVar17 * 8);
        puVar21 = puVar5;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar21;
        puVar13 = (undefined8 *)puVar22;
        func_0x00010c0720c0();
        _objc_release(puVar22);
        _objc_release(puVar21);
        if (((ulong)puVar4 & 1) != 0) {
          puVar21 = (undefined *)0x0;
          goto LAB_107efdf3c;
        }
        lVar17 = lVar17 + 1;
      } while (lVar16 != lVar17);
      puVar20 = auStack_218;
      puVar14 = (undefined *)0x10;
      lVar16 = lVar18;
      puVar13 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  puVar21 = (undefined *)0x1;
LAB_107efdf3c:
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar21;
  }
  ___stack_chk_fail();
  uVar23 = uStack_260;
  cVar1 = (char)lStack_258;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = puVar11;
  _objc_retain();
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  _objc_retain(puVar20);
  _objc_retain(puVar14);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uVar23);
  if (puVar11 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar4);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar4;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar19);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  else {
    puVar4 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar5;
  func_0x00010bf12220(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500(puVar4);
  _objc_release(puVar6);
  func_0x00010c0f7a20(puVar4);
  func_0x00010c1da4e0(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar20);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(puVar6);
  _objc_retain(in_x7);
  _objc_retain(puVar4);
  func_0x00010bf97e80(puVar20);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (puVar11 == (undefined *)0x0) {
    puVar19 = puVar20;
    FUN_107ee8a94(puVar20,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    puVar7 = puVar19;
    func_0x00010c0b8600(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0();
    func_0x00010bfed320(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar4);
    _objc_release(puVar21);
    puVar21 = (undefined *)0x0;
    puVar8 = puVar20;
    func_0x00010b5fb890(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar4);
    _objc_release(puVar8);
    puVar8 = puVar20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c14be80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar6;
  }
  else if (cVar1 == '\0') {
    func_0x00010bf529e0(puVar14);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar14);
    puVar21 = puVar14;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (puVar21 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(puVar14);
        }
        uVar12 = *(undefined8 *)((long)puVar19 * 8);
        func_0x00010c241220(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(uVar12);
        puVar19 = puVar19 + 1;
      } while (puVar21 != puVar19);
      puVar21 = puVar14;
      func_0x00010bf52a60();
    }
    _objc_release(puVar14);
    puVar19 = puVar14;
    FUN_107ee8a94(puVar14,puVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    puVar8 = puVar19;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3a0(puVar4);
    puVar21 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(puVar8);
    func_0x00010bfed320(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar4);
    _objc_release(puVar21);
    puVar9 = puVar11;
    func_0x00010c2457c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar20;
    puVar21 = puVar9;
    func_0x00010b5fb890(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c12e3a0(puVar4);
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar4);
  }
  _objc_release(puVar7);
  _objc_release(puVar19);
  _objc_retain(puVar4);
  _objc_release(puVar4);
  _objc_release(in_x7);
  _objc_release(puVar6);
  _objc_release(in_x5);
  _objc_release(in_x6);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar23);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(puVar14);
  _objc_release(puVar20);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar21);
  puVar11 = PTR_PTR_1126bc7f8;
  func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  puVar20 = PTR_PTR_1126bf8e8;
  lVar16 = *(long *)(puVar5 + 0x20);
  if (lVar16 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a9e0(puVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    puVar14 = puVar20;
    func_0x00010c0fd8e0(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar11);
    _objc_release(puVar14);
    _objc_release(puVar20);
  }
  func_0x00010c1d7bc0(puVar11);
  puVar20 = puVar11;
  func_0x00010c0fd8c0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar5 + 0x30);
  puVar14 = puVar21;
  func_0x00010c241220(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar23);
  _objc_release(puVar14);
  _objc_release(puVar20);
  lVar16 = *(long *)(puVar5 + 0x38);
  if (lVar16 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar16;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar16);
    puVar20 = PTR_PTR_1126bf8f0;
    if (lVar18 != 0) {
      uVar23 = *(undefined8 *)(puVar5 + 0x38);
      func_0x00010c0dfd40(uVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20(puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar23);
      puVar14 = puVar20;
      func_0x00010c0fd920(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar11);
      _objc_release(puVar14);
      _objc_release(puVar20);
    }
  }
  puVar20 = *(undefined **)(puVar5 + 0x40);
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  if (puVar20 == (undefined *)0x0) {
LAB_107efe930:
    if (puVar5[0x48] == '\x01') {
      lVar16 = *(long *)(puVar5 + 0x40);
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar16 != 0) goto LAB_107efe980;
    }
    puVar20 = puVar21;
    func_0x00010bf59960(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(*(undefined8 *)(puVar5 + 0x40));
LAB_107efe978:
    _objc_release(puVar20);
  }
  else {
    puVar14 = puVar21;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) goto LAB_107efe978;
    puVar4 = puVar21;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar5 + 0x40);
    func_0x00010bf59960(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf433a0();
    _objc_release(uVar23);
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar20);
    if (puVar6 == (undefined *)0x1) goto LAB_107efe930;
  }
LAB_107efe980:
  puVar20 = puVar21;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar20 == (undefined *)0x0) {
    puVar14 = puVar21;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar20);
    puVar14 = puVar20;
  }
  _objc_release(puVar20);
  lVar16 = *(long *)(puVar5 + 0x40);
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 == 0) {
LAB_107efea1c:
    func_0x00010c193320(*(undefined8 *)(puVar5 + 0x40));
  }
  else if (puVar14 == (undefined *)0x0) {
    _objc_release(lVar16);
  }
  else {
    uVar23 = *(undefined8 *)(puVar5 + 0x40);
    func_0x00010bf8be20(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar14;
    func_0x00010bf433a0();
    _objc_release(uVar23);
    _objc_release(lVar16);
    if (puVar20 == (undefined *)0xffffffffffffffff) goto LAB_107efea1c;
  }
  lVar16 = *(long *)(puVar5 + 0x40);
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 != 0) {
    if (puVar14 == (undefined *)0x0) {
      _objc_release(lVar16);
      goto LAB_107efeaa4;
    }
    uVar23 = *(undefined8 *)(puVar5 + 0x40);
    func_0x00010c08b1e0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar14;
    func_0x00010bf433a0();
    _objc_release(uVar23);
    _objc_release(lVar16);
    if (puVar20 != (undefined *)0x1) goto LAB_107efeaa4;
  }
  func_0x00010c1b94c0(*(undefined8 *)(puVar5 + 0x40));
LAB_107efeaa4:
  uVar12 = *(undefined8 *)(puVar5 + 0x40);
  func_0x00010c245780(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar11;
  func_0x00010c241220(puVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar12;
  func_0x00010b704538(uVar12,puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(*(undefined8 *)(puVar5 + 0x40));
  _objc_release(uVar23);
  _objc_release(puVar20);
  _objc_release(uVar12);
  puVar20 = PTR_PTR_1126d82c0;
  func_0x00010c247f00(*(undefined8 *)(puVar5 + 0x40));
  func_0x00010c247520(puVar11);
  func_0x00010bf977a0(puVar20);
  func_0x00010c207320(*(undefined8 *)(puVar5 + 0x40));
  _objc_release(puVar14);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar21);
  return puVar21;
}



/* Entry: 107efdf8c; end: 107efe6d7;  */

void FUN_107efdf8c(long param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  else {
    puVar1 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = param_1;
  func_0x00010bf12220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500(puVar1);
  _objc_release(lVar5);
  func_0x00010c0f7a20(puVar1);
  func_0x00010c1da4e0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_4);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(puVar2);
  _objc_retain(param_8);
  _objc_retain(puVar1);
  func_0x00010bf97e80(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_2 == 0) {
    puVar4 = param_4;
    FUN_107ee8a94(param_4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar12 = puVar4;
    func_0x00010c0b8600(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0();
    func_0x00010bfed320(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar1);
    _objc_release(puVar3);
    lVar10 = 0;
    puVar3 = param_4;
    func_0x00010b5fb890(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar1);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c14be80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar12);
    puVar3 = puVar2;
  }
  else if (param_10 == '\0') {
    func_0x00010bf529e0(param_5);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    puVar4 = param_5;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(param_5);
        }
        uVar13 = *(undefined8 *)((long)puVar12 * 8);
        func_0x00010c241220(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar13);
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    puVar4 = param_5;
    FUN_107ee8a94(param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    puVar6 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3a0(puVar1);
    puVar12 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(puVar6);
    func_0x00010bfed320(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar1);
    _objc_release(puVar12);
    lVar5 = param_2;
    func_0x00010c2457c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_4;
    lVar10 = lVar5;
    func_0x00010b5fb890(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar1);
    _objc_release(puVar12);
    _objc_release(lVar5);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c12e3a0(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  puVar2 = PTR_PTR_1126bc7f8;
  func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  puVar1 = PTR_PTR_1126bf8e8;
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    puVar3 = puVar1;
    func_0x00010c0fd8e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  func_0x00010c1d7bc0(puVar2);
  puVar1 = puVar2;
  func_0x00010c0fd8c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = lVar10;
  func_0x00010c241220(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar13);
  _objc_release(lVar11);
  _objc_release(puVar1);
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    puVar1 = PTR_PTR_1126bf8f0;
    if (lVar5 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0dfd40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      puVar3 = puVar1;
      func_0x00010c0fd920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
  }
  lVar11 = *(long *)(param_1 + 0x40);
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
LAB_107efe930:
    if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar11 = *(long *)(param_1 + 0x40);
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 != 0) goto LAB_107efe980;
    }
    lVar11 = lVar10;
    func_0x00010bf59960(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(*(undefined8 *)(param_1 + 0x40));
LAB_107efe978:
    _objc_release(lVar11);
  }
  else {
    lVar5 = lVar10;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) goto LAB_107efe978;
    lVar7 = lVar10;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf59960(uVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf433a0();
    _objc_release(uVar13);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar11);
    if (lVar8 == 1) goto LAB_107efe930;
  }
LAB_107efe980:
  lVar11 = lVar10;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    lVar5 = lVar10;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar11);
    lVar5 = lVar11;
  }
  _objc_release(lVar11);
  lVar11 = *(long *)(param_1 + 0x40);
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
LAB_107efea1c:
    func_0x00010c193320(*(undefined8 *)(param_1 + 0x40));
  }
  else if (lVar5 == 0) {
    _objc_release(lVar11);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf8be20(uVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf433a0();
    _objc_release(uVar13);
    _objc_release(lVar11);
    if (lVar7 == -1) goto LAB_107efea1c;
  }
  lVar11 = *(long *)(param_1 + 0x40);
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    if (lVar5 == 0) {
      _objc_release(lVar11);
      goto LAB_107efeaa4;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c08b1e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf433a0();
    _objc_release(uVar13);
    _objc_release(lVar11);
    if (lVar7 != 1) goto LAB_107efeaa4;
  }
  func_0x00010c1b94c0(*(undefined8 *)(param_1 + 0x40));
LAB_107efeaa4:
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c245780(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c241220(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010b704538(uVar9,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar13);
  _objc_release(puVar1);
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126d82c0;
  func_0x00010c247f00(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c247520(puVar2);
  func_0x00010bf977a0(puVar1);
  func_0x00010c207320(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 107efe6d8; end: 107efeb6b;  */

void FUN_107efe6d8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  puVar3 = PTR_PTR_1126bf8e8;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a9e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = puVar3;
    func_0x00010c0fd8e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  func_0x00010c1d7bc0(puVar1);
  puVar3 = puVar1;
  func_0x00010c0fd8c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar9);
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126bf8f0;
    if (lVar5 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0dfd40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar4 = puVar3;
      func_0x00010c0fd920(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_107efe930:
    if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x40);
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) goto LAB_107efe980;
    }
    lVar2 = param_2;
    func_0x00010bf59960(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(*(undefined8 *)(param_1 + 0x40));
LAB_107efe978:
    _objc_release(lVar2);
  }
  else {
    lVar5 = param_2;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) goto LAB_107efe978;
    lVar6 = param_2;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf59960(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf433a0();
    _objc_release(uVar9);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    if (lVar7 == 1) goto LAB_107efe930;
  }
LAB_107efe980:
  lVar2 = param_2;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar5 = param_2;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar5 = lVar2;
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_107efea1c:
    func_0x00010c193320(*(undefined8 *)(param_1 + 0x40));
  }
  else if (lVar5 == 0) {
    _objc_release(lVar2);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf8be20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf433a0();
    _objc_release(uVar9);
    _objc_release(lVar2);
    if (lVar6 == -1) goto LAB_107efea1c;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    if (lVar5 == 0) {
      _objc_release(lVar2);
      goto LAB_107efeaa4;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c08b1e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf433a0();
    _objc_release(uVar9);
    _objc_release(lVar2);
    if (lVar6 != 1) goto LAB_107efeaa4;
  }
  func_0x00010c1b94c0(*(undefined8 *)(param_1 + 0x40));
LAB_107efeaa4:
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c245780(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c241220(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010b704538(uVar8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126d82c0;
  func_0x00010c247f00(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c247520(puVar1);
  func_0x00010bf977a0(puVar3);
  func_0x00010c207320(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107efeb6c; end: 107efebbf;  */

void FUN_107efeb6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107efebc0; end: 107efec8f;  */

void FUN_107efebc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar2 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107efec90; end: 107eff8cf;  */

void FUN_107efec90(undefined *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1e0;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar12 = param_2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bf3e200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c06cde0();
  puVar15 = puVar1;
  func_0x00010c080740();
  lVar4 = lVar12;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  puVar16 = param_1;
  func_0x00010c0c7dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c241220(lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfcbbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar6);
  _objc_release(puVar16);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_107eff8d0;
  uStack_100 = 0x107eff8e0;
  uStack_f8 = 0;
  func_0x00010c0c0800(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    if (lVar5 == 0 && ((ulong)puVar15 & 1) == 0) {
      puVar3 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1640();
      _objc_release(puVar15);
      _objc_release(puVar3);
      if (param_5 == 1) {
        puVar3 = param_1;
        func_0x00010bf3e200(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = param_1;
        func_0x00010c0b3760(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar6;
        func_0x00010bfcdfa0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_1;
        func_0x00010c0b3760(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf53fa0();
        _objc_retainAutoreleasedReturnValue();
        FUN_107ec62d8(lVar12,puVar15,8,&PTR____CFConstantStringClassReference_110ec3dd8,puVar13,
                      puVar10);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar13);
        _objc_release(puVar6);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = param_1;
        func_0x00010c0c8940();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar16;
        func_0x00010c22e640();
        _objc_release(puVar16);
        _objc_release(puVar15);
        if ((int)puVar6 != 0) {
          puVar15 = PTR_PTR_1126af5d0;
          func_0x00010bfa01c0(PTR_PTR_1126af5d0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107eff7c4;
        }
        puStack_208 = (undefined *)0x0;
        puStack_200 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0x0;
        goto LAB_107eff454;
      }
    }
    puStack_208 = (undefined *)0x0;
    puStack_200 = (undefined *)0x0;
    puStack_1f8 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010bface80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bfad280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf0e880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_autoreleasePoolPush();
    puVar16 = puVar1;
    func_0x00010bfad280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar16;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf64a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar16);
    puVar16 = puVar8;
    func_0x00010c08fa60();
    if (puVar16 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = puVar8;
      func_0x00010bdc1b00();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar8);
    _objc_autoreleasePoolPop(puVar15);
    if (puVar16 == (undefined *)0x0) {
      puVar15 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar15 = puVar16;
      func_0x00010bf53fa0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      FUN_107ec6554(lVar12,puVar2,8,&PTR____CFConstantStringClassReference_110ec3df8,puVar15);
      _objc_release(puVar15);
      puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar16);
      _objc_release(puVar6);
      goto LAB_107eff7c4;
    }
    puStack_1f8 = PTR_PTR_1126d8520;
    _objc_alloc();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfad040(puVar6);
    func_0x00010c0df880(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028e40();
    _objc_release(puVar15);
    if (param_3 == 0) {
      puStack_200 = (undefined *)0x0;
    }
    else {
      puStack_200 = PTR_PTR_1126d8520;
      _objc_alloc();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c08fa60(param_3);
      func_0x00010c0df840(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028e40();
      _objc_release(puVar15);
    }
    lVar4 = lVar12;
    func_0x00010bfd9dc0();
    if ((int)lVar4 == 0) {
      puStack_208 = (undefined *)0x0;
    }
    else {
      _objc_autoreleasePoolPush();
      puVar15 = puVar1;
      func_0x00010bfad280(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar15;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf64a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar15);
      puVar15 = puVar8;
      func_0x00010c08fa60();
      if (puVar15 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar8;
        func_0x00010bdc1b00();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08fa60(puVar8);
        func_0x00010c0df840(puVar15);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar8);
      _objc_autoreleasePoolPop(lVar4);
      if (puVar13 == (undefined *)0x0) {
        puVar8 = param_1;
        func_0x00010c0b3760(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = puVar9;
        func_0x00010bf53fa0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        FUN_107ec6554(lVar12,puVar2,8,&PTR____CFConstantStringClassReference_110ec3e38,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar9);
        puStack_208 = (undefined *)0x0;
      }
      else {
        puStack_208 = PTR_PTR_1126d8520;
        _objc_alloc();
        func_0x00010c028e40();
      }
      _objc_release(puVar15);
      _objc_release(puVar13);
    }
    _objc_release(puVar16);
    _objc_release(puVar6);
LAB_107eff454:
    _objc_release(puVar3);
  }
  lVar4 = lVar12;
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  puStack_1e0 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (lVar5 == 0) {
    puStack_1e0 = (undefined *)0x0;
  }
  else {
    lVar4 = lVar12;
    func_0x00010c23f420(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar11 = lVar12;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar11);
        }
        uVar17 = *(undefined8 *)(lVar18 * 8);
        uVar14 = uVar17;
        func_0x00010bf0b760();
        if ((uint)uVar14 < 0x16) {
          func_0x00010b697928();
        }
        else {
          uVar14 = 0xfffffffffbadbeef;
        }
        puVar3 = puVar2;
        func_0x00010c13a8e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar3;
        func_0x00010c06cde0();
        if ((int)puVar15 != 0) {
          func_0x000108018d28(uVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar3;
          func_0x00010bfad280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar14);
          if (puVar15 != (undefined *)0x0) {
            puVar6 = param_1;
            func_0x00010bface80(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x00010c0f5800(puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar6;
            func_0x00010bf0e880(puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            _objc_autoreleasePoolPush();
            puVar8 = puVar15;
            func_0x00010c0f5800(puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar6;
            func_0x00010bf64a80(puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            puVar8 = puVar9;
            func_0x00010bdc1b00(puVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_autoreleasePoolPop(puVar16);
            puVar9 = PTR_PTR_1126d8520;
            _objc_alloc(PTR_PTR_1126d8520);
            puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bfad040(puVar13);
            func_0x00010c0df880(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c028e40(puVar9);
            func_0x00010bf0b260(uVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_1e0);
            _objc_release(uVar17);
            _objc_release(puVar9);
            _objc_release(puVar16);
            _objc_release(puVar8);
            _objc_release(puVar13);
            _objc_release(puVar6);
          }
          _objc_release(puVar15);
        }
        _objc_release(puVar3);
        lVar18 = lVar18 + 1;
      } while (lVar4 != lVar18);
      lVar4 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
  }
  puVar15 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126d8528;
  _objc_alloc(PTR_PTR_1126d8528);
  puVar16 = puStack_1e0;
  func_0x00010bf51e00(puStack_1e0);
  func_0x00010bff6e00(puVar3);
  func_0x00010c2619e0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar16);
  _objc_release(puStack_1e0);
  _objc_release(puStack_208);
  _objc_release(puStack_200);
  puVar3 = puStack_1f8;
LAB_107eff7c4:
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar12);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  lVar12 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 107eff8d0; end: 107eff8e7;  */

void FUN_107eff8d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107eff8e8; end: 107eff91f;  */

void FUN_107eff8e8(long param_1,undefined8 param_2)

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



/* Entry: 107eff920; end: 107eff933;  */

void FUN_107eff920(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107eff934; end: 107eff9fb;  */

void FUN_107eff934(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_retain();
  uVar1 = 1;
  FUN_107f188fc(1,0,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010bf436e0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107eff9fc; end: 107effb13;  */

void FUN_107eff9fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107effb14;
  uStack_40 = 0x107effb24;
  puStack_38 = PTR____NSDictionary0__struct_11034ab58;
  uVar1 = param_1;
  func_0x00010befb7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c09e0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107effb14; end: 107effb2b;  */

void FUN_107effb14(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107effb2c; end: 107effb63;  */

void FUN_107effb2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107effb64; end: 107effb6f;  */

void FUN_107effb64(void)

{
  return;
}



/* Entry: 107effb70; end: 107effc6b;  */

bool FUN_107effb70(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfad160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_1;
    func_0x00010bfaca00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c3d00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_1;
      func_0x00010bfaca00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfad080();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c282760();
      bVar1 = (int)lVar4 != 0;
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_107effc50;
    }
  }
  bVar1 = false;
LAB_107effc50:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107effc6c; end: 107effd63;  */

void FUN_107effc6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107effb14;
  uStack_30 = 0x107effb24;
  uStack_28 = 0;
  func_0x00010c0c0800(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107effd64; end: 107effd77;  */

void FUN_107effd64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107effd78; end: 107effdaf;  */

void FUN_107effd78(long param_1,undefined8 param_2)

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



/* Entry: 107effdb0; end: 107efffa3;  */

void FUN_107effdb0(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar2 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      puVar8 = (undefined *)0x0;
      puVar7 = puVar6;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar6 = *(undefined **)((long)puVar8 * 8);
        if (puVar7 == (undefined *)0x0) {
          puVar4 = PTR____NSArray0__struct_11034ab48;
          FUN_107efffa4();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar3 = puVar7;
          func_0x00010bfb2660();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c0e0ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar3);
        }
        puVar8 = puVar8 + 1;
        puVar7 = puVar6;
      } while (puVar2 != puVar8);
      puVar2 = param_1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    if (puVar6 != (undefined *)0x0) goto LAB_107efff50;
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bf54280(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_107efff50:
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    _objc_retain(puVar4);
    func_0x00010c0b8600(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar6 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107efffa4; end: 107f00037;  */

void FUN_107efffa4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f00038; end: 107f0019f;  */

void FUN_107f00038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107effb14;
  uStack_30 = 0x107effb24;
  uStack_28 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107effb14;
  uStack_60 = 0x107effb24;
  uStack_58 = 0;
  func_0x00010c0c0800(param_2);
  if (puStack_48[5] == 0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
    FUN_107efffa4(puVar1,puStack_78[5]);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f001a0; end: 107f0027f;  */

void FUN_107f001a0(long param_1,undefined8 param_2)

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



/* Entry: 107f00280; end: 107f002bf;  */

undefined8 FUN_107f00280(uint param_1)

{
  if (((0x15 < param_1) || ((1 << (ulong)(param_1 & 0x1f) & 0x3ffd9fU) == 0)) &&
     (param_1 != 0xfbadbeef)) {
    return 0;
  }
  return 1;
}



/* Entry: 107f002c0; end: 107f0040f;  */

void FUN_107f002c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d8358;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x00010c2a7ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010c2a90e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = puVar3;
  func_0x00010c2ad3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar4;
  func_0x00010c2bc1c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2a82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f00410; end: 107f00a83;  */

void FUN_107f00410(double param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_230;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar10 = param_2;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500();
  lVar3 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (((ulong)puVar2 & 1) == 0) {
    lStack_a8 = lVar3;
    lStack_a0 = lVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_98 = lVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c28e600();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec3e58;
  if (lVar3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ec3e78;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_7);
  func_0x00010c0a4980(param_5);
  func_0x00010bf5fd80(param_7);
  dVar13 = dVar12;
  _objc_release(param_7);
  puVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfcbc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126afec0;
  func_0x00010bf5fd80(param_7);
  func_0x00010c155420(dVar13 - dVar12,puVar2);
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107effb14;
  uStack_b8 = 0x107effb24;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_107effb14;
  uStack_e8 = 0x107effb24;
  uStack_e0 = 0;
  func_0x00010c0c0800(puVar4);
  func_0x00010c0a49a0(param_5);
  puVar2 = PTR_PTR_1126ae6b8;
  lVar3 = param_4;
  if (puStack_d0[5] == 0) {
    lVar11 = puStack_100[5];
    lVar5 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    puVar2 = PTR_PTR_1126ae6b8;
    if (lVar11 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c06d500();
      if ((int)puVar2 == 0) {
        lVar5 = puStack_100[5];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          param_8 = 1;
        }
        _objc_release();
        puVar2 = PTR_PTR_1126ae6b8;
        if (param_8 == 0) {
          _objc_retain(param_4);
          func_0x00010bf54280(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar3 = param_2;
          func_0x00010c241220(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126d84b8;
          _objc_alloc();
          func_0x00010c0105c0();
          puVar7 = param_3;
          FUN_107ead188(param_1,param_3,lVar3,puVar6,param_6,param_5,ppuVar1,param_7);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_4);
          puVar2 = puVar7;
          func_0x00010c0b8600(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_4);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
      }
      else {
        lVar3 = param_2;
        func_0x00010c241220(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126d84b8;
        _objc_alloc();
        func_0x00010c0105c0();
        puVar7 = param_3;
        FUN_107ead188(param_1,param_3,lVar3,puVar6,param_6,param_5,ppuVar1,param_7);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        puVar2 = puVar7;
        func_0x00010c0b8600(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
    }
    else {
      _objc_retain(param_2);
      func_0x00010bf54280(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
    }
  }
  else {
    _objc_retain(param_4);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puStack_230);
  _objc_release(lVar10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_108,8);
  uVar9 = 8;
  __Block_object_dispose(&uStack_d8);
  __Unwind_Resume();
  _objc_retain(uVar9);
  lVar10 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar8 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 107f00a84; end: 107f00af3;  */

void FUN_107f00a84(long param_1,undefined8 param_2)

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



/* Entry: 107f00af4; end: 107f00b97;  */

void FUN_107f00af4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126af5d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(param_2);
  uVar2 = 3;
  FUN_107f188fc(3,uVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107f00b98; end: 107f00cff;  */

void FUN_107f00b98(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  FUN_107effc6c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    puVar2 = puVar1;
    FUN_107f18a28(puVar1,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f00d00; end: 107f00e2f;  */

void FUN_107f00d00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = 2;
  FUN_107f188fc(2,0,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107f00e30; end: 107f00f57;  */

void FUN_107f00e30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107effb14;
  uStack_50 = 0x107effb24;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f00f58; end: 107f01007;  */

void FUN_107f00f58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  func_0x00010bf0a0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126af5d0;
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f01008; end: 107f0104f;  */

void FUN_107f01008(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f01050; end: 107f011b7;  */

void FUN_107f01050(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d8530;
    _objc_alloc(PTR_PTR_1126d8530);
    func_0x00010c0611c0();
    puVar2 = PTR_PTR_1126d8538;
    _objc_alloc(PTR_PTR_1126d8538);
    func_0x00010c0551e0();
  }
  else {
    puVar2 = param_1;
    func_0x00010c0b8600(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar1 = puVar2;
    func_0x00010bfaea20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
    FUN_107f1963c(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f011b8; end: 107f011bf;  */

void FUN_107f011b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107f011c0; end: 107f0123b;  */

bool FUN_107f011c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf16080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 107f0123c; end: 107f014af;  */

void FUN_107f0123c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  iVar11 = (int)&uStack_130;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_2;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        if (lVar6 != 0) {
          lVar6 = lVar5;
          func_0x00010bdc1b00();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c08fa60();
          if (lVar7 != 0) {
            puVar8 = PTR_PTR_1126d8520;
            _objc_alloc(PTR_PTR_1126d8520);
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c08fa60(lVar5);
            func_0x00010c0df840(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c028e40(puVar8);
            _objc_release(puVar9);
            puVar9 = PTR_PTR_1126d8540;
            _objc_alloc(PTR_PTR_1126d8540);
            func_0x00010c012e80();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      iVar11 = (int)&uStack_130;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar10);
  puVar9 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0(PTR_PTR_1126d8280);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf97200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf9e140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c15e520(param_1);
  func_0x00010c1fce80(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf977c0(param_1);
  func_0x00010c196b20(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfbdda0(param_1);
  FUN_107ee8bec((long)(int)lVar2);
  func_0x00010c196ba0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf8b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf8b0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c185380(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  if (iVar11 == 0) {
    func_0x00010c266aa0(param_1);
    func_0x00010c1b3980(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c266b20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c07b240(lVar10);
    func_0x00010c1b3980(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c2711a0(lVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216240(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_1;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c266980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c266980(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107f016e8;
    }
  }
  else {
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
LAB_107f016e8:
    func_0x00010c26f320();
    func_0x00010c1b7800(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar2 = param_1;
  func_0x00010bfb3860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfb3860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e3a0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar10);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107f014b0; end: 107f01787;  */

void FUN_107f014b0(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0(PTR_PTR_1126d8280);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf97200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf9e140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c15e520(param_1);
  func_0x00010c1fce80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf977c0(param_1);
  func_0x00010c196b20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfbdda0(param_1);
  FUN_107ee8bec((long)(int)lVar2);
  func_0x00010c196ba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf8b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf8b0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c185380(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  if (param_3 == 0) {
    func_0x00010c266aa0(param_1);
    func_0x00010c1b3980(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c266b20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c07b240(param_2);
    func_0x00010c1b3980(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216240(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_1;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c266980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_107f01714;
    func_0x00010c266980(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c26f320();
  func_0x00010c1b7800(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
LAB_107f01714:
  lVar2 = param_1;
  func_0x00010bfb3860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfb3860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e3a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f01788; end: 107f023b7;  */

void FUN_107f01788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puVar2 = PTR_PTR_1126af4c0;
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (puVar25 == (undefined *)0x8) {
    puVar25 = PTR_PTR_1126bc800;
    func_0x00010bfa7180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar25;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf529e0(puVar4);
    uVar1 = param_5;
    func_0x00010c0c6f20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf7ef60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_5;
    func_0x00010c0efe20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf7ef60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = (undefined **)0x0;
    puVar10 = puVar6;
    FUN_107f04064(puVar6,puVar5,uVar7,uVar9,param_1,&ppuStack_98);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuStack_98;
    _objc_retain(ppuStack_98);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar1);
    if (puVar10 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126d8550;
      ppuVar26 = ppuVar23;
      func_0x00010c240100();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_17 + 0x10))(param_17,puVar5);
      goto LAB_107f02284;
    }
    _objc_release(ppuVar23);
    _objc_release(puVar6);
    _objc_release(puVar25);
    puVar25 = puVar10;
  }
  else {
    puVar25 = (undefined *)0x0;
  }
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (param_6 == 0) {
    _objc_retain(puVar2);
    _objc_retain(uVar3);
    _objc_retain(param_4);
    puVar10 = puVar2;
    FUN_107f014b0(puVar2,param_3,puVar5 == (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126d8548;
    _objc_alloc_init(PTR_PTR_1126d8548);
    func_0x00010c204680();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d5a60(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar18;
    func_0x00010bf21f60(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 != (undefined *)0x0) {
      puVar6 = puVar2;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar19 != (undefined *)0x0) {
        puVar20 = PTR_PTR_1126d8548;
        _objc_alloc_init(PTR_PTR_1126d8548);
        func_0x00010c204680();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1d6180(puVar20);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1d5a60(puVar20);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar21 = puVar20;
        func_0x00010bf21f60(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar21);
        _objc_release(puVar20);
      }
      _objc_release(puVar19);
      _objc_release(puVar6);
    }
    func_0x00010c204f60(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2063a0(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar5);
    _objc_release(puVar10);
    _objc_release(param_4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  else {
    uVar1 = param_7;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_7;
    func_0x00010bf6f520();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_7;
    func_0x00010c0ce1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_13;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(param_15);
    _objc_retain(uVar11);
    _objc_retain(param_11);
    _objc_retain(param_2);
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_5);
    _objc_retain(param_8);
    _objc_retain(uVar9);
    _objc_retain(uVar7);
    _objc_retain(uVar1);
    _objc_retain(param_3);
    uVar12 = uVar1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126d8548;
    _objc_opt_new();
    func_0x00010c204680();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d5a60(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 != (undefined *)0x0) {
      puVar6 = puVar2;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar18 != (undefined *)0x0) {
        func_0x00010c1d6180(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar18);
      _objc_release(puVar6);
    }
    uVar13 = param_8;
    func_0x00010c2412e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_8;
    func_0x00010c241320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    uVar16 = uVar15;
    func_0x00010c0e00e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar1;
    FUN_107eea030(uVar1,uVar7,uVar14,uVar9,uVar16,param_9,param_5,param_10,param_2,param_11,uVar11,
                  param_15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_15);
    _objc_release(uVar11);
    _objc_release(param_11);
    _objc_release(param_2);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_5);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    puVar6 = puVar10;
    func_0x00010c203860();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar2;
    FUN_107f014b0(puVar2,param_3,puVar5 == (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar6;
    func_0x00010c204f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar6 = puVar19;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(puVar10);
    _objc_release(uVar12);
    _objc_release(puVar2);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  ppuVar26 = (undefined **)PTR_PTR_1126d8288;
  func_0x00010c2b1dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar26;
  func_0x00010c1966e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar22;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar22);
  _objc_release(puVar5);
  _objc_release(ppuVar26);
  uVar1 = param_12;
  func_0x00010c1179e0(param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1341c0(0x3f800000);
  _objc_release(uVar1);
  ppuVar26 = &PTR____CFConstantStringClassReference_110ec2998;
  puVar5 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_17);
  _objc_retain(param_17);
  _objc_retain(puVar25);
  func_0x00010c25f400(param_14);
  _objc_release(puVar5);
  _objc_release(param_17);
  _objc_release(param_17);
  _objc_release(param_5);
  puVar5 = puVar25;
LAB_107f02284:
  _objc_release(puVar5);
  _objc_release(ppuVar23);
  _objc_release(puVar6);
  _objc_release(puVar25);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d8290;
  _objc_retain(ppuVar26);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar26);
  puVar25 = puVar2;
  func_0x00010c15f8c0();
  puVar4 = PTR_PTR_1126d8550;
  if (puVar25 == (undefined *)0x7d0) {
    puVar4 = puVar2;
    func_0x00010bf96fc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar4;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = puVar25;
    func_0x00010c0d3c80(puVar25);
    lVar24 = *(long *)(param_1 + 0x20);
    if (lVar24 != 0) {
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(lVar24);
      func_0x00010c1d0640(puVar6);
    }
    puVar5 = PTR_PTR_1126d8550;
    lVar24 = *(long *)(param_1 + 0x30);
    puVar4 = puVar6;
    func_0x00010bf51e00(puVar6);
    func_0x00010c261920(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar24 + 0x10))(lVar24,puVar5);
    _objc_release(puVar5);
  }
  else {
    lVar24 = *(long *)(param_1 + 0x30);
    func_0x00010c15f8c0(puVar2);
    puVar25 = puVar2;
    func_0x00010bf96fc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf148e0(puVar2);
    puVar6 = puVar2;
    func_0x00010bf66200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar24 + 0x10))(lVar24,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107f023b8; end: 107f0259b;  */

void FUN_107f023b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar6 = PTR_PTR_1126d8550;
  if (puVar2 == (undefined *)0x7d0) {
    puVar6 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar5 = puVar2;
    func_0x00010c0d3c80(puVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(lVar3);
      func_0x00010c1d0640(puVar5);
    }
    puVar4 = PTR_PTR_1126d8550;
    lVar3 = *(long *)(param_1 + 0x30);
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010c261920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar4);
    _objc_release(puVar4);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar5 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar6);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f0259c; end: 107f025e3;  */

void FUN_107f0259c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d8550;
  func_0x00010c0d7b00(PTR_PTR_1126d8550);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f025e4; end: 107f026b3;  */

void FUN_107f025e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8548;
  _objc_alloc_init(PTR_PTR_1126d8548);
  func_0x00010c204680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d6180(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d5a60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f026b4; end: 107f026c3;  */

void FUN_107f026b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107f026c4; end: 107f03083;  */

void FUN_107f026c4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126d8558;
    ppuVar13 = ppuVar10;
    func_0x00010c09daa0(PTR_PTR_1126d8558);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_11 + 0x10))(param_11,puVar11);
    _objc_release(puVar11);
    _objc_release(ppuVar10);
  }
  else {
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puVar11 = PTR_PTR_1126d8280;
    func_0x00010c2b1ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf97200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c2063a0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfbdda0(puVar1);
    FUN_107ee8bec((long)(int)puVar2);
    func_0x00010c196ba0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf977c0(puVar1);
    func_0x00010c196b20(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf9e140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199560(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c15e520(puVar1);
    func_0x00010c1fce80(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_2;
      func_0x00010bf6f520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        puVar5 = PTR_PTR_1126d8548;
        _objc_alloc_init(PTR_PTR_1126d8548);
        lVar3 = param_2;
        func_0x00010c23f220(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c204680(puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        func_0x00010c1d5a60(puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf21f60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        if (param_3 != 0) {
          puVar6 = puVar1;
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar1;
            func_0x00010c245800();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_2;
            func_0x00010c23f220(param_2);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_release(lVar3);
            if (puVar7 != (undefined *)0x0) {
              puVar8 = PTR_PTR_1126d8548;
              _objc_alloc_init(PTR_PTR_1126d8548);
              lVar3 = param_2;
              func_0x00010c23f220(param_2);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c204680(puVar8);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(lVar4);
              _objc_release(lVar3);
              func_0x00010c1d6180(puVar8);
              _objc_unsafeClaimAutoreleasedReturnValue();
              func_0x00010c1d5a60(puVar8);
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010bf21f60(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(puVar9);
              _objc_release(puVar8);
            }
            _objc_release(puVar7);
            _objc_release(puVar6);
          }
        }
        _objc_release(puVar5);
      }
    }
    if (param_3 != 0) {
      puVar5 = PTR_PTR_1126d8548;
      _objc_alloc_init(PTR_PTR_1126d8548);
      func_0x00010c204680();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1d5a60(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar6);
      func_0x00010c18b740(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    if (param_8 != 0) {
      _objc_retain(puVar2);
      func_0x00010bf97ce0(param_8);
      _objc_release(puVar2);
    }
    puVar5 = puVar1;
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010bf12220(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c1b7800(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126af4d0;
      func_0x00010bfa74e0(PTR_PTR_1126af4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126af4d0;
      func_0x00010bfa7500(PTR_PTR_1126af4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2046e0(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1a8980(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c204f60(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (param_4 == 0) {
      puVar5 = puVar1;
      func_0x00010c266b20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      func_0x00010c216240(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010c266aa0(puVar1);
    func_0x00010c1b3980(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar11;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d8288;
    func_0x00010c2b1dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1966e0(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar11);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(puVar1);
    ppuVar13 = &PTR____CFConstantStringClassReference_110ec2998;
    puVar11 = PTR_PTR_1126bbf20;
    func_0x00010bdc1920(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_11);
    _objc_retain(param_11);
    func_0x00010c25f400(param_9);
    _objc_release(puVar11);
    _objc_release(param_11);
    _objc_release(param_11);
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(ppuVar13);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar13);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar11 = PTR_PTR_1126d8558;
  if (puVar2 == (undefined *)0x7d0) {
    puVar11 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    lVar12 = *(long *)(param_1 + 0x20);
    puVar6 = PTR_PTR_1126d8558;
    func_0x00010c261920(PTR_PTR_1126d8558);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar12 + 0x10))(lVar12,puVar6);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x20);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar6 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar5,puVar11);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar12 + 0x10))(lVar12,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f03084; end: 107f0320b;  */

void FUN_107f03084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR_PTR_1126d8558;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar6 = *(long *)(param_1 + 0x20);
    puVar4 = PTR_PTR_1126d8558;
    func_0x00010c261920(PTR_PTR_1126d8558);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar4);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f0320c; end: 107f03253;  */

void FUN_107f0320c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d8558;
  func_0x00010c0d7b00(PTR_PTR_1126d8558);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f03254; end: 107f033db;  */

undefined *
FUN_107f03254(undefined *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  long lVar22;
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
  
  puVar15 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  iVar14 = (int)puVar8;
  if (param_2 == (undefined1 *)0x0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar3 = param_1;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_e8;
    param_5 = 0x10;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    iVar14 = (int)puVar8;
    puVar20 = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) {
      lVar19 = *plStack_120;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar19) {
            _objc_enumerationMutation(puVar3);
          }
          puVar18 = *(undefined1 **)(lStack_128 + (long)puVar20 * 8);
          puVar5 = puVar18;
          func_0x00010c0c55e0();
          puVar21 = param_2;
          func_0x00010c0c55e0();
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          iVar14 = (int)puVar8;
          if (puVar5 == puVar21) {
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = (undefined8 *)puVar18;
            func_0x00010c078c00();
            puVar20 = (undefined *)(ulong)((uint)puVar6 ^ 1);
            _objc_release(puVar18);
            goto LAB_107f0337c;
          }
          puVar20 = puVar20 + 1;
        } while (puVar4 != puVar20);
        param_4 = auStack_e8;
        param_5 = 0x10;
        puVar4 = puVar3;
        puVar15 = &uStack_130;
        func_0x00010bf52a60();
        iVar14 = (int)puVar8;
      } while (puVar4 != (undefined *)0x0);
      puVar20 = (undefined *)0x0;
    }
LAB_107f0337c:
    _objc_release(puVar3);
    param_3 = (undefined1 *)puVar15;
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar20;
  }
  ___stack_chk_fail();
  lVar19 = lStack_128;
  uVar2 = uStack_130;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uVar2);
  _objc_retain(lVar19);
  puVar20 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bf97200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bfbdda0(param_1);
  FUN_107ee8bec((long)(int)puVar3);
  func_0x00010c196ba0(puVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c15e520(param_1);
  func_0x00010c1fce80(puVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bf9e140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bf977c0(param_1);
  func_0x00010c196b20(puVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (iVar14 == 0) {
    puVar3 = param_1;
    func_0x00010c266b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c266aa0(param_1);
  }
  else {
    puVar3 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c07b240(param_1);
  }
  func_0x00010c1b3980(puVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bf8b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010bf8b0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c185380(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = param_1;
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = param_1;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c266980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) goto LAB_107f036cc;
    func_0x00010c266980(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c26f320();
  func_0x00010c1b7800(puVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
LAB_107f036cc:
  lVar7 = param_5;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar7 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        puVar4 = PTR_PTR_1126d8548;
        _objc_alloc_init(PTR_PTR_1126d8548);
        func_0x00010c204680();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1d5a60(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf21f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar4);
        lVar22 = lVar22 + 1;
      } while (lVar7 != lVar22);
      lVar7 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    _objc_retain(param_6);
    lVar7 = param_6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_6);
        }
        puVar4 = PTR_PTR_1126d8548;
        _objc_alloc_init(PTR_PTR_1126d8548);
        func_0x00010c204680();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1d5a60(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf21f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar4);
        lVar22 = lVar22 + 1;
      } while (lVar7 != lVar22);
      lVar7 = param_6;
      func_0x00010bf52a60();
    }
    _objc_release(param_6);
    func_0x00010c204f60(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2063a0(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar5 = param_4;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  do {
    if (puVar8 == (undefined1 *)0x0) {
      _objc_release(puVar5);
      puVar3 = PTR_PTR_1126d8568;
      _objc_opt_new();
      func_0x00010c203f00();
      puVar4 = PTR_PTR_1126d8570;
      _objc_opt_new();
      func_0x00010c1c73c0();
      puVar6 = puVar4;
      func_0x00010bf63640(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00(puVar20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar6);
      puVar8 = param_3;
      func_0x00010bf529e0();
      if (puVar8 != (undefined1 *)0x0) {
        puVar6 = PTR_PTR_1126d8578;
        _objc_opt_new(PTR_PTR_1126d8578);
        puVar8 = param_3;
        func_0x00010c0d3c80(param_3);
        func_0x00010c2202c0(puVar6);
        _objc_release(puVar8);
        puVar10 = PTR_PTR_1126d8568;
        _objc_opt_new(PTR_PTR_1126d8568);
        func_0x00010c16aae0();
        puVar11 = PTR_PTR_1126d8570;
        _objc_opt_new(PTR_PTR_1126d8570);
        func_0x00010c1c73c0();
        puVar12 = puVar11;
        func_0x00010bf63640(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf15d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1967c0(puVar20);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar6);
      }
      puVar6 = PTR_PTR_1126d8288;
      func_0x00010c2b1dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar20;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1966e0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      puVar10 = puVar6;
      func_0x00010bf21f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126bbf20;
      func_0x00010bdc1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar19);
      _objc_retain(lVar19);
      ppuVar16 = &PTR____CFConstantStringClassReference_110ec2998;
      func_0x00010c25f400(param_8);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar19);
      _objc_release(lVar19);
      _objc_release(puVar6);
      _objc_release(puVar4);
LAB_107f03d44:
      _objc_release(puVar3);
      _objc_release(puVar20);
      _objc_release(lVar19);
      _objc_release(uVar2);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        return param_1;
      }
      ___stack_chk_fail();
      puVar20 = PTR_PTR_1126d8290;
      _objc_retain(ppuVar16);
      _objc_alloc();
      func_0x00010c0206e0();
      _objc_release(ppuVar16);
      puVar3 = puVar20;
      func_0x00010c15f8c0();
      if (puVar3 == (undefined *)0x7d0) {
        puVar3 = puVar20;
        func_0x00010bf96fc0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_107ee8d90();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126d8560;
        _objc_alloc(PTR_PTR_1126d8560);
        func_0x00010c04f3e0();
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar3);
        _objc_release(puVar3);
      }
      else {
        puVar4 = PTR_PTR_1126d8560;
        _objc_alloc(PTR_PTR_1126d8560);
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010c15f8c0(puVar20);
        puVar6 = puVar20;
        func_0x00010bf96fc0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar20;
        func_0x00010bf148e0(puVar20);
        puVar11 = puVar20;
        func_0x00010bf66200(puVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010bf99480((double)(long)puVar10,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99400(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04f3e0(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar6);
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar4);
      }
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar20);
      return puVar20;
    }
    puVar21 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar5);
      }
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar9 = *(undefined8 *)((long)puVar21 * 8);
      func_0x00010bdc2b80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(uVar9);
      if (((ulong)puVar3 & 1) != 0) {
        _objc_release(puVar5);
        puVar3 = PTR_PTR_1126d8560;
        _objc_alloc();
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = (undefined **)0x0;
        func_0x00010c04f3e0();
        _objc_release(puVar4);
        (**(code **)(lVar19 + 0x10))(lVar19,puVar3);
        goto LAB_107f03d44;
      }
      puVar21 = puVar21 + 1;
    } while (puVar8 != puVar21);
    puVar8 = puVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f033dc; end: 107f03ddb;  */

void FUN_107f033dc(long param_1,int param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9,long param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf97200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfbdda0(param_1);
  FUN_107ee8bec((long)(int)lVar2);
  func_0x00010c196ba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c15e520(param_1);
  func_0x00010c1fce80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf9e140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bf977c0(param_1);
  func_0x00010c196b20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar2 = param_1;
    func_0x00010c266b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c266aa0(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c07b240(param_1);
  }
  func_0x00010c1b3980(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf8b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf8b0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c185380(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_1;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c266980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_107f036cc;
    func_0x00010c266980(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c26f320();
  func_0x00010c1b7800(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
LAB_107f036cc:
  lVar2 = param_5;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar2 = param_5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_5);
        }
        puVar5 = PTR_PTR_1126d8548;
        _objc_alloc_init(PTR_PTR_1126d8548);
        func_0x00010c204680();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1d5a60(puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf21f60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    _objc_retain(param_6);
    lVar2 = param_6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_6);
        }
        puVar5 = PTR_PTR_1126d8548;
        _objc_alloc_init(PTR_PTR_1126d8548);
        func_0x00010c204680();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1d5a60(puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf21f60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = param_6;
      func_0x00010bf52a60();
    }
    _objc_release(param_6);
    func_0x00010c204f60(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2063a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  lVar15 = param_4;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar15);
      puVar4 = PTR_PTR_1126d8568;
      _objc_opt_new();
      func_0x00010c203f00();
      puVar5 = PTR_PTR_1126d8570;
      _objc_opt_new();
      func_0x00010c1c73c0();
      puVar6 = puVar5;
      func_0x00010bf63640(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar6);
      lVar2 = param_3;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        puVar6 = PTR_PTR_1126d8578;
        _objc_opt_new(PTR_PTR_1126d8578);
        lVar2 = param_3;
        func_0x00010c0d3c80(param_3);
        func_0x00010c2202c0(puVar6);
        _objc_release(lVar2);
        puVar8 = PTR_PTR_1126d8568;
        _objc_opt_new(PTR_PTR_1126d8568);
        func_0x00010c16aae0();
        puVar9 = PTR_PTR_1126d8570;
        _objc_opt_new(PTR_PTR_1126d8570);
        func_0x00010c1c73c0();
        puVar10 = puVar9;
        func_0x00010bf63640(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf15d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1967c0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
      }
      puVar6 = PTR_PTR_1126d8288;
      func_0x00010c2b1dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1966e0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = puVar6;
      func_0x00010bf21f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bbf20;
      func_0x00010bdc1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_10);
      _objc_retain(param_10);
      ppuVar12 = &PTR____CFConstantStringClassReference_110ec2998;
      func_0x00010c25f400(param_8);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(param_10);
      _objc_release(param_10);
      _objc_release(puVar6);
      _objc_release(puVar5);
LAB_107f03d44:
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126d8290;
      _objc_retain(ppuVar12);
      _objc_alloc();
      func_0x00010c0206e0();
      _objc_release(ppuVar12);
      puVar4 = puVar1;
      func_0x00010c15f8c0();
      if (puVar4 == (undefined *)0x7d0) {
        puVar4 = puVar1;
        func_0x00010bf96fc0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        FUN_107ee8d90();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = PTR_PTR_1126d8560;
        _objc_alloc(PTR_PTR_1126d8560);
        func_0x00010c04f3e0();
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar4);
        _objc_release(puVar4);
      }
      else {
        puVar5 = PTR_PTR_1126d8560;
        _objc_alloc(PTR_PTR_1126d8560);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010c15f8c0(puVar1);
        puVar6 = puVar1;
        func_0x00010bf96fc0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf148e0(puVar1);
        puVar9 = puVar1;
        func_0x00010bf66200(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar4;
        func_0x00010bf99480((double)(long)puVar8,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99400(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04f3e0(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar6);
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar5);
      }
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar15);
      }
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar7 = *(undefined8 *)(lVar14 * 8);
      func_0x00010bdc2b80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(uVar7);
      if (((ulong)puVar4 & 1) != 0) {
        _objc_release(lVar15);
        puVar4 = PTR_PTR_1126d8560;
        _objc_alloc();
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = (undefined **)0x0;
        func_0x00010c04f3e0();
        _objc_release(puVar5);
        (**(code **)(param_10 + 0x10))(param_10,puVar4);
        goto LAB_107f03d44;
      }
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = lVar15;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f03ddc; end: 107f03fc7;  */

void FUN_107f03ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  if (puVar2 == (undefined *)0x7d0) {
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d8560;
    _objc_alloc(PTR_PTR_1126d8560);
    func_0x00010c04f3e0();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar3 = PTR_PTR_1126d8560;
    _objc_alloc(PTR_PTR_1126d8560);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c15f8c0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar6 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf99480((double)(long)puVar5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99400(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04f3e0(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar3);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f03fc8; end: 107f04063;  */

void FUN_107f03fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8560;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04f3e0(puVar1);
  _objc_release(puVar2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f04064; end: 107f0440b;  */

void FUN_107f04064(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long *param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf994a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar10 = 0;
    *param_6 = (long)puVar3;
    goto LAB_107f042a4;
  }
  alStack_70[0] = 0;
  uVar2 = param_1;
  func_0x00010801f88c(param_1,alStack_70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = alStack_70[0];
  _objc_retain(alStack_70[0]);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    uVar4 = uVar2;
    func_0x00010bf3d7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (uVar5 <= param_2) goto LAB_107f04278;
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_107f0440c;
    uStack_80 = 0x107f0441c;
    uStack_78 = 0;
    uVar4 = uVar2;
    func_0x00010bf3d7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf0b540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(param_1);
    _objc_retain(param_3);
    _objc_retain(puVar3);
    func_0x00010bf97ce0(uVar6);
    lVar7 = puStack_98[5];
    if (lVar7 == 0) {
      puVar8 = puVar3;
      func_0x00010bf51e00(puVar3);
      lVar10 = param_5;
      func_0x00010bf3d960();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (lVar10 == 0) {
        func_0x00010bf3ec40();
        uVar9 = 0;
        func_0x00010bf87dc0(0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf994a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_6 = (long)puVar8;
        _objc_release(uVar9);
      }
      else {
        _objc_retain(lVar10);
      }
      _objc_release(lVar10);
      _objc_release(0);
    }
    else {
      _objc_retainAutorelease();
      lVar10 = 0;
      *param_6 = lVar7;
    }
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(uVar6);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  else {
    func_0x00010bf3ec40(lVar1);
LAB_107f04278:
    func_0x00010bf994a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar10 = 0;
    *param_6 = (long)puVar3;
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
LAB_107f042a4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 107f0440c; end: 107f04423;  */

void FUN_107f0440c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f04424; end: 107f04553;  */

void FUN_107f04424(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c067ec0(param_3);
  func_0x00010801f394(lVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_107f03254(uVar1,lVar4);
  if ((uVar1 & 1) != 0) goto LAB_107f04534;
  uVar5 = param_2;
  func_0x00010c067ec0();
  if ((int)uVar5 == 5) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    if (lVar4 == 0) goto LAB_107f044c8;
LAB_107f044a0:
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar6 & 1) != 0) goto LAB_107f044c8;
    puVar6 = PTR_PTR_1126b08b0;
    func_0x00010bf33760(PTR_PTR_1126b08b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    uVar5 = 0;
    if (lVar4 != 0) goto LAB_107f044a0;
LAB_107f044c8:
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf994a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    puVar6 = *(undefined **)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
  }
  _objc_release(puVar6);
  _objc_release(uVar5);
LAB_107f04534:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f04554; end: 107f04923;  */

void FUN_107f04554(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf994a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar9 = 0;
    *param_4 = (long)puVar3;
  }
  else {
    alStack_70[0] = 0;
    lVar2 = param_1;
    func_0x00010801f88c(param_1,alStack_70);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = alStack_70[0];
    _objc_retain(alStack_70[0]);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar1 == 0) {
      lVar9 = lVar2;
      func_0x00010bfcd040();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar9;
      func_0x00010bf0b540();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010bf529e0();
      lVar6 = param_2;
      func_0x00010bf529e0();
      _objc_release(lVar7);
      _objc_release(lVar4);
      _objc_release(lVar9);
      if (lVar5 == lVar6) {
        puStack_98 = &uStack_a0;
        uStack_a0 = 0;
        uStack_90 = 0x3032000000;
        pcStack_88 = FUN_107f0440c;
        uStack_80 = 0x107f0441c;
        uStack_78 = 0;
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        lVar9 = lVar2;
        func_0x00010bfcd040();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x00010bf0b540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_retain(param_1);
        _objc_retain(param_2);
        _objc_retain(puVar3);
        func_0x00010bf97ce0(lVar4);
        lVar7 = puStack_98[5];
        if (lVar7 == 0) {
          puVar8 = puVar3;
          func_0x00010bf51e00(puVar3);
          lVar9 = param_3;
          func_0x00010bf3d960();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = 0;
          _objc_retain(0);
          _objc_release(puVar8);
          puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (lVar9 == 0) {
            func_0x00010bf3ec40();
            func_0x00010bf87dc0(0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf994a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *param_4 = (long)puVar8;
            _objc_release(uVar10);
          }
          else {
            _objc_retain(lVar9);
          }
          _objc_release(lVar9);
          _objc_release(0);
        }
        else {
          _objc_retainAutorelease();
          lVar9 = 0;
          *param_4 = lVar7;
        }
        _objc_release(puVar3);
        _objc_release(param_2);
        _objc_release(param_1);
        _objc_release(lVar4);
        _objc_release(puVar3);
        __Block_object_dispose(&uStack_a0,8);
        _objc_release(uStack_78);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf994a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        lVar9 = 0;
        *param_4 = (long)puVar3;
      }
    }
    else {
      func_0x00010bf3ec40(lVar1);
      func_0x00010bf994a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      lVar9 = 0;
      *param_4 = (long)puVar3;
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 107f04924; end: 107f04b87;  */

void FUN_107f04924(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar11 = *(long *)(param_1 + 0x20);
  func_0x00010c067ec0(param_3);
  func_0x00010801f394(lVar11,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  FUN_107f03254(uVar3,lVar11);
  if ((uVar3 & 1) == 0) {
    uVar14 = param_2;
    func_0x00010c067ec0();
    iVar1 = (int)uVar14;
    func_0x00010b697928();
    lVar12 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar12);
    _objc_retain(lVar12);
    lVar4 = lVar12;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    if (lVar4 == 0) {
      uVar14 = 0;
    }
    else {
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar12);
          }
          uVar14 = *(undefined8 *)(lVar10 * 8);
          uVar5 = uVar14;
          func_0x00010bf0af00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c27dd80();
          iVar2 = iVar1;
          func_0x00010b6979dc();
          _objc_release(uVar5);
          if ((int)uVar6 == iVar2) {
            func_0x00010bf89180(uVar14);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107f04aa0;
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar12;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      uVar14 = 0;
    }
LAB_107f04aa0:
    _objc_release(lVar12);
    _objc_release(lVar12);
    if ((lVar11 == 0) ||
       (puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0, func_0x00010c078c00(),
       ((ulong)puVar13 & 1) != 0)) {
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf994a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      puVar13 = *(undefined **)(lVar9 + 0x28);
      *(undefined **)(lVar9 + 0x28) = puVar7;
    }
    else {
      puVar13 = PTR_PTR_1126b08b0;
      func_0x00010bf33760(PTR_PTR_1126b08b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    }
    _objc_release(puVar13);
    _objc_release(uVar14);
  }
  _objc_release(lVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain();
    _objc_opt_new();
    _objc_retain();
    func_0x00010bf97e80(lVar11);
    _objc_release(lVar11);
    puVar7 = puVar13;
    func_0x00010bf51e00(puVar13);
    _objc_release(puVar13);
    _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f04b88; end: 107f04c2b;  */

void FUN_107f04b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain();
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107f04c2c;
  puStack_30 = &UNK_110a127d0;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f04c2c; end: 107f04cc7;  */

void FUN_107f04c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf89180(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf0af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010bfe5ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f04cc8; end: 107f04f13;  */

undefined8 * FUN_107f04cc8(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long alStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_2;
  _objc_retain();
  if (param_2 == (long *)0x0) {
    puVar12 = (undefined8 *)0x1;
    goto LAB_107f04ecc;
  }
  lStack_f8 = 0;
  plVar11 = &lStack_f8;
  plVar1 = param_1;
  func_0x00010801f88c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lStack_f8;
  _objc_retain(lStack_f8);
  if (lVar9 == 0) {
    plVar13 = plVar1;
    func_0x00010bf3d7e0();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar13;
    func_0x00010bf529e0();
    _objc_release(plVar13);
    if (plVar2 < param_2) goto LAB_107f04eb8;
    plVar13 = (long *)0x0;
    do {
      plVar2 = plVar1;
      func_0x00010bf3d7e0();
      _objc_retainAutoreleasedReturnValue();
      plVar3 = plVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      plVar4 = plVar3;
      func_0x00010bf0b540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar3);
      _objc_release(plVar2);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      plVar2 = plVar4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      param_3 = &uStack_140;
      param_4 = alStack_f0;
      plVar3 = plVar2;
      func_0x00010bf52a60();
      if (plVar3 != (long *)0x0) {
        lVar15 = *plStack_130;
        do {
          plVar14 = (long *)0x0;
          do {
            if (*plStack_130 != lVar15) {
              _objc_enumerationMutation(plVar2);
            }
            uVar5 = *(undefined8 *)(lStack_138 + (long)plVar14 * 8);
            func_0x00010c067ec0(uVar5);
            plVar6 = param_1;
            func_0x00010801f394(param_1,uVar5);
            _objc_retainAutoreleasedReturnValue();
            plVar7 = param_1;
            plVar11 = plVar6;
            FUN_107f03254();
            _objc_release(plVar6);
            if ((int)plVar7 == 0) {
              _objc_release(plVar2);
              _objc_release(plVar4);
              goto LAB_107f04eb8;
            }
            plVar14 = (long *)((long)plVar14 + 1);
          } while (plVar3 != plVar14);
          param_3 = &uStack_140;
          param_4 = alStack_f0;
          plVar3 = plVar2;
          func_0x00010bf52a60();
        } while (plVar3 != (long *)0x0);
      }
      _objc_release(plVar2);
      _objc_release(plVar4);
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar13 != param_2);
    puVar12 = (undefined8 *)0x1;
  }
  else {
LAB_107f04eb8:
    puVar12 = (undefined8 *)0x0;
  }
  _objc_release(plVar1);
  _objc_release(lVar9);
LAB_107f04ecc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(plVar11);
  _objc_retain(param_3);
  plVar1 = param_1;
  func_0x00010801f88c(param_1,param_4);
  _objc_retainAutoreleasedReturnValue();
  plVar13 = plVar1;
  func_0x00010bf3d7e0();
  _objc_retainAutoreleasedReturnValue();
  plVar2 = plVar13;
  func_0x00010bf529e0();
  plVar3 = plVar11;
  func_0x00010bf529e0();
  _objc_release(plVar13);
  if (plVar2 < plVar3) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puStack_1f0 = &uStack_1f8;
    uStack_1f8 = 0;
    uStack_1e8 = 0x3032000000;
    pcStack_1e0 = FUN_107f0440c;
    uStack_1d8 = 0x107f0441c;
    uStack_1d0 = 0;
    for (plVar13 = (long *)0x0; plVar2 = plVar11, func_0x00010bf529e0(), plVar13 < plVar2;
        plVar13 = (long *)((long)plVar13 + 1)) {
      plVar2 = plVar1;
      func_0x00010bf3d7e0(plVar1);
      _objc_retainAutoreleasedReturnValue();
      plVar3 = plVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      plVar4 = plVar3;
      func_0x00010bf0b540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar3);
      _objc_release(plVar2);
      _objc_retain(param_1);
      _objc_retain(plVar11);
      _objc_retain(puVar8);
      func_0x00010bf97ce0(plVar4);
      _objc_release(puVar8);
      _objc_release(plVar11);
      _objc_release(param_1);
      _objc_release(plVar4);
    }
    lVar9 = puStack_1f0[5];
    if (lVar9 == 0) {
      puVar10 = puVar8;
      func_0x00010bf51e00(puVar8);
      puVar12 = param_3;
      func_0x00010bf3d960(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
    }
    else if (param_4 == (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      _objc_retainAutorelease();
      puVar12 = (undefined8 *)0x0;
      *param_4 = lVar9;
    }
    __Block_object_dispose(&uStack_1f8,8);
    _objc_release(uStack_1d0);
    _objc_release(puVar8);
  }
  _objc_release(plVar1);
  _objc_release(param_3);
  _objc_release(plVar11);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 107f04f14; end: 107f051bb;  */

void FUN_107f04f14(ulong param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010801f88c(param_1,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf3d7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf529e0();
  uVar3 = param_2;
  func_0x00010bf529e0();
  _objc_release(uVar9);
  if (uVar2 < uVar3) {
    uVar8 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_107f0440c;
    uStack_88 = 0x107f0441c;
    uStack_80 = 0;
    for (uVar9 = 0; uVar2 = param_2, func_0x00010bf529e0(), uVar9 < uVar2; uVar9 = uVar9 + 1) {
      uVar2 = uVar1;
      func_0x00010bf3d7e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf0b540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_retain(param_1);
      _objc_retain(param_2);
      _objc_retain(puVar4);
      func_0x00010bf97ce0(uVar5);
      _objc_release(puVar4);
      _objc_release(param_2);
      _objc_release(param_1);
      _objc_release(uVar5);
    }
    lVar6 = puStack_a0[5];
    if (lVar6 == 0) {
      puVar7 = puVar4;
      func_0x00010bf51e00(puVar4);
      uVar8 = param_3;
      func_0x00010bf3d960(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    else if (param_4 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      _objc_retainAutorelease();
      uVar8 = 0;
      *param_4 = lVar6;
    }
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107f051bc; end: 107f0533f;  */

void FUN_107f051bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067ec0(param_3);
  func_0x00010801f394(uVar6,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_107f03254(uVar1,uVar6);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c067ec0();
    _objc_retain(uVar2);
    uVar7 = uVar2;
    if ((int)uVar3 == 6) {
      func_0x00010c0ef7c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if ((int)uVar3 == 5) {
      func_0x00010c0c4ae0(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = 0;
    }
    _objc_release(uVar2);
    _objc_release(uVar2);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar8 == 0) {
      puVar8 = PTR_PTR_1126b08b0;
      func_0x00010bf33760(PTR_PTR_1126b08b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      puVar8 = *(undefined **)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar4;
    }
    _objc_release(puVar8);
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f05340; end: 107f053ab;  */

undefined8 FUN_107f05340(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf3ec40();
  if (((lVar1 == 0x138d) && (lVar1 = param_1, func_0x00010c240540(), lVar1 == 100)) &&
     (lVar1 = param_1, func_0x00010bf6f680(), lVar1 == 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107f053ac; end: 107f056ff;  */

undefined * FUN_107f053ac(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 0;
  puVar2 = param_1;
  func_0x000108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000108017f48();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  puVar21 = puVar2;
  func_0x00010c13e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010bfc76e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  if (uVar5 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(uVar4);
    puVar21 = &uStack_1b0;
    uVar5 = uVar4;
    func_0x00010bf52a60();
    if (uVar5 == 0) {
      puVar20 = (undefined *)0x1;
    }
    else {
      lVar19 = *plStack_1a0;
      do {
        uVar18 = 0;
        do {
          if (*plStack_1a0 != lVar19) {
            _objc_enumerationMutation(uVar4);
          }
          puVar21 = *(undefined8 **)(lStack_1a8 + uVar18 * 8);
          puVar6 = param_2;
          func_0x00010c0c6280();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (puVar7 != (undefined8 *)0x0) {
            puVar17 = (undefined8 *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(puVar6);
              }
              puVar22 = *(undefined8 **)((long)puVar17 * 8);
              puVar8 = puVar21;
              func_0x00010c0c55e0();
              puVar9 = puVar22;
              func_0x00010c0c55e0();
              if (puVar8 == puVar9) {
                _objc_retain(puVar22);
                _objc_release(puVar6);
                if (puVar22 == (undefined8 *)0x0) goto LAB_107f055cc;
                puVar6 = puVar22;
                func_0x00010bdc2b80();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                func_0x00010c08fa60();
                if (puVar7 != (undefined8 *)0x0) goto LAB_107f055c4;
                puVar7 = puVar22;
                func_0x00010bf4cce0();
                _objc_retainAutoreleasedReturnValue();
                puVar17 = puVar7;
                func_0x00010c08fa60();
                _objc_release(puVar7);
                _objc_release(puVar6);
                if (puVar17 != (undefined8 *)0x0) goto LAB_107f055cc;
                uVar10 = uVar4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar10;
                func_0x000108019358();
                _objc_release(uVar10);
                if ((uVar11 & 1) != 0) goto LAB_107f055cc;
                _objc_release(puVar22);
                puVar20 = (undefined *)0x0;
                goto LAB_107f05690;
              }
              puVar17 = (undefined8 *)((long)puVar17 + 1);
            } while (puVar7 != puVar17);
            puVar7 = puVar6;
            func_0x00010bf52a60();
          }
          puVar22 = (undefined8 *)0x0;
LAB_107f055c4:
          _objc_release(puVar6);
LAB_107f055cc:
          _objc_release(puVar22);
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar5);
        puVar21 = &uStack_1b0;
        uVar5 = uVar4;
        func_0x00010bf52a60();
      } while (uVar5 != 0);
      puVar20 = (undefined *)0x1;
    }
LAB_107f05690:
    _objc_release(uVar4);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar20;
  }
  ___stack_chk_fail();
  puVar20 = PTR_PTR_1126d8580;
  _objc_retain(puVar21);
  _objc_retain(uVar16);
  _objc_retain(param_2);
  _objc_opt_new(puVar20);
  puVar12 = puVar20;
  func_0x00010c2b9320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  puVar13 = puVar12;
  func_0x00010c2a7ee0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar14 = puVar13;
  func_0x00010c2ad3e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  puVar15 = puVar14;
  func_0x00010bf21f60(puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return puVar15;
}



/* Entry: 107f05700; end: 107f057f3;  */

void FUN_107f05700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d8580;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x00010c2b9320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c2a7ee0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = puVar3;
  func_0x00010c2ad3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f057f4; end: 107f058cb;  */

void FUN_107f057f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bf8f0;
  func_0x00010bf5aa20(PTR_PTR_1126bf8f0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c0fd920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8100(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f058cc; end: 107f0689f;  */

void FUN_107f058cc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13,
                  undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puVar1 = PTR_PTR_1126af4c0;
  lVar28 = param_2;
  func_0x00010bf97200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar28 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar29 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar28) {
        _objc_enumerationMutation(puVar3);
      }
      uVar5 = *(undefined8 *)((long)puVar29 * 8);
      func_0x00010c241220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar5);
      puVar29 = puVar29 + 1;
    } while (puVar4 != puVar29);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  puVar29 = puVar3;
  func_0x00010bf529e0();
  lVar6 = param_6;
  func_0x00010c0ce1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c26da00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(puVar1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(lVar7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(uVar5);
  _objc_retain(param_13);
  lVar8 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar28 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar28) {
        _objc_enumerationMutation(puVar2);
      }
      puVar10 = PTR_PTR_1126d8548;
      _objc_alloc_init(PTR_PTR_1126d8548);
      func_0x00010c204680();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1d5a60(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf21f60(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar10);
      puVar26 = puVar26 + 1;
    } while (puVar4 != puVar26);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126d8548;
  _objc_opt_new();
  func_0x00010c204680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d5a60(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(lVar7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  puVar26 = PTR_PTR_1126d83e0;
  func_0x00010c2b1d80();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar28);
  uVar12 = param_1;
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204180(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  lVar28 = param_3;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar28 != 0) {
    lVar28 = param_3;
    func_0x00010bf8b0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206720(puVar26);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar28);
  }
  lVar28 = lVar7;
  if ((param_5 != 0) && (lVar7 == 0)) {
    lVar28 = param_9;
    func_0x00010bfbfb80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar28 == 0) {
      lVar28 = 0;
    }
    else {
      puVar10 = PTR_PTR_1126bf900;
      func_0x00010c2aec40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c213f60();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar11;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_retain(param_3);
      _objc_retain(param_8);
      _objc_retain(puVar14);
      func_0x00010c0f8520(param_8);
      _objc_release(param_8);
      _objc_release(param_3);
      _objc_release(puVar14);
      _objc_release(puVar14);
    }
  }
  lVar15 = param_3;
  func_0x00010c26fd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  puVar10 = PTR_PTR_1126d83f8;
  _objc_alloc_init();
  func_0x00010c247520(param_3);
  func_0x00010c21ace0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010bf2a8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176e00(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_3;
  func_0x00010bf0e960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b8e0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_3;
  func_0x00010bf9e140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_3;
  func_0x00010c14be80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  puVar11 = puVar10;
  func_0x00010bf21f60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  lVar15 = param_3;
  func_0x00010bf70720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 != 0) {
    lVar16 = param_3;
    func_0x00010bf704c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar15);
    if (lVar16 != 0) {
      lVar15 = param_3;
      func_0x00010bf70720();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_3;
      func_0x00010bf704c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      _objc_release(lVar15);
      puVar14 = puVar11;
      func_0x00010bf446e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c9a0(puVar26);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar11);
    }
  }
  lVar15 = lVar28;
  func_0x00010bf15d80(lVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8120(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_3;
  func_0x00010c0c41a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4140(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_3;
  func_0x00010c273740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  func_0x00010c213e80(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar12 = param_7;
  func_0x00010c271e60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195c20(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  lVar15 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x000108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  func_0x000108017f48();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_13;
  func_0x00010c13e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar19 = lVar18;
  func_0x00010bfc76e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar20;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (lVar15 != 0) {
    lVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar20);
      }
      lVar21 = lVar19;
      func_0x00010c0e00e0(lVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010bfc4120();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar22;
      func_0x00010b7f5374();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar22);
      func_0x00010c08fa60(lVar23);
      _objc_release(lVar23);
      _objc_release(lVar21);
      lVar27 = lVar27 + 1;
    } while (lVar15 != lVar27);
    lVar15 = lVar20;
    func_0x00010bf52a60();
  }
  _objc_release(lVar20);
  func_0x00010c202d20(puVar26);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_5 != 0) {
    func_0x00010c08fa60(param_5);
    func_0x00010c2143c0(puVar26);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar11 = puVar26;
  func_0x00010bf21f60(puVar26);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(puVar10);
  _objc_release(puVar26);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(lVar28);
  _objc_release(param_1);
  _objc_release(param_3);
  puVar26 = puVar4;
  func_0x00010c203860(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar26;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  func_0x00010befa120(puVar9);
  puVar26 = puVar1;
  FUN_107f014b0(puVar1,param_2,puVar29 == (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar26;
  func_0x00010c204f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  puVar26 = puVar29;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(param_13);
  _objc_release(uVar5);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126d8288;
  func_0x00010c2b1dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c1966e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar29);
  _objc_release(puVar4);
  uVar5 = param_10;
  func_0x00010c1179e0(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1341c0(0x3f800000);
  _objc_release(uVar5);
  ppuVar25 = &PTR____CFConstantStringClassReference_110ec2998;
  puVar4 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_15);
  _objc_retain(param_15);
  _objc_retain(param_1);
  func_0x00010c25f400(param_12);
  _objc_release(puVar4);
  _objc_release(param_15);
  _objc_release(param_15);
  _objc_release(param_1);
  _objc_release(param_15);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar26);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126d8290;
    _objc_retain(ppuVar25);
    _objc_alloc();
    func_0x00010c0206e0();
    _objc_release(ppuVar25);
    puVar2 = puVar4;
    func_0x00010c15f8c0();
    puVar1 = PTR_PTR_1126d8550;
    if (puVar2 == (undefined *)0x7d0) {
      puVar1 = puVar4;
      func_0x00010bf96fc0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_107ee8d90();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar29 = puVar2;
      func_0x00010c0d3c80(puVar2);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf63640(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar29);
      _objc_release(uVar5);
      puVar3 = PTR_PTR_1126d8550;
      lVar28 = *(long *)(param_2 + 0x28);
      puVar1 = puVar29;
      func_0x00010bf51e00(puVar29);
      func_0x00010c261920(puVar3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar28 + 0x10))(lVar28,puVar3);
      _objc_release(puVar3);
    }
    else {
      lVar28 = *(long *)(param_2 + 0x28);
      func_0x00010c15f8c0(puVar4);
      puVar2 = puVar4;
      func_0x00010bf96fc0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf148e0(puVar4);
      puVar29 = puVar4;
      func_0x00010bf66200(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15f160((double)(long)puVar3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar28 + 0x10))(lVar28,puVar1);
    }
    _objc_release(puVar1);
    _objc_release(puVar29);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 107f068a0; end: 107f06a67;  */

void FUN_107f068a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar6 = PTR_PTR_1126d8550;
  if (puVar2 == (undefined *)0x7d0) {
    puVar6 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar5 = puVar2;
    func_0x00010c0d3c80(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d8550;
    lVar7 = *(long *)(param_1 + 0x28);
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010c261920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,puVar4);
    _objc_release(puVar4);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar5 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f160((double)(long)puVar4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,puVar6);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f06a68; end: 107f06aaf;  */

void FUN_107f06a68(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d8550;
  func_0x00010c0d7b00(PTR_PTR_1126d8550);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f06ab0; end: 107f06c7b;  */

void FUN_107f06ab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c23ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x000108017660(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c12b7c0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f06c7c; end: 107f072eb;  */

void FUN_107f06c7c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined *unaff_x25;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  code *pcVar21;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_4;
  puVar13 = param_5;
  puVar18 = param_6;
  puVar11 = param_7;
  puVar12 = param_8;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = param_7;
  _objc_retain(param_7);
  if (param_1 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar20 = param_1;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = param_2;
  puVar5 = param_6;
  FUN_107ec6e50();
  puStack_80 = param_4;
  if ((int)puVar14 == 0) {
    puVar3 = param_1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    puVar4 = PTR_PTR_1126af4d0;
    puVar14 = param_8;
    if (puVar3 == (undefined *)0x2) {
      unaff_x25 = param_2;
      puStack_a0 = param_3;
      puStack_98 = param_8;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = unaff_x25;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = param_6;
      func_0x00010bfa7520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(unaff_x25);
      puVar15 = puVar4;
      func_0x00010bf529e0();
      if (puVar15 != (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puStack_90 = puVar20;
        func_0x00010c0da520();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar14 = param_2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar3 = param_2;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520();
        _objc_retainAutoreleasedReturnValue();
        param_3 = puStack_a0;
        ppuStack_b0 = &PTR____CFConstantStringClassReference_110ec2ab8;
        puVar12 = (undefined *)0x0;
        puVar11 = puStack_a0;
        puVar15 = puVar6;
        puVar13 = unaff_x25;
        puVar18 = puVar20;
        param_8 = puStack_98;
        func_0x00010c0a1ac0(param_5);
        _objc_release(puVar20);
        _objc_release(puVar3);
        _objc_release(unaff_x25);
        _objc_release(puVar14);
        _objc_release(puVar6);
        puVar20 = puStack_90;
        _objc_release(puVar4);
        param_4 = puVar5;
        param_6 = puStack_88;
        puVar5 = (undefined *)0x0;
        goto LAB_107f070a8;
      }
      _objc_release(puVar4);
      puVar15 = param_6;
      param_3 = puStack_a0;
      param_6 = puStack_88;
      puVar14 = puStack_98;
    }
    param_8 = puVar11;
    puVar11 = param_2;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126af4d0;
    puVar4 = param_2;
    if (puVar11 == (undefined *)0x0) {
      puVar6 = param_2;
      puVar11 = puStack_78;
      FUN_107f053ac();
      puVar3 = (undefined *)0x0;
      puVar5 = param_4;
      if (((ulong)puVar6 & 1) != 0) goto LAB_107f0709c;
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_98 = puVar14;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar15 = param_2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar15;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0c5180(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)0x6;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined *)0x6;
    }
    else {
      unaff_x25 = param_2;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = unaff_x25;
      puVar15 = param_6;
      func_0x00010bfa72e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x25);
      if (puVar3 != (undefined *)0x0) {
LAB_107f0709c:
        param_4 = puVar5;
        _objc_retain(param_2);
        puVar5 = param_2;
        goto LAB_107f070a8;
      }
      puVar11 = param_2;
      FUN_107f053ac(param_2,param_4,puStack_78);
      if (((ulong)puVar11 & 1) != 0) {
        puVar3 = PTR_PTR_1126bf910;
        func_0x00010c2aebc0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = (undefined *)0x0;
        unaff_x25 = puVar3;
        func_0x00010c192ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x25;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        _objc_release(puVar3);
        goto LAB_107f070a8;
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_98 = puVar14;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar15 = param_2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar15;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0c5180(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)0x2;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined *)0x2;
    }
    puVar11 = param_3;
    puVar15 = puVar6;
    puVar13 = puVar3;
    puVar18 = puVar14;
    param_8 = puStack_98;
    ppuStack_b0 = ppuVar7;
    puStack_a0 = param_1;
    puStack_88 = param_2;
    func_0x00010c0a1ac0(param_5);
    param_2 = puStack_88;
    param_1 = puStack_a0;
    _objc_release(ppuVar7);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_a8);
    unaff_x25 = puVar6;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar14 = param_2;
    puStack_90 = puVar20;
    puStack_88 = param_6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    unaff_x25 = param_2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110ec2818;
    puVar12 = (undefined *)0x0;
    puVar11 = param_3;
    puVar15 = puVar6;
    puVar13 = puVar4;
    puVar18 = puVar3;
    func_0x00010c0a1ac0(param_5);
    _objc_release(puVar3);
    _objc_release(unaff_x25);
    _objc_release(puVar4);
    _objc_release(puVar14);
    param_4 = puVar5;
    param_6 = puStack_88;
    puVar20 = puStack_90;
  }
  _objc_release(puVar6);
  puVar5 = (undefined *)0x0;
LAB_107f070a8:
  _objc_release(puVar20);
  _objc_release(puStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puStack_80);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  pcVar21 = FUN_107f072ec;
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_b0;
  puVar9 = (undefined1 *)register0x00000008;
  do {
    puVar6 = param_4;
    puVar2 = (undefined1 *)pppuVar1;
    *(undefined8 *)(puVar2 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar2 + -0x68) = unaff_d8;
    *(undefined **)(puVar2 + -0x60) = puVar20;
    *(undefined **)(puVar2 + -0x58) = puVar5;
    *(undefined **)(puVar2 + -0x50) = puVar14;
    *(undefined **)(puVar2 + -0x48) = unaff_x25;
    *(undefined **)(puVar2 + -0x40) = param_6;
    *(undefined **)(puVar2 + -0x38) = param_5;
    *(undefined **)(puVar2 + -0x30) = puVar3;
    *(undefined **)(puVar2 + -0x28) = param_1;
    *(undefined **)(puVar2 + -0x20) = param_2;
    *(undefined **)(puVar2 + -0x18) = param_3;
    *(undefined1 **)(puVar2 + -0x10) = puVar9 + -0x10;
    *(code **)(puVar2 + -8) = pcVar21;
    *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar6);
    _objc_retain(puVar11);
    _objc_retain(puVar13);
    _objc_retain(puVar18);
    _objc_retain(param_8);
    _objc_retain(puVar12);
    puVar14 = puVar11;
    func_0x00010bf529e0();
    if (puVar15 < puVar14) {
      *(undefined **)(puVar2 + -0x2b8) = puVar12;
      *(undefined **)(puVar2 + -0x2b0) = param_8;
      param_5 = puVar2 + -0x210;
      *(undefined **)(puVar2 + -0x2d0) = puVar15;
      puVar12 = puVar11;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar6);
      *(undefined **)(puVar2 + -0x2a0) = puVar12;
      _objc_retain(puVar12);
      *(undefined8 *)(puVar2 + -0x1c8) = 0;
      *(undefined8 *)(puVar2 + -0x1d0) = 0;
      *(undefined8 *)(puVar2 + -0x1b8) = 0;
      *(undefined8 *)(puVar2 + -0x1c0) = 0;
      *(undefined8 *)(puVar2 + -0x1a8) = 0;
      *(undefined8 *)(puVar2 + -0x1b0) = 0;
      *(undefined8 *)(puVar2 + -0x198) = 0;
      *(undefined8 *)(puVar2 + -0x1a0) = 0;
      _objc_retain(puVar6);
      puVar12 = puVar6;
      func_0x00010bf52a60();
      *(undefined **)(puVar2 + -0x2c8) = puVar18;
      *(undefined **)(puVar2 + -0x2c0) = puVar13;
      if (puVar12 == (undefined *)0x0) {
        puVar20 = (undefined *)0x7fffffffffffffff;
      }
      else {
        *(undefined **)(puVar2 + -0x2e0) = puVar11;
        *(undefined **)(puVar2 + -0x2d8) = puVar4;
        lVar19 = **(long **)(puVar2 + -0x1c0);
        uVar17 = *(undefined8 *)(puVar2 + -0x2a0);
        do {
          puVar18 = (undefined *)0x0;
          *(undefined **)(puVar2 + -0x2a8) = puVar12;
          do {
            if (**(long **)(puVar2 + -0x1c0) != lVar19) {
              _objc_enumerationMutation(puVar6);
            }
            puVar14 = *(undefined **)(*(long *)(puVar2 + -0x1c8) + (long)puVar18 * 8);
            puVar15 = puVar14;
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            param_5 = puVar15;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar17;
            func_0x00010bf0b260(uVar17);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = param_5;
            func_0x00010c0720c0();
            if (((ulong)puVar13 & 1) == 0) {
              _objc_release(uVar8);
              _objc_release(param_5);
              _objc_release(puVar15);
            }
            else {
              puVar12 = puVar14;
              func_0x00010bf0af00();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar12;
              func_0x00010c27dd80();
              func_0x00010bf0b760();
              _objc_release(puVar12);
              _objc_release(uVar8);
              _objc_release(param_5);
              _objc_release(puVar15);
              puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              iVar16 = (int)uVar17;
              puVar12 = *(undefined **)(puVar2 + -0x2a8);
              uVar17 = *(undefined8 *)(puVar2 + -0x2a0);
              if ((int)puVar13 == iVar16) {
                func_0x00010bdc2b80(puVar14);
                _objc_retainAutoreleasedReturnValue();
                puVar18 = puVar15;
                func_0x00010c078c00();
                if (((ulong)puVar18 & 1) == 0) {
                  puVar20 = puVar6;
                  func_0x00010bfecde0();
                }
                else {
                  puVar20 = (undefined *)0x7fffffffffffffff;
                }
                puVar11 = *(undefined **)(puVar2 + -0x2e0);
                puVar4 = *(undefined **)(puVar2 + -0x2d8);
                puVar18 = *(undefined **)(puVar2 + -0x2c8);
                puVar13 = *(undefined **)(puVar2 + -0x2c0);
                _objc_release(puVar14);
                goto LAB_107f07594;
              }
            }
            puVar18 = puVar18 + 1;
          } while (puVar12 != puVar18);
          puVar12 = puVar6;
          func_0x00010bf52a60();
        } while (puVar12 != (undefined *)0x0);
        puVar20 = (undefined *)0x7fffffffffffffff;
        puVar11 = *(undefined **)(puVar2 + -0x2e0);
        puVar4 = *(undefined **)(puVar2 + -0x2d8);
        puVar18 = *(undefined **)(puVar2 + -0x2c8);
        puVar13 = *(undefined **)(puVar2 + -0x2c0);
        puVar15 = (undefined *)0x0;
      }
LAB_107f07594:
      _objc_release(puVar6);
      uVar17 = *(undefined8 *)(puVar2 + -0x2a0);
      _objc_release(uVar17);
      _objc_release(puVar6);
      if (puVar20 == (undefined *)0x7fffffffffffffff) {
        param_6 = *(undefined **)(puVar2 + -0x2b8);
        param_3 = *(undefined **)(puVar2 + -0x2b0);
        FUN_107f072ec(puVar4,puVar6,puVar11,*(long *)(puVar2 + -0x2d0) + 1,puVar13,puVar18,param_3,
                      param_6);
      }
      else {
        func_0x00010bf0b760();
        if ((uint)uVar17 < 0x16) {
          func_0x00010b697928();
        }
        else {
          uVar17 = 0xfffffffffbadbeef;
        }
        uVar8 = *(undefined8 *)(puVar2 + -0x2a0);
        func_0x00010bf0b260(uVar8);
        _objc_retainAutoreleasedReturnValue();
        param_5 = puVar18;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        func_0x000108018d28(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = param_5;
        func_0x00010bfad280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(puVar2 + -0x2a8) = puVar12;
        if (puVar12 == (undefined *)0x0) {
          puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          param_6 = *(undefined **)(puVar2 + -0x2b8);
          (**(code **)(param_6 + 0x10))(param_6,0,puVar12);
          _objc_release(puVar12);
        }
        else {
          *(undefined **)(puVar2 + -0x2e8) = puVar15;
          *(undefined **)(puVar2 + -0x2e0) = param_5;
          puVar18 = puVar6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
          puVar12 = puVar18;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460();
          _objc_retainAutoreleasedReturnValue();
          *(undefined **)(puVar2 + -0x2d8) = puVar15;
          _objc_release(puVar12);
          puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar2 + -0x208) = 0;
          *(undefined8 *)(puVar2 + -0x210) = 0;
          *(undefined8 *)(puVar2 + -0x1f8) = 0;
          *(undefined8 *)(puVar2 + -0x200) = 0;
          *(undefined8 *)(puVar2 + -0x1e8) = 0;
          *(undefined8 *)(puVar2 + -0x1f0) = 0;
          *(undefined8 *)(puVar2 + -0x1d8) = 0;
          *(undefined8 *)(puVar2 + -0x1e0) = 0;
          *(undefined **)(puVar2 + -0x2f0) = puVar18;
          func_0x00010c28dec0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar18;
          func_0x00010c123f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar18);
          puVar18 = puVar15;
          func_0x00010bf52a60();
          if (puVar18 != (undefined *)0x0) {
            lVar19 = **(long **)(puVar2 + -0x200);
            do {
              puVar12 = (undefined *)0x0;
              do {
                if (**(long **)(puVar2 + -0x200) != lVar19) {
                  _objc_enumerationMutation(puVar15);
                }
                uVar8 = *(undefined8 *)(*(long *)(puVar2 + -0x208) + (long)puVar12 * 8);
                uVar17 = uVar8;
                func_0x00010c296d80(uVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c086560(uVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar20);
                _objc_release(uVar8);
                _objc_release(uVar17);
                puVar12 = puVar12 + 1;
              } while (puVar18 != puVar12);
              puVar18 = puVar15;
              func_0x00010bf52a60();
            } while (puVar18 != (undefined *)0x0);
          }
          _objc_release(puVar15);
          puVar15 = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined **)(puVar2 + -0x270) = PTR___NSConcreteStackBlock_11034bd00;
          unaff_d8 = 0xc2000000;
          *(undefined8 *)(puVar2 + -0x268) = 0xc2000000;
          *(code **)(puVar2 + -0x260) = FUN_107f07af0;
          *(undefined **)(puVar2 + -600) = &UNK_110a12800;
          _objc_retain(puVar4);
          *(undefined **)(puVar2 + -0x250) = puVar4;
          _objc_retain(puVar6);
          *(undefined **)(puVar2 + -0x248) = puVar6;
          _objc_retain(puVar11);
          *(undefined **)(puVar2 + -0x240) = puVar11;
          *(undefined8 *)(puVar2 + -0x218) = *(undefined8 *)(puVar2 + -0x2d0);
          uVar17 = *(undefined8 *)(puVar2 + -0x2c0);
          _objc_retain(uVar17);
          *(undefined8 *)(puVar2 + -0x238) = uVar17;
          uVar17 = *(undefined8 *)(puVar2 + -0x2c8);
          _objc_retain(uVar17);
          *(undefined8 *)(puVar2 + -0x230) = uVar17;
          uVar17 = *(undefined8 *)(puVar2 + -0x2b0);
          _objc_retain(uVar17);
          *(undefined8 *)(puVar2 + -0x228) = uVar17;
          uVar17 = *(undefined8 *)(puVar2 + -0x2b8);
          _objc_retain(uVar17);
          *(undefined8 *)(puVar2 + -0x220) = uVar17;
          puVar9 = puVar2 + -0x270;
          _objc_retainBlock();
          *(undefined **)(puVar2 + -0x298) = puVar15;
          *(undefined8 *)(puVar2 + -0x290) = 0xc2000000;
          *(code **)(puVar2 + -0x288) = FUN_107f07b0c;
          *(undefined **)(puVar2 + -0x280) = &UNK_1108ab6d0;
          _objc_retain(uVar17);
          *(undefined8 *)(puVar2 + -0x278) = uVar17;
          puVar10 = puVar2 + -0x298;
          _objc_retainBlock();
          puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar8 = *(undefined8 *)(puVar2 + -0x2a0);
          func_0x00010bf0b260();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar8;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar2 + -0x308) = uVar8;
          *(undefined8 *)(puVar2 + -0x300) = uVar17;
          *(undefined **)(puVar2 + -0x310) = puVar4;
          func_0x00010c14de00(puVar18);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          _objc_release(uVar8);
          puVar12 = puVar20;
          func_0x00010bf51e00(puVar20);
          *(undefined1 **)(puVar2 + -0x308) = puVar9;
          *(undefined1 **)(puVar2 + -0x300) = puVar10;
          *(undefined8 *)(puVar2 + -0x310) = 0;
          puVar13 = *(undefined **)(puVar2 + -0x2c0);
          puVar15 = *(undefined **)(puVar2 + -0x2e8);
          func_0x00010c25f520(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar18);
          _objc_release(puVar10);
          _objc_release(*(undefined8 *)(puVar2 + -0x278));
          puVar18 = *(undefined **)(puVar2 + -0x2c8);
          _objc_release(puVar9);
          _objc_release(*(undefined8 *)(puVar2 + -0x220));
          _objc_release(*(undefined8 *)(puVar2 + -0x228));
          _objc_release(*(undefined8 *)(puVar2 + -0x230));
          _objc_release(*(undefined8 *)(puVar2 + -0x238));
          _objc_release(*(undefined8 *)(puVar2 + -0x240));
          _objc_release(*(undefined8 *)(puVar2 + -0x248));
          _objc_release(*(undefined8 *)(puVar2 + -0x250));
          param_6 = *(undefined **)(puVar2 + -0x2b8);
          _objc_release(puVar20);
          _objc_release(*(undefined8 *)(puVar2 + -0x2d8));
          _objc_release(*(undefined8 *)(puVar2 + -0x2f0));
          param_5 = *(undefined **)(puVar2 + -0x2e0);
        }
        _objc_release(*(undefined8 *)(puVar2 + -0x2a8));
        _objc_release(puVar15);
        _objc_release(param_5);
        param_3 = *(undefined **)(puVar2 + -0x2b0);
      }
      _objc_release(*(undefined8 *)(puVar2 + -0x2a0));
      param_2 = puVar13;
      param_1 = puVar15;
      puVar3 = puVar18;
      unaff_x25 = puVar4;
      puVar14 = puVar11;
    }
    else {
      (**(code **)(puVar12 + 0x10))(puVar12,1,0);
      param_3 = param_8;
      param_2 = puVar13;
      param_1 = puVar15;
      puVar3 = puVar18;
      param_6 = puVar12;
      unaff_x25 = puVar4;
      puVar14 = puVar11;
    }
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(param_2);
    _objc_release(puVar14);
    _objc_release(puVar6);
    puVar5 = unaff_x25;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x88)) {
      return;
    }
    pcVar21 = FUN_107f07af0;
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar5 + 0x20);
    puVar11 = *(undefined **)(puVar5 + 0x30);
    puVar13 = *(undefined **)(puVar5 + 0x38);
    puVar18 = *(undefined **)(puVar5 + 0x40);
    param_8 = *(undefined **)(puVar5 + 0x48);
    puVar12 = *(undefined **)(puVar5 + 0x50);
    puVar15 = (undefined *)(*(long *)(puVar5 + 0x58) + 1);
    pppuVar1 = (undefined ***)(puVar2 + -0x310);
    param_4 = *(undefined **)(puVar5 + 0x28);
    puVar5 = puVar6;
    puVar9 = puVar2;
  } while( true );
}



/* Entry: 107f072ec; end: 107f07aef;  */

void FUN_107f072ec(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puVar7;
  undefined *unaff_x23;
  undefined *puVar8;
  long unaff_x24;
  int iVar9;
  long unaff_x25;
  undefined8 uVar10;
  undefined *unaff_x26;
  undefined *puVar11;
  undefined *unaff_x27;
  undefined *unaff_x28;
  long lVar12;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    puVar6 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar6);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puVar1 = param_3;
    func_0x00010bf529e0();
    if (param_4 < puVar1) {
      *(long *)((long)register0x00000008 + -0x2b8) = param_8;
      *(undefined8 *)((long)register0x00000008 + -0x2b0) = param_7;
      unaff_x23 = (undefined *)((long)register0x00000008 + -0x210);
      *(undefined **)((long)register0x00000008 + -0x2d0) = param_4;
      puVar1 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar6);
      *(undefined **)((long)register0x00000008 + -0x2a0) = puVar1;
      _objc_retain(puVar1);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
      _objc_retain(puVar6);
      puVar1 = puVar6;
      func_0x00010bf52a60();
      *(undefined **)((long)register0x00000008 + -0x2c8) = param_6;
      *(undefined8 *)((long)register0x00000008 + -0x2c0) = param_5;
      if (puVar1 == (undefined *)0x0) {
        unaff_x28 = (undefined *)0x7fffffffffffffff;
      }
      else {
        *(undefined **)((long)register0x00000008 + -0x2e0) = param_3;
        *(long *)((long)register0x00000008 + -0x2d8) = param_1;
        lVar12 = **(long **)((long)register0x00000008 + -0x1c0);
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
        do {
          puVar11 = (undefined *)0x0;
          *(undefined **)((long)register0x00000008 + -0x2a8) = puVar1;
          do {
            if (**(long **)((long)register0x00000008 + -0x1c0) != lVar12) {
              _objc_enumerationMutation(puVar6);
            }
            puVar7 = *(undefined **)
                      (*(long *)((long)register0x00000008 + -0x1c8) + (long)puVar11 * 8);
            puVar8 = puVar7;
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = puVar8;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar10;
            func_0x00010bf0b260(uVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = unaff_x23;
            func_0x00010c0720c0();
            if (((ulong)puVar2 & 1) == 0) {
              _objc_release(uVar3);
              _objc_release(unaff_x23);
              _objc_release(puVar8);
            }
            else {
              puVar1 = puVar7;
              func_0x00010bf0af00();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010c27dd80();
              func_0x00010bf0b760();
              _objc_release(puVar1);
              _objc_release(uVar3);
              _objc_release(unaff_x23);
              _objc_release(puVar8);
              param_4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              iVar9 = (int)uVar10;
              puVar1 = *(undefined **)((long)register0x00000008 + -0x2a8);
              uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
              if ((int)puVar2 == iVar9) {
                func_0x00010bdc2b80(puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = param_4;
                func_0x00010c078c00();
                if (((ulong)puVar1 & 1) == 0) {
                  unaff_x28 = puVar6;
                  func_0x00010bfecde0();
                }
                else {
                  unaff_x28 = (undefined *)0x7fffffffffffffff;
                }
                param_3 = *(undefined **)((long)register0x00000008 + -0x2e0);
                param_1 = *(long *)((long)register0x00000008 + -0x2d8);
                param_6 = *(undefined **)((long)register0x00000008 + -0x2c8);
                param_5 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
                _objc_release(puVar7);
                goto LAB_107f07594;
              }
            }
            puVar11 = puVar11 + 1;
          } while (puVar1 != puVar11);
          puVar1 = puVar6;
          func_0x00010bf52a60();
        } while (puVar1 != (undefined *)0x0);
        unaff_x28 = (undefined *)0x7fffffffffffffff;
        param_3 = *(undefined **)((long)register0x00000008 + -0x2e0);
        param_1 = *(long *)((long)register0x00000008 + -0x2d8);
        param_6 = *(undefined **)((long)register0x00000008 + -0x2c8);
        param_5 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
        param_4 = (undefined *)0x0;
      }
LAB_107f07594:
      _objc_release(puVar6);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
      _objc_release(uVar10);
      _objc_release(puVar6);
      if (unaff_x28 == (undefined *)0x7fffffffffffffff) {
        unaff_x24 = *(long *)((long)register0x00000008 + -0x2b8);
        unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
        FUN_107f072ec(param_1,puVar6,param_3,*(long *)((long)register0x00000008 + -0x2d0) + 1,
                      param_5,param_6,unaff_x19,unaff_x24);
      }
      else {
        func_0x00010bf0b760();
        if ((uint)uVar10 < 0x16) {
          func_0x00010b697928();
        }
        else {
          uVar10 = 0xfffffffffbadbeef;
        }
        uVar3 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
        func_0x00010bf0b260(uVar3);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_6;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x000108018d28(uVar10);
        _objc_retainAutoreleasedReturnValue();
        param_4 = unaff_x23;
        func_0x00010bfad280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x2a8) = puVar1;
        if (puVar1 == (undefined *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = *(long *)((long)register0x00000008 + -0x2b8);
          (**(code **)(unaff_x24 + 0x10))(unaff_x24,0,puVar1);
          _objc_release(puVar1);
        }
        else {
          *(undefined **)((long)register0x00000008 + -0x2e8) = param_4;
          *(undefined **)((long)register0x00000008 + -0x2e0) = unaff_x23;
          puVar11 = puVar6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
          puVar8 = puVar11;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460();
          _objc_retainAutoreleasedReturnValue();
          *(undefined **)((long)register0x00000008 + -0x2d8) = puVar1;
          _objc_release(puVar8);
          unaff_x28 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
          *(undefined **)((long)register0x00000008 + -0x2f0) = puVar11;
          func_0x00010c28dec0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar11;
          func_0x00010c123f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          puVar11 = puVar1;
          func_0x00010bf52a60();
          if (puVar11 != (undefined *)0x0) {
            lVar12 = **(long **)((long)register0x00000008 + -0x200);
            do {
              puVar8 = (undefined *)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x200) != lVar12) {
                  _objc_enumerationMutation(puVar1);
                }
                uVar3 = *(undefined8 *)
                         (*(long *)((long)register0x00000008 + -0x208) + (long)puVar8 * 8);
                uVar10 = uVar3;
                func_0x00010c296d80(uVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c086560(uVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(unaff_x28);
                _objc_release(uVar3);
                _objc_release(uVar10);
                puVar8 = puVar8 + 1;
              } while (puVar11 != puVar8);
              puVar11 = puVar1;
              func_0x00010bf52a60();
            } while (puVar11 != (undefined *)0x0);
          }
          _objc_release(puVar1);
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined **)((long)register0x00000008 + -0x270) = PTR___NSConcreteStackBlock_11034bd00;
          unaff_d8 = 0xc2000000;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 0xc2000000;
          *(code **)((long)register0x00000008 + -0x260) = FUN_107f07af0;
          *(undefined **)((long)register0x00000008 + -600) = &UNK_110a12800;
          _objc_retain(param_1);
          *(long *)((long)register0x00000008 + -0x250) = param_1;
          _objc_retain(puVar6);
          *(undefined **)((long)register0x00000008 + -0x248) = puVar6;
          _objc_retain(param_3);
          *(undefined **)((long)register0x00000008 + -0x240) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x218) =
               *(undefined8 *)((long)register0x00000008 + -0x2d0);
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
          _objc_retain(uVar10);
          *(undefined8 *)((long)register0x00000008 + -0x238) = uVar10;
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2c8);
          _objc_retain(uVar10);
          *(undefined8 *)((long)register0x00000008 + -0x230) = uVar10;
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
          _objc_retain(uVar10);
          *(undefined8 *)((long)register0x00000008 + -0x228) = uVar10;
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2b8);
          _objc_retain(uVar10);
          *(undefined8 *)((long)register0x00000008 + -0x220) = uVar10;
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x270);
          _objc_retainBlock();
          *(undefined **)((long)register0x00000008 + -0x298) = puVar1;
          *(undefined8 *)((long)register0x00000008 + -0x290) = 0xc2000000;
          *(code **)((long)register0x00000008 + -0x288) = FUN_107f07b0c;
          *(undefined **)((long)register0x00000008 + -0x280) = &UNK_1108ab6d0;
          _objc_retain(uVar10);
          *(undefined8 *)((long)register0x00000008 + -0x278) = uVar10;
          puVar5 = (undefined1 *)((long)register0x00000008 + -0x298);
          _objc_retainBlock();
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
          func_0x00010bf0b260();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar3;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x308) = uVar3;
          *(undefined8 *)((long)register0x00000008 + -0x300) = uVar10;
          *(long *)((long)register0x00000008 + -0x310) = param_1;
          func_0x00010c14de00(puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          _objc_release(uVar3);
          puVar11 = unaff_x28;
          func_0x00010bf51e00(unaff_x28);
          *(undefined1 **)((long)register0x00000008 + -0x308) = puVar4;
          *(undefined1 **)((long)register0x00000008 + -0x300) = puVar5;
          *(undefined8 *)((long)register0x00000008 + -0x310) = 0;
          param_5 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
          param_4 = *(undefined **)((long)register0x00000008 + -0x2e8);
          func_0x00010c25f520(param_5);
          _objc_release(puVar11);
          _objc_release(puVar1);
          _objc_release(puVar5);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x278));
          param_6 = *(undefined **)((long)register0x00000008 + -0x2c8);
          _objc_release(puVar4);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x220));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x228));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x230));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x238));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x240));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x248));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x250));
          unaff_x24 = *(long *)((long)register0x00000008 + -0x2b8);
          _objc_release(unaff_x28);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2d8));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2f0));
          unaff_x23 = *(undefined **)((long)register0x00000008 + -0x2e0);
        }
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2a8));
        _objc_release(param_4);
        _objc_release(unaff_x23);
        unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
      }
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2a0));
      unaff_x20 = param_5;
      unaff_x21 = param_4;
      unaff_x22 = param_6;
      unaff_x25 = param_1;
      unaff_x26 = param_3;
    }
    else {
      (**(code **)(param_8 + 0x10))(param_8,1,0);
      unaff_x19 = param_7;
      unaff_x20 = param_5;
      unaff_x21 = param_4;
      unaff_x22 = param_6;
      unaff_x24 = param_8;
      unaff_x25 = param_1;
      unaff_x26 = param_3;
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x19);
    _objc_release(unaff_x22);
    _objc_release(unaff_x20);
    _objc_release(unaff_x26);
    _objc_release(puVar6);
    lVar12 = unaff_x25;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x88)) {
      return;
    }
    unaff_x30 = FUN_107f07af0;
    ___stack_chk_fail();
    param_1 = *(long *)(lVar12 + 0x20);
    param_3 = *(undefined **)(lVar12 + 0x30);
    param_5 = *(undefined8 *)(lVar12 + 0x38);
    param_6 = *(undefined **)(lVar12 + 0x40);
    param_7 = *(undefined8 *)(lVar12 + 0x48);
    param_8 = *(long *)(lVar12 + 0x50);
    param_4 = (undefined *)(*(long *)(lVar12 + 0x58) + 1);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x310);
    param_2 = *(undefined **)(lVar12 + 0x28);
    unaff_x27 = puVar6;
  } while( true );
}


