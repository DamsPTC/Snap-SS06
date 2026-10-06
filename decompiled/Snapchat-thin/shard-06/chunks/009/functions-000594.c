/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f5daf0; end: 104f5db7b; -[SCMessageRetentionAction _didChangeRetentionPolicyWithSuccess:retentionMode:] */

void FUN_104f5daf0(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_4;
    func_0x000107d40874(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010beeeee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220340();
    _objc_release(lVar1);
    _objc_release(param_4);
  }
  func_0x00010beeeee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5db7c; end: 104f5db83; -[SCMessageRetentionAction position] */

undefined8 FUN_104f5db7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f5db84; end: 104f5db8b; -[SCMessageRetentionAction actionSheetCell] */

undefined8 FUN_104f5db84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f5db8c; end: 104f5db93; -[SCMessageRetentionAction prominentActionButton] */

undefined8 FUN_104f5db8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f5db94; end: 104f5dbff; -[SCMessageRetentionAction .cxx_destruct] */

void FUN_104f5db94(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5dc00; end: 104f5f80f; -[SCMessagingGroupActionSheetPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f5dc00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
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
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined *puStack_208;
  undefined *puStack_1c0;
  undefined *puStack_1a0;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_168;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = (long)_DAT_112717ca4;
  uVar1 = param_1 + lVar32;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112717ca8;
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar35 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010c06ecc0();
  if ((uVar1 & 1) == 0) {
    puStack_178 = (undefined *)0x0;
    bStack_e8 = 1;
  }
  else {
    uVar1 = param_1 + _DAT_112717cac;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf8fac0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puStack_178 = (undefined *)(uVar6 & 0xffffffff);
    bStack_e8 = (byte)uVar6 ^ 1;
  }
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uVar1 = uVar5;
  func_0x00010c261460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcca0();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b2ac0;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar34 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar8 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar9);
  lVar36 = lVar9;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar10);
  lVar37 = lVar10;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018c40();
  _objc_release(lVar37);
  _objc_release(lVar10);
  _objc_release(lVar36);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar4);
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar35 = lVar4;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar35);
  _objc_release(lVar4);
  puVar11 = PTR_PTR_1126b2ac8;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar34 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar8 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar9);
  lVar10 = param_1 + _DAT_112717cb8;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c018c00();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar4);
  puVar12 = PTR_PTR_1126b2ad0;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar34 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112717cc0;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c018be0();
  _objc_release(lVar9);
  _objc_release(lVar34);
  _objc_release(lVar35);
  _objc_release(lVar10);
  _objc_release(lVar4);
  if (((ulong)puStack_178 & 1) == 0) {
    lVar4 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar4);
    lVar35 = lVar4;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar35);
    _objc_release(lVar4);
    lVar4 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar4);
    lVar35 = lVar4;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar35);
    _objc_release(lVar4);
  }
  puVar13 = PTR_PTR_1126b2ad8;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar8 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_112717cc4;
  lVar9 = param_1 + lVar34;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c018bc0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar35);
  _objc_release(lVar10);
  _objc_release(lVar4);
  puVar14 = PTR_PTR_1126b2ae0;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar8 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar36 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112717cc8;
  _objc_loadWeakRetained(lVar9);
  lVar10 = param_1 + lVar34;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c018c80();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar8);
  _objc_release(lVar4);
  uVar1 = uVar5;
  func_0x00010c234020();
  if ((int)uVar1 == 0) {
    puStack_168 = (undefined *)0x0;
  }
  else {
    puStack_168 = PTR_PTR_1126b2ae8;
    _objc_alloc();
    lVar4 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar4);
    lVar10 = lVar4;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar35);
    lVar8 = lVar35;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + lVar34;
    _objc_loadWeakRetained(lVar9);
    lVar36 = lVar9;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar36;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018b60();
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar35);
    _objc_release(lVar10);
    _objc_release(lVar4);
  }
  lVar35 = (long)_DAT_112717ccc;
  lVar4 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010bf619c0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c252440();
  if (lVar37 == 0) {
    puStack_180 = (undefined *)0x0;
  }
  else {
    puStack_180 = PTR_PTR_1126b2af0;
    _objc_alloc();
    lVar37 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar15 = lVar37;
    func_0x00010bfceb20(lVar37);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar16);
    lVar17 = lVar16;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + lVar34;
    _objc_loadWeakRetained(lVar18);
    lVar19 = param_1 + lVar32;
    _objc_loadWeakRetained(lVar19);
    lVar20 = param_1 + lVar35;
    _objc_loadWeakRetained(lVar20);
    lVar21 = param_1 + _DAT_112717cd0;
    _objc_loadWeakRetained(lVar21);
    func_0x00010c018b80();
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar37);
  }
  _objc_release(lVar36);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010bf61b80();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c252440();
  if (lVar37 == 0) {
    puStack_1c0 = (undefined *)0x0;
  }
  else {
    puStack_1c0 = PTR_PTR_1126b2af0;
    _objc_alloc();
    lVar37 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar21 = lVar37;
    func_0x00010bfceb20(lVar37);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar16);
    lVar15 = lVar16;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + lVar34;
    _objc_loadWeakRetained(lVar18);
    lVar19 = param_1 + lVar32;
    _objc_loadWeakRetained(lVar19);
    lVar35 = param_1 + lVar35;
    _objc_loadWeakRetained(lVar35);
    lVar20 = param_1 + _DAT_112717cd0;
    _objc_loadWeakRetained(lVar20);
    func_0x00010c018b80();
    _objc_release(lVar20);
    _objc_release(lVar35);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar15);
    _objc_release(lVar16);
    _objc_release(lVar21);
    _objc_release(lVar37);
  }
  _objc_release(lVar36);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  if (*(char *)(puStack_f8 + 3) == '\x01') {
    puStack_1a0 = PTR_PTR_1126b2af8;
    _objc_alloc();
    lVar4 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar4);
    lVar10 = lVar4;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar35);
    lVar8 = lVar35;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112717cd4;
    _objc_loadWeakRetained(lVar9);
    lVar36 = lVar9;
    func_0x00010c2425c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018cc0();
    _objc_release(lVar36);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar35);
    _objc_release(lVar10);
    _objc_release(lVar4);
  }
  else {
    puStack_1a0 = (undefined *)0x0;
  }
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c0d3c80();
  _objc_release(puVar22);
  if (((ulong)puStack_178 & 1) == 0) {
    func_0x00010befa120(puVar23);
  }
  if (puStack_168 != (undefined *)0x0) {
    func_0x00010befa120(puVar23);
  }
  if (puStack_1a0 != (undefined *)0x0) {
    func_0x00010befa120(puVar23);
  }
  puVar22 = PTR_PTR_1126b2b00;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar37 = lVar4;
  func_0x00010bfceb20(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar16 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar9);
  lVar18 = lVar9;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar10);
  lVar19 = lVar10;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = (long)_DAT_112717cd8;
  lVar8 = param_1 + lVar36;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c018e80();
  _objc_release(lVar8);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar16);
  _objc_release(lVar35);
  _objc_release(lVar37);
  _objc_release(lVar4);
  puVar24 = PTR_PTR_1126b2b08;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar8 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar37 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar9);
  lVar10 = param_1 + lVar36;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c018c20();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar37);
  _objc_release(lVar35);
  _objc_release(lVar8);
  _objc_release(lVar4);
  puVar25 = PTR_PTR_1126b2b00;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010bfceb20(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar37 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar9);
  lVar16 = lVar9;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar32);
  lVar18 = lVar32;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar36;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c018e80();
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar32);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar37);
  _objc_release(lVar35);
  _objc_release(lVar8);
  _objc_release(lVar4);
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar4 = param_1 + _DAT_112717cdc;
  _objc_loadWeakRetained();
  lVar35 = lVar4;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar32);
  lVar10 = lVar32;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c25bfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar8;
  func_0x00010c25c060();
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar32);
  _objc_release(lVar9);
  _objc_release(lVar35);
  _objc_release(lVar4);
  if (lVar37 != 0) {
    puVar27 = PTR_PTR_1126b2b10;
    _objc_alloc(PTR_PTR_1126b2b10);
    lVar4 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar10 = lVar4;
    func_0x00010bfceb20(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar32);
    lVar8 = lVar32;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = param_1 + lVar34;
    _objc_loadWeakRetained(lVar34);
    lVar36 = param_1 + lVar36;
    _objc_loadWeakRetained(lVar36);
    lVar35 = param_1 + _DAT_112717ce0;
    _objc_loadWeakRetained(lVar35);
    lVar9 = param_1 + _DAT_112717ce4;
    _objc_loadWeakRetained(lVar9);
    lVar37 = lVar9;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018ba0(puVar27);
    func_0x00010befa120(puVar26);
    _objc_release(puVar27);
    _objc_release(lVar37);
    _objc_release(lVar9);
    _objc_release(lVar35);
    _objc_release(lVar36);
    _objc_release(lVar34);
    _objc_release(lVar8);
    _objc_release(lVar32);
    _objc_release(lVar10);
    _objc_release(lVar4);
  }
  if (((ulong)puStack_178 & 1) == 0) {
    func_0x00010befa120(puVar26);
  }
  func_0x00010befa120(puVar26);
  if (puStack_180 != (undefined *)0x0) {
    func_0x00010befa120(puVar26);
  }
  if (puStack_1c0 != (undefined *)0x0) {
    func_0x00010befa120(puVar26);
  }
  puVar27 = PTR_PTR_1126b2b18;
  _objc_alloc();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar4);
  lVar32 = lVar4;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0b20();
  _objc_release(lVar32);
  _objc_release(lVar4);
  puVar28 = puVar23;
  func_0x00010befa120();
  func_0x000104f623d8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b2b20;
  _objc_alloc(PTR_PTR_1126b2b20);
  lVar32 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar32);
  lVar34 = lVar32;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar8 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_112717cac;
  lVar9 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar36 = lVar9;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018ca0(puVar29);
  func_0x00010c125b60(lVar10);
  _objc_release(puVar29);
  _objc_release(lVar36);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar32);
  _objc_release(lVar10);
  _objc_release(lVar4);
  lVar4 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar32 = lVar4;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar35;
  func_0x00010bf6d820();
  _objc_release(lVar35);
  _objc_release(lVar32);
  _objc_release(lVar4);
  if ((int)lVar9 != 0) {
    lVar4 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar4);
    lVar32 = lVar4;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar32);
    _objc_release(lVar4);
    if (((ulong)puStack_178 & 1) == 0) {
      lVar4 = param_1 + lVar33;
      _objc_loadWeakRetained(lVar4);
      lVar32 = lVar4;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar32);
      _objc_release(lVar4);
    }
    puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (puStack_168 != (undefined *)0x0) {
      func_0x00010befa120(puVar29);
    }
    if (puStack_1a0 != (undefined *)0x0) {
      func_0x00010befa120(puVar29);
    }
    puVar30 = puVar29;
    func_0x00010bf529e0();
    if (puVar30 != (undefined *)0x0) {
      func_0x000104f623f0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + lVar33;
      _objc_loadWeakRetained();
      lVar10 = lVar4;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR_PTR_1126b2b20;
      _objc_alloc(PTR_PTR_1126b2b20);
      lVar32 = param_1 + lVar33;
      _objc_loadWeakRetained(lVar32);
      lVar34 = lVar32;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      lVar35 = param_1 + lVar33;
      _objc_loadWeakRetained(lVar35);
      lVar8 = lVar35;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1 + lVar37;
      _objc_loadWeakRetained();
      lVar36 = lVar9;
      func_0x00010c0cb4c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c018ca0(puVar31);
      func_0x00010c125b60(lVar10);
      _objc_release(puVar31);
      _objc_release(lVar36);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar35);
      _objc_release(lVar34);
      _objc_release(lVar32);
      _objc_release(lVar10);
      _objc_release(lVar4);
      _objc_release(puVar30);
    }
    func_0x000104f62390();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar10 = lVar4;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR_PTR_1126b2b20;
    _objc_alloc(PTR_PTR_1126b2b20);
    lVar32 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar32);
    lVar34 = lVar32;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_1 + lVar33;
    _objc_loadWeakRetained(lVar35);
    lVar8 = lVar35;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + lVar37;
    _objc_loadWeakRetained();
    lVar36 = lVar9;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018ca0(puVar31);
    func_0x00010c125b60(lVar10);
    _objc_release(puVar31);
    _objc_release(lVar36);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar32);
    _objc_release(lVar10);
    _objc_release(lVar4);
    _objc_release(puVar30);
    _objc_release(puVar29);
  }
  if ((int)puStack_178 == 0) {
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar7;
    puStack_b8 = puVar12;
    puStack_b0 = puVar14;
    puStack_a8 = puVar13;
    puStack_a0 = puVar24;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar29;
    func_0x00010c0d3c80();
    _objc_release(puVar29);
    if (puStack_180 != (undefined *)0x0) {
      func_0x00010befa120(puStack_178);
    }
    if (puStack_168 != (undefined *)0x0) {
      func_0x00010befa120(puStack_178);
    }
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c8 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_178);
    _objc_release(puVar29);
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e0 = puVar7;
    puStack_d8 = puVar11;
    puStack_d0 = puVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_208 = puVar29;
    func_0x00010c0d3c80();
  }
  else {
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar7;
    puStack_88 = puVar13;
    puStack_80 = puVar24;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar29;
    func_0x00010c0d3c80();
    _objc_release(puVar29);
    if (puStack_180 != (undefined *)0x0) {
      func_0x00010befa120(puStack_178);
    }
    if (puStack_168 != (undefined *)0x0) {
      func_0x00010befa120(puStack_178);
    }
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_208 = puVar29;
    func_0x00010c0d3c80();
  }
  _objc_release(puVar29);
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b2b20;
  _objc_alloc(PTR_PTR_1126b2b20);
  lVar32 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar32);
  lVar34 = lVar32;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar35);
  lVar8 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar8;
  func_0x000104f5ff94();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar16 = lVar9;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018ca0(puVar29);
  func_0x00010c125b60(lVar10);
  _objc_release(puVar29);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar36);
  _objc_release(lVar8);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar32);
  _objc_release(lVar10);
  _objc_release(lVar4);
  lVar4 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar35 = lVar4;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b2b20;
  _objc_alloc(PTR_PTR_1126b2b20);
  lVar32 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar32);
  lVar9 = lVar32;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar33);
  lVar10 = lVar33;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar10;
  func_0x000104f5ffac();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar34;
  func_0x000104f5ffac();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar36 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018ca0(puVar29);
  func_0x00010c125b60(lVar35);
  _objc_release(puVar29);
  _objc_release(lVar36);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar34);
  _objc_release(lVar10);
  _objc_release(lVar33);
  _objc_release(lVar9);
  _objc_release(lVar32);
  _objc_release(lVar35);
  _objc_release(lVar4);
  _objc_release(puStack_208);
  _objc_release(puStack_178);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(puStack_1a0);
  _objc_release(puStack_1c0);
  _objc_release(puStack_180);
  _objc_release(puStack_168);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_100,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_100,8);
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(*(long *)(uVar5 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104f5f810; end: 104f5f82f;  */

void FUN_104f5f810(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104f5f830; end: 104f5f947; -[SCMessagingGroupActionSheetPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f5f830(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717ce8,0);
  _objc_storeStrong(param_1 + _DAT_112717cec,0);
  _objc_storeStrong(param_1 + _DAT_112717cb0,0);
  _objc_storeStrong(param_1 + _DAT_112717cbc,0);
  _objc_storeStrong(param_1 + _DAT_112717cb4,0);
  _objc_destroyWeak(param_1 + _DAT_112717cd0);
  _objc_destroyWeak(param_1 + _DAT_112717cd4);
  _objc_destroyWeak(param_1 + _DAT_112717cd8);
  _objc_destroyWeak(param_1 + _DAT_112717ce4);
  _objc_destroyWeak(param_1 + _DAT_112717cdc);
  _objc_destroyWeak(param_1 + _DAT_112717ccc);
  _objc_destroyWeak(param_1 + _DAT_112717cc8);
  _objc_destroyWeak(param_1 + _DAT_112717ce0);
  _objc_destroyWeak(param_1 + _DAT_112717cac);
  _objc_destroyWeak(param_1 + _DAT_112717ca4);
  _objc_destroyWeak(param_1 + _DAT_112717cc0);
  _objc_destroyWeak(param_1 + _DAT_112717cc4);
  _objc_destroyWeak(param_1 + _DAT_112717cb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717ca8);
  return;
}



/* Entry: 104f5f948; end: 104f5fbb3; -[SCPinConversationAction initWithGroupId:context:pinnedConversationsServices:conversationServices:withAccessibilityIdentifier:] */

undefined8 *
FUN_104f5f948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e5398;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[5] = 9;
    uVar3 = puVar1[3];
    func_0x00010c0fc460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfda360();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000104f62348();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000104f62360();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_78,puVar1);
    puVar6 = PTR_PTR_1126b10a0;
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_78);
    uStack_80 = (undefined1)uVar5;
    puVar7 = puVar6;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar7;
    _objc_release(uVar2);
    _objc_release(puVar6);
    func_0x00010c160fc0(puVar1[6]);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f5fbb4; end: 104f5fc27;  */

void FUN_104f5fbb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_2);
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5fc28; end: 104f5fddf; -[SCPinConversationAction _handlePinOrUnpinConversationWithIsPinned:] */

void FUN_104f5fc28(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar3 = 0xfc;
  if (param_3 == 0) {
    uVar3 = 0xc6;
  }
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
  puVar1 = PTR_PTR_1126b2a58;
  func_0x00010bfcf600();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    _objc_initWeak(auStack_60,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0fc460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_60);
    func_0x00010befa920(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0fc460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104f5fde0;
    puStack_40 = &UNK_110841f20;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x00010c12da80(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puStack_38);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 104f5fde0; end: 104f5fde3;  */

void FUN_104f5fde0(void)

{
  return;
}



/* Entry: 104f5fde4; end: 104f5fe17;  */

void FUN_104f5fde4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfec20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5fe18; end: 104f5fe2b; -[SCPinConversationAction _didPinConversationSuccess:] */

void FUN_104f5fe18(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b2b28,PTR_s_displayPinConversationAlert_1125bf228);
  return;
}



/* Entry: 104f5fe2c; end: 104f5fe33; -[SCPinConversationAction position] */

undefined8 FUN_104f5fe2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f5fe34; end: 104f5fe3b; -[SCPinConversationAction actionSheetCell] */

undefined8 FUN_104f5fe34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f5fe3c; end: 104f5fe43; -[SCPinConversationAction prominentActionButton] */

undefined8 FUN_104f5fe3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f5fe44; end: 104f5fea3; -[SCPinConversationAction .cxx_destruct] */

void FUN_104f5fe44(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5fea4; end: 104f5ffc3;  */

void FUN_104f5fea4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc618;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbc618,
                      &PTR____CFConstantStringClassReference_110dbc638,0);
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



/* Entry: 104f5ffc4; end: 104f5ffd7; +[SCPinConversationAlertPresenter displayPinConversationAlert] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_104f5ffc4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_11085deb8);
  func_0x000107c4a02c();
  if ((int)puVar1 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(&PTR___NSConcreteGlobalBlock_11085deb8);
  return;
}



/* Entry: 104f5ffd8; end: 104f6016f;  */

void FUN_104f5ffd8(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc7b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc7b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dbc7d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc7d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104f60170; end: 104f60183;  */

void FUN_104f60170(void)

{
  return;
}



/* Entry: 104f60184; end: 104f602df; -[SCGroupSaveSnapAction initWithContext:groupId:messageId:feedItem:conversationActionHandler:friendsFeedActionTextGenerator:] */

undefined1 *
FUN_104f60184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e53a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 4;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f602e0; end: 104f6043b; -[SCGroupSaveSnapAction actionSheetCell] */

void FUN_104f602e0(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x0001070b06a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beef180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c16b660(puVar3);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f6043c; end: 104f60483;  */

void FUN_104f6043c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f8a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f60484; end: 104f604fb; -[SCGroupSaveSnapAction _handleSaveSnapTappedWithActionSheet:] */

void FUN_104f60484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0a0440(uVar1);
  uVar1 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c14a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_saveMessageInConversationId_mess_112630490,
             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0x29);
  return;
}



/* Entry: 104f604fc; end: 104f60503; -[SCGroupSaveSnapAction position] */

undefined8 FUN_104f604fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f60504; end: 104f6050b; -[SCGroupSaveSnapAction prominentActionButton] */

undefined8 FUN_104f60504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f6050c; end: 104f60577; -[SCGroupSaveSnapAction .cxx_destruct] */

void FUN_104f6050c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104f60578; end: 104f607a7; -[SCMessagingGroupActionSheetSaveSnapPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f60578(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_112717d2c;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c14b780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar11 = (long)_DAT_112717d30;
    lVar1 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010bfb9e20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfba040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar6 != 0) {
      lVar1 = param_1 + lVar12;
      _objc_loadWeakRetained();
      lVar5 = lVar1;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b2b30;
      _objc_alloc();
      lVar12 = param_1 + lVar12;
      _objc_loadWeakRetained();
      lVar8 = lVar12;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + _DAT_112717d34;
      _objc_loadWeakRetained(lVar4);
      lVar9 = lVar4;
      func_0x00010bf50600();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010beee460();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + lVar11;
      _objc_loadWeakRetained(param_1);
      lVar11 = param_1;
      func_0x00010bfb9ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004260(puVar7,param_2,lVar8,lVar3,lVar2,lVar6,lVar10,lVar11);
      func_0x00010c125b60(lVar5,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(lVar11);
      _objc_release(param_1);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar4);
      _objc_release(lVar8);
      _objc_release(lVar12);
      _objc_release(lVar5);
      _objc_release(lVar1);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f607a8; end: 104f607eb; -[SCMessagingGroupActionSheetSaveSnapPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f607a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717d34);
  _objc_destroyWeak(param_1 + _DAT_112717d30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717d2c);
  return;
}



/* Entry: 104f607ec; end: 104f60943; -[SCNonFriendProfileAddButtonSectionActionHandler initWithChatCameraScopeExposer:chatCameraScopeServices:deepLinkHandler:snapchattersDataMutator:nonFriendAddSourceType:nonFriendAddPlacementType:snapchatter:] */

undefined1 *
FUN_104f607ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar1 = PTR_s_init_1125d9248;
  puStack_68 = PTR_PTR_1126e53a8;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puStack_78 = PTR_PTR_1126e53a8;
  puStack_80 = puVar2;
  _objc_msgSendSuper2(&puStack_80,puVar1);
  if (ppuVar3 != (undefined8 **)0x0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined8 *)((long)ppuVar3 + 8) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined8 *)((long)ppuVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x20);
    *(undefined8 *)((long)ppuVar3 + 0x20) = param_6;
    _objc_release(uVar4);
    *(undefined8 *)((long)ppuVar3 + 0x28) = param_7;
    *(undefined8 *)((long)ppuVar3 + 0x30) = param_8;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x38);
    *(undefined8 *)((long)ppuVar3 + 0x38) = param_9;
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)ppuVar3;
}



/* Entry: 104f60944; end: 104f60a43; -[SCNonFriendProfileAddButtonSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_104f60944(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = uVar1;
    func_0x00010c0720c0();
    if (((int)uVar3 == 0) && (uVar3 = uVar1, func_0x00010c0720c0(), (int)uVar3 == 0)) {
      uVar3 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar3 == 0) {
        uVar4 = 0;
        goto LAB_104f60a04;
      }
      func_0x00010be27120(param_1);
    }
    else {
      func_0x00010bed87c0(param_1);
    }
  }
  else {
    func_0x00010be48260(param_1);
  }
  uVar4 = 1;
LAB_104f60a04:
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 104f60a44; end: 104f60a47; -[SCNonFriendProfileAddButtonSectionActionHandler dismiss] */

void FUN_104f60a44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissCameraScope_11255e360);
  return;
}



/* Entry: 104f60a48; end: 104f60a4b; -[SCNonFriendProfileAddButtonSectionActionHandler dismissCameraScope:] */

void FUN_104f60a48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissCameraScope_11255e360);
  return;
}



/* Entry: 104f60a4c; end: 104f60c5f; -[SCNonFriendProfileAddButtonSectionActionHandler _launchReplyCamera] */

void FUN_104f60a4c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010be02700();
  puVar2 = PTR_PTR_1126ae6c0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c294420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294300(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010901d7c4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(uVar7,puVar5);
  func_0x00010c03e6c0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar6 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104f60c60;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar6);
  puStack_68 = puVar6;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 104f60c60; end: 104f60cff;  */

void FUN_104f60c60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    lVar2 = lVar1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf23680(uVar3,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),lVar1,1,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 8),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f60d00; end: 104f60d47; -[SCNonFriendProfileAddButtonSectionActionHandler _dismissCameraScope] */

void FUN_104f60d00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f60d48; end: 104f60dd3; -[SCNonFriendProfileAddButtonSectionActionHandler _updateFriendRequestWithSource:placement:] */

void FUN_104f60d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010befca80(PTR_PTR_1126ae5c0,param_2,*(undefined8 *)(param_1 + 0x38),param_3,param_4,0,0,
                      0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8a80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f60dd4; end: 104f60e7b; -[SCNonFriendProfileAddButtonSectionActionHandler _handleChatAction] */

void FUN_104f60dd4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f60e7c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f60e7c; end: 104f60ea7;  */

void FUN_104f60e7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f60ea8; end: 104f60faf; -[SCNonFriendProfileAddButtonSectionActionHandler _navigateToChat] */

void FUN_104f60ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3400(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104f60fb0;
  puStack_40 = &UNK_11085df18;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bfd1bc0(uVar4,param_2,puVar3,0,3,&puStack_58);
  _objc_release(uVar4);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 104f60fb0; end: 104f60fb3;  */

void FUN_104f60fb0(void)

{
  return;
}



/* Entry: 104f60fb4; end: 104f60fcb; -[SCNonFriendProfileAddButtonSectionActionHandler presentingViewController] */

void FUN_104f60fb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f60fcc; end: 104f60fd7; -[SCNonFriendProfileAddButtonSectionActionHandler setPresentingViewController:] */

void FUN_104f60fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104f60fd8; end: 104f61033; -[SCNonFriendProfileAddButtonSectionActionHandler .cxx_destruct] */

void FUN_104f60fd8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f61034; end: 104f610ff; -[SCNonFriendProfileAddButtonSectionDataProvider initWithValdiRuntimeProvider:snapchatterObservableRepository:snapchatter:messagingExperimentService:] */

undefined1 *
FUN_104f61034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e53b0;
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



/* Entry: 104f61100; end: 104f61133; -[SCNonFriendProfileAddButtonSectionDataProvider setUp] */

void FUN_104f61100(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c295320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f61134; end: 104f61143; -[SCNonFriendProfileAddButtonSectionDataProvider tearDown] */

void FUN_104f61134(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f61144; end: 104f6122b; -[SCNonFriendProfileAddButtonSectionDataProvider valdiContext] */

void FUN_104f61144(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 == 0) || (func_0x00010bf6f140(), (uVar1 & 1) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2b38;
    _objc_opt_class(PTR_PTR_1126b2b38);
    lVar4 = param_1;
    func_0x00010bdec340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf55740(uVar7,param_2,puVar3,0,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(uVar7);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 104f6122c; end: 104f6148f; -[SCNonFriendProfileAddButtonSectionDataProvider _createComponentContext] */

undefined * FUN_104f6122c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104f61490(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c09dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar8 = PTR_PTR_1126b2b40;
  _objc_alloc(PTR_PTR_1126b2b40);
  uVar3 = uVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c02fa60(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1afa80(puVar8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain();
  uVar3 = uVar6;
  func_0x000100bf119c();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar6;
    func_0x00010901c6c4();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar6;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = 2;
      }
      puVar8 = (undefined *)(ulong)uVar7;
    }
    else {
      puVar8 = (undefined *)0x1;
    }
  }
  else {
    puVar8 = (undefined *)0x6;
  }
  _objc_release(uVar6);
  return puVar8;
}



/* Entry: 104f61490; end: 104f61597;  */

undefined4 FUN_104f61490(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100bf119c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010901c6c4();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 6;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104f61598; end: 104f6163b; -[SCNonFriendProfileAddButtonSectionDataProvider _handleTapWithState:] */

void FUN_104f61598(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_3 < 6) && ((0x27U >> (ulong)(param_3 & 0x1f) & 1) != 0)) {
    lVar3 = *(long *)(&PTR_PTR_11085df98)[param_3];
    _objc_retain(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x38),param_2,param_1,puVar2,0);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104f6163c; end: 104f61653; -[SCNonFriendProfileAddButtonSectionDataProvider contextProviderDelegate] */

void FUN_104f6163c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f61654; end: 104f6165f; -[SCNonFriendProfileAddButtonSectionDataProvider setContextProviderDelegate:] */

void FUN_104f61654(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104f61660; end: 104f61667; -[SCNonFriendProfileAddButtonSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104f61660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f61668; end: 104f61697; -[SCNonFriendProfileAddButtonSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104f61668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f61698; end: 104f6169f; -[SCNonFriendProfileAddButtonSectionDataProvider actionHandler] */

undefined8 FUN_104f61698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f616a0; end: 104f616cf; -[SCNonFriendProfileAddButtonSectionDataProvider setActionHandler:] */

void FUN_104f616a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f616d0; end: 104f61737; -[SCNonFriendProfileAddButtonSectionDataProvider .cxx_destruct] */

void FUN_104f616d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f61738; end: 104f6192b; -[SCNonFriendProfileAddButtonSectionEntryPoint _buildSectionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f61738(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_2);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + _DAT_112717d88;
    _objc_loadWeakRetained();
  }
  lVar1 = param_2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f6192c;
  puStack_68 = &UNK_11084d658;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(lVar3);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = puVar5;
  param_1[1] = puVar4;
  param_1[2] = lVar3;
  _objc_retain(lVar3);
  _objc_retain(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104f6192c; end: 104f619b3;  */

void FUN_104f6192c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1ca60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f619b4; end: 104f61ab7; -[SCNonFriendProfileAddButtonSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f619b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = (long)_DAT_112717d74;
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100bf119c();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bdd6a00(&uStack_58,param_1);
    puVar4 = PTR_PTR_1126afda8;
    _objc_alloc(PTR_PTR_1126afda8);
    func_0x00010c032260();
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(uStack_58);
    _objc_release(uStack_50);
    _objc_release(uStack_48);
  }
  return;
}



/* Entry: 104f61ab8; end: 104f61ae7;  */

void FUN_104f61ab8(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[2]);
  return;
}



/* Entry: 104f61ae8; end: 104f61be3; -[SCNonFriendProfileAddButtonSectionEntryPoint _getSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f61ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be1dec0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f12358;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2b48;
  _objc_alloc();
  func_0x00010c000700();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (param_1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_1 + _DAT_112717d78;
      _objc_loadWeakRetained();
    }
    lVar3 = lVar10;
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar2 = PTR_PTR_1126b2b50;
    _objc_alloc();
    if (param_1 == 0) {
      _objc_retain(0);
      lVar10 = 0;
      uVar12 = 0;
      lVar11 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + _DAT_112717d98);
      _objc_retain(uVar12);
      lVar10 = param_1 + _DAT_112717d94;
      _objc_loadWeakRetained(lVar10);
      lVar11 = param_1 + _DAT_112717d80;
      _objc_loadWeakRetained(lVar11);
    }
    lVar4 = lVar11;
    func_0x00010bf67f80(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    FUN_104f61db4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c0daca0(lVar3);
    lVar8 = lVar3;
    func_0x00010c0dac60(lVar3);
    func_0x000104f61dd8();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd940(puVar2,param_2,uVar12,lVar10,lVar4,lVar6,lVar7,lVar8,lVar9);
    _objc_release(uVar12);
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f61be4; end: 104f61db3; -[SCNonFriendProfileAddButtonSectionEntryPoint _getActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f61be4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112717d78;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar9;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar2 = PTR_PTR_1126b2b50;
  _objc_alloc();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar9 = 0;
    uVar11 = 0;
    lVar10 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112717d98);
    _objc_retain(uVar11);
    lVar9 = param_1 + _DAT_112717d94;
    _objc_loadWeakRetained(lVar9);
    lVar10 = param_1 + _DAT_112717d80;
    _objc_loadWeakRetained(lVar10);
  }
  lVar3 = lVar10;
  func_0x00010bf67f80(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_104f61db4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0daca0(lVar1);
  lVar7 = lVar1;
  func_0x00010c0dac60(lVar1);
  func_0x000104f61dd8();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd940(puVar2,param_2,uVar11,lVar9,lVar3,lVar5,lVar6,lVar7,lVar8);
  _objc_release(uVar11);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f61db4; end: 104f61dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f61db4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112717d84);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f61dfc; end: 104f61f4f; -[SCNonFriendProfileAddButtonSectionEntryPoint _getComposerContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f61dfc(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b2b58;
  _objc_alloc(PTR_PTR_1126b2b58);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112717d7c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c295440(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_104f61db4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000104f61dd8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112717d90;
    _objc_loadWeakRetained(lVar7);
  }
  lVar8 = lVar7;
  func_0x00010c0cb4c0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060180(puVar1,param_2,lVar2,lVar4,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f61f50; end: 104f61feb; -[SCNonFriendProfileAddButtonSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f61f50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717d98,0);
  _objc_destroyWeak(param_1 + _DAT_112717d94);
  _objc_destroyWeak(param_1 + _DAT_112717d90);
  _objc_destroyWeak(param_1 + _DAT_112717d8c);
  _objc_destroyWeak(param_1 + _DAT_112717d88);
  _objc_destroyWeak(param_1 + _DAT_112717d84);
  _objc_destroyWeak(param_1 + _DAT_112717d80);
  _objc_destroyWeak(param_1 + _DAT_112717d7c);
  _objc_destroyWeak(param_1 + _DAT_112717d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717d74);
  return;
}



/* Entry: 104f61fec; end: 104f61ff7; +[SCCNonFriendProfileActionNonFriendProfileActionComponent componentPath] */

undefined ** FUN_104f61fec(void)

{
  return &PTR____CFConstantStringClassReference_110dbc898;
}



/* Entry: 104f61ff8; end: 104f6202b; -[SCCNonFriendProfileActionNonFriendProfileActionComponent initWithViewModel:componentContext:runtime:] */

void FUN_104f61ff8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e53b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104f6202c; end: 104f6207b; -[SCCNonFriendProfileActionNonFriendProfileActionComponent setViewModel:] */

void FUN_104f6202c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6207c; end: 104f620bf; -[SCCNonFriendProfileActionNonFriendProfileActionComponent viewModel] */

void FUN_104f6207c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f620c0; end: 104f620c7; -[SCCNonFriendProfileActionNonFriendButtonState__Enum init] */

void FUN_104f620c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 104f620c8; end: 104f6214b; -[SCCNonFriendProfileActionNonFriendProfileActionContext initWithNonFriendButtonStateObservable:onTap:] */

undefined8 * FUN_104f620c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126e53c0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  func_0x000104f622ec();
  return puVar1;
}



/* Entry: 104f6214c; end: 104f62173; +[SCCNonFriendProfileActionNonFriendProfileActionContext valdiMarshallableObjectDescriptor] */

void FUN_104f6214c(undefined8 *param_1)

{
  *param_1 = &PTR_s_isBrandedYellowEnabled_11085e030;
  param_1[1] = &PTR_s_SCBridgeObservable_11085e0a8;
  param_1[2] = &PTR_s_oi_v_11085dfe8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f62174; end: 104f62197;  */

undefined8 FUN_104f62174(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 104f62198; end: 104f621f7;  */

void FUN_104f62198(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000104f622d0(FUN_104f62280);
  _objc_retainBlock(&puStack_48);
  func_0x000104f622e0();
  func_0x000104f622ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f621f8; end: 104f6221f;  */

undefined8 FUN_104f621f8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 104f62220; end: 104f6227f;  */

void FUN_104f62220(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000104f622d0(0x104f6229c);
  _objc_retainBlock(&puStack_48);
  func_0x000104f622e0();
  func_0x000104f622ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f62280; end: 104f622b7;  */

void FUN_104f62280(void)

{
  FUN_104f622b8();
  return;
}



/* Entry: 104f622b8; end: 104f6274f;  */

void FUN_104f622b8(long param_1,ulong param_2)

{
  ulong uStack0000000000000000;
  
  uStack0000000000000000 = param_2 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x000104f622cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104f62750; end: 104f627db; -[SCMerlinOnboardingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f62750(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2b60;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112717d9c);
  *(undefined **)(param_1 + _DAT_112717d9c) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1 + _DAT_112717da0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0e81e0();
  _objc_release(lVar2);
  if (lVar3 - 3U < 4) {
    func_0x00010be7cf20();
  }
  else {
    func_0x00010be79fc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be54a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logImpression_112572c28);
  return;
}



/* Entry: 104f627dc; end: 104f62b63; -[SCMerlinOnboardingEntryPoint _presentAlertDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f627dc(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = auStack_80;
  _objc_initWeak(puVar3,param_1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000104f660f8();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104f62b64;
  puStack_90 = &UNK_1108482a8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010befa120(puVar2);
  lVar5 = param_1;
  func_0x00010bfc8360();
  lVar13 = (long)_DAT_112717da4;
  *(long *)(param_1 + lVar13) = lVar5;
  lVar14 = (long)_DAT_112717da0;
  lVar5 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0e81e0();
  _objc_release(lVar5);
  lVar7 = lVar6;
  FUN_104f64a4c(lVar6,*(undefined8 *)(param_1 + lVar13));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126aed78;
  _objc_alloc();
  FUN_104f65df0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c26b700(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c0997e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010c099840();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bfefe60();
  lVar12 = (long)_DAT_112717da8;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar8;
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar6);
  func_0x00010c211b40(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
  uVar11 = *(undefined8 *)(param_1 + _DAT_112717d9c);
  lVar5 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0e81e0();
  FUN_104f62c8c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbcf98;
  if (*(long *)(param_1 + lVar13) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbcfb8;
  }
  _objc_retain(ppuVar1);
  FUN_104f663f4(uVar11,lVar6,ppuVar1,1);
  _objc_release(ppuVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  param_1 = param_1 + lVar14;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lVar7);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  return;
}



/* Entry: 104f62b64; end: 104f62c0b;  */

void FUN_104f62b64(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104f62c0c; end: 104f62c8b;  */

void FUN_104f62c0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f62c8c; end: 104f62cb3;  */

undefined ** FUN_104f62c8c(long param_1)

{
  if (param_1 - 1U < 9) {
    return (undefined **)(&PTR_PTR_11085e120)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dbce58;
}



/* Entry: 104f62cb4; end: 104f62eff; -[SCMerlinOnboardingEntryPoint _presentOnboardingTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f62cb4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar2 = param_1 + _DAT_112717da0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0e81e0();
  _objc_release(lVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbce18;
  if (lVar3 != 3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbcdf8;
  }
  _objc_retain(ppuVar1);
  puVar4 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar5 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar6 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar7 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + _DAT_112717dac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  lStack_70 = lVar3;
  func_0x00010c1267e0(lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 104f62f00; end: 104f62fc3;  */

void FUN_104f62f00(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f62fc4;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104f62fc4; end: 104f62ffb;  */

void FUN_104f62fc4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f62ffc; end: 104f630bf; -[SCMerlinOnboardingEntryPoint _dismissTrayWithDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f62ffc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112717db0);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bf84b00(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f630c0; end: 104f630f3;  */

void FUN_104f630c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f630f4; end: 104f63567; -[SCMerlinOnboardingEntryPoint _showOnboardingDialogTrayWithData:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f630f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  lVar1 = param_4;
  FUN_104f64a4c(param_4,*(undefined8 *)(param_1 + _DAT_112717da4));
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d080(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2b68;
  if (param_4 == 6) {
    _objc_alloc();
    puVar3 = puVar6;
    func_0x000104f662a8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000104f662c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000104f660f8();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104f63568;
    puStack_90 = &UNK_1108485e8;
    puVar17 = auStack_88;
    _objc_copyWeak(puVar17,auStack_80);
    puStack_d0 = puVar13;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x104f63598;
    puStack_b8 = &UNK_1108485e8;
    puVar18 = auStack_b0;
    _objc_copyWeak(puVar18,auStack_80);
    func_0x00010c01c4a0(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    _objc_alloc();
    lVar16 = param_4;
    FUN_104f65df0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x000104f65f30();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c0997e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c099840();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x104f635c8;
    puStack_e0 = &UNK_110849f88;
    puVar17 = auStack_d8;
    _objc_copyWeak(puVar17,auStack_80);
    lVar11 = param_4;
    func_0x000104f65e9c();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_4;
    func_0x000104f65efc();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar13;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x104f63618;
    puStack_108 = &UNK_1108485e8;
    puVar18 = auStack_100;
    _objc_copyWeak(puVar18,auStack_80);
    puVar15 = auStack_128;
    _objc_copyWeak(puVar15,auStack_80);
    if (param_4 == 5) {
      func_0x000104f662d8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar15 = (undefined1 *)0x0;
    }
    func_0x00010c01c4c0(puVar6);
    if (param_4 == 5) {
      _objc_release(puVar15);
    }
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar16);
    _objc_destroyWeak(auStack_128);
  }
  _objc_destroyWeak(puVar18);
  _objc_destroyWeak(puVar17);
  puVar13 = PTR_PTR_1126b2b70;
  _objc_alloc();
  func_0x00010c061e00();
  lVar16 = (long)_DAT_112717db0;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar13;
  _objc_release(uVar14);
  func_0x00010c10ea40(*(undefined8 *)(param_1 + lVar16));
  param_1 = param_1 + _DAT_112717da0;
  _objc_loadWeakRetained(param_1);
  lVar16 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104f63568; end: 104f63677;  */

void FUN_104f63568(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f63678; end: 104f6367f; -[SCMerlinOnboardingEntryPoint dialogDidDismiss:] */

void FUN_104f63678(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWithDidComplete__11255e8b0,0);
  return;
}



/* Entry: 104f63680; end: 104f636d7; -[SCMerlinOnboardingEntryPoint webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63680(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112717db4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f636d8; end: 104f63827; -[SCMerlinOnboardingEntryPoint getOnboardingVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104f636d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112717da0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0e81e0();
  _objc_release(lVar1);
  if (lVar2 < 3) {
    if (lVar2 != 0) {
      if (lVar2 != 1) {
        return 0;
      }
      param_1 = param_1 + _DAT_112717db8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0cb000();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfc6a00();
      goto LAB_104f637bc;
    }
  }
  else if (2 < lVar2 - 3U) {
    if (lVar2 == 8) {
      param_1 = param_1 + _DAT_112717db8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0cb000();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfc6a20();
      goto LAB_104f637bc;
    }
    if (lVar2 != 7) {
      return 0;
    }
  }
  param_1 = param_1 + _DAT_112717db8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cb000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc69e0();
LAB_104f637bc:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 104f63828; end: 104f63857; -[SCMerlinOnboardingEntryPoint _presentBrowserForUrlInAlertDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112717da8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112717db4);
  _objc_retain(0);
  _objc_retain(param_1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(uVar2);
  func_0x000108065a84(param_3,puVar1);
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f63858; end: 104f63887; -[SCMerlinOnboardingEntryPoint _presentBrowserForUrlInTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112717dbc);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112717db4);
  _objc_retain(0);
  _objc_retain(param_1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(uVar2);
  func_0x000108065a84(param_3,puVar1);
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f63888; end: 104f63a8b; -[SCMerlinOnboardingEntryPoint _dismissWithDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63888(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbcf98;
  if (*(long *)(param_1 + _DAT_112717da4) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbcfb8;
  }
  _objc_retain(ppuVar1);
  lVar2 = (long)_DAT_112717da0;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112717d9c);
  lVar3 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0e81e0();
  FUN_104f62c8c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    FUN_104f66854(uVar6,lVar4,ppuVar1,1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    FUN_104f66624();
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010be875a0(param_1);
  }
  func_0x00010be51d20(param_1);
  lVar3 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf44120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(lVar4);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf6f440(lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(ppuVar1);
  return;
}


