/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105790ca4; end: 105790d6b;  */

void FUN_105790ca4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105790d6c; end: 105790e47;  */

void FUN_105790d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105790e48;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_2);
    uStack_48 = param_2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010007380c(*(long *)(param_1 + 0x20),&puStack_68);
    }
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105790e48; end: 105790e5b;  */

void FUN_105790e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105790e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105790e5c; end: 105791037; -[SCCognacGRPCService getScoreVisibilityWithAppId:leaderboardId:completionQueue:completionBlock:] */

void FUN_105790e5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != (undefined *)0x0)) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105791038;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_6);
      puStack_58 = param_6;
      func_0x00010007380c(param_5,&puStack_78);
      puVar2 = puStack_58;
    }
    else {
      puVar2 = PTR_PTR_1126be0f8;
      func_0x00010c0cb140(PTR_PTR_1126be0f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168ae0();
      lVar1 = param_1;
      FUN_105790814(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010bfc9d80(uVar3);
      _objc_release(uVar3);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105791038; end: 10579109b;  */

void FUN_105791038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110dff518,0x3e9,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10579109c; end: 10579145b;  */

void FUN_10579109c(long param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lVar10 = param_2;
    func_0x00010c150d20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010bf52a60();
    if (lVar5 == 0) {
      lStack_1c8 = 0;
      lVar14 = 0;
    }
    else {
      lStack_1c8 = 0;
      lVar14 = 0;
      lVar15 = *plStack_150;
      do {
        lVar8 = 0;
        do {
          if (*plStack_150 != lVar15) {
            _objc_enumerationMutation(lVar10);
          }
          lVar16 = *(long *)(lStack_158 + lVar8 * 8);
          lVar6 = lVar16;
          func_0x00010c150980();
          if ((int)lVar6 == 2) {
            if (lVar4 != 0) {
              iVar9 = (int)*(undefined8 *)(param_1 + 0x30);
              lVar6 = lVar16;
              func_0x00010c08dca0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0();
              _objc_release(lVar6);
              lVar6 = lVar14;
              lVar13 = lStack_1c8;
              lVar1 = lVar16;
              if (iVar9 != 0) goto LAB_105791294;
            }
          }
          else if ((int)lVar6 == 1 && lVar3 != 0) {
            uVar12 = *(ulong *)(param_1 + 0x28);
            lVar6 = lVar16;
            func_0x00010bf05300(lVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            _objc_release(lVar6);
            lVar6 = lStack_1c8;
            lVar13 = lVar16;
            lVar1 = lVar14;
            if ((uVar12 & 1) != 0) {
LAB_105791294:
              lVar14 = lVar1;
              _objc_retain(lVar16);
              _objc_release(lVar6);
              lStack_1c8 = lVar13;
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar10;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar10);
    if (((lVar3 == 0) || (lStack_1c8 != 0)) && ((lVar4 == 0 || (lVar14 != 0)))) {
      if (lStack_1c8 == 0) {
        bVar2 = false;
      }
      else {
        lVar10 = lStack_1c8;
        func_0x00010c150d40();
        bVar2 = (int)lVar10 == 1;
      }
      if (lVar14 == 0) {
        uStack_18f = false;
      }
      else {
        lVar10 = lVar14;
        func_0x00010c150d40();
        uStack_18f = (int)lVar10 == 1;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b0 = 0xc2000000;
      pcStack_1a8 = FUN_1057914d4;
      puStack_1a0 = &UNK_1108b1278;
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar11);
      uStack_198 = uVar11;
      uStack_190 = bVar2;
      func_0x00010007380c(uVar7,&puStack_1b8);
      uVar7 = uStack_198;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_105791474;
      puStack_170 = &UNK_110849530;
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar11);
      uStack_168 = uVar11;
      func_0x00010007380c(uVar7,&puStack_188);
      uVar7 = uStack_168;
    }
    _objc_release(uVar7);
    _objc_release(lVar14);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10579145c;
    puStack_108 = &UNK_11084aaa8;
    lVar10 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar10);
    lStack_f8 = lVar10;
    _objc_retain(param_3);
    lStack_100 = param_3;
    func_0x00010007380c(uVar7,&puStack_120);
    _objc_release(lStack_100);
    lStack_1c8 = lStack_f8;
  }
  _objc_release(lStack_1c8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105791470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),0,0);
  return;
}



/* Entry: 10579145c; end: 105791473;  */

void FUN_10579145c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105791470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105791474; end: 1057914d3;  */

void FUN_105791474(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057914d4; end: 1057914ef;  */

void FUN_1057914d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057914ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,*(undefined1 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x29));
  return;
}



/* Entry: 1057914f0; end: 1057916d3; -[SCCognacGRPCService setScoreVisibilityWithAppId:scoreVisible:completionQueue:completionBlock:] */

void FUN_1057914f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if ((param_5 == 0) || (param_6 == (undefined *)0x0)) goto LAB_1057916a0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1057916d4;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_58 = param_6;
    func_0x00010007380c(param_5,&puStack_78);
    puVar2 = puStack_58;
  }
  else {
    puVar2 = PTR_PTR_1126be100;
    func_0x00010c0cb140(PTR_PTR_1126be100);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126be108;
    func_0x00010c0cb140(PTR_PTR_1126be108);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168ae0();
    func_0x00010c1f6d60(puVar3);
    func_0x00010c1f6d40(puVar2);
    lVar1 = param_1;
    FUN_105790814(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c1f6da0(uVar4);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_1057916a0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057916d4; end: 105791713;  */

void FUN_1057916d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1057947d8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105791714; end: 1057917c3;  */

void FUN_105791714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1057917c4;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1057917c4; end: 1057917d3;  */

void FUN_1057917c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057917d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057917d4; end: 10579196b; -[SCCognacGRPCService getLeaderboardWithLeaderboardId:completionQueue:completionBlock:] */

void FUN_1057917d4(long param_1,undefined8 param_2,long param_3,long param_4,undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != (undefined *)0x0)) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10579196c;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      puStack_48 = param_5;
      func_0x00010007380c(param_4,&puStack_68);
      puVar2 = puStack_48;
    }
    else {
      puVar2 = PTR_PTR_1126be110;
      func_0x00010c0cb140(PTR_PTR_1126be110);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9f20();
      lVar1 = param_1;
      FUN_105790814(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010bfc3b40(uVar3);
      _objc_release(uVar3);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10579196c; end: 10579197f;  */

void FUN_10579196c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010579197c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105791980; end: 105791a97;  */

void FUN_105791980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = param_2;
  func_0x00010bfd8420();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c08dc20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_1057948d8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105791a98;
  puStack_60 = &UNK_11084a9e8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_58 = uVar3;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010007380c(uVar2,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 105791a98; end: 105791aab;  */

void FUN_105791a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105791aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105791aac; end: 105791c83; -[SCCognacGRPCService batchGetLeaderboardEntriesWithLeaderboardId:userIds:completionQueue:completionBlock:] */

void FUN_105791aac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != (undefined *)0x0)) {
    if ((param_3 == 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105791c84;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_6);
      puStack_58 = param_6;
      func_0x00010007380c(param_5,&puStack_78);
      puVar2 = puStack_58;
    }
    else {
      puVar2 = PTR_PTR_1126be118;
      func_0x00010c0cb140(PTR_PTR_1126be118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9f20();
      lVar1 = param_4;
      func_0x00010c0d3c80(param_4);
      func_0x00010c21e700(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      FUN_105790814(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010bf16f20(uVar3);
      _objc_release(uVar3);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105791c84; end: 105791cc7;  */

void FUN_105791c84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1057947d8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105791cc8; end: 105791e33;  */

void FUN_105791cc8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = param_2;
    func_0x00010c08dc80();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar3 = param_2;
      func_0x00010c08dc60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_105794cbc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x105791e48;
    puStack_88 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    lStack_80 = lVar4;
    uStack_78 = uVar2;
    _objc_retain(lVar4);
    func_0x00010007380c(uVar1,&puStack_a0);
    _objc_release(lStack_80);
    _objc_release(uStack_78);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105791e34;
    puStack_58 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar4);
    lStack_48 = lVar4;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(lStack_50);
    lVar4 = lStack_48;
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105791e34; end: 105791e5b;  */

void FUN_105791e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105791e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105791e5c; end: 105791f43; -[SCCognacGRPCService listFriendLeaderboardDataWithLeaderboardId:currentUserId:limit:orderingType:isStudioLens:completionQueue:completionBlock:] */

void FUN_105791e5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_9);
  uVar1 = 2;
  if (param_6 != 2) {
    uVar1 = param_6 == 1;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = uVar1;
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105791f44;
  puStack_60 = &UNK_1108b1368;
  uStack_58 = param_9;
  _objc_retain(param_9);
  FUN_10579200c(param_1,param_3,param_4,param_5,uVar2,param_7,param_8,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_9);
  return;
}



/* Entry: 105791f44; end: 10579200b;  */

void FUN_105791f44(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10579200c; end: 1057921f7;  */

void FUN_10579200c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long in_x6;
  undefined *in_x7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  if ((param_1 != 0) && (in_x6 != 0)) {
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105792380;
      puStack_70 = &UNK_110849530;
      _objc_retain(in_x7);
      puStack_68 = in_x7;
      func_0x00010007380c(in_x6,&puStack_88);
      puVar2 = puStack_68;
    }
    else {
      puVar2 = PTR_PTR_1126be120;
      func_0x00010c0cb140(PTR_PTR_1126be120);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9f20();
      func_0x00010c1bda80(puVar2);
      func_0x00010c1d6220(puVar2);
      func_0x00010c1b0640(puVar2);
      lVar1 = param_1;
      FUN_105790814(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(in_x6);
      _objc_retain(in_x7);
      func_0x00010c09a060(uVar3);
      _objc_release(uVar3);
      _objc_release(in_x7);
      _objc_release(in_x6);
      _objc_release(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1057921f8; end: 1057922cf; -[SCCognacGRPCService listFriendLeaderboardEntriesWithLeaderboardId:currentUserId:completionQueue:completionBlock:] */

void FUN_1057921f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057922d0;
  puStack_58 = &UNK_1108b1398;
  uStack_50 = param_4;
  uStack_48 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_6);
  FUN_10579200c(param_1,param_3,param_4,200,0,0,param_5,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 1057922d0; end: 10579237f;  */

void FUN_1057922d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uVar2 = param_2;
      FUN_105794ce8(param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(param_1 + 0x28);
      uVar3 = param_2;
      func_0x00010c0d4700(param_2);
      (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3,0);
      _objc_release(uVar2);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105792380; end: 1057923c3;  */

void FUN_105792380(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1057947d8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057923c4; end: 10579248b;  */

void FUN_1057923c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10579248c;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10579248c; end: 10579249f;  */

void FUN_10579248c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010579249c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057924a0; end: 10579257f; -[SCCognacGRPCService getLeaderboardTopScoresDataWithLeaderboardId:limit:orderingType:isStudioLens:completionQueue:completionBlock:] */

void FUN_1057924a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_8);
  uVar1 = 2;
  if (param_5 != 2) {
    uVar1 = param_5 == 1;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = uVar1;
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105792580;
  puStack_60 = &UNK_1108b13c8;
  uStack_58 = param_8;
  _objc_retain(param_8);
  FUN_105792648(param_1,param_3,param_4,uVar2,param_6,param_7,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_8);
  return;
}



/* Entry: 105792580; end: 105792647;  */

void FUN_105792580(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105792648; end: 1057927b7;  */

void FUN_105792648(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  undefined8 in_x6;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puVar1 = PTR_PTR_1126be128;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_opt_new(puVar1);
    func_0x00010c1b9f20();
    _objc_release(param_2);
    func_0x00010c1bda80(puVar1);
    func_0x00010c1d6220(puVar1);
    func_0x00010c1b0640(puVar1);
    lVar2 = param_1;
    FUN_105790814(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(in_x5);
    _objc_retain(in_x6);
    func_0x00010bfc6e60(uVar3);
    _objc_release(uVar3);
    _objc_release(in_x6);
    _objc_release(in_x5);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  return;
}



/* Entry: 1057927b8; end: 105792923; -[SCCognacGRPCService getLeaderboardTopScoresEntriesWithLeaderboardId:limit:completionQueue:completionBlock:] */

void FUN_1057927b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10579286c;
  puStack_50 = &UNK_1108b13c8;
  uStack_48 = param_6;
  _objc_retain(param_6);
  FUN_105792648(param_1,param_3,param_4,0,0,param_5,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_6);
  return;
}



/* Entry: 105792924; end: 1057929fb;  */

void FUN_105792924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1057929fc;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_2);
    uStack_48 = param_2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(lVar1,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1057929fc; end: 105792a0f;  */

void FUN_1057929fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105792a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105792a10; end: 105792b33; -[SCCognacGRPCService getGlobalOptInStatusWithCompletionQueue:completionBlock:] */

void FUN_105792a10(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126be130;
    func_0x00010c0cb140(PTR_PTR_1126be130);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_105790814(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105792b34;
    puStack_58 = &UNK_1108b1428;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010bfc8400(uVar3,param_2,puVar1,lVar2,&puStack_70);
    _objc_release(uVar3);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105792b34; end: 105792c5f;  */

void FUN_105792b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x105792c0c;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(lVar1,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105792c60; end: 105792ed3; -[SCCognacGRPCService setGlobalOptInStatusWithOptInStatus:completionQueue:completionBlock:] */

void FUN_105792c60(undefined *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_4 != 0) && (param_5 != (undefined *)0x0)) {
    if (param_3 < 0) {
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110dff498;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105792ed4;
      puStack_80 = &UNK_11084aaa8;
      _objc_retain(param_5);
      puStack_78 = puVar4;
      puStack_70 = param_5;
      _objc_retain(puVar4);
      func_0x00010007380c(param_4,&puStack_98);
      _objc_release(puStack_78);
      puVar3 = puStack_70;
    }
    else {
      puVar4 = param_1;
      FUN_105790814(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126be138;
      func_0x00010c0cb140(PTR_PTR_1126be138);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126be0f0;
      func_0x00010c0cb140(PTR_PTR_1126be0f0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a3c80();
      func_0x00010c1d5ca0(puVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010c1d5cc0(uVar2);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105792ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x28) + 0x10))
            (*(long *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x20));
  return;
}



/* Entry: 105792ed4; end: 105792ee3;  */

void FUN_105792ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105792ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105792ee4; end: 105792f93;  */

void FUN_105792ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105792f94;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105792f94; end: 105792fa3;  */

void FUN_105792f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105792fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105792fa4; end: 1057931b3; -[SCCognacGRPCService sendLeaderboardNotificationsWithLensId:leaderboardId:recipientUserIds:completionQueue:completionBlock:] */

void FUN_105792fa4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_6 != 0) && (param_7 != 0)) {
    puVar1 = PTR_PTR_1126be140;
    func_0x00010c0cb140(PTR_PTR_1126be140);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c08fa60();
    if ((lVar2 == 0) ||
       ((lVar2 = param_5, func_0x00010bf529e0(), lVar2 == 0 ||
        (lVar2 = param_4, func_0x00010c08fa60(), lVar2 == 0)))) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1057931b4;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_7);
      lStack_58 = param_7;
      func_0x00010007380c(param_6,&puStack_78);
      lVar2 = lStack_58;
    }
    else {
      func_0x00010c1bbd60(puVar1);
      func_0x00010c1b9f20(puVar1);
      lVar2 = param_5;
      func_0x00010c0d3c80(param_5);
      func_0x00010c1e8aa0(puVar1);
      _objc_release(lVar2);
      lVar2 = param_1;
      FUN_105790814(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      _objc_retain(param_7);
      func_0x00010c15c080(uVar3);
      _objc_release(uVar3);
      _objc_release(param_7);
      _objc_release(param_6);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057931b4; end: 1057931f3;  */

void FUN_1057931b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1057947d8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057931f4; end: 1057932a3;  */

void FUN_1057931f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1057932a4;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1057932a4; end: 1057932b3;  */

void FUN_1057932a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057932b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057932b4; end: 1057932e3; -[SCCognacGRPCService .cxx_destruct] */

void FUN_1057932b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057932e4; end: 105793387; -[SCCognacLeaderboardDataServiceImpl initWithCognacGRPCService:cognacDataStorage:] */

undefined1 *
FUN_1057932e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea320;
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



/* Entry: 105793388; end: 1057933ab; -[SCCognacLeaderboardDataServiceImpl submitLeaderboardScoreWithAppId:leaderboardId:score:orderingType:isStudioLens:lensId:optInStatus:completionQueue:completionBlock:] */

void FUN_105793388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_submitLeaderboardScoreWithAppId__1126756b8);
  return;
}



/* Entry: 1057933ac; end: 1057934d3; -[SCCognacLeaderboardDataServiceImpl getLeaderboardScoreVisibilityWithAppId:leaderboardId:completionQueue:completionBlock:] */

void FUN_1057933ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1057934d4;
    puStack_70 = &UNK_1108b14b8;
    lStack_68 = param_1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retain(param_5);
    lStack_50 = param_5;
    _objc_retain(param_6);
    lStack_48 = param_6;
    func_0x00010bfc9da0(uVar1,param_2,param_3,param_4,param_5,&puStack_88);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057934d4; end: 105793757;  */

void FUN_1057934d4(long param_1,undefined *param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar7 = *(undefined **)(param_1 + 0x40);
  _objc_retain(lVar6);
  _objc_retain(lVar2);
  _objc_retain(param_2);
  _objc_retain(uVar3);
  _objc_retain(puVar7);
  if (lVar1 != 0) {
    if (param_2 == (undefined *)0x0) {
      lVar4 = lVar6;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lStack_78 = lVar6;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_70 = puVar9;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
      }
      lVar4 = lVar2;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lStack_88 = lVar2;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_80 = puVar5;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      uVar10 = *(undefined8 *)(lVar1 + 0x10);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = (code *)0x105793770;
      puStack_a8 = &UNK_1108b1278;
      _objc_retain(puVar7);
      uStack_98._0_2_ = CONCAT11(param_4,param_3);
      puStack_a0 = puVar7;
      func_0x00010c2870a0(uVar10);
      _objc_release(puStack_a0);
      _objc_release(puVar9);
    }
    else {
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_105793758;
      puStack_a8 = &UNK_110875d10;
      _objc_retain(puVar7);
      uStack_98 = puVar7;
      _objc_retain(param_2);
      puStack_a0 = param_2;
      uStack_90 = param_3;
      uStack_8f = param_4;
      func_0x00010007380c(uVar3,&puStack_c0);
      _objc_release(puStack_a0);
      puVar8 = uStack_98;
    }
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010579376c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x28) + 0x10))
            (*(long *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x20),*(undefined1 *)(lVar6 + 0x30),
             *(undefined1 *)(lVar6 + 0x31));
  return;
}



/* Entry: 105793758; end: 10579378b;  */

void FUN_105793758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010579376c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31));
  return;
}



/* Entry: 10579378c; end: 10579385b; -[SCCognacLeaderboardDataServiceImpl updateScoreVisibilityForAppId:scoreVisible:completionQueue:completionBlock:] */

void FUN_10579378c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10579385c;
  puStack_58 = &UNK_1108538b0;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c1f6d80(uVar1,param_2,param_3,param_4,param_5,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_6);
  return;
}



/* Entry: 10579385c; end: 10579390b;  */

void FUN_10579385c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10579390c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10579390c; end: 10579391b;  */

void FUN_10579390c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105793918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10579391c; end: 105793ac3; -[SCCognacLeaderboardDataServiceImpl fetchLeaderboardWithLeaderboardId:completionQueue:completionBlock:] */

void FUN_10579391c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR___dispatch_main_q_11034be20;
  if ((param_4 == (undefined *)0x0) && (param_5 != (undefined *)0x0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_4 = puVar3;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08dd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar2 = lVar1;
    _dispatch_get_global_queue();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bfc6e80(uVar4);
    _objc_release(lVar2);
    _objc_release(param_5);
    puVar3 = param_4;
  }
  else {
    if ((param_5 == (undefined *)0x0) || (param_4 == (undefined *)0x0)) goto LAB_105793a88;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105793ac4;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_5);
    puStack_58 = param_5;
    _objc_retain(lVar1);
    lStack_60 = lVar1;
    func_0x00010007380c(param_4,&puStack_80);
    _objc_release(lStack_60);
    puVar3 = puStack_58;
  }
  _objc_release(puVar3);
LAB_105793a88:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105793ac4; end: 105793ad7;  */

void FUN_105793ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105793ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105793ad8; end: 105793c6b;  */

void FUN_105793ad8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_retain(lVar4);
  if (lVar3 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      if ((lVar1 == 0) || (lVar4 == 0)) goto LAB_105793c34;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105793c6c;
      puStack_60 = &UNK_11084aaa8;
      _objc_retain(lVar4);
      lStack_50 = lVar4;
      _objc_retain(param_3);
      lStack_58 = param_3;
      func_0x00010007380c(lVar1,&puStack_78);
      _objc_release(lStack_58);
      lVar3 = lStack_50;
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      uVar2 = 0;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105793c80;
      puStack_60 = &UNK_11084a9e8;
      _objc_retain(lVar4);
      lStack_48 = lVar4;
      _objc_retain(lVar1);
      lStack_58 = lVar1;
      _objc_retain(param_2);
      lStack_50 = param_2;
      func_0x00010c28c940(uVar5);
      _objc_release(uVar2);
      _objc_release(lStack_50);
      _objc_release(lStack_58);
      lVar3 = lStack_48;
    }
    _objc_release(lVar3);
  }
LAB_105793c34:
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105793c6c; end: 105793c7f;  */

void FUN_105793c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105793c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105793c80; end: 105793d1f;  */

void FUN_105793c80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105793d20;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_38 = lVar3;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  return;
}



/* Entry: 105793d20; end: 105793d33;  */

void FUN_105793d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105793d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105793d34; end: 105793e0b; -[SCCognacLeaderboardDataServiceImpl batchGetLeaderboardEntriesWithLeaderboardId:userIds:completionQueue:completionBlock:] */

void FUN_105793d34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_6 != 0) {
    if (param_5 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_5 = puVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105793e0c;
    puStack_50 = &UNK_1108b1518;
    _objc_retain(param_6);
    lStack_48 = param_6;
    func_0x00010bf16f00(uVar2,param_2,param_3,param_4,param_5,&puStack_68);
    _objc_release(lStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105793e0c; end: 105793e17;  */

void FUN_105793e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105793e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105793e18; end: 105793fc3; -[SCCognacLeaderboardDataServiceImpl listFriendLeaderboardEntriesForLeaderboardId:currentUserId:completionQueue:completionBlock:] */

void FUN_105793e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105793ee8;
  puStack_58 = &UNK_1108b1578;
  uStack_50 = param_4;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c09a040(uVar1,param_2,param_3,param_4,param_5,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105793fc4; end: 10579400b;  */

undefined8 FUN_105793fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10579400c; end: 10579402f; -[SCCognacLeaderboardDataServiceImpl listFriendLeaderboardDataWithLeaderboardId:currentUserId:limit:orderingType:isStudioLens:completionQueue:completionBlock:] */

void FUN_10579400c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_listFriendLeaderboardDataWithLea_112604218);
  return;
}



/* Entry: 105794030; end: 1057940df; -[SCCognacLeaderboardDataServiceImpl getLeaderboardTopScoresEntriesWithLeaderboardId:limit:completionQueue:completionBlock:] */

void FUN_105794030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057940e0;
  puStack_50 = &UNK_1108b1518;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010bfc6e40(uVar1,param_2,param_3,param_4,param_5,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_6);
  return;
}



/* Entry: 1057940e0; end: 1057940f3;  */

void FUN_1057940e0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057940ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1057940f4; end: 105794117; -[SCCognacLeaderboardDataServiceImpl getLeaderboardTopScoresDataWithLeaderboardId:limit:orderingType:isStudioLens:completionQueue:completionBlock:] */

void FUN_1057940f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  
  if (param_5 != 2) {
    param_5 = (ulong)(param_5 == 1);
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfc6e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getLeaderboardTopScoresDataWithL_1125cf530,param_3,
             param_4,uVar1);
  return;
}



/* Entry: 105794118; end: 105794207; -[SCCognacLeaderboardDataServiceImpl getLeaderboardGlobalOptInStatusWithCompletionQueue:completionBlock:] */

void FUN_105794118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bfc60e0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105794208; end: 105794277;  */

void FUN_105794208(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar1 = param_3;
    if (param_3 != 2) {
      lVar1 = 0;
    }
    if (param_3 == 1) {
      lVar1 = 1;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105794278; end: 10579427f; -[SCCognacLeaderboardDataServiceImpl setLeaderboardGlobalOptInStatusWithOptInStatus:completionQueue:completionBlock:] */

void FUN_105794278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a3cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setGlobalOptInStatusWithOptInSta_112646948);
  return;
}



/* Entry: 105794280; end: 105794287; -[SCCognacLeaderboardDataServiceImpl sendLeaderboardNotificationsWithLensId:leaderboardId:recipientUserIds:completionQueue:completionBlock:] */

void FUN_105794280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendLeaderboardNotificationsWith_112634a38);
  return;
}



/* Entry: 105794288; end: 1057942b7; -[SCCognacLeaderboardDataServiceImpl .cxx_destruct] */

void FUN_105794288(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057942b8; end: 10579432b; -[SCCognacUserContextTokenProviderImplementation initWithCognacServiceClient:] */

undefined1 * FUN_1057942b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea328;
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



/* Entry: 10579432c; end: 105794333; -[SCCognacUserContextTokenProviderImplementation userContextToken] */

void FUN_10579432c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getUserContextToken_1125d08f8);
  return;
}



/* Entry: 105794334; end: 10579434b; -[SCCognacUserContextTokenProviderImplementation .cxx_destruct] */

void FUN_105794334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10579434c; end: 1057943bf; -[UNISCGamesAuthAuth initWithUnifiedGrpcService:] */

undefined1 * FUN_10579434c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea330;
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



/* Entry: 1057943c0; end: 1057944a3; -[UNISCGamesAuthAuth getCanvasTokenWithRequest:callOptionsBuilder:handler:] */

void FUN_1057943c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be148;
  _objc_opt_class(PTR_PTR_1126be148);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dff4b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057944a4; end: 1057944af; -[UNISCGamesAuthAuth .cxx_destruct] */

void FUN_1057944a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057944b0; end: 10579457b; -[SCCognacServiceClient setHostName:] */

void FUN_1057944b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = uVar1;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f420(param_1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10579457c; end: 105794687; -[SCCognacServiceClient getUserContextToken] */

void FUN_10579457c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105794688;
  uStack_30 = 0x105794698;
  uStack_28 = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105794688; end: 10579469f;  */

void FUN_105794688(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057946a0; end: 10579475b;  */

void FUN_1057946a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010076dbfc(lVar1,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    _objc_retain(uVar6);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10579475c; end: 105794763; -[SCCognacServiceClient hostName] */

undefined8 FUN_10579475c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105794764; end: 10579476f; -[SCCognacServiceClient baseURL] */

void FUN_105794764(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 105794770; end: 105794777; -[SCCognacServiceClient setBaseURL:] */

void FUN_105794770(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105794778; end: 1057947d7; -[SCCognacServiceClient .cxx_destruct] */

void FUN_105794778(long param_1)

{
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



/* Entry: 1057947d8; end: 105794807;  */

void FUN_1057947d8(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105794808; end: 1057948d7;  */

void FUN_105794808(long param_1,long param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  if ((param_1 != 0) && (param_2 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x105794894;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_2);
    lStack_28 = param_2;
    func_0x00010007380c(param_1,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1057948d8; end: 105794cbb;  */

void FUN_1057948d8(undefined *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
LAB_105794994:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar7 = param_1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08fa60();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = param_1;
      func_0x00010bfd8360();
      _objc_release(puVar7);
      if ((int)puVar8 == 0) goto LAB_105794994;
      puVar8 = param_1;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar9 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar9 = param_1;
        func_0x00010c0b4680(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar7,param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
      puVar8 = param_1;
      func_0x00010c0ece80();
      uVar1 = 2;
      if ((int)puVar8 != 2) {
        uVar1 = (int)puVar8 == 1;
      }
      puVar8 = param_1;
      func_0x00010c150ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010c08fa60();
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar2 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar2 = param_1;
        func_0x00010c150ca0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar9,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126be168;
      _objc_alloc(PTR_PTR_1126be168);
      puVar2 = param_1;
      func_0x00010bfe5ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c0d4f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c08a700(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c022020(puVar8,param_2,puVar2,puVar3,puVar7,0,uVar1,puVar5,puVar6,puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar9);
    }
    _objc_release(puVar7);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105794cbc; end: 105794cdb;  */

void FUN_105794cbc(long param_1)

{
  if (param_1 != 0) {
    func_0x00010bd86420(param_1,&PTR___NSConcreteGlobalBlock_1108b1620);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105794cdc; end: 105794ce7;  */

void FUN_105794cdc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar7 = PTR_PTR_1126be170;
      _objc_alloc();
      func_0x00010bfccfa0();
      func_0x00010bfcd0a0(param_2);
      func_0x00010c150c20(param_2);
      lVar1 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bf86360(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c017d60(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_105794c90;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_105794c90:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105794ce8; end: 105794de7;  */

void FUN_105794ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c08dc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105794de8; end: 105794e93;  */

void FUN_105794de8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    param_3 = param_3 + 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0d4700(uVar2);
    param_3 = (long)((int)uVar2 + 1);
  }
  uVar2 = param_2;
  func_0x000105794b2c(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105794e94; end: 105794e9f; +[SCCognacDataStorage announcerIdentifier] */

undefined ** FUN_105794e94(void)

{
  return &PTR____CFConstantStringClassReference_110dff798;
}



/* Entry: 105794ea0; end: 105794ea7; -[SCCognacDataStorage addListener:] */

void FUN_105794ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105794ea8; end: 105794eaf; -[SCCognacDataStorage removeListener:] */

void FUN_105794ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105794eb0; end: 105794fdf; -[SCCognacDataStorage init] */

undefined1 * FUN_105794eb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ea340;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105794fe0; end: 10579516f; -[SCCognacDataStorage updateWithLeaderboard:completionQueue:completionBlock:] */

void FUN_105794fe0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08dca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010c08a660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_4);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_105795124;
    }
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x00010007380c(param_4,param_5);
  }
LAB_105795124:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105795170; end: 1057952eb;  */

void FUN_105795170(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1057952d4;
  lVar2 = lVar1;
  func_0x00010c08dcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08dca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
LAB_10579523c:
    lVar2 = lVar1;
    func_0x00010c08dcc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0d3c80();
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08dca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar5);
    _objc_release(uVar3);
    lVar2 = lVar5;
    func_0x00010bf51e00(lVar5);
    func_0x00010c1b9f40(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  else {
    lVar2 = lVar4;
    func_0x00010c08a660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf433a0();
    _objc_release(uVar3);
    _objc_release(lVar2);
    if (lVar5 == -1) goto LAB_10579523c;
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    func_0x00010007380c();
  }
  _objc_release(lVar4);
LAB_1057952d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


