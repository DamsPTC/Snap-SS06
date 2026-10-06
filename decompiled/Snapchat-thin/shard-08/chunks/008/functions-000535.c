/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10661dea4; end: 10661debb;  */

void FUN_10661dea4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10661debc; end: 10661def3;  */

void FUN_10661debc(long param_1,undefined8 param_2)

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



/* Entry: 10661def4; end: 10661df03;  */

void FUN_10661def4(void)

{
  return;
}



/* Entry: 10661df04; end: 10661ecbf;  */

void FUN_10661df04(undefined *param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                  int param_6,undefined4 param_7,long param_8,undefined *param_9,undefined *param_10
                  ,undefined *param_11,undefined *param_12,byte param_13)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  puStack_148 = (undefined *)CONCAT44(puStack_148._4_4_,param_7);
  puStack_150 = (undefined *)CONCAT44(puStack_150._4_4_,param_4);
  puStack_d8 = (undefined *)CONCAT44(puStack_d8._4_4_,(uint)param_13);
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_138 = (undefined *)param_8;
  puStack_f8 = (undefined *)param_3;
  puStack_c8 = (undefined *)param_2;
  _objc_retain();
  puStack_c0 = param_9;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_d0 = param_12;
  _objc_retain(param_12);
  iVar1 = param_6;
  if (param_5 != 0) {
    iVar1 = 1;
  }
  puStack_e0 = (undefined *)CONCAT44(puStack_e0._4_4_,iVar1);
  puVar16 = PTR_PTR_1126cc298;
  puStack_128 = (undefined *)param_5;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010bf24ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_1;
  func_0x00010bf25000(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9c40();
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puStack_110 = puVar16;
  func_0x00010c01b460();
  puVar16 = PTR_PTR_1126b11d0;
  _objc_alloc();
  puVar19 = param_1;
  func_0x00010bf24ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e320();
  _objc_release(puVar19);
  puVar19 = param_1;
  func_0x00010bf2d160();
  puVar20 = (undefined *)0x0;
  if ((int)puVar19 != 0) {
    puVar20 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  uVar17 = (uint)puStack_e0;
  uVar22 = (uint)puStack_e0;
  if (puStack_c8 != (undefined *)0x0) {
    uVar22 = 1;
  }
  puVar19 = param_11;
  if (uVar22 == 0) {
    puVar19 = param_10;
  }
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c078f60();
  puStack_120 = puVar19;
  puStack_118 = puVar16;
  if ((int)puVar3 != 0) {
    puVar16 = param_1;
    func_0x00010c282400(param_1);
    func_0x000108f473c8(puVar19,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = puVar19;
  }
  puStack_108 = param_11;
  puStack_100 = param_10;
  puStack_f0 = (undefined *)CONCAT44(puStack_f0._4_4_,param_6);
  puStack_e8 = puVar2;
  if (((uVar22 | (uint)puStack_d8) & 1) == 0) {
    func_0x000108f591ac();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    func_0x000108f635f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar19 = PTR_PTR_1126c72f8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044860();
    puStack_128 = puVar19;
    _objc_release(puVar3);
LAB_10661e330:
    _objc_release(puVar16);
  }
  else {
    puVar16 = param_1;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010bfd91e0();
    puVar19 = puStack_138;
    if (((puStack_138 == (undefined *)0xfffffffffffffffe) ||
        ((puStack_f8 != (undefined *)0x0 || puStack_c8 != (undefined *)0x0) ||
         puStack_128 != (undefined *)0x0)) || (((ulong)puVar3 & 1) != 0)) {
      _objc_release(puVar16);
LAB_10661e230:
      puVar16 = param_1;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      puStack_160 = puVar16;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar16;
      func_0x00010c120680();
      puVar21 = (undefined *)(long)(int)puVar2;
      puVar3 = param_1;
      func_0x00010c258f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = (undefined *)CONCAT44(puStack_140._4_4_,uVar22);
      puVar18 = puVar2;
      func_0x00010c1518c0();
      puVar4 = param_1;
      func_0x00010c258f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25ac80();
      puStack_190 = puStack_128;
      puStack_188 = puVar19;
      param_6 = (int)puStack_f0;
      func_0x000107d18b20(puVar21,(long)(int)puVar18,(long)(int)puVar6,0,puStack_c8,puStack_f8,0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = puVar21;
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar22 = (uint)puStack_140;
      _objc_release(puVar2);
      puVar2 = puStack_e8;
      _objc_release(puVar3);
      uVar17 = (uint)puStack_e0;
      _objc_release(puVar16);
      puVar16 = puStack_160;
      goto LAB_10661e330;
    }
    _objc_release(puVar16);
    if (puVar19 == (undefined *)0xffffffffffffffff) goto LAB_10661e230;
    puStack_128 = (undefined *)0x0;
  }
  puVar19 = puStack_d8;
  uVar23 = 0x3fe4ccccc0000000;
  uVar27 = 0;
  uVar31 = uVar23;
  if ((uint)puStack_d8 == 0) {
    uVar31 = 0;
  }
  if (param_6 == 0) {
    uVar29 = 0x4054000000000000;
    uVar27 = 0x404c000000000000;
    func_0x000108f62de4(0x4054000000000000,0x404c000000000000,0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x000108f62ea4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_c0;
    uVar23 = 0x4024000000000000;
    if (((ulong)puVar19 & 1) == 0) {
      func_0x00010c08e700(puVar18);
      uVar23 = uVar29;
    }
    puVar19 = PTR_PTR_1126c74d8;
    _objc_alloc();
    func_0x00010c08e740(puVar18);
    uVar30 = uVar29;
    uVar28 = uVar27;
    func_0x00010c08e720(puVar18);
    uVar24 = uVar30;
    func_0x00010c140ba0(puVar16);
    uVar25 = uVar24;
    func_0x00010c140b80(puVar16);
    uVar26 = uVar25;
    func_0x00010c099fa0(puVar18);
    puStack_190 = (undefined *)uVar31;
    func_0x00010c0220e0(uVar29,uVar27,uVar30,uVar24,uVar28,uVar25,uVar26,uVar23);
    _objc_release(puVar18);
  }
  else {
    func_0x000108f62ea4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_c0;
    uVar29 = 0x4024000000000000;
    if (((ulong)puVar19 & 1) == 0) {
      func_0x00010c08e700(puVar16);
      uVar29 = uVar23;
    }
    puVar19 = PTR_PTR_1126c74d8;
    _objc_alloc();
    func_0x00010c08e740(puVar16);
    uVar30 = uVar23;
    uVar28 = uVar27;
    func_0x00010c08e720(puVar16);
    uVar24 = uVar30;
    func_0x00010c140ba0(puVar16);
    uVar25 = uVar24;
    func_0x00010c140b80(puVar16);
    uVar26 = uVar25;
    func_0x00010c099fa0(puVar16);
    puStack_190 = (undefined *)uVar31;
    func_0x00010c0220e0(uVar23,uVar27,uVar30,uVar24,uVar28,uVar25,uVar26,uVar29);
  }
  _objc_release(puVar16);
  puStack_140 = (undefined *)0x0;
  if (uVar17 == 0) {
    puStack_140 = puVar20;
  }
  _objc_retain();
  puVar16 = (undefined *)0x0;
  puVar18 = (undefined *)0x0;
  if ((param_6 != 0) && ((int)puStack_148 != 0)) {
    puVar16 = puVar3;
    func_0x00010bf529e0();
    if (puVar16 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    func_0x00010c078f60();
    puVar18 = PTR_PTR_1126c2fa8;
    func_0x00010c25aec0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_138 = puVar19;
  puStack_e0 = puVar18;
  puStack_d8 = puVar16;
  if (uVar22 != 0) {
    func_0x00010c08e740(puVar19);
    _objc_retain(puStack_d0);
    _objc_retain(puVar16);
    _objc_retain(puVar18);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_retain(puVar2);
    func_0x00010bfe8220(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((puStack_f8 == (undefined *)0x0) && ((int)puStack_150 != 0)) {
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar16 == (undefined *)0x0) {
        if (puVar18 != (undefined *)0x0) {
          _objc_retain(puVar18);
          _objc_release(puVar19);
          puVar19 = puVar18;
        }
      }
      else {
        puVar16 = PTR_PTR_1126c2fa8;
        func_0x00010c25aea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        puVar19 = puVar16;
      }
    }
    else {
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar16 = puStack_d0;
    puStack_188 = (undefined *)0x0;
    uStack_180 = 0;
    puStack_190 = (undefined *)CONCAT71(puStack_190._1_7_,1);
    puVar18 = puStack_d0;
    puVar5 = puVar19;
    func_0x000108fec800(puStack_d0,puVar19,0,puStack_c8 != (undefined *)0x0,0,puVar3,0,puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cc220;
    _objc_alloc(PTR_PTR_1126cc220);
    uVar31 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar23 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar29 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar30 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x00010bff6300(uVar27,uVar27,uVar31,uVar23,uVar29,uVar30,0x3ff0000000000000);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cb048;
    _objc_alloc();
    func_0x00010bff5f60(uVar31,uVar23,uVar29,uVar30);
    puStack_c8 = puVar2;
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar3);
    puVar3 = puStack_d8;
    puVar2 = puStack_e0;
    goto LAB_10661e908;
  }
  func_0x00010c08e740(puVar19);
  _objc_retain(param_1);
  _objc_retain(puVar20);
  puVar16 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  func_0x00010bf24fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar19;
  func_0x00010c0b7d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar16);
  puVar16 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  func_0x00010bf24fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar19;
  func_0x00010c070480();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar19);
    _objc_release(puVar16);
    if (puVar3 == (undefined *)0x0) goto LAB_10661e6d4;
    puVar19 = puVar2;
    func_0x000108fecaa4(puVar2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(puVar19);
    _objc_release(puVar16);
LAB_10661e6d4:
    puVar16 = param_1;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_1;
    func_0x00010bf25000(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar18;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf25000(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar3;
    func_0x000107d19658(puVar3,puVar4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar3);
    _objc_release(puVar16);
  }
  puVar16 = param_1;
  puVar5 = puVar20;
  puVar3 = puVar20;
  if (puVar19 == (undefined *)0x0) {
    puVar18 = (undefined *)0x12c;
    func_0x000107d19874(uVar27);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar18;
  }
  else {
    puVar18 = puVar19;
    func_0x000107d19758(uVar27);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar18;
  }
LAB_10661e908:
  _objc_release(puVar19);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar16);
  puVar2 = PTR_PTR_1126cc258;
  _objc_alloc();
  func_0x00010bff2460();
  puVar16 = PTR_PTR_1126b11d8;
  _objc_alloc();
  puVar19 = param_1;
  func_0x00010bf24ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c07f7c0();
  uStack_180 = CONCAT71(uStack_180._1_7_,(char)puVar4) ^ 1;
  puStack_190 = (undefined *)0x0;
  iVar1 = (int)puStack_f0;
  puStack_188 = puVar18;
  puStack_f8 = puVar2;
  func_0x00010bff9c00();
  _objc_release(puVar18);
  _objc_release(puVar3);
  _objc_release(puVar19);
  puVar2 = PTR_PTR_1126b11d0;
  _objc_alloc();
  puVar19 = param_1;
  func_0x00010bf24ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar16;
  func_0x00010c04e320();
  _objc_release(puVar19);
  puVar16 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar19 = (undefined *)0x0;
  if (iVar1 != 0) {
    puVar19 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  puVar3 = PTR_PTR_1126b4860;
  puVar18 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe94a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  puVar18 = param_1;
  func_0x00010bf2d160();
  puStack_150 = puVar2;
  puStack_130 = param_1;
  if ((int)puVar18 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    func_0x000108f595e4();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126cc300;
  _objc_alloc();
  puStack_190 = (undefined *)CONCAT71(puStack_190._1_7_,1);
  puStack_158 = puVar20;
  func_0x00010c054140();
  puVar8 = PTR_PTR_1126b2c10;
  _objc_alloc();
  puVar21 = puStack_c8;
  puVar6 = puStack_120;
  puVar4 = puStack_128;
  puVar20 = puStack_138;
  puVar2 = puStack_140;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110e38ff8;
  uStack_168 = 0;
  uStack_180 = 0;
  puStack_178 = puStack_138;
  puStack_188 = puStack_140;
  puVar14 = puStack_120;
  puVar15 = puStack_128;
  puStack_190 = puVar16;
  func_0x00010c053700();
  puStack_f0 = puVar8;
  _objc_release(puVar7);
  _objc_release(puVar18);
  _objc_release(puVar3);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_f8);
  _objc_release(puVar21);
  _objc_release(puStack_e0);
  _objc_release(puStack_d8);
  _objc_release(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puStack_158);
  _objc_release(puStack_118);
  _objc_release(puStack_e8);
  _objc_release(puStack_110);
  _objc_release(puStack_d0);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_c0);
  puVar8 = puStack_130;
  _objc_release();
  puVar10 = puStack_f0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    puStack_1f0 = puVar6;
    puStack_1e0 = puVar20;
    puStack_1d8 = puVar2;
    puStack_1c8 = puVar21;
    puStack_1a8 = puVar4;
    pcStack_198 = FUN_10661ecc0;
    puStack_1e8 = puVar16;
    puStack_1d0 = puVar7;
    puStack_1c0 = puVar3;
    puStack_1b8 = puVar18;
    puStack_1b0 = puVar19;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(puVar5);
    _objc_retain(puVar14);
    _objc_retain(puVar15);
    puVar2 = puVar5;
    func_0x00010c26df40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar16;
    func_0x00010c08fa60();
    _objc_release(puVar16);
    _objc_release(puVar2);
    if (puVar19 == (undefined *)0x0) {
      puVar2 = puVar8;
      func_0x00010c0c6e00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      puVar16 = PTR_PTR_1126b4860;
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar19 == (undefined *)0x0) {
        puVar19 = puVar5;
        func_0x00010c112140(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0fde60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      else {
        puVar19 = PTR_PTR_1126bfca8;
        _objc_alloc(PTR_PTR_1126bfca8);
        puVar2 = puVar8;
        func_0x00010c0c54a0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar8;
        func_0x00010c0c5480(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c020b60(puVar19);
        _objc_release(puVar16);
        _objc_release(puVar2);
        puStack_220 = &uStack_228;
        uStack_228 = 0;
        uStack_218 = 0x3032000000;
        pcStack_210 = FUN_10661dea4;
        uStack_208 = 0x10661deb4;
        uStack_200 = 0;
        puVar2 = puVar8;
        func_0x00010c241560(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c0ca0();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126c6940;
        _objc_alloc(PTR_PTR_1126c6940);
        lVar9 = puStack_220[5];
        func_0x00010c08fa60();
        if (lVar9 == 0) {
          puVar16 = puVar8;
          func_0x00010c0c6e00(puVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar16 = (undefined *)puStack_220[5];
        }
        func_0x00010c051fe0(puVar2);
        if (lVar9 == 0) {
          _objc_release(puVar16);
        }
        puVar16 = puVar8;
        func_0x00010c24cfc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar16;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        puVar3 = PTR_PTR_1126c3398;
        _objc_alloc(PTR_PTR_1126c3398);
        func_0x00010bffa8e0();
        puVar18 = puVar3;
        func_0x000107d244dc();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR_PTR_1126b4860;
        func_0x00010c258dc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        _objc_release(puVar3);
        _objc_release(puVar20);
        _objc_release(puVar2);
        __Block_object_dispose(&uStack_228,8);
        _objc_release(uStack_200);
      }
    }
    else {
      puVar19 = PTR_PTR_1126bfca8;
      _objc_alloc(PTR_PTR_1126bfca8);
      puVar2 = puVar5;
      func_0x00010c241660(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar2;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar5;
      func_0x00010c241660(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar20;
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60(puVar19);
      _objc_release(puVar3);
      _objc_release(puVar20);
      _objc_release(puVar16);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c6940;
      _objc_alloc(PTR_PTR_1126c6940);
      puVar16 = puVar5;
      func_0x00010c26df40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar16;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051fe0(puVar2);
      _objc_release(puVar20);
      _objc_release(puVar16);
      puVar20 = PTR_PTR_1126c3398;
      _objc_alloc(PTR_PTR_1126c3398);
      puVar16 = puVar5;
      func_0x00010bfe5ea0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa8e0(puVar20);
      _objc_release(puVar16);
      puVar3 = puVar20;
      func_0x000107d244dc(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126b4860;
      func_0x00010c258dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar20);
      _objc_release(puVar2);
    }
    _objc_release(puVar19);
    puVar19 = puVar8;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (puVar19 == (undefined *)0x0) {
      puVar20 = puVar5;
      func_0x00010c2709c0(puVar5);
      func_0x00010bf655e0((double)(long)puVar20 / 1000.0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar19);
      puVar2 = puVar19;
    }
    _objc_release(puVar19);
    puVar19 = puVar5;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf4cc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d60();
    _objc_release(puVar20);
    _objc_release(puVar19);
    puVar10 = PTR_PTR_1126cc308;
    _objc_alloc();
    puVar19 = puVar8;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puStack_258 = puVar19;
    if (puVar19 == (undefined *)0x0) {
      puStack_258 = puVar5;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar20 = puVar8;
    func_0x00010c24cfc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = puVar20;
    if (puVar20 == (undefined *)0x0) {
      puStack_260 = puVar5;
      func_0x00010c24cfc0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = puVar5;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    func_0x00010c0efde0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c120680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    puVar21 = puVar5;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar21;
    func_0x00010c151b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    puVar11 = puVar5;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c25ac80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    func_0x00010bfd91e0();
    puVar13 = puVar5;
    func_0x00010c112140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b020();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar21);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar3);
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puStack_260);
    }
    _objc_release(puVar20);
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puStack_258);
    }
    _objc_release(puVar19);
    _objc_release(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar5);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10661ecc0; end: 10661f49f;  */

void FUN_10661ecc0(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010c08fa60();
  _objc_release(puVar15);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c0c6e00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    puVar15 = PTR_PTR_1126b4860;
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010c112140(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      puVar2 = PTR_PTR_1126bfca8;
      _objc_alloc(PTR_PTR_1126bfca8);
      puVar1 = param_1;
      func_0x00010c0c54a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_1;
      func_0x00010c0c5480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60(puVar2);
      _objc_release(puVar15);
      _objc_release(puVar1);
      puStack_90 = &uStack_98;
      uStack_98 = 0;
      uStack_88 = 0x3032000000;
      pcStack_80 = FUN_10661dea4;
      uStack_78 = 0x10661deb4;
      uStack_70 = 0;
      puVar1 = param_1;
      func_0x00010c241560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c0ca0();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c6940;
      _objc_alloc(PTR_PTR_1126c6940);
      lVar3 = puStack_90[5];
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        puVar15 = param_1;
        func_0x00010c0c6e00(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar15 = (undefined *)puStack_90[5];
      }
      func_0x00010c051fe0(puVar1);
      if (lVar3 == 0) {
        _objc_release(puVar15);
      }
      puVar15 = param_1;
      func_0x00010c24cfc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar15;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar5 = PTR_PTR_1126c3398;
      _objc_alloc(PTR_PTR_1126c3398);
      func_0x00010bffa8e0();
      puVar6 = puVar5;
      func_0x000107d244dc();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126b4860;
      func_0x00010c258dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(uStack_70);
    }
  }
  else {
    puVar2 = PTR_PTR_1126bfca8;
    _objc_alloc(PTR_PTR_1126bfca8);
    puVar1 = param_2;
    func_0x00010c241660(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010c241660(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar15);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c6940;
    _objc_alloc(PTR_PTR_1126c6940);
    puVar15 = param_2;
    func_0x00010c26df40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051fe0(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar15);
    puVar4 = PTR_PTR_1126c3398;
    _objc_alloc(PTR_PTR_1126c3398);
    puVar15 = param_2;
    func_0x00010bfe5ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa8e0(puVar4);
    _objc_release(puVar15);
    puVar5 = puVar4;
    func_0x000107d244dc(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b4860;
    func_0x00010c258dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (puVar2 == (undefined *)0x0) {
    puVar4 = param_2;
    func_0x00010c2709c0(param_2);
    func_0x00010bf655e0((double)(long)puVar4 / 1000.0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d60();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc308;
  _objc_alloc();
  puVar4 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puStack_c8 = param_2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_1;
  func_0x00010c24cfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puStack_d0 = param_2;
    func_0x00010c24cfc0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0efde0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_2;
  func_0x00010c0ccc20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c120680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  puVar10 = param_2;
  func_0x00010c0ccc20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c151b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  puVar12 = param_2;
  func_0x00010c0ccc20();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25ac80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  func_0x00010bfd91e0();
  puVar14 = param_2;
  func_0x00010c112140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b020();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puStack_d0);
  }
  _objc_release(puVar5);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puStack_c8);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar15);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10661f4a0; end: 10661f4d7;  */

void FUN_10661f4a0(long param_1,undefined8 param_2)

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



/* Entry: 10661f4d8; end: 10661f86f;  */

void FUN_10661f4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c105980();
  lVar1 = param_1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000107d244dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b4860;
  func_0x00010c258dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000108f4853c();
  _objc_release(param_3);
  if (((int)uVar5 != 0) && (lVar2 = param_1, func_0x00010c105980(), lVar2 != -1)) {
    func_0x00010c105980(param_1);
  }
  puVar6 = PTR_PTR_1126cc308;
  _objc_alloc(PTR_PTR_1126cc308);
  lVar2 = lVar1;
  func_0x00010bf3cf60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf3cf60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c105720(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b020(puVar6);
  _objc_release(param_2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10661f870; end: 10661f8f3; -[SCMyUnifiedProfileSnapProCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10661f870(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cc310;
    _objc_opt_new();
    lVar4 = (long)_DAT_11274c43c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1619c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1ba240(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10661f8f4; end: 10661f903; -[SCMyUnifiedProfileSnapProCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661f8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c43c),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 10661f904; end: 10661f967; -[SCMyUnifiedProfileSnapProCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661f904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2198;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setActionHandler__112636080,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274c440);
  *(undefined8 *)(param_1 + _DAT_11274c440) = param_3;
  _objc_release(uVar1);
  return;
}



/* Entry: 10661f968; end: 10661f983; -[SCMyUnifiedProfileSnapProCollectionViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661f968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c440),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 10661f984; end: 10661f993; -[SCMyUnifiedProfileSnapProCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10661f984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c440);
}



/* Entry: 10661f994; end: 10661f9b3; -[SCMyUnifiedProfileSnapProCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661f994(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274c444);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661f9b4; end: 10661f9c7; -[SCMyUnifiedProfileSnapProCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661f9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274c444,param_3);
  return;
}



/* Entry: 10661f9c8; end: 10661fa13; -[SCMyUnifiedProfileSnapProCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661f9c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274c444);
  _objc_storeStrong(param_1 + _DAT_11274c440,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c43c,0);
  return;
}



/* Entry: 10661fa14; end: 10661fb0b; -[SCMyUnifiedProfileSnapProLogoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10661fa14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f21a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cc318;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c448);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c448) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010bf573a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar4 = (long)_DAT_11274c44c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10661fb0c; end: 10661fc77; -[SCMyUnifiedProfileSnapProLogoView createNewAddToStoryView] */

/* WARNING: Possible PIC construction at 0x00010661fbb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010661fbbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661fb0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274c450;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10661fc78; end: 10661fd8f; -[SCMyUnifiedProfileSnapProLogoView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661fc78(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f21a0;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  lVar1 = (long)_DAT_11274c448;
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  dVar3 = param_1 + -20.0 + 5.0;
  lVar2 = (long)_DAT_11274c450;
  func_0x00010c19f0e0(dVar3,0x4034000000000000,0x4034000000000000,0x4034000000000000,
                      *(undefined8 *)(param_2 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  dVar3 = dVar3 + -13.0;
  dVar4 = dVar3 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar4,(dVar3 + -13.0) * 0.5,0x402a000000000000,0x402a000000000000,
                      *(undefined8 *)(param_2 + _DAT_11274c454));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  func_0x00010c19f0e0(dVar4 + -13.0,0,0x402a000000000000,0x402a000000000000,
                      *(undefined8 *)(param_2 + _DAT_11274c44c));
  return;
}



/* Entry: 10661fd90; end: 10661fdeb; -[SCMyUnifiedProfileSnapProLogoView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661fd90(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11274c448;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setImageDownloader__1126482a8);
  if ((uVar1 & 1) != 0) {
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10661fdec; end: 10661fe47; -[SCMyUnifiedProfileSnapProLogoView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661fdec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274c458;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c1619c0(*(undefined8 *)(param_1 + _DAT_11274c448));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10661fe48; end: 10661ffa7; -[SCMyUnifiedProfileSnapProLogoView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661fe48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274c45c;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar4 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_10661ff90;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc218;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010c23a380();
    func_0x00010c235b40(uVar4);
    lVar5 = 8;
    if ((int)uVar1 == 0) {
      lVar5 = 4;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + *(int *)(&DAT_11274c448 + lVar5)));
    uVar1 = uVar4;
    func_0x00010c26e5c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11274c448));
  }
  _objc_release(uVar1);
  _objc_release(uVar4);
LAB_10661ff90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10661ffa8; end: 10661ffc7; -[SCMyUnifiedProfileSnapProLogoView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661ffa8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274c458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661ffc8; end: 10661ffd7; -[SCMyUnifiedProfileSnapProLogoView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10661ffc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c45c);
}



/* Entry: 10661ffd8; end: 106620053; -[SCMyUnifiedProfileSnapProLogoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10661ffd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c45c,0);
  _objc_destroyWeak(param_1 + _DAT_11274c458);
  _objc_storeStrong(param_1 + _DAT_11274c448,0);
  _objc_storeStrong(param_1 + _DAT_11274c44c,0);
  _objc_storeStrong(param_1 + _DAT_11274c454,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c450,0);
  return;
}



/* Entry: 106620054; end: 106620197; -[SCLegacyImpalaPublicProfilePresentationHandler impalaPresentPublicProfile:isPublisherProfile:loggingInfo:presentingViewController:isNavigationStyleVertical:dismissBlock:] */

void FUN_106620054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x48,param_6);
  uVar4 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0f18;
  _objc_alloc(PTR_PTR_1126b0f18);
  func_0x00010bff9da0();
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010c1cd960(puVar2);
  func_0x00010c1cd9a0(puVar2);
  puVar3 = PTR_PTR_1126b0f20;
  _objc_alloc();
  func_0x00010c001da0();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106620198; end: 106620343; -[SCLegacyImpalaPublicProfilePresentationHandler impalaPresentPublicProfileWithOperaWrapper:businessProfileId:isPublisherProfile:loggingInfo:presentingViewController:isNavigationStyleVertical:dismissBlock:eventAnnouncer:page:] */

void FUN_106620198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  ulong param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126cc320;
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar5 = param_9;
  func_0x00010bff9d40();
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126cc328;
  _objc_alloc();
  func_0x00010c010b40();
  _objc_release(param_11);
  _objc_release(param_10);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b0ee0;
  _objc_alloc();
  uVar3 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c039560(puVar2,param_2,param_7,uVar3,puVar1,*(undefined8 *)(param_1 + 0x58),param_8,1,
                      uVar5 & 0xffffffffffffff00);
  _objc_release(param_7);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c10efe0(*(undefined8 *)(param_1 + 0x50),param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106620344; end: 106620423; -[SCLegacyImpalaPublicProfilePresentationHandler impalaProfilePresenter:sourcePageType:attributedPage:] */

void FUN_106620344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126cc330;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c244620(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e720(puVar2,param_2,uVar1,uVar3,uVar4,param_3,param_4,param_5,
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106620424; end: 10662047f; -[SCLegacyImpalaPublicProfilePresentationHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_106620424(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106620480; end: 1066204bf; -[SCLegacyImpalaPublicProfilePresentationHandler presentingViewControllerForUnifiedPublicProfilesPresenterScope] */

void FUN_106620480(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x000108f04e30();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066204c0; end: 106620557; -[SCLegacyImpalaPublicProfilePresentationHandler .cxx_destruct] */

void FUN_1066204c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106620558; end: 10662069b; -[SCImpalaOperaLayerViewControllerProviderCreator impalaOperaLayerViewControllerProviderForShowProfileLaunchInfo:editionId:shouldDelegateGestures:isVerticalNavStyle:] */

void FUN_106620558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b0f10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033440();
  puVar2 = PTR_PTR_1126cc320;
  _objc_alloc(PTR_PTR_1126cc320);
  uVar3 = param_3;
  func_0x00010bf24ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9d20(puVar2,param_2,uVar3,1,*(undefined8 *)(param_1 + 0x28),puVar1,param_6,0);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126cc0d8;
  _objc_alloc(PTR_PTR_1126cc0d8);
  func_0x00010c05e380();
  puVar5 = PTR_PTR_1126cc338;
  _objc_alloc(PTR_PTR_1126cc338);
  func_0x00010c03ba60();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10662069c; end: 106620853; -[SCImpalaOperaLayerViewControllerProviderCreator impalaOperaLayerViewControllerProviderForPublicProfileWithId:withLoggingInfo:shouldDelegateGestures:isVerticalNavStyle:] */

void FUN_10662069c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  bool bVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb0);
  func_0x000108f49550();
  if ((iVar1 == 0) || (lVar4 = param_3, func_0x00010c08fa60(), lVar4 == 0)) {
    bVar8 = false;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e57058);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x138);
    puVar2 = *(undefined **)(param_1 + 0x130);
    func_0x00010c0dff20(puVar2,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x138);
    if (puVar2 != (undefined *)0x0) goto LAB_106620804;
    bVar8 = true;
  }
  puVar3 = PTR_PTR_1126cc320;
  _objc_alloc(PTR_PTR_1126cc320);
  func_0x00010bff9d20();
  puVar2 = PTR_PTR_1126cc340;
  _objc_alloc(PTR_PTR_1126cc340);
  func_0x00010c03ba80();
  if (bVar8) {
    _os_unfair_lock_lock(param_1 + 0x138);
    lVar4 = *(long *)(param_1 + 0x130);
    if (lVar4 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x00010c25de20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x130);
      *(undefined **)(param_1 + 0x130) = puVar5;
      _objc_release(uVar6);
      lVar4 = *(long *)(param_1 + 0x130);
    }
    func_0x00010c1d0560(lVar4,param_2,puVar2,puVar7);
    _os_unfair_lock_unlock(param_1 + 0x138);
  }
  _objc_release(puVar3);
LAB_106620804:
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106620854; end: 1066209b3; -[SCImpalaOperaLayerViewControllerProviderCreator impalaSpotlightOperaLayerViewContollerProviderForCompositeSnapId:loggingInfo:shouldDelegateGestures:isVerticalNavStyle:] */

void FUN_106620854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb0);
  func_0x000108f4953c();
  if (iVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x138);
    puVar2 = *(undefined **)(param_1 + 0x128);
    func_0x00010c0dff20(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x138);
    if (puVar2 != (undefined *)0x0) goto LAB_106620970;
  }
  puVar3 = PTR_PTR_1126cc348;
  _objc_alloc(PTR_PTR_1126cc348);
  func_0x00010c000b00();
  puVar2 = PTR_PTR_1126cc340;
  _objc_alloc(PTR_PTR_1126cc340);
  func_0x00010c03ba80();
  if (iVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x138);
    lVar4 = *(long *)(param_1 + 0x128);
    if (lVar4 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x00010c25de20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      *(undefined **)(param_1 + 0x128) = puVar5;
      _objc_release(uVar6);
      lVar4 = *(long *)(param_1 + 0x128);
    }
    func_0x00010c1d0560(lVar4,param_2,puVar2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x138);
  }
  _objc_release(puVar3);
LAB_106620970:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066209b4; end: 106620a03; -[SCImpalaOperaLayerViewControllerProviderCreator impalaOperaLayerViewControllerProviderBuilder] */

void FUN_1066209b4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106620a04;
  puStack_20 = &UNK_11092ffe0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106620a04; end: 106620a1b;  */

void FUN_106620a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_impalaOperaLayerViewControllerPr_1125d81a8,
             param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 106620a1c; end: 10662114b; -[SCImpalaOperaLayerViewControllerProviderCreator impalaInsightsOperaLayerViewContollerProviderForPlaybackSequence:storySnap:showSwipeUpOnly:activeSnapOnly:] */

void FUN_106620a1c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_290;
  undefined *puStack_258;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_10662114c;
  uStack_c8 = 0x10662115c;
  uStack_c0 = 0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_10662114c;
  uStack_f8 = 0x10662115c;
  uStack_f0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x2020000000;
  uStack_140 = 0;
  puStack_170 = &uStack_178;
  uStack_178 = 0;
  uStack_168 = 0x2020000000;
  uStack_160 = 0;
  func_0x00010c0bdf40(param_3);
  lVar15 = param_4;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf5b1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  if ((param_4 == 0) || (param_6 == 0)) {
    puStack_258 = (undefined *)puStack_e0[5];
    _objc_retain();
  }
  else {
    puStack_258 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b0e10;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010beee460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ddc0();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b1038;
  _objc_alloc();
  lVar15 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar15);
  func_0x00010c049560();
  _objc_release(lVar15);
  puVar7 = PTR_PTR_1126b0e18;
  _objc_alloc();
  func_0x00010c05e0c0();
  puVar8 = PTR_PTR_1126b0e20;
  _objc_alloc();
  lVar15 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar15);
  func_0x00010c05e640();
  _objc_release(lVar15);
  lVar15 = param_4;
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar15;
  func_0x00010c234840();
  if ((int)lVar9 == 0) {
    puStack_290 = (undefined *)0x0;
  }
  else {
    puStack_290 = PTR_PTR_1126b33c0;
    _objc_opt_new();
  }
  _objc_release(lVar15);
  puVar10 = PTR_PTR_1126cc350;
  _objc_alloc();
  func_0x00010c04e2a0();
  func_0x000108f48354();
  puVar11 = PTR_PTR_1126cc358;
  _objc_alloc();
  lVar15 = param_4;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(puStack_130 + 3);
  uVar2 = *(undefined1 *)(puStack_150 + 3);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar5);
  puStack_b8 = puVar12;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106621c64;
  puStack_a0 = &UNK_1109302f0;
  uStack_98 = uVar5;
  uStack_90 = uVar1;
  uStack_8f = uVar2;
  _objc_retain(uVar5);
  puVar12 = puStack_258;
  func_0x000100504554(puStack_258,&puStack_b8);
  _objc_release(uStack_98);
  _objc_release(uVar5);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  lVar9 = param_1;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_4;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d300(puVar11);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(lVar15);
  _objc_release(puVar10);
  _objc_release(puStack_290);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puStack_258);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_178,8);
  __Block_object_dispose(&uStack_158,8);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_178,8);
  __Block_object_dispose(&uStack_158,8);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  lVar15 = 8;
  __Block_object_dispose(&uStack_e8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  return;
}



/* Entry: 10662114c; end: 106621163;  */

void FUN_10662114c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106621164; end: 106621217;  */

void FUN_106621164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073840();
  _objc_release(uVar1);
  uVar1 = 1;
  if ((int)uVar2 == 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106621218; end: 10662121b;  */

void FUN_106621218(void)

{
  return;
}



/* Entry: 10662121c; end: 1066212f3;  */

void FUN_10662121c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_1066212f4();
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 1066212f4; end: 106621423;  */

undefined8 FUN_1066212f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010c0c1320(uVar1);
  uVar2 = puStack_48[3];
  _objc_release(param_1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106621424; end: 10662142f;  */

void FUN_106621424(void)

{
  return;
}



/* Entry: 106621430; end: 106621493;  */

void FUN_106621430(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 3;
  return;
}



/* Entry: 106621494; end: 106621497;  */

void FUN_106621494(void)

{
  return;
}



/* Entry: 106621498; end: 106621527;  */

void FUN_106621498(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  func_0x00010bf66980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf55800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106621528; end: 106621913; -[SCImpalaOperaLayerViewControllerProviderCreator impalaInsightsLayerProviderForContext:] */

void FUN_106621528(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010c112ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b0e10;
  _objc_alloc();
  uVar28 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010beee460(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ddc0(puVar13,param_2,uVar28,uVar14,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x118));
  _objc_release(uVar14);
  puVar15 = PTR_PTR_1126b1038;
  _objc_alloc();
  lVar16 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar16);
  func_0x00010c049560(puVar15,param_2,lVar16,0xe,0xee);
  _objc_release(lVar16);
  puVar17 = PTR_PTR_1126b0e18;
  _objc_alloc();
  func_0x00010c05e0c0();
  puVar18 = PTR_PTR_1126b0e20;
  _objc_alloc();
  uVar14 = *(undefined8 *)(param_1 + 8);
  lVar16 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar16);
  func_0x00010c05e640(puVar18,param_2,uVar14,lVar16,*(undefined8 *)(param_1 + 0xc0));
  _objc_release(lVar16);
  puVar19 = PTR_PTR_1126cc350;
  _objc_alloc();
  func_0x00010c04e2a0();
  uVar8 = (undefined1)*(undefined8 *)(param_1 + 0xb0);
  func_0x000108f48354();
  puVar20 = PTR_PTR_1126cc358;
  _objc_alloc();
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar28 = *(undefined8 *)(param_1 + 0xb0);
  lVar16 = lVar9;
  if (lVar11 != 0) {
    lVar16 = lVar11;
  }
  lVar1 = lVar9;
  if (lVar12 != 0) {
    lVar1 = lVar12;
  }
  uVar24 = *(undefined8 *)(param_1 + 0x18);
  uVar27 = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar25 = *(undefined8 *)(param_1 + 0x58);
  lVar21 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + 0x70);
  uVar32 = *(undefined8 *)(param_1 + 0x68);
  uVar35 = *(undefined8 *)(param_1 + 0x80);
  uVar34 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar29 = *(undefined8 *)(param_1 + 0x60);
  uVar31 = *(undefined8 *)(param_1 + 0xd8);
  uVar30 = *(undefined8 *)(param_1 + 0x98);
  uVar26 = *(undefined8 *)(param_1 + 0xb8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106621914;
  puStack_78 = &UNK_110852c50;
  puVar23 = PTR_PTR_1126ae720;
  lStack_70 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d300(puVar20,param_2,uVar14,uVar28,lVar16,lVar1,lVar10,uVar24,puVar19,puVar13,uVar2
                      ,puVar15,puVar17,uVar27,uVar5,uVar6,uVar3,uVar25,lVar22,uVar32,uVar33,uVar34,
                      uVar35,uVar4,uVar7,puVar18,uVar29,uVar31,uVar30,uVar26,0,uVar8);
  _objc_release(puVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  func_0x00010c182d40(puVar20,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 106621914; end: 1066219a3;  */

void FUN_106621914(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  func_0x00010bf66980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf55800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066219a4; end: 106621b7f; -[SCImpalaOperaLayerViewControllerProviderCreator .cxx_destruct] */

void FUN_1066219a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106621b80; end: 106621b87;  */

void FUN_106621b80(void)

{
  return;
}



/* Entry: 106621b88; end: 106621c53;  */

void FUN_106621b88(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((param_4 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c241720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0676c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_106621c28;
    uVar4 = 5;
  }
  else {
    uVar4 = 4;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;
LAB_106621c28:
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106621c54; end: 106621c63;  */

void FUN_106621c54(void)

{
  return;
}



/* Entry: 106621c64; end: 106622a53;  */

void FUN_106621c64(double param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c241720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar4 == 0) {
    lVar5 = param_3;
    FUN_1066212f4(param_3,*(undefined8 *)(param_2 + 0x20));
    if (lVar5 == 5) {
      puVar11 = PTR_PTR_1126b0ec8;
      _objc_alloc();
      _objc_retain(param_3);
      uStack_98 = 0;
      uStack_88 = 0x2020000000;
      uStack_80 = 0;
      lVar5 = param_3;
      puStack_90 = &uStack_98;
      func_0x00010bf0e700(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_c0 = (undefined **)0xc2000000;
      pcStack_b8 = FUN_106622acc;
      pcStack_b0 = (code *)&UNK_1109258d8;
      puStack_a8 = &uStack_98;
      func_0x00010c0c1320();
      lVar22 = puStack_90[3];
      _objc_release(lVar5);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(param_3);
      param_1 = (double)lVar22;
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0624a0(param_1,0);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    else {
      lVar5 = param_3;
      FUN_1066212f4(param_3,*(undefined8 *)(param_2 + 0x20));
      if (lVar5 == 4) {
        ppuStack_c0 = &puStack_c8;
        puStack_c8 = (undefined *)0x0;
        pcStack_b8 = (code *)0x3032000000;
        pcStack_b0 = FUN_10662114c;
        puStack_a8 = (undefined8 *)0x10662115c;
        uStack_a0 = 0;
        lVar5 = param_3;
        func_0x00010bf0e700();
        _objc_retainAutoreleasedReturnValue();
        param_1 = 1.60807493534087e-314;
        func_0x00010c0c1320();
        puVar11 = ppuStack_c0[5];
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          func_0x00010c29c5c0();
          if ((long)puVar11 < 0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            puVar12 = ppuStack_c0[5];
            func_0x00010c29c5c0(puVar12);
          }
          puVar11 = ppuStack_c0[5];
          func_0x00010bf1f680();
          if (-1 < (long)puVar11) {
            func_0x00010bf1f680(ppuStack_c0[5]);
          }
          puVar11 = ppuStack_c0[5];
          func_0x00010c22a980();
          if (-1 < (long)puVar11) {
            func_0x00010c22a980(ppuStack_c0[5]);
          }
          puVar11 = ppuStack_c0[5];
          func_0x00010c25fae0();
          if (-1 < (long)puVar11) {
            func_0x00010c25fae0(ppuStack_c0[5]);
          }
          puVar11 = ppuStack_c0[5];
          func_0x00010c129760();
          if (-1 < (long)puVar11) {
            func_0x00010c129760(ppuStack_c0[5]);
          }
          func_0x00010c24b580();
          puVar11 = PTR_PTR_1126b0ec8;
          _objc_alloc();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          param_1 = (double)(long)puVar12;
          func_0x00010c0624a0(param_1,0);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          puVar12 = ppuStack_c0[5];
          func_0x00010c129760();
          if (-1 < (long)puVar12) {
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1eb8e0(puVar11);
            _objc_release(puVar12);
          }
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17ef40(puVar11);
          _objc_release(puVar12);
        }
        _objc_release(lVar5);
        __Block_object_dispose(&puStack_c8,8);
        _objc_release(uStack_a0);
      }
      else {
        puVar11 = (undefined *)0x0;
      }
    }
  }
  else {
    cVar1 = *(char *)(param_2 + 0x28);
    puVar11 = PTR_PTR_1126b0ec8;
    _objc_alloc();
    lVar5 = lVar4;
    func_0x00010c243e80(lVar4);
    param_1 = (double)lVar5;
    lVar5 = lVar4;
    func_0x00010c151b20(lVar4);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar22 = lVar4;
    func_0x00010c25aca0(lVar4);
    func_0x00010c0df720((double)lVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf1f680(lVar4);
    func_0x00010c0df7a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c22a980(lVar4);
    func_0x00010c0df7a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25fe00(lVar4);
    func_0x00010c0df7a0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c280740(lVar4);
    func_0x00010c0df7a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (cVar1 == '\x01') {
      func_0x00010c269000(lVar4);
      func_0x00010c0df7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c268e00(lVar4);
      func_0x00010c0df7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c2652a0(lVar4);
      func_0x00010c0df7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c264600(lVar4);
      func_0x00010c0df7a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0624c0(param_1,(double)lVar5);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar17);
    }
    else {
      func_0x00010c0624a0(param_1,(double)lVar5);
    }
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar11 != (undefined *)0x0) {
      func_0x00010c0f2a80(lVar4);
      func_0x00010c0df7a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8c40(puVar11);
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0f2a20(lVar4);
      func_0x00010c0df7a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8c20(puVar11);
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf41980(lVar4);
      func_0x00010c0df7a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17ecc0(puVar11);
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf41920(lVar4);
      func_0x00010c0df7a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eca0(puVar11);
      _objc_release(puVar12);
    }
  }
  if (lVar7 == 0) {
    lStack_138 = lVar3;
    func_0x00010bf06600();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf06600();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar22 == 0) goto LAB_1066227d4;
    puStack_140 = PTR_PTR_1126b63f8;
    _objc_opt_new();
    lVar5 = lVar3;
    func_0x00010bf93e00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar5;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puStack_140);
    _objc_release(lVar22);
    _objc_release(lVar5);
    lVar5 = lVar3;
    func_0x00010bf93e00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar5;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(puStack_140);
    _objc_release(lVar22);
    _objc_release(lVar5);
    lVar5 = lVar3;
    func_0x00010bf06600(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puStack_140);
    _objc_release(lVar5);
    lVar5 = lVar3;
    func_0x00010c0c5180(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_138 = lVar7;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
LAB_1066227d4:
      puStack_140 = (undefined *)0x0;
      goto LAB_1066227d8;
    }
    puStack_140 = PTR_PTR_1126b63f8;
    _objc_opt_new();
    lVar5 = lVar7;
    func_0x00010bf93e00(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar5;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puStack_140);
    _objc_release(lVar22);
    _objc_release(lVar5);
    lVar5 = lVar7;
    func_0x00010bf93e00(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar5;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(puStack_140);
    _objc_release(lVar22);
    _objc_release(lVar5);
    lVar5 = lVar7;
    func_0x00010c26e3a0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puStack_140);
    _objc_release(lVar5);
    lVar5 = lVar7;
    func_0x00010c26e3a0(lVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c175100(puStack_140);
  _objc_release(lVar5);
  lVar5 = lVar3;
  func_0x00010bf267e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(puStack_140);
  _objc_release(lVar5);
LAB_1066227d8:
  puVar13 = PTR_PTR_1126b0ed0;
  _objc_alloc(PTR_PTR_1126b0ed0);
  lVar5 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  lVar18 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c1058a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lVar20 = param_3;
  func_0x00010c12fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d060();
  func_0x00010c070680();
  func_0x00010c047aa0(param_1 * 1000.0,puVar13);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar22);
  _objc_release(lVar5);
  func_0x00010c214160(puVar13);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4120(puVar13);
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2ba0(puVar13);
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25b820(param_3);
  func_0x00010c0df760(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0e20(puVar13);
  _objc_release(puVar12);
  _objc_release(lStack_138);
  _objc_release(puStack_140);
  _objc_release(puVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106622a54; end: 106622a5b;  */

void FUN_106622a54(void)

{
  return;
}



/* Entry: 106622a5c; end: 106622ab3;  */

void FUN_106622a5c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_6);
  if (param_4 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_6;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106622ab4; end: 106622acb;  */

void FUN_106622ab4(void)

{
  return;
}



/* Entry: 106622acc; end: 106622afb;  */

void FUN_106622acc(long param_1)

{
  undefined8 in_x5;
  
  func_0x00010c29c5c0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_x5;
  return;
}



/* Entry: 106622afc; end: 106622b23;  */

void FUN_106622afc(void)

{
  return;
}



/* Entry: 106622b24; end: 106622bfb; -[SCMyUnifiedProfileSnapProSectionConfiguration initWithBusinessId:headerText:insets:] */

undefined1 *
FUN_106622b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f21b8;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106622bfc; end: 106622c1f; -[SCMyUnifiedProfileSnapProSectionConfiguration copyWithZone:] */

undefined8 FUN_106622bfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106622c20; end: 106622c9f; -[SCMyUnifiedProfileSnapProSectionConfiguration hash] */

undefined8 * FUN_106622c20(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106622d38:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106622d44;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106622d44;
          }
          goto LAB_106622d38;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106622d44:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106622ca0; end: 106622d5f; -[SCMyUnifiedProfileSnapProSectionConfiguration isEqual:] */

long FUN_106622ca0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106622d38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106622d44;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106622d44;
          }
          goto LAB_106622d38;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106622d44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106622d60; end: 106622d67; -[SCMyUnifiedProfileSnapProSectionConfiguration businessId] */

undefined8 FUN_106622d60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106622d68; end: 106622d6f; -[SCMyUnifiedProfileSnapProSectionConfiguration headerText] */

undefined8 FUN_106622d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106622d70; end: 106622d77; -[SCMyUnifiedProfileSnapProSectionConfiguration insets] */

undefined8 FUN_106622d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106622d78; end: 106622db3; -[SCMyUnifiedProfileSnapProSectionConfiguration .cxx_destruct] */

void FUN_106622d78(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106622db4; end: 106622fb7; -[SCMyUnifiedProfileSnapProSnapDataModel initWithProfileId:snapId:clientId:timestamp:thumbnail:isPending:hasFailed:captionText:totalViewCount:screenshotCount:storyReplyCount:shouldShowViewers:isScheduled:isRejectedByContentModeration:previewURL:] */

undefined8 *
FUN_106622db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126f21c0;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_12;
    puVar1[9] = param_13;
    puVar1[10] = param_14;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0xb) = param_15._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_15._2_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106622fb8; end: 106622fdb; -[SCMyUnifiedProfileSnapProSnapDataModel copyWithZone:] */

undefined8 FUN_106622fb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106622fdc; end: 1066230b3; -[SCMyUnifiedProfileSnapProSnapDataModel hash] */

undefined8 * FUN_106622fdc(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
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
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10662322c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106623238;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(char *)((long)puVar3 + 8) == param_3[8] &&
            (*(char *)((long)puVar3 + 9) == param_3[9])) &&
           (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
        (*(char *)((long)puVar3 + 10) == param_3[10])) &&
       ((*(char *)((long)puVar3 + 0xb) == param_3[0xb] &&
        (*(char *)((long)puVar3 + 0xc) == param_3[0xc])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                    func_0x00010c071ae0();
                    goto LAB_106623238;
                  }
                  goto LAB_10662322c;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106623238:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1066230b4; end: 106623253; -[SCMyUnifiedProfileSnapProSnapDataModel isEqual:] */

long FUN_1066230b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10662322c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106623238;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if (lVar3 != *(long *)(param_3 + 0x58)) {
                    func_0x00010c071ae0();
                    goto LAB_106623238;
                  }
                  goto LAB_10662322c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106623238:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106623254; end: 10662325b; -[SCMyUnifiedProfileSnapProSnapDataModel profileId] */

undefined8 FUN_106623254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10662325c; end: 106623263; -[SCMyUnifiedProfileSnapProSnapDataModel snapId] */

undefined8 FUN_10662325c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106623264; end: 10662326b; -[SCMyUnifiedProfileSnapProSnapDataModel clientId] */

undefined8 FUN_106623264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10662326c; end: 106623273; -[SCMyUnifiedProfileSnapProSnapDataModel timestamp] */

undefined8 FUN_10662326c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106623274; end: 10662327b; -[SCMyUnifiedProfileSnapProSnapDataModel thumbnail] */

undefined8 FUN_106623274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10662327c; end: 106623283; -[SCMyUnifiedProfileSnapProSnapDataModel isPending] */

undefined1 FUN_10662327c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106623284; end: 10662328b; -[SCMyUnifiedProfileSnapProSnapDataModel hasFailed] */

undefined1 FUN_106623284(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10662328c; end: 106623293; -[SCMyUnifiedProfileSnapProSnapDataModel captionText] */

undefined8 FUN_10662328c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106623294; end: 10662329b; -[SCMyUnifiedProfileSnapProSnapDataModel totalViewCount] */

undefined8 FUN_106623294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10662329c; end: 1066232a3; -[SCMyUnifiedProfileSnapProSnapDataModel screenshotCount] */

undefined8 FUN_10662329c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1066232a4; end: 1066232ab; -[SCMyUnifiedProfileSnapProSnapDataModel storyReplyCount] */

undefined8 FUN_1066232a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1066232ac; end: 1066232b3; -[SCMyUnifiedProfileSnapProSnapDataModel shouldShowViewers] */

undefined1 FUN_1066232ac(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1066232b4; end: 1066232bb; -[SCMyUnifiedProfileSnapProSnapDataModel isScheduled] */

undefined1 FUN_1066232b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1066232bc; end: 1066232c3; -[SCMyUnifiedProfileSnapProSnapDataModel isRejectedByContentModeration] */

undefined1 FUN_1066232bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1066232c4; end: 1066232cb; -[SCMyUnifiedProfileSnapProSnapDataModel previewURL] */

undefined8 FUN_1066232c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1066232cc; end: 106623337; -[SCMyUnifiedProfileSnapProSnapDataModel .cxx_destruct] */

void FUN_1066232cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106623338; end: 1066233bf; -[SCFriendUnifiedProfileSnapProPresentProfileActionDataModel initWithBusinessProfileId:type:] */

undefined1 *
FUN_106623338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f21c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066233c0; end: 1066233e3; -[SCFriendUnifiedProfileSnapProPresentProfileActionDataModel copyWithZone:] */

undefined8 FUN_1066233c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1066233e4; end: 106623457; -[SCFriendUnifiedProfileSnapProPresentProfileActionDataModel hash] */

undefined8 * FUN_1066233e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1066234dc;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_1066234dc;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1066234dc;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_1066234dc:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106623458; end: 1066234f7; -[SCFriendUnifiedProfileSnapProPresentProfileActionDataModel isEqual:] */

long FUN_106623458(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1066234dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1066234dc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1066234dc;
    }
  }
  lVar3 = 1;
LAB_1066234dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1066234f8; end: 1066234ff; -[SCFriendUnifiedProfileSnapProPresentProfileActionDataModel businessProfileId] */

undefined8 FUN_1066234f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106623500; end: 106623507; -[SCFriendUnifiedProfileSnapProPresentProfileActionDataModel type] */

undefined8 FUN_106623500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106623508; end: 106623513; -[SCFriendUnifiedProfileSnapProPresentProfileActionDataModel .cxx_destruct] */

void FUN_106623508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106623514; end: 1066235bf; -[SCMyUnifiedProfileSnapProDraftingSnapOptionsDataModel initWithSnapId:goLiveTimestamp:] */

undefined1 *
FUN_106623514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f21d0;
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



/* Entry: 1066235c0; end: 1066235e3; -[SCMyUnifiedProfileSnapProDraftingSnapOptionsDataModel copyWithZone:] */

undefined8 FUN_1066235c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1066235e4; end: 106623657; -[SCMyUnifiedProfileSnapProDraftingSnapOptionsDataModel hash] */

undefined8 * FUN_1066235e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1066236d8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1066236e4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1066236e4;
        }
        goto LAB_1066236d8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1066236e4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106623658; end: 1066236ff; -[SCMyUnifiedProfileSnapProDraftingSnapOptionsDataModel isEqual:] */

long FUN_106623658(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1066236d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1066236e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1066236e4;
        }
        goto LAB_1066236d8;
      }
    }
    lVar3 = 0;
  }
LAB_1066236e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106623700; end: 106623707; -[SCMyUnifiedProfileSnapProDraftingSnapOptionsDataModel snapId] */

undefined8 FUN_106623700(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106623708; end: 10662370f; -[SCMyUnifiedProfileSnapProDraftingSnapOptionsDataModel goLiveTimestamp] */

undefined8 FUN_106623708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106623710; end: 10662373f; -[SCMyUnifiedProfileSnapProDraftingSnapOptionsDataModel .cxx_destruct] */

void FUN_106623710(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106623740; end: 10662382f; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel initWithBusinessId:hostAccountUserId:snapId:useCircleTransition:appearWithExpandedViewersList:] */

undefined1 *
FUN_106623740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126f21d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


