/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053651f4; end: 10536526b; -[SCNGORegistrationUsernameViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1053651f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f88);
  func_0x00010bf2c700();
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721f7c);
    puVar2 = PTR_PTR_1126b7b90;
    func_0x00010c25f8a0(PTR_PTR_1126b7b90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 10536526c; end: 1053652eb; -[SCNGORegistrationUsernameViewController textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10536526c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b7b90;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721f7c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f84);
  func_0x00010c26bea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066160(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053652ec; end: 105365337; -[SCNGORegistrationUsernameViewController rightViewButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053652ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f7c);
  puVar1 = PTR_PTR_1126b7b90;
  func_0x00010c1419a0(PTR_PTR_1126b7b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105365338; end: 105365383; -[SCNGORegistrationUsernameViewController didSelectSuggestionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105365338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f7c);
  puVar1 = PTR_PTR_1126b7b90;
  func_0x00010bf7b2c0(PTR_PTR_1126b7b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105365384; end: 1053653cf; -[SCNGORegistrationUsernameViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105365384(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f7c);
  puVar1 = PTR_PTR_1126b7b90;
  func_0x00010c25f8a0(PTR_PTR_1126b7b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053653d0; end: 10536541b; -[SCNGORegistrationUsernameViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053653d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f7c);
  puVar1 = PTR_PTR_1126b7b90;
  func_0x00010bf9bba0(PTR_PTR_1126b7b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10536541c; end: 1053654cb; -[SCNGORegistrationUsernameViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10536541c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f7c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1053654cc; end: 105365513;  */

void FUN_1053654cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105365514; end: 1053657db; -[SCNGORegistrationUsernameViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105365514(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112721f88;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = param_3;
    func_0x00010bf2c700(param_3);
    func_0x00010c177be0(param_1,param_2,lVar5);
    func_0x00010bf2d300(param_3);
    lVar6 = (long)_DAT_112721f84;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c140e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + lVar6);
    func_0x00010c26bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(uVar3);
    if ((uVar1 & 1) == 0) {
      lVar5 = param_3;
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar6),param_2,lVar5);
      _objc_release(lVar5);
    }
    lVar5 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bd360();
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c262700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    if (lVar4 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112721f8c),param_2,1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112721f90),param_2,1);
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112721f8c),param_2,0);
      lVar5 = (long)_DAT_112721f90;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      lVar5 = param_3;
      func_0x00010c262700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a980(uVar2,param_2,lVar5);
      _objc_release(lVar5);
    }
    lVar5 = param_3;
    func_0x00010c07c140(param_3);
    func_0x00010c1b2440(param_1,param_2,lVar5);
    lVar5 = param_3;
    func_0x00010c07c140(param_3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6),param_2,(uint)lVar5 ^ 1);
    func_0x00010c07c140(param_3);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053657dc; end: 10536595b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053657dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112721f84;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  _objc_retain(param_2);
  func_0x00010c209fc0(uVar1);
  func_0x00010c161240(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536595c; end: 105366417; -[SCNGORegistrationUsernameViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10536595c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  long lVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  undefined8 uVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  double in_d3;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af0a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010537c4bc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010537c4d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051880(puVar1,param_2,0,puVar2,puVar3);
  lVar58 = (long)_DAT_112721f84;
  uVar55 = *(undefined8 *)(param_1 + lVar58);
  *(undefined **)(param_1 + lVar58) = puVar1;
  _objc_release(uVar55);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar58),param_2,param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar58),param_2,0);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar58),param_2,1);
  func_0x00010c213300(*(undefined8 *)(param_1 + lVar58),param_2,
                      &PTR____CFConstantStringClassReference_110dd3b38);
  lVar4 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  uVar55 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c140e00(uVar55);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dbf2f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar55,param_2,puVar2,0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar55);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c140e00(uVar55);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar55);
  _objc_release(puVar1);
  uVar55 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c140e00(uVar55);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar55);
  puVar1 = PTR_PTR_1126af088;
  _objc_opt_new();
  lVar56 = (long)_DAT_112721f94;
  uVar55 = *(undefined8 *)(param_1 + lVar56);
  *(undefined **)(param_1 + lVar56) = puVar1;
  _objc_release(uVar55);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar56),param_2,param_1);
  func_0x00010c1749e0(*(undefined8 *)(param_1 + lVar56),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar56),param_2,
                      &PTR____CFConstantStringClassReference_110dae578);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar56),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar56),param_2,
                      (*(byte *)(param_1 + _DAT_112721f80) ^ 0xff) & 1);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar57 = (long)_DAT_112721f8c;
  uVar55 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar1;
  _objc_release(uVar55);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar57),param_2,7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar57),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010537c534();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar57),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57),param_2,0);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126b7b98;
  _objc_alloc();
  func_0x00010c00a2c0();
  lVar59 = (long)_DAT_112721f90;
  uVar55 = *(undefined8 *)(param_1 + lVar59);
  *(undefined **)(param_1 + lVar59) = puVar1;
  _objc_release(uVar55);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar59),param_2,0);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar58);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar58);
  lStack_e8 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar58);
  uStack_e0 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010bf493c0(in_d3 / 9.0,uVar15,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar57);
  uStack_d8 = uVar19;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar57);
  uStack_d0 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar59);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar24;
  func_0x00010bf493c0(0xc020000000000000,uVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar59);
  uStack_c8 = uVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar59);
  uStack_c0 = uVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar32;
  func_0x00010bf493a0(uVar32,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar59);
  uStack_b8 = uVar36;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar37;
  func_0x00010bf493c0(0xc030000000000000,uVar37,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar56);
  uStack_b0 = uVar39;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar40;
  func_0x00010bf493a0(uVar40,param_2,lVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar56);
  uStack_a8 = uVar43;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar44;
  func_0x00010bf49460(uVar44,param_2,lVar47);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar56);
  uStack_a0 = uVar48;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = lVar57;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = lVar58;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar49;
  func_0x00010bf49500(uVar49,param_2,lVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = *(undefined8 *)(param_1 + lVar56);
  uStack_98 = uVar55;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1;
  func_0x00010bf25ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar50;
  func_0x00010bf493c0(0xc030000000000000,uVar50,param_2,lVar51);
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  uStack_90 = uVar52;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar54;
  func_0x00010bf493c0(0xc061800000000000,lVar54,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar56;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_e8,0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar56);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(uVar52);
  _objc_release(lVar51);
  _objc_release(uVar50);
  _objc_release(uVar55);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar55 = *(undefined8 *)(lVar5 + _DAT_112721f7c);
  puVar1 = PTR_PTR_1126b7b90;
  func_0x00010c272ea0(PTR_PTR_1126b7b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar55,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105366418; end: 105366463; -[SCNGORegistrationUsernameViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105366418(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f7c);
  puVar1 = PTR_PTR_1126b7b90;
  func_0x00010c272ea0(PTR_PTR_1126b7b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105366464; end: 1053664e3; -[SCNGORegistrationUsernameViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105366464(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721f88,0);
  _objc_storeStrong(param_1 + _DAT_112721f94,0);
  _objc_storeStrong(param_1 + _DAT_112721f90,0);
  _objc_storeStrong(param_1 + _DAT_112721f8c,0);
  _objc_storeStrong(param_1 + _DAT_112721f84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721f7c,0);
  return;
}



/* Entry: 1053664e4; end: 105366727; -[SCRegistrationUsernameBusinessLogic initWithUsername:usernameSuggestions:delegate:usernameValidationService:usernameAvailabilityChecker:signupTransitionLogger:registrationFeatureLogger:userInitialInputLogger:registrationRequestObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1053664e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e7ac8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112721f98;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721f9c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112721fa0) = 0xffffffffffffffff;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112721fa4,param_5);
    lVar3 = (long)_DAT_112721fa8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721fac;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721fb0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721fb4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721fb8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721fbc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721fc0) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721fc4) = 0;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105366728; end: 1053668a7; -[SCRegistrationUsernameBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105366728(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e7ac8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_begin_1125a3840);
  lVar3 = (long)_DAT_112721fb4;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adf00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar1);
  func_0x00010bea4b20(param_1);
  _objc_initWeak(auStack_48,param_1);
  lVar3 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721fbc);
  _objc_retain();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721fc8);
  *(undefined8 *)(param_1 + _DAT_112721fc8) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1053668a8; end: 105366967;  */

void FUN_1053668a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105366968;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105366968; end: 1053669a7;  */

void FUN_105366968(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010be8a120(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053669a8; end: 105366c8b; -[SCRegistrationUsernameBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053669a8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126b7ba0;
  lVar9 = param_1;
  func_0x00010537c504();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6aa80(puVar2,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  uVar8 = 0;
  lVar9 = 0;
  lVar7 = *(long *)(param_1 + _DAT_112721fcc);
  puVar4 = puVar2;
  if (lVar7 < 4) {
    if (lVar7 == 1) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112721f98);
      uVar3 = uVar8;
      _objc_retain(uVar8);
      puVar4 = PTR_PTR_1126b7ba0;
      func_0x00010537c51c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar7 != 2) {
        if (lVar7 == 3) {
          uVar8 = *(undefined8 *)(param_1 + _DAT_112721f98);
          _objc_retain(uVar8);
          lVar9 = 0;
          lVar7 = 0;
          goto LAB_105366bcc;
        }
        goto LAB_105366b68;
      }
      uVar8 = *(undefined8 *)(param_1 + _DAT_112721f98);
      uVar3 = uVar8;
      _objc_retain(uVar8);
      puVar4 = PTR_PTR_1126b7ba0;
      func_0x00010537c4a4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c09d5a0(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar3);
    lVar9 = 0;
    lVar7 = 0;
  }
  else {
    if (lVar7 == 4) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112721f98);
      _objc_retain(uVar8);
      puVar4 = PTR_PTR_1126b7ba0;
      func_0x00010bf99300(PTR_PTR_1126b7ba0,param_2,*(undefined8 *)(param_1 + _DAT_112721fd0));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar9 = param_1;
      func_0x00010be33b60(param_1);
      lVar7 = param_1;
      func_0x00010be233e0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112721f9c));
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105366bcc;
    }
    if ((lVar7 == 5) || (lVar7 == 6)) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112721f98);
      _objc_retain(uVar8);
      lVar9 = param_1;
      func_0x00010be33b60(param_1);
      puVar4 = PTR_PTR_1126b7ba0;
      lVar7 = lVar9;
      func_0x00010537c4ec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619c0(puVar4,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar7);
      lVar7 = 0;
      goto LAB_105366bcc;
    }
LAB_105366b68:
    lVar7 = 0;
  }
LAB_105366bcc:
  puVar2 = PTR_PTR_1126b7ba8;
  _objc_alloc(PTR_PTR_1126b7ba8);
  lVar5 = param_1;
  func_0x00010bdd99c0(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112721fc4);
  uVar3 = uVar8;
  func_0x00010c2947c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc360(puVar2,param_2,lVar5,lVar9,uVar1,uVar3,uVar6,puVar4,lVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar7);
  _objc_release(uVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105366c8c; end: 105366d7f; -[SCRegistrationUsernameBusinessLogic handleAction:] */

void FUN_105366c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105366d80;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105366d88;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105366dc0;
  puStack_80 = &UNK_1108450c8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105366edc;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105366ee4;
  puStack_d0 = &UNK_1108484c8;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105366ef0;
  puStack_f8 = &UNK_110841f20;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c06a0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110);
  return;
}



/* Entry: 105366d80; end: 105366d87;  */

void FUN_105366d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__submitUsername_11258f3a0);
  return;
}



/* Entry: 105366d88; end: 105366dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105366d88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112721fa4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c25fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105366dc0; end: 105366edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105366dc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af7c0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c05f860();
  _objc_release(param_2);
  lVar4 = (long)_DAT_112721f98;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f9c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f9c) = 0;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c2947c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d500();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  if ((int)puVar1 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + lVar4);
    func_0x00010c2947c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdde580(lVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bea7e40(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721fb8),
             PTR_s_logUserInitialInputIfNeededWithF_11260a4c0,2);
  return;
}



/* Entry: 105366edc; end: 105366f03;  */

void FUN_105366edc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be977d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__rotateUsernameSuggestion_112583790);
  return;
}



/* Entry: 105366f04; end: 105366f43; -[SCRegistrationUsernameBusinessLogic _setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105366f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112721fcc) = param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105366f44; end: 105366f67; -[SCRegistrationUsernameBusinessLogic _canContinue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105366f44(long param_1)

{
  return (uint)(*(ulong *)(param_1 + _DAT_112721fcc) < 7) &
         0x68U >> (ulong)((uint)*(ulong *)(param_1 + _DAT_112721fcc) & 0x1f);
}



/* Entry: 105366f68; end: 105367023; -[SCRegistrationUsernameBusinessLogic _rotateUsernameSuggestion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105366f68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be63ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar2 != 0) {
    lVar4 = (long)_DAT_112721f98;
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    func_0x00010bea7e40(param_1,param_2,6);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721fb4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6020();
    _objc_release(uVar3);
    func_0x00010c0b2ac0(*(undefined8 *)(param_1 + _DAT_112721fb8),param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105367024; end: 1053670c7; -[SCRegistrationUsernameBusinessLogic _didSelectUsernameSuggestion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367024(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112721f9c;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721f98);
    *(undefined8 *)(param_1 + _DAT_112721f98) = uVar2;
    _objc_release(uVar3);
    func_0x00010bea7e40(param_1);
    func_0x00010bee16e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112721fb8),
               PTR_s_logUserInitialInputIfNeededWithF_11260a4c0,2);
    return;
  }
  return;
}



/* Entry: 1053670c8; end: 1053671ff; -[SCRegistrationUsernameBusinessLogic _checkUsernameValidity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053670c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bea7e40(param_1);
    lVar1 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721fa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c296b20(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_38);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105367200; end: 1053672ef;  */

void FUN_105367200(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1053672f0;
  puStack_60 = &UNK_110848218;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_58 = param_2;
  _objc_retain(param_3);
  uStack_50 = param_3;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053672f0; end: 105367323;  */

void FUN_1053672f0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105367324; end: 105367513; -[SCRegistrationUsernameBusinessLogic _localValidationDidCompleteWithRequestedUsername:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367324(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1;
  func_0x00010be44960();
  if ((int)lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      func_0x00010bea7e40(param_1);
      lVar3 = param_1;
      func_0x00010c0e2ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_48,param_1);
      uVar1 = *(undefined8 *)(param_1 + _DAT_112721fb0);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0920();
      _objc_release(uVar1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112721fac);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0b5ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar3);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010bf37c80(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_48);
      _objc_release(lVar3);
    }
    else {
      lVar3 = (long)_DAT_112721fd0;
      _objc_retain(param_4);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_4;
      _objc_release(uVar1);
      func_0x00010bea7e40(param_1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105367514; end: 1053675eb;  */

void FUN_105367514(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053675ec;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1053675ec; end: 10536761f;  */

void FUN_1053675ec(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdde560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105367620; end: 1053676fb; -[SCRegistrationUsernameBusinessLogic _checkUsernameDidCompleteWithResult:requestedUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be44960(param_1,param_2,param_4);
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721f9c);
    *(undefined8 *)(param_1 + _DAT_112721f9c) = 0;
    _objc_release(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1053676fc;
    puStack_40 = &UNK_110842e18;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105367750;
    puStack_68 = &UNK_11087d8e8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1053677f4;
    puStack_90 = &UNK_110842e18;
    lStack_88 = param_1;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010c0bc9c0(param_3,param_2,&puStack_58,&puStack_80,&puStack_a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053676fc; end: 10536774f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053676fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721fb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setState__112587938,5);
  return;
}



/* Entry: 105367750; end: 1053677f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f9c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f9c) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721fd0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721fd0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bea7e40(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053677f4; end: 1053677ff;  */

void FUN_1053677f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setState__112587938,3);
  return;
}



/* Entry: 105367800; end: 105367893; -[SCRegistrationUsernameBusinessLogic _setInitialUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367800(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112721f98;
  if (*(long *)(param_1 + lVar3) == 0) {
    lVar2 = param_1;
    func_0x00010be63ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    uVar1 = 0;
    if (*(long *)(param_1 + lVar3) != 0) {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112721fb4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5fc0();
    _objc_release(uVar1);
    uVar1 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setState__112587938,uVar1);
  return;
}



/* Entry: 105367894; end: 105367927; -[SCRegistrationUsernameBusinessLogic _submitUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367894(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bdd99c0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721fb4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0adf20();
    _objc_release(uVar2);
    param_1 = param_1 + _DAT_112721fa4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c294580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105367928; end: 1053679f3; -[SCRegistrationUsernameBusinessLogic _isTheLatestRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105367928(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + _DAT_112721f98);
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(lVar2);
  if (param_3 == lVar2) {
    lVar3 = 1;
  }
  else if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c071ae0(param_3,param_2,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053679f4; end: 105367a5f; -[SCRegistrationUsernameBusinessLogic _nextSuggestion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053679f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112721f9c;
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = (long)_DAT_112721fa0;
    uVar1 = *(long *)(param_1 + lVar3) + 1;
    uVar4 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf529e0();
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar1 / uVar4;
    }
    *(ulong *)(param_1 + lVar3) = uVar1 - uVar2 * uVar4;
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + lVar5));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105367a60; end: 105367a6f; -[SCRegistrationUsernameBusinessLogic _updateSuggestionIndexTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112721fa0) = param_3;
  return;
}



/* Entry: 105367a70; end: 105367b33; -[SCRegistrationUsernameBusinessLogic _hasAlternateSuggestionToCurrentUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105367a70(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112721f9c;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf529e0();
    if (uVar2 < 2) {
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bfb1920(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2947c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112721f98);
      func_0x00010c2947c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0720c0(uVar4,param_2,uVar5);
      uVar7 = (uint)uVar6 ^ 1;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    else {
      uVar7 = 1;
    }
  }
  return uVar7;
}



/* Entry: 105367b34; end: 105367b4b; -[SCRegistrationUsernameBusinessLogic _getSuggestionStringArray:] */

void FUN_105367b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_11087d938);
  return;
}



/* Entry: 105367b4c; end: 105367b8b; -[SCRegistrationUsernameBusinessLogic _registrationStatusChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367b4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112721fc4) = param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105367b8c; end: 105367c67; -[SCRegistrationUsernameBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367b8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721fc8,0);
  _objc_storeStrong(param_1 + _DAT_112721fbc,0);
  _objc_storeStrong(param_1 + _DAT_112721f98,0);
  _objc_storeStrong(param_1 + _DAT_112721fd4,0);
  _objc_storeStrong(param_1 + _DAT_112721fd0,0);
  _objc_storeStrong(param_1 + _DAT_112721fb8,0);
  _objc_storeStrong(param_1 + _DAT_112721fb0,0);
  _objc_storeStrong(param_1 + _DAT_112721fb4,0);
  _objc_storeStrong(param_1 + _DAT_112721f9c,0);
  _objc_storeStrong(param_1 + _DAT_112721fa8,0);
  _objc_storeStrong(param_1 + _DAT_112721fac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721fa4);
  return;
}



/* Entry: 105367c68; end: 105367ce3; -[SCNGORegistrationUsernameSuggestionView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105367c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7ad0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112721fd8),param_3);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105367ce4; end: 105367e53; -[SCNGORegistrationUsernameSuggestionView updateSuggestions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105367ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112721fdc;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c071b60(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = param_3;
    _objc_release(uVar3);
    func_0x00010c1822e0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1);
    lVar8 = (long)_DAT_112721fe0;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c261580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7520();
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0();
    puVar1 = PTR_s__didSelectPillButton__112528fc0;
    if (lVar4 != 0) {
      uVar2 = 0;
      do {
        puVar5 = PTR_PTR_1126aec40;
        func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c211780();
        func_0x00010befbd60(puVar5,param_2,param_1,puVar1,0x40);
        uVar3 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c0dfd40(uVar3,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216260(puVar5,param_2,uVar3,0);
        func_0x00010c20eaa0(puVar5,param_2,4);
        func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar8),param_2,puVar5);
        _objc_release(uVar3);
        _objc_release(puVar5);
        uVar2 = uVar2 + 1;
        uVar6 = *(ulong *)(param_1 + lVar7);
        func_0x00010bf529e0();
      } while (uVar2 < uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105367e54; end: 105368153; -[SCNGORegistrationUsernameSuggestionView _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105367e54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  long lVar14;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c2026e0(param_1,param_2,0);
  func_0x00010c2025c0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar14 = (long)_DAT_112721fe0;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar12);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c207380(0x4020000000000000,*(undefined8 *)(param_1 + lVar14));
  func_0x00010c1fbe00(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = *(undefined1 **)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  puStack_98 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar3;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  puStack_a8 = puVar2;
  puStack_90 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_b0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar3;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_c0 = uVar12;
  uStack_88 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(uStack_b0);
  _objc_release(puStack_a8);
  _objc_release(lStack_a0);
  puVar2 = puStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_100;
  pcStack_d8 = FUN_105368154;
  lStack_f0 = lVar6;
  uStack_e8 = uVar5;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  puVar1 = PTR_PTR_1126aec40;
  _objc_opt_class(PTR_PTR_1126aec40);
  puVar10 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar1);
  if (((ulong)puVar10 & 1) == 0) {
    puStack_f8 = PTR_PTR_1126e7ad0;
    puStack_100 = puVar2;
    _objc_msgSendSuper2(&puStack_100,PTR_s_touchesShouldCancelInContentView_112528fc8,puVar11);
  }
  else {
    ppuVar13 = (undefined1 **)0x1;
  }
  _objc_release(puVar11);
  return (undefined1 *)ppuVar13;
}



/* Entry: 105368154; end: 1053681d7; -[SCNGORegistrationUsernameSuggestionView touchesShouldCancelInContentView:] */

undefined1 * FUN_105368154(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar3 = &uStack_30;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aec40;
  _objc_opt_class(PTR_PTR_1126aec40);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puStack_28 = PTR_PTR_1126e7ad0;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_touchesShouldCancelInContentView_112528fc8,param_3);
  }
  else {
    puVar3 = (undefined8 *)0x1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 1053681d8; end: 10536823f; -[SCNGORegistrationUsernameSuggestionView _didSelectPillButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053681d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112721fd8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c268120(param_3);
  _objc_release(param_3);
  func_0x00010bf7b220(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105368240; end: 10536828b; -[SCNGORegistrationUsernameSuggestionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105368240(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721fd8);
  _objc_storeStrong(param_1 + _DAT_112721fdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721fe0,0);
  return;
}



/* Entry: 10536828c; end: 105368657;  */

void FUN_10536828c(ulong param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  char cVar14;
  char cVar15;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar13 = param_1;
  func_0x00010c08fa60();
  puVar6 = PTR_PTR_1126b7b78;
  if (uVar13 == 0) {
    if ((param_3 & 1) == 0) {
      func_0x00010537c594();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010537c5ac();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf6aa80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105368608;
  }
  uVar13 = param_1;
  func_0x00010c08fae0();
  puVar6 = PTR_PTR_1126b7b78;
  if (uVar13 < 8) {
    func_0x00010537c60c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lRam00000001136bb5a0 != -1) {
      func_0x00010002a2fc(0x1136bb5a0,&PTR___NSConcreteGlobalBlock_11087d958);
    }
    uVar13 = uRam00000001136bb598;
    func_0x00010bf4b900();
    puVar6 = PTR_PTR_1126b7b78;
    if ((int)uVar13 == 0) {
      _objc_retain(param_1);
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_1;
      func_0x00010c08fa60();
      if (uVar13 != 0) {
        uVar13 = 0;
        do {
          func_0x00010bf35920();
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(puVar7);
          uVar13 = uVar13 + 1;
          uVar8 = param_1;
          func_0x00010c08fa60();
        } while (uVar13 < uVar8);
      }
      puVar7 = puVar6;
      func_0x00010bf529e0();
      _objc_release(puVar6);
      uVar13 = param_1;
      _objc_release(param_1);
      puVar6 = PTR_PTR_1126b7b78;
      if (puVar7 < (undefined *)0x4) {
        func_0x00010537c63c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_3 == 0) {
LAB_105368504:
          uVar13 = param_2;
          func_0x00010c0b5ac0(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_1;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_1;
          func_0x00010c08fa60();
          uVar10 = param_2;
          func_0x00010c08fa60();
          if ((uVar9 - uVar10 < 3) &&
             (uVar10 = uVar8, func_0x00010bf4bb00(), puVar6 = PTR_PTR_1126b7b78, (int)uVar10 != 0))
          {
            func_0x00010537c66c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99300(puVar6);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar6 = PTR_PTR_1126b7b78;
            func_0x00010537c57c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2619c0(puVar6);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(uVar10);
          _objc_release(uVar8);
          goto LAB_105368608;
        }
        _objc_retain(param_1);
        uVar13 = param_1;
        func_0x00010c08fa60();
        if (uVar13 == 0) {
          uVar13 = param_1;
          _objc_release(param_1);
        }
        else {
          uVar13 = 0;
          cVar14 = '\0';
          bVar11 = 0;
          bVar12 = 0;
          cVar15 = '\0';
          do {
            uVar8 = param_1;
            func_0x00010bf35920();
            iVar5 = (int)uVar8;
            bVar2 = bVar12;
            cVar3 = '\x01';
            bVar1 = bVar11;
            if (0x19 < iVar5 - 0x41U) {
              bVar2 = iVar5 - 0x30U < 10 | bVar12;
              cVar3 = cVar15;
              bVar1 = 9 < iVar5 - 0x30U | bVar11;
            }
            cVar4 = '\x01';
            if (0x19 < iVar5 - 0x61U) {
              cVar4 = cVar14;
              bVar11 = bVar1;
              bVar12 = bVar2;
              cVar15 = cVar3;
            }
            cVar14 = cVar4;
            uVar13 = uVar13 + 1;
            uVar8 = param_1;
            func_0x00010c08fa60();
          } while (uVar13 < uVar8);
          uVar13 = param_1;
          _objc_release(param_1);
          if (2 < (byte)(bVar12 + cVar15 + bVar11 + cVar14)) goto LAB_105368504;
        }
        puVar6 = PTR_PTR_1126b7b78;
        func_0x00010537c654();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010537c624();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010bf99300(puVar6);
  _objc_retainAutoreleasedReturnValue();
LAB_105368608:
  _objc_release(uVar13);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105368658; end: 10536866f;  */

void FUN_105368658(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136bb598;
  ppuRam00000001136bb598 = &PTR__OBJC_CLASS___NSConstantArray_11117e658;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105368670; end: 105368b2b; -[SCGrpcRegistrationService initWithUnifiedGrpcJanusRegistrationService:deviceIdentifierProvider:registrationFlowUUIDService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:appAttestStateManager:fideliusClientInitInfoProvider:preLoginAttestationProvider:carrierNetworkInfoProvider:networkConnectivityMonitor:circumstanceEngine:transitionMomentLogger:identityRequestLogger:registrationLogger:clientIdProvider:deviceIdHoldoutStateProvider:configVersionProvider:cloudAccountIdProvider:networkLoggingService:performerProvider:isPhoneEmailFirstEnabled:] */

undefined8 *
FUN_105368670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126e7ad8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x16) = param_24;
    uVar2 = param_23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105368b2c; end: 105368d4b; -[SCGrpcRegistrationService registerWithUser:successBlock:challengeBlock:failureBlock:] */

void FUN_105368b2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af848;
    func_0x00010bf69c80(PTR_PTR_1126af848);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e98e0(param_3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1e98e0(param_3);
  }
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c127c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010beeb5a0(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105368d4c; end: 10536919b;  */

void FUN_105368d4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10536919c;
  puStack_d8 = &UNK_11087d978;
  _objc_copyWeak(auStack_80,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_d0 = uVar3;
  _objc_retain(param_2);
  uStack_c8 = param_2;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_retain(param_6);
  uStack_a8 = param_6;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = param_7;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar4;
  _objc_retain(uVar3);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x105369294;
  puStack_150 = &UNK_11087d978;
  uStack_88 = uVar3;
  _objc_copyWeak(auStack_f8,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_148 = uVar3;
  _objc_retain(param_2);
  uStack_140 = param_2;
  _objc_retain(param_3);
  uStack_138 = param_3;
  _objc_retain(param_4);
  uStack_130 = param_4;
  _objc_retain(param_5);
  uStack_128 = param_5;
  _objc_retain(param_6);
  uStack_120 = param_6;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = param_7;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_110 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = uVar4;
  _objc_retain(uVar3);
  uStack_100 = uVar3;
  _objc_copyWeak(auStack_170,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c0bd3c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_170);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10536919c; end: 1053692fb;  */

void FUN_10536919c(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053692fc; end: 1053695eb;  */

void FUN_1053692fc(long param_1,undefined8 param_2)

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
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1053695ec;
  puStack_c0 = &UNK_11087d978;
  _objc_copyWeak(auStack_68,param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_98 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_80 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_78 = uVar2;
  _objc_retain(uVar3);
  uStack_70 = uVar3;
  _objc_copyWeak(auStack_e0,param_1 + 0x70);
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
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar2);
  func_0x00010c0bc8a0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1053695ec; end: 105369703;  */

void FUN_1053695ec(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be65780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105369704; end: 10536a133; -[SCGrpcRegistrationService _registerWithUser:vendorAttestation:deviceCheckToken:tempIdentity:clientInit:cofEtag:attemptNumber:clientNetworkRequestId:isNGO:successBlock:challengeBlock:failureBlock:] */

void FUN_105369704(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  byte param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  lVar3 = param_4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_10536a134();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126b7bb0;
  func_0x00010c0cb140(PTR_PTR_1126b7bb0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bfb18a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d320(puVar7);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c089720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8360(puVar7);
  _objc_release(lVar3);
  func_0x00010c21f760(puVar7);
  lVar3 = param_4;
  func_0x00010c0f5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d96e0(puVar7);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bf1a5c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010be19f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170360(puVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bddbd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfce0(puVar7);
  _objc_release(lVar3);
  puVar8 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c083b00(PTR_PTR_1126afa00);
  func_0x00010c1b5b20(puVar7);
  uVar12 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  FUN_105407d00(uVar12,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_initWeak(auStack_80,param_2);
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    lVar3 = param_4;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  if (((param_13 & 1) != 0) || (bVar1)) {
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf71140(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c091f60(uVar10);
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    uVar11 = 0xd;
    FUN_1054082b8(0xd,lVar5,uVar6,param_6,uVar10,param_9,param_8,*(undefined8 *)(param_2 + 0x10),
                  uVar13,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x48),
                  *(undefined8 *)(param_2 + 0x60),uVar2,param_12,param_5,param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9860(puVar7);
    _objc_release(uVar11);
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126b7bb8;
    func_0x00010c0cb140(PTR_PTR_1126b7bb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f7e0();
    lVar3 = param_4;
    func_0x00010bf8d6c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194080(puVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c0faf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fb300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db360(puVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _CACurrentMediaTime();
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0adaa0();
    _objc_release(uVar6);
    puVar9 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c127c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57960(param_2);
    _objc_release(lVar3);
    _objc_release(puVar9);
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c0faf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf10980();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    FUN_105408190(uVar12,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10536a178;
    puStack_d0 = &UNK_11087da08;
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(param_4);
    lStack_c8 = param_4;
    _objc_retain(lVar5);
    lStack_c0 = lVar5;
    _objc_retain(param_7);
    uStack_b8 = param_7;
    _objc_retain(param_12);
    uStack_b0 = param_12;
    uStack_88 = param_10;
    uStack_90 = uVar13;
    _objc_retain(param_15);
    uStack_a8 = param_15;
    _objc_retain(param_17);
    uStack_a0 = param_17;
    func_0x00010c127720(uVar10);
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar10);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(lStack_c0);
    _objc_release(lStack_c8);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar8);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar6);
    _CACurrentMediaTime();
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0adaa0();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf71140(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c091f60(uVar10);
    uVar11 = 0xe;
    FUN_1054082b8(0xe,lVar5,uVar6,param_6,uVar10,param_9,param_8,*(undefined8 *)(param_2 + 0x10),
                  *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                  *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x60),uVar2,param_12,
                  param_5,param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9860(puVar7);
    _objc_release(uVar11);
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c127c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57960(param_2);
    _objc_release(lVar3);
    _objc_release(puVar8);
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_100,auStack_80);
    _objc_retain(param_4);
    _objc_retain(lVar5);
    _objc_retain(param_7);
    _objc_retain(param_12);
    uStack_f0 = param_10;
    uStack_f8 = param_1;
    _objc_retain(param_15);
    _objc_retain(param_16);
    _objc_retain(param_17);
    func_0x00010c127780(uVar6);
    _objc_release(uVar6);
    _objc_release(param_17);
    _objc_release(param_16);
    _objc_release(param_15);
    _objc_release(param_12);
    _objc_release(param_7);
    _objc_release(lVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_100);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10536a134; end: 10536a177;  */

void FUN_10536a134(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10536a178; end: 10536a237;  */

void FUN_10536a178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010c2946c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2ed00(*(undefined8 *)(param_1 + 0x58),lVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10536a238; end: 10536a2d7;  */

void FUN_10536a238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2ed00(*(undefined8 *)(param_1 + 0x60));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10536a2d8; end: 10536a34f;  */

void FUN_10536a2d8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 10536a350; end: 10536aa53; -[SCGrpcRegistrationService _handleRegisterUsernamePasswordWithResponse:error:user:username:tempIdentity:clientNetworkRequestId:submitRequestTime:attemptNumber:endpoint:successBlock:challengeBlock:failureBlock:] */

void FUN_10536a350(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12,
                  long param_13,long param_14)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  
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
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  if (param_3 != (undefined *)0x0) {
    FUN_10540edfc(param_3);
  }
  _CACurrentMediaTime();
  uVar1 = param_5;
  func_0x00010c127c40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010be548a0(param_1);
  _objc_release(uVar1);
  func_0x00010c252ee0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c0adac0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c13bc00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c127c40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57960(param_1);
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bde44a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    func_0x00010c010940();
    (**(code **)(param_14 + 0x10))(param_14,puVar3);
    _objc_release(puVar3);
    goto LAB_10536a9b0;
  }
  puVar3 = param_3;
  func_0x00010bf98a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c252ee0();
  puVar4 = param_3;
  switch((ulong)puVar3 & 0xffffffff) {
  case 0:
  case 2:
  case 4:
  case 5:
  case 7:
  case 0xb:
  case 0xc:
  case 0x14:
  case 0x15:
    goto LAB_10536a660;
  case 1:
    puVar3 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c127c40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57960(param_1);
    _objc_release(uVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b7bc8;
    _objc_alloc(PTR_PTR_1126b7bc8);
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff92e0(puVar3);
    (**(code **)(param_12 + 0x10))(param_12,puVar3);
    _objc_release(puVar3);
    goto code_r0x00010536a9ac;
  case 3:
  case 8:
  case 10:
    goto LAB_10536a9b0;
  case 6:
    func_0x00010be502c0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127f80();
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbf6a0();
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_initWeak(auStack_80,param_1);
    uVar1 = param_5;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c2947c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c127c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_copyWeak(auStack_90,auStack_80);
    uStack_88 = param_9;
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_14);
    func_0x00010beeb5a0(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(param_14);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_destroyWeak(auStack_90);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_80);
    goto LAB_10536a9b0;
  case 9:
    if (param_13 == 0) goto LAB_10536a660;
    func_0x00010bf34c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf10d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_13 + 0x10))(param_13,puVar4,puVar3,param_8);
    _objc_release(puVar3);
    goto code_r0x00010536a9ac;
  case 0xd:
  case 0xe:
  case 0xf:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0x10:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0x11:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0x12:
  case 0x13:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  default:
    if ((int)puVar3 != -0x4524111) goto LAB_10536a9b0;
    goto LAB_10536a660;
  }
LAB_10536a990:
  func_0x00010c010940();
  (**(code **)(param_14 + 0x10))(param_14,puVar4);
code_r0x00010536a9ac:
  _objc_release(puVar4);
LAB_10536a9b0:
  _objc_release(puVar2);
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
  return;
LAB_10536a660:
  puVar4 = PTR_PTR_1126b7bc0;
  _objc_alloc(PTR_PTR_1126b7bc0);
  goto LAB_10536a990;
}



/* Entry: 10536aa54; end: 10536aebb;  */

void FUN_10536aa54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [8];
  undefined4 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined4 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10536aebc;
  puStack_e0 = &UNK_11087da68;
  _objc_copyWeak(auStack_88,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_d8 = uVar3;
  _objc_retain(param_2);
  uStack_d0 = param_2;
  _objc_retain(param_3);
  uStack_c8 = param_3;
  _objc_retain(param_4);
  uStack_c0 = param_4;
  _objc_retain(param_5);
  uStack_b8 = param_5;
  _objc_retain(param_6);
  uStack_80 = *(undefined4 *)(param_1 + 0x48);
  uStack_b0 = param_6;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = param_7;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar4;
  _objc_retain(uVar3);
  puStack_178 = puVar1;
  uStack_170 = 0xc2000000;
  uStack_168 = 0x10536af28;
  puStack_160 = &UNK_11087da68;
  uStack_90 = uVar3;
  _objc_copyWeak(auStack_108,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_158 = uVar3;
  _objc_retain(param_2);
  uStack_150 = param_2;
  _objc_retain(param_3);
  uStack_148 = param_3;
  _objc_retain(param_4);
  uStack_140 = param_4;
  _objc_retain(param_5);
  uStack_138 = param_5;
  _objc_retain(param_6);
  uStack_100 = *(undefined4 *)(param_1 + 0x48);
  uStack_130 = param_6;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_128 = param_7;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_120 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_118 = uVar4;
  _objc_retain(uVar3);
  uStack_110 = uVar3;
  _objc_copyWeak(auStack_188,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_180 = *(undefined4 *)(param_1 + 0x48);
  _objc_retain(param_7);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c0bd3c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_188);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10536aebc; end: 10536af97;  */

void FUN_10536aebc(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10536af98; end: 10536b15f;  */

void FUN_10536af98(long param_1,undefined8 param_2)

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
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x70);
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
  uStack_48 = *(undefined4 *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar11);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar2);
  func_0x00010c0bc8a0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10536b160; end: 10536b163;  */

void FUN_10536b160(void)

{
  return;
}



/* Entry: 10536b164; end: 10536b1c3;  */

void FUN_10536b164(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be243a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10536b1c4; end: 10536b92b; -[SCGrpcRegistrationService _oAuthRegisterWithUser:vendorAttestation:deviceCheckToken:tempIdentity:clientInit:cofEtag:attemptNumber:clientNetworkRequestId:successBlock:challengeBlock:failureBlock:] */

void FUN_10536b1c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
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
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_10536a134();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b7bd0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010bfb18a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c089720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c089720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(lVar2);
  }
  puVar8 = puVar7;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar6);
  func_0x00010c21f760(puVar6);
  lVar2 = param_3;
  func_0x00010c0f5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d96e0(puVar6);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf1a5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be19f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170360(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bddbd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfce0(puVar6);
  _objc_release(lVar2);
  puVar9 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  func_0x00010c083b00(PTR_PTR_1126afa00);
  func_0x00010c1b5b20(puVar6);
  lVar2 = param_3;
  func_0x00010c127c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10536b934;
  puStack_88 = &UNK_11084b900;
  _objc_retain(puVar6);
  puStack_80 = puVar6;
  func_0x00010c0bd3c0(lVar2);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf71140(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c091f60(uVar11);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = 0xf;
  FUN_1054082b8(0xf,lVar4,uVar5,param_5,uVar11,param_8,param_7,*(undefined8 *)(param_1 + 0x10),
                uVar13,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x60),uVar1,param_11,param_4,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9860(puVar6);
  _objc_release(uVar12);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b20();
  _objc_release(uVar5);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_105407d00(uVar11,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _CACurrentMediaTime();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(uVar5);
  puVar9 = PTR_PTR_1126af528;
  func_0x00010c1368c0(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c127c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57960(param_1);
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_initWeak(auStack_a8,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(lVar4);
  _objc_retain(param_6);
  _objc_retain(param_11);
  uStack_b0 = param_9;
  uStack_b8 = uVar13;
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x00010c126c20(uVar5);
  _objc_release(uVar5);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar11);
  _objc_release(puStack_80);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(lVar4);
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
  return;
}



/* Entry: 10536b92c; end: 10536b933;  */

void FUN_10536b92c(void)

{
  return;
}



/* Entry: 10536b934; end: 10536ba8b;  */

void FUN_10536b934(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0bc8a0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536ba8c; end: 10536ba8f;  */

void FUN_10536ba8c(void)

{
  return;
}



/* Entry: 10536ba90; end: 10536bb2f;  */

void FUN_10536ba90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2d0a0(*(undefined8 *)(param_1 + 0x60));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10536bb30; end: 10536c247; -[SCGrpcRegistrationService _handleOAuthRegisterUsernamePasswordWithResponse:error:user:username:tempIdentity:clientNetworkRequestId:submitRequestTime:attemptNumber:endpoint:successBlock:challengeBlock:failureBlock:] */

void FUN_10536bb30(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12,
                  long param_13,long param_14)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  
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
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  if (param_3 != (undefined *)0x0) {
    FUN_105408fa0(param_3);
  }
  _CACurrentMediaTime();
  uVar1 = param_5;
  func_0x00010c127c40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010be548a0(param_1);
  _objc_release(uVar1);
  func_0x00010c252ee0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c0adac0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c13bc00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c127c40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57960(param_1);
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bde44a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    func_0x00010c010940();
    (**(code **)(param_14 + 0x10))(param_14,puVar3);
    _objc_release(puVar3);
    goto LAB_10536be7c;
  }
  puVar3 = param_3;
  func_0x00010bf98a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c252ee0();
  puVar4 = param_3;
  switch((ulong)puVar3 & 0xffffffff) {
  case 0:
  case 0xb:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    goto LAB_10536be44;
  case 1:
    puVar3 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c127c40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57960(param_1);
    _objc_release(uVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b7bc8;
    _objc_alloc(PTR_PTR_1126b7bc8);
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff92e0(puVar3);
    (**(code **)(param_12 + 0x10))(param_12,puVar3);
    _objc_release(puVar3);
    goto code_r0x00010536be78;
  case 2:
    if (param_13 == 0) goto LAB_10536be44;
    func_0x00010bf34c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf10d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_13 + 0x10))(param_13,puVar4,puVar3,param_8);
    _objc_release(puVar3);
    goto code_r0x00010536be78;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto LAB_10536be7c;
  case 0xc:
  case 0xd:
  case 0xe:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0xf:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0x10:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0x11:
  case 0x12:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0x15:
    puVar4 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
    break;
  case 0x1a:
    func_0x00010be502c0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127f80();
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbf6a0();
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_initWeak(auStack_80,param_1);
    uVar1 = param_5;
    func_0x00010c294420(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c2947c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c127c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_5);
    uStack_88 = param_9;
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_14);
    func_0x00010beeb5a0(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(param_14);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
    goto LAB_10536be7c;
  default:
    if ((int)puVar3 != -0x4524111) goto LAB_10536be7c;
    goto LAB_10536be44;
  }
code_r0x00010536be5c:
  func_0x00010c010940();
  (**(code **)(param_14 + 0x10))(param_14,puVar4);
code_r0x00010536be78:
  _objc_release(puVar4);
LAB_10536be7c:
  _objc_release(puVar2);
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
  return;
LAB_10536be44:
  puVar4 = PTR_PTR_1126b7bc0;
  _objc_alloc(PTR_PTR_1126b7bc0);
  goto code_r0x00010536be5c;
}



/* Entry: 10536c248; end: 10536c347;  */

void FUN_10536c248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be65780();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10536c348; end: 10536ca23; -[SCGrpcRegistrationService _googleRegisterWithUser:vendorAttestation:deviceCheckToken:tempIdentity:clientInit:cofEtag:attemptNumber:clientNetworkRequestId:successBlock:challengeBlock:failureBlock:] */

void FUN_10536c348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
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
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  FUN_10536a134();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b7bb0;
  func_0x00010c0cb140(PTR_PTR_1126b7bb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfb18a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d320(puVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c089720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8360(puVar4);
  _objc_release(uVar3);
  func_0x00010c21f760(puVar4);
  uVar3 = param_3;
  func_0x00010c0f5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d96e0(puVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf1a5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be19f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170360(puVar4);
  _objc_release(lVar5);
  _objc_release(uVar3);
  lVar5 = param_1;
  func_0x00010bddbd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfce0(puVar4);
  _objc_release(lVar5);
  puVar6 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c083b00(PTR_PTR_1126afa00);
  func_0x00010c1b5b20(puVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf71140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c091f60(uVar8);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = 0x10;
  FUN_1054082b8(0x10,uVar2,uVar3,param_5,uVar8,param_8,param_7,*(undefined8 *)(param_1 + 0x10),
                uVar10,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x60),uVar1,param_11,param_4,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9860(puVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b20();
  _objc_release(uVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105407d00(uVar8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b7be0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f7e0();
  uVar3 = param_3;
  func_0x00010c127c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10536ca2c;
  puStack_88 = &UNK_11084b900;
  _objc_retain(puVar6);
  puStack_80 = puVar6;
  func_0x00010c0bd3c0(uVar3);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126af528;
  func_0x00010c1368c0(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c127c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57960(param_1);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_initWeak(auStack_a8,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_11);
  uStack_b8 = uVar10;
  _objc_retain(param_14);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  uStack_b0 = param_9;
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x00010c1276c0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puStack_80);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
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
  return;
}



/* Entry: 10536ca24; end: 10536ca2b;  */

void FUN_10536ca24(void)

{
  return;
}



/* Entry: 10536ca2c; end: 10536caeb;  */

void FUN_10536ca2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0bc8a0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536caec; end: 10536caef;  */

void FUN_10536caec(void)

{
  return;
}



/* Entry: 10536caf0; end: 10536cb57;  */

void FUN_10536caf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0db0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cdaa0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe61a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9980(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10536cb58; end: 10536cc7b;  */

void FUN_10536cb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bf16220();
  uVar3 = param_2;
  if ((uint)uVar1 < 2) {
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c13b720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2ed00(*(undefined8 *)(param_1 + 0x60),lVar2);
  }
  else {
    if ((uint)uVar1 != 2) goto LAB_10536cc58;
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfcd520(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2ed20(*(undefined8 *)(param_1 + 0x60),lVar2);
  }
  _objc_release(uVar3);
  _objc_release(lVar2);
LAB_10536cc58:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536cc7c; end: 10536cf97; -[SCGrpcRegistrationService _handleRegisterWithGoogleErrorWithResponse:error:user:clientNetworkRequestId:submitRequestTime:endpoint:failureBlock:] */

void FUN_10536cc7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar4);
  if (param_3 != 0) {
    FUN_105408d50(param_3);
  }
  _CACurrentMediaTime();
  uVar4 = param_5;
  func_0x00010c127c40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010be548a0(param_1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c0adac0(uVar4);
  _objc_release(param_7);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c13bc00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c127c40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be57960(param_1);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(puVar2);
  func_0x00010bde44a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (param_1 == 0) {
    lVar3 = param_3;
    func_0x00010bf98a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar3;
    func_0x00010bfe4e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c252ee0();
    iVar1 = (int)lVar3;
    puVar2 = PTR_PTR_1126b7bc0;
    if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
      _objc_alloc(PTR_PTR_1126b7bc0);
      goto LAB_10536cf3c;
    }
    if (iVar1 != 1) goto LAB_10536cf60;
    _objc_alloc(PTR_PTR_1126b7bc0);
    func_0x00010c010940();
  }
  else {
    puVar2 = PTR_PTR_1126b7bc0;
    _objc_alloc(PTR_PTR_1126b7bc0);
LAB_10536cf3c:
    func_0x00010c010940();
  }
  (**(code **)(param_8 + 0x10))(param_8,puVar2);
  _objc_release(puVar2);
LAB_10536cf60:
  _objc_release(param_1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10536cf98; end: 10536d05f; -[SCGrpcRegistrationService _withUsername:registrationMethod:requestParams:] */

void FUN_10536cf98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57960(param_1,param_2,puVar2,param_4,uVar1);
  _objc_release(puVar2);
  func_0x00010be79060(param_1,param_2,param_3,param_4,uVar1,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10536d060; end: 10536d6c7; -[SCGrpcRegistrationService _prepareRequestWithUsername:registrationMethod:clientNetworkRequestId:requestParams:] */

void FUN_10536d060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = auStack_80;
  _objc_initWeak(puVar1,param_1);
  _dispatch_group_create();
  func_0x00010be57ca0(param_1);
  _dispatch_group_enter(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar3;
  func_0x00010c0db0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  FUN_10536a134();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10536d6c8;
  uStack_90 = 0x10536d6d8;
  uStack_88 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10536d6e0;
  puStack_e0 = &UNK_11087dc38;
  _objc_copyWeak(auStack_b8,auStack_80);
  puStack_c0 = &uStack_b0;
  _objc_retain(param_4);
  uStack_d8 = param_4;
  _objc_retain(param_5);
  uStack_d0 = param_5;
  puStack_c8 = puVar1;
  func_0x00010bfbef80(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar6);
  func_0x00010be57ca0(param_1);
  _dispatch_group_enter(puVar1);
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_10536d6c8;
  uStack_108 = 0x10536d6d8;
  uStack_100 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puStack_120 = &uStack_128;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x10536d764;
  puStack_158 = &UNK_11087dc68;
  _objc_copyWeak(auStack_130,auStack_80);
  puStack_138 = &uStack_128;
  _objc_retain(param_4);
  uStack_150 = param_4;
  _objc_retain(param_5);
  uStack_148 = param_5;
  puStack_140 = puVar1;
  func_0x00010bfa6480(uVar2);
  _objc_release(uVar2);
  func_0x00010be57ca0(param_1);
  _dispatch_group_enter(puVar1);
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_10536d6c8;
  uStack_180 = 0x10536d6d8;
  uStack_178 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x10536d7e8;
  puStack_1d0 = &UNK_11087dc68;
  puStack_198 = &uStack_1a0;
  _objc_copyWeak(auStack_1a8,auStack_80);
  puStack_1b0 = &uStack_1a0;
  _objc_retain(param_4);
  uStack_1c8 = param_4;
  _objc_retain(param_5);
  uStack_1c0 = param_5;
  puStack_1b8 = puVar1;
  func_0x00010bf46540(uVar2);
  func_0x00010be57ca0(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf3d120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar2;
  func_0x00010c26ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bfdecc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_10540b7e8(uVar6,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf70640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b700(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
  func_0x00010be57ca0(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_10536d86c;
  puStack_228 = &UNK_11087dc98;
  puStack_200 = &uStack_b0;
  puStack_1f8 = &uStack_128;
  puStack_1f0 = &uStack_1a0;
  uStack_220 = uVar2;
  uStack_218 = uVar7;
  uStack_210 = param_5;
  uStack_208 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000100bc0718(puVar1,uVar6,&puStack_240);
  _objc_release(uVar6);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_destroyWeak(auStack_1a8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_destroyWeak(auStack_130);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10536d6c8; end: 10536d6df;  */

void FUN_10536d6c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10536d6e0; end: 10536d86b;  */

void FUN_10536d6e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    func_0x00010be57ca0(lVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536d86c; end: 10536d8ef;  */

void FUN_10536d86c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26ada0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))
            (lVar1,uVar3,uVar4,uVar2,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10536d8f0; end: 10536d9bf;  */

void FUN_10536d8f0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 10536d9c0; end: 10536da9b; -[SCGrpcRegistrationService _gTPDateFromDate:] */

void FUN_10536d9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b7be8;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf27bc0(PTR__OBJC_CLASS___NSCalendar_1126aeec8,param_2,
                      *(undefined8 *)PTR__NSCalendarIdentifierGregorian_11034aa28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c0d0e40(puVar3);
  func_0x00010c1c8fc0(puVar1,param_2,puVar4);
  puVar4 = puVar3;
  func_0x00010bf65700(puVar3);
  func_0x00010c189d40(puVar1,param_2,puVar4);
  puVar4 = puVar3;
  func_0x00010c2bedc0(puVar3);
  func_0x00010c2278a0(puVar1,param_2,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10536da9c; end: 10536db1b; -[SCGrpcRegistrationService _carrierCountryCodeFromSIM] */

void FUN_10536da9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf32ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10536db1c; end: 10536dc3b; -[SCGrpcRegistrationService _computeRegistrationErrorMessageFromError:isEmptyResponse:] */

void FUN_10536db1c(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c06f000();
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = param_3;
    func_0x00010bf3ec40();
    _objc_release(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 == (undefined *)0x0) goto LAB_10536db9c;
    func_0x000108b9aabc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(puVar1);
LAB_10536db9c:
    puVar1 = param_3;
    func_0x00010540ba80();
    if ((int)puVar1 != 0) {
      puVar3 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10536dc14;
    }
    if (((param_4 & 1) == 0) &&
       (puVar1 = param_3, func_0x00010bf3ec40(), puVar1 == (undefined *)0x0)) {
      puVar3 = (undefined *)0x0;
      goto LAB_10536dc14;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108b9aad4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf3ec40();
  func_0x00010c14de00(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_10536dc14:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10536dc3c; end: 10536dd43; -[SCGrpcRegistrationService _logAppAttestRetryWithCount:] */

void FUN_10536dc3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7bf0;
  _objc_opt_new(PTR_PTR_1126b7bf0);
  func_0x00010c19df20();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd48b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a620(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21a380(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd3658);
  func_0x00010c21acc0(puVar1,param_2,2);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af378;
  func_0x00010c23c420(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10536dd44; end: 10536de8b; -[SCGrpcRegistrationService _logRegistrationNetworkState:registrationMethod:clientNetworkRequestId:] */

void FUN_10536dd44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bd3c0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10536de8c; end: 10536deb3;  */

void FUN_10536de8c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xe;
  return;
}



/* Entry: 10536deb4; end: 10536df47;  */

void FUN_10536deb4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536df48; end: 10536df6f;  */

void FUN_10536df48(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xf;
  return;
}



/* Entry: 10536df70; end: 10536e0b7; -[SCGrpcRegistrationService _logRequestPreparationTaskState:registrationMethod:task:clientNetworkRequestId:] */

void FUN_10536df70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0bd3c0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae2e0();
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}


