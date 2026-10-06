/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080c9184; end: 1080c91b7;  */

long FUN_1080c9184(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1080c9118(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1080c91b8; end: 1080c9693;  */

void FUN_1080c91b8(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_x3);
  return;
}



/* Entry: 1080c9694; end: 1080c96df;  */

void FUN_1080c9694(void)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001080c9f50();
  *unaff_x20 = &PTR_FUN_110a1e180;
  unaff_x20[1] = unaff_x19;
  return;
}



/* Entry: 1080c96e0; end: 1080c96e3;  */

long FUN_1080c96e0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1080c96e4; end: 1080c96f7;  */

void FUN_1080c96e4(void)

{
  func_0x0001080c96bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c96f8; end: 1080c9ab7;  */

void FUN_1080c96f8(undefined8 *param_1,long param_2,undefined8 **param_3,undefined8 **param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *extraout_x8;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long unaff_x26;
  undefined **ppuVar6;
  undefined1 auStack_1d8 [24];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  ulong uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  func_0x00010b98101c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_1080c97e0:
    puVar1 = unaff_x22;
    _objc_retain(param_3);
    ppuVar2 = param_3;
    func_0x00010c08fa60();
    if (ppuVar2 == (undefined8 **)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x00010c0b6660();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSBundle_1126aea78;
      param_4 = (undefined8 **)PTR_PTR_1126b27a8;
      _objc_opt_class();
      func_0x00010bf249e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      FUN_1080c9bd0(puVar1,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = unaff_x23;
        FUN_1080c9bd0(unaff_x23,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined8 *)0x0) {
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          puStack_130 = (undefined8 *)0x0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
          func_0x00010beffbe0();
          _objc_retainAutoreleasedReturnValue();
          param_4 = &puStack_130;
          unaff_x25 = unaff_x24;
          func_0x00010bf52a60();
          if (unaff_x25 != (undefined **)0x0) {
            unaff_x26 = *plStack_120;
            do {
              ppuVar6 = (undefined **)0x0;
              do {
                in_ZR = *plStack_120 == unaff_x26;
                if (!(bool)in_ZR) {
                  _objc_enumerationMutation(unaff_x24);
                }
                puVar3 = *(undefined8 **)(uStack_128 + (long)ppuVar6 * 8);
                FUN_1080c9bd0(puVar3,param_3);
                _objc_retainAutoreleasedReturnValue();
                if (puVar3 != (undefined8 *)0x0) goto LAB_1080c9914;
                ppuVar6 = (undefined **)((long)ppuVar6 + 1);
                in_ZR = ppuVar6 == unaff_x25;
              } while (ppuVar6 < unaff_x25);
              param_4 = &puStack_130;
              unaff_x25 = unaff_x24;
              func_0x00010bf52a60();
            } while (unaff_x25 != (undefined **)0x0);
          }
          puVar3 = (undefined8 *)0x0;
LAB_1080c9914:
          _objc_release(unaff_x24);
        }
      }
      func_0x0001080c9f48();
      FUN_1080c9f10();
    }
    func_0x0001080c9f18();
    if (puVar3 == (undefined8 *)0x0) {
      ppuVar2 = (undefined8 **)&UNK_10f479f4e;
      puVar4 = &uStack_e8;
      func_0x00010b99f5f8();
      func_0x0001080c9f28();
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar1 = puVar3;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001003ad8f8(&puStack_148);
      FUN_1080c9f10();
      if (puStack_148 == (undefined8 *)0x0) {
        puStack_130 = (undefined8 *)&UNK_10f7d0ef0;
        uStack_128 = 0;
      }
      else {
        puStack_130 = puStack_148 + 3;
        uStack_128 = (ulong)*(uint *)((long)puStack_148 + 0xc);
      }
      ppuVar2 = &puStack_130;
      func_0x00010b9a2108(&uStack_e8);
      func_0x00010b99e488(param_1,&uStack_e8);
      FUN_1080c9d44(&uStack_e8);
      func_0x0001003a8cb8();
      puVar4 = puStack_148;
    }
  }
  else {
    puStack_138 = (undefined8 *)0x0;
    param_4 = param_3;
    func_0x00010bf61940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_138;
    _objc_retain(puStack_138);
    if (puVar1 == (undefined8 *)0x0) {
      unaff_x22 = puVar1;
      if (puVar3 == (undefined8 *)0x0) goto LAB_1080c97e0;
      unaff_x23 = puVar3;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001003ad8f8(&puStack_140);
      ppuVar2 = &puStack_140;
      func_0x00010b99f560(&uStack_e8);
      func_0x0001080c9f28();
      func_0x0001003a8cb8();
      func_0x0001080c9f48();
      puVar4 = puStack_140;
    }
    else {
      puVar4 = puVar1;
      func_0x00010b9813b8(&uStack_e8);
      *param_1 = 1;
      param_1[1] = uStack_e8;
      param_1[3] = uStack_d8;
      param_1[2] = uStack_e0;
    }
    FUN_1080c9f10();
  }
  func_0x0001080c9f40();
  func_0x0001080c9f18();
  func_0x0001003ac660(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  func_0x0001080c9f48();
  FUN_1080c9f10();
  func_0x0001080c9f18();
  func_0x0001080c9f18();
  func_0x0001080c9f68();
  pcStack_158 = FUN_1080c9ab8;
  lStack_1a0 = unaff_x26;
  ppuStack_198 = unaff_x25;
  ppuStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = puVar1;
  puStack_178 = puVar3;
  puStack_170 = puVar4;
  ppuStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010b98101c(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b98101c(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b27a8;
  func_0x00010bfe9620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    *extraout_x8 = 0;
  }
  else {
    func_0x0001003a8364();
    puStack_1b8 = &UNK_1003ab990;
    puStack_1a8 = &UNK_1003ab990;
    ppuStack_1c0 = ppuVar2;
    ppuStack_1b0 = param_4;
    func_0x0001003a91d4(&UNK_10f479f64);
    func_0x0001003a9204(auStack_1d8);
    func_0x0001003ac750(extraout_x8,puVar5,auStack_1d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
  }
  FUN_1080c9f10();
  func_0x0001080c9f20();
  func_0x0001080c9f18();
  return;
}



/* Entry: 1080c9ab8; end: 1080c9bcf;  */

void FUN_1080c9ab8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x00010b98101c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b98101c(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b27a8;
  func_0x00010bfe9620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    *param_1 = 0;
  }
  else {
    func_0x0001003a8364();
    puStack_68 = &UNK_1003ab990;
    puStack_58 = &UNK_1003ab990;
    uStack_70 = param_3;
    uStack_60 = param_4;
    func_0x0001003a91d4(&UNK_10f479f64);
    func_0x0001003a9204(auStack_88);
    func_0x0001003ac750(param_1,puVar1,auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  }
  FUN_1080c9f10();
  func_0x0001080c9f20();
  func_0x0001080c9f18();
  return;
}



/* Entry: 1080c9bd0; end: 1080c9d43;  */

void FUN_1080c9bd0(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x19;
  long unaff_x20;
  undefined *puVar4;
  undefined2 uStack_cc;
  
  func_0x0001080c9f50();
  func_0x00010c13b4a0();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x20 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(unaff_x20);
    _objc_retain();
    uVar2 = unaff_x19;
    func_0x00010bf4bb00();
    if (((uVar2 & 1) == 0) && (func_0x00010bf4bb00(), (unaff_x19 & 1) == 0)) {
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = unaff_x20;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        func_0x00010c25ce00();
        iVar1 = (int)unaff_x20;
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bfad0c0();
        _stat();
        puVar4 = (undefined *)0x0;
        if ((iVar1 == 0) && (uStack_cc < -0x7000)) {
          puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
          func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x0001080c9f10();
      }
      func_0x0001080c9f40();
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    func_0x0001080c9f18();
    func_0x0001080c9f20();
  }
  func_0x0001080c9f20();
  func_0x0001080c9f18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1080c9d44; end: 1080c9db3;  */

undefined8 FUN_1080c9d44(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001080c9d78(&uStack_28);
  return param_1;
}



/* Entry: 1080c9db4; end: 1080c9dbb;  */

void FUN_1080c9db4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1080c9dbc; end: 1080c9df3;  */

void FUN_1080c9dbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1080c9df4; end: 1080c9e6b;  */

void FUN_1080c9df4(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  __ZNKSt3__18ios_base6getlocEv();
  __ZNSt3__18ios_base5imbueERKNS_6localeE(auStack_38,param_1,param_2);
  __ZNSt3__16localeD1Ev(auStack_38);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1080c9ec4(auStack_40,*(long *)(param_1 + 0x28),param_2);
    func_0x0001080c9f60();
  }
  return;
}



/* Entry: 1080c9e6c; end: 1080c9e6f;  */

void FUN_1080c9e6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_110346568)();
  return;
}



/* Entry: 1080c9e70; end: 1080c9e83;  */

void FUN_1080c9e70(void)

{
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c9e84; end: 1080c9ec3;  */

undefined8 FUN_1080c9e84(long param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  if ((int)param_2 != -1) {
    uStack_21 = (undefined1)param_2;
    func_0x0001003a9d4c(*(undefined8 *)(param_1 + 0x40),&uStack_21);
  }
  return param_2;
}



/* Entry: 1080c9ec4; end: 1080c9f0f;  */

void FUN_1080c9ec4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0x10))();
  __ZNSt3__16localeC1ERKS0_(param_1,param_2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16localeaSERKS0__110346838)(param_2 + 1,param_3);
  return;
}



/* Entry: 1080c9f10; end: 1080c9f6f;  */

void FUN_1080c9f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c9f70; end: 1080ca0f7;  */

undefined8 * FUN_1080c9f70(undefined8 *param_1,ulong param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong auStack_128 [3];
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_58;
  
  puVar4 = &uStack_140;
  func_0x0001080cc82c();
  uStack_58 = extraout_x8;
  func_0x0001080cc9fc();
  uVar1 = param_2;
  func_0x00010c263340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retain();
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_140 = 0;
  auStack_128[2] = 0;
  auStack_128[1] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x0001080cc954();
  func_0x0001080cc9a0();
  if (uVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      uVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x0001003ad8f8(auStack_128,*(undefined8 *)(auStack_128[2] + uVar6 * 8));
        func_0x000104bdd2f0(&uStack_140,auStack_128);
        uVar3 = auStack_128[0];
        func_0x0001003a8cb8();
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar2;
      } while (uVar6 < uVar2);
      func_0x0001080cc9a0();
      uVar2 = uVar3;
    } while (uVar3 != 0);
  }
  func_0x0001080cc898();
  func_0x0001080cc898();
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d76a50;
  param_1[1] = 0;
  func_0x0001080cc8f0();
  func_0x0001080cc898();
  *param_1 = &PTR_DAT_110a1e270;
  func_0x00010b980304(param_1 + 6,param_2);
  func_0x0001080cc8a0();
  func_0x0001080cc800(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001080cc898();
  func_0x000104bfe1e0();
  func_0x0001080cc898();
  func_0x0001080cc898();
  func_0x0001080cc8a0();
  func_0x0001080cc9d4();
  *puVar4 = &PTR_DAT_110a1e270;
  func_0x00010b980378(puVar4 + 6);
  *puVar4 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(puVar4 + 3);
  func_0x000107c278e8(puVar4 + 1);
  return puVar4;
}



/* Entry: 1080ca0f8; end: 1080ca127;  */

undefined8 * FUN_1080ca0f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1e270;
  func_0x00010b980378(param_1 + 6);
  *param_1 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ca128; end: 1080ca277;  */

void FUN_1080ca128(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010b981b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 0x30;
  func_0x00010b9803d0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  func_0x00010c136160();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  func_0x0001080cc954();
  func_0x0001080cc8c8();
  if (lVar1 == 0) {
    func_0x00010b981514(&uStack_68,param_2);
    func_0x00010b9a8f78(auStack_60,&uStack_68);
    func_0x000104bf351c(param_1,auStack_60);
    func_0x00010b9a8d98(auStack_60);
    func_0x000104bddf04(uStack_68);
  }
  else {
    func_0x00010c09e4e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(&uStack_50);
    func_0x00010b99f560(auStack_60,&uStack_50);
    *param_1 = 2;
    param_1[1] = auStack_60[0];
    auStack_60[0] = 0;
    func_0x000104bda960(0);
    func_0x0001003a8cb8(uStack_50);
    func_0x0001080cc8c8();
  }
  func_0x0001080cc8a8();
  func_0x0001080cc898();
  func_0x0001080cc8a0();
  return;
}



/* Entry: 1080ca278; end: 1080ca297;  */

void FUN_1080ca278(undefined8 *param_1)

{
  FUN_1080c9f70();
  *param_1 = &PTR_DAT_110a1e2c0;
  return;
}



/* Entry: 1080ca298; end: 1080ca30b;  */

void FUN_1080ca298(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x30;
  func_0x00010b9803d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481c0();
  func_0x0001080cc898();
  if (iVar1 != 0) {
    func_0x00010b9803d0(param_1 + 0x30);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080ca30c; end: 1080ca383;  */

void FUN_1080ca30c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  FUN_1080ca278();
  *param_1 = &PTR_FUN_110a1e310;
  lVar1 = *param_3;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[8] = lVar1;
  return;
}



/* Entry: 1080ca384; end: 1080ca387;  */

undefined8 * FUN_1080ca384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e310;
  func_0x000104bd5214(param_1 + 8);
  *param_1 = &PTR_DAT_110a1e270;
  func_0x00010b980378(param_1 + 6);
  *param_1 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ca388; end: 1080ca39b;  */

void FUN_1080ca388(void)

{
  func_0x0001080ca354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ca39c; end: 1080ca39f;  */

undefined8 FUN_1080ca39c(void)

{
  return 1;
}



/* Entry: 1080ca3a0; end: 1080ca56f;  */

void FUN_1080ca3a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long lVar1;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = *param_7;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  FUN_1080ca570(&lStack_58,param_6);
  FUN_1080ca298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9a94ec(&uStack_60,param_3);
  func_0x00010b981064(&uStack_60,0);
  _objc_retainAutoreleasedReturnValue();
  if ((lStack_58 != 0) && (*(long *)(lStack_58 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
    } while (extraout_w11 != 0);
  }
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010c09b720();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cc8d0();
  func_0x000104bddf04(uStack_60);
  func_0x0001080cc8a8();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0001080cc924();
  }
  func_0x0001080cc8c8();
  FUN_1080cb96c(lVar1);
  func_0x0001080cc990();
  FUN_1080cb940(lStack_58);
  func_0x0001080cc95c();
  return;
}



/* Entry: 1080ca570; end: 1080ca5c3;  */

void FUN_1080ca570(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*(char *)((long)param_2 + 9) == '\x01') {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      ___dynamic_cast(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110d7d820,0);
    }
    FUN_1080cb978();
  }
  else {
    lVar1 = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1080ca5c4; end: 1080ca5e3;  */

void FUN_1080ca5c4(long param_1,long param_2,code **param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *pcVar3;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar5;
  long lVar6;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 0x20);
  plVar2 = &lStack_90;
  func_0x0001080cc82c();
  uStack_48 = extraout_x8;
  _objc_retain();
  func_0x0001080cc954();
  if ((param_2 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    FUN_1080cb170(param_2,param_3,(long *)(param_1 + 0x30));
  }
  else {
    plVar5 = *(long **)(lVar4 + 0x40);
    func_0x0001080cca80();
    lVar4 = *(long *)(param_1 + 0x28);
    lStack_90 = param_2;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10 != 0);
    }
    lVar6 = *(long *)(param_1 + 0x30);
    lStack_88 = lVar4;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_78 = FUN_1080cb584;
    ppuStack_70 = &PTR_FUN_110a1e568;
    plVar1 = (long *)0x18;
    lStack_80 = lVar6;
    __Znwm();
    lStack_90 = 0;
    *plVar1 = param_2;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
        lVar6 = lStack_80;
      } while (extraout_w10_01 != 0);
    }
    plVar1[1] = lVar4;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10_02 != 0);
    }
    plVar1[2] = lVar6;
    param_3 = &pcStack_78;
    plStack_68 = plVar1;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    func_0x0001080cc9dc();
    FUN_1080cb2dc(&lStack_90);
  }
  func_0x0001080cc898();
  func_0x0001080cc8a0();
  func_0x0001080cc800(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080cc9dc();
    FUN_1080cb2dc();
    func_0x0001080cc898();
    func_0x0001080cc8a0();
    func_0x0001080cc9d4();
    pcVar3 = param_3[5];
    if ((pcVar3 != (code *)0x0) && (*(long *)(pcVar3 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        pcVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *(code **)((long)plVar2 + 0x28) = pcVar3;
    pcVar3 = param_3[6];
    if ((pcVar3 != (code *)0x0) && (*(long *)(pcVar3 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        pcVar3 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    *(code **)((long)plVar2 + 0x30) = pcVar3;
    return;
  }
  return;
}



/* Entry: 1080ca5e4; end: 1080ca777;  */

void FUN_1080ca5e4(long param_1,code **param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *pcVar3;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  plVar2 = &lStack_90;
  func_0x0001080cc82c();
  uStack_48 = extraout_x8;
  _objc_retain();
  func_0x0001080cc954();
  if ((param_1 == 0) || (*param_3 == 0)) {
    FUN_1080cb170(param_1,param_2,param_5);
  }
  else {
    plVar4 = (long *)*param_4;
    func_0x0001080cca80();
    lVar6 = *param_3;
    lStack_90 = param_1;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10 != 0);
    }
    lVar5 = *param_5;
    lStack_88 = lVar6;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_78 = FUN_1080cb584;
    ppuStack_70 = &PTR_FUN_110a1e568;
    plVar1 = (long *)0x18;
    lStack_80 = lVar5;
    __Znwm();
    lStack_90 = 0;
    *plVar1 = param_1;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
        lVar5 = lStack_80;
      } while (extraout_w10_01 != 0);
    }
    plVar1[1] = lVar6;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10_02 != 0);
    }
    plVar1[2] = lVar5;
    param_2 = &pcStack_78;
    plStack_68 = plVar1;
    (**(code **)(*plVar4 + 0x28))(plVar4);
    func_0x0001080cc9dc();
    FUN_1080cb2dc(&lStack_90);
  }
  func_0x0001080cc898();
  func_0x0001080cc8a0();
  func_0x0001080cc800(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080cc9dc();
    FUN_1080cb2dc();
    func_0x0001080cc898();
    func_0x0001080cc8a0();
    func_0x0001080cc9d4();
    pcVar3 = param_2[5];
    if ((pcVar3 != (code *)0x0) && (*(long *)(pcVar3 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        pcVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *(code **)((long)plVar2 + 0x28) = pcVar3;
    pcVar3 = param_2[6];
    if ((pcVar3 != (code *)0x0) && (*(long *)(pcVar3 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        pcVar3 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    *(code **)((long)plVar2 + 0x30) = pcVar3;
    return;
  }
  return;
}



/* Entry: 1080ca778; end: 1080ca7cb;  */

void FUN_1080ca778(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_1 + 0x28) = lVar1;
  lVar1 = *(long *)(param_2 + 0x30);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  *(long *)(param_1 + 0x30) = lVar1;
  return;
}



/* Entry: 1080ca7cc; end: 1080ca7f3;  */

undefined8 FUN_1080ca7cc(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1080cb94c(param_1 + 0x30);
  func_0x0001080cca28(param_1 + 0x28);
  FUN_1080cb940();
  return unaff_x19;
}



/* Entry: 1080ca7f4; end: 1080ca87b;  */

undefined8 * FUN_1080ca7f4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  func_0x0001080cc9fc();
  FUN_1080c9f70(param_1,param_2);
  *param_1 = &PTR_FUN_110a1e390;
  lVar1 = *param_3;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[8] = lVar1;
  func_0x00010b980304(param_1 + 9,param_2);
  func_0x0001080cc8a0();
  return param_1;
}



/* Entry: 1080ca87c; end: 1080ca8bb;  */

undefined8 * FUN_1080ca87c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e390;
  func_0x00010b980378(param_1 + 9);
  func_0x000104bd5214(param_1 + 8);
  *param_1 = &PTR_DAT_110a1e270;
  func_0x00010b980378(param_1 + 6);
  *param_1 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ca8bc; end: 1080ca8bf;  */

undefined8 * FUN_1080ca8bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e390;
  func_0x00010b980378(param_1 + 9);
  func_0x000104bd5214(param_1 + 8);
  *param_1 = &PTR_DAT_110a1e270;
  func_0x00010b980378(param_1 + 6);
  *param_1 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ca8c0; end: 1080ca8d3;  */

void FUN_1080ca8c0(void)

{
  FUN_1080ca87c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ca8d4; end: 1080ca8e3;  */

undefined8 FUN_1080ca8d4(void)

{
  return 4;
}



/* Entry: 1080ca8e4; end: 1080caa23;  */

void FUN_1080ca8e4(undefined8 *param_1,long param_2)

{
  long *in_x5;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  long unaff_x21;
  undefined1 auStack_48 [8];
  
  lVar1 = *in_x5;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b9803d0(param_2 + 0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cca10();
  func_0x00010b981064(auStack_48,0);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010c09c720();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cc8d0();
  func_0x0001080cc9bc();
  func_0x0001080cc8a8();
  if (unaff_x21 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0001080cc924();
  }
  func_0x0001080cc8c8();
  func_0x0001080cc988();
  func_0x0001080cc95c();
  return;
}



/* Entry: 1080caa24; end: 1080cabe3;  */

void FUN_1080caa24(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long lVar3;
  long extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  puVar1 = auStack_80;
  puVar2 = param_2;
  func_0x0001080cc82c();
  uStack_38 = extraout_x8;
  func_0x0001080cc9fc();
  func_0x0001080cc954();
  FUN_1080cb9a8(auStack_80,param_1 + 0x20);
  func_0x0001080cca80();
  puStack_60 = param_2;
  func_0x0001080cc954();
  auStack_48[0] = 0;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(&uStack_70);
    puVar2 = &uStack_70;
    func_0x00010b99f560(&lStack_68);
    lStack_58 = 2;
    lStack_50 = lStack_68;
    lStack_68 = 0;
    func_0x0001080cca88();
    func_0x0001080cc9cc();
    func_0x000104bda960(lStack_68);
    func_0x0001003a8cb8(uStack_70);
    func_0x0001080cc8d0();
  }
  else {
    FUN_1080cb688(&lStack_68,&puStack_60);
    lStack_50 = lStack_68;
    if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        lStack_50 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    lStack_58 = 1;
    func_0x0001080cca88();
    func_0x0001080cc9cc();
    FUN_1080cb914(0);
    func_0x0001080cb8c4(lStack_68);
  }
  func_0x0001080cb6c4(&lStack_58,auStack_80);
  if (lStack_58 != 0) {
    func_0x0001080cca04();
    puVar2 = auStack_48;
    (*extraout_x8_01)();
  }
  FUN_1080cb8d0(&lStack_58);
  func_0x0001080cb554(auStack_48);
  func_0x0001080cc898();
  _objc_release(puStack_60);
  func_0x0001080cba7c(auStack_80);
  func_0x0001080cc898();
  func_0x0001080cc8a0();
  func_0x0001080cc800(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001003a8cb8(uStack_70);
    func_0x0001080cc8d0();
    func_0x0001080cb554(auStack_48);
    func_0x0001080cc898();
    _objc_release(puStack_60);
    func_0x0001080cba7c();
    func_0x0001080cc898();
    func_0x0001080cc8a0();
    func_0x0001080cc9d4();
    lVar3 = puVar2[4];
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        lVar3 = extraout_x8_02;
      } while (extraout_w11_00 != 0);
    }
    *(long *)(puVar1 + 0x20) = lVar3;
    return;
  }
  return;
}



/* Entry: 1080cabe4; end: 1080cac17;  */

void FUN_1080cabe4(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_1 + 0x20) = lVar1;
  return;
}



/* Entry: 1080cac18; end: 1080cac37;  */

void FUN_1080cac18(undefined8 *param_1)

{
  FUN_1080ca278();
  *param_1 = &PTR_FUN_110a1e410;
  return;
}



/* Entry: 1080cac38; end: 1080cac3b;  */

undefined8 * FUN_1080cac38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1e270;
  func_0x00010b980378(param_1 + 6);
  *param_1 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080cac3c; end: 1080cac4f;  */

void FUN_1080cac3c(void)

{
  FUN_1080ca0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cac50; end: 1080cac57;  */

undefined8 FUN_1080cac50(void)

{
  return 0;
}



/* Entry: 1080cac58; end: 1080cad8b;  */

void FUN_1080cac58(undefined8 *param_1)

{
  long *in_x5;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  long unaff_x21;
  undefined1 auStack_48 [8];
  
  lVar1 = *in_x5;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  FUN_1080ca298();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cca10();
  func_0x00010b981064(auStack_48,0);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010c09af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080cc8d0();
  func_0x0001080cc9bc();
  func_0x0001080cc8a8();
  if (unaff_x21 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0001080cc924();
  }
  func_0x0001080cc8c8();
  func_0x0001080cc988();
  func_0x0001080cc95c();
  return;
}



/* Entry: 1080cad8c; end: 1080caf4f;  */

void FUN_1080cad8c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 *puVar3;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long *plVar4;
  undefined8 auStack_a8 [2];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_38;
  
  func_0x0001080cc82c();
  uStack_38 = extraout_x8;
  func_0x0001080cc9fc();
  func_0x0001080cc954();
  if (param_3 == (undefined8 *)0x0) {
    func_0x00010b9813b8(&puStack_50,param_2);
    FUN_1080caf50(&puStack_60,&puStack_50);
    puVar1 = puStack_60;
    if ((puStack_60 != (undefined8 *)0x0) && (puStack_60[2] != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10 != 0);
    }
    func_0x0001080cbc54(puStack_60);
    puStack_60 = (undefined8 *)0x1;
    if ((puVar1 != (undefined8 *)0x0) && (puVar1[2] != 0)) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10_00 != 0);
    }
    puStack_58 = puVar1;
    func_0x0001080cca04();
    ppuVar2 = &puStack_60;
    (*extraout_x8_00)();
    func_0x0001080cc9b4();
    FUN_1080cb914(puVar1);
    if (puStack_50 != (undefined8 *)0x0) {
      func_0x0001080cc870();
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x20);
    puVar1 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(&uStack_68);
    func_0x00010b99f560(&puStack_60,&uStack_68);
    puStack_50 = (undefined8 *)0x2;
    puStack_48 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
    ppuVar2 = &puStack_50;
    (**(code **)(*plVar4 + 0x20))(plVar4);
    func_0x0001080cca20();
    func_0x000104bda960(puStack_60);
    func_0x0001003a8cb8(uStack_68);
    func_0x0001080cc8d0();
  }
  func_0x0001080cc898();
  func_0x0001080cc8a0();
  func_0x0001080cc800(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080cc9b4();
    FUN_1080cb914(puVar1);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined8 *)0x0) {
      func_0x0001080cc870();
    }
    func_0x0001080cc898();
    func_0x0001080cc8a0();
    func_0x0001080cc9d4();
    pcStack_78 = FUN_1080caf50;
    puStack_90 = param_3;
    puStack_88 = param_2;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x0001080cc814();
    FUN_1080cbaa0(auStack_a8);
    *param_2 = auStack_a8[0];
    func_0x0001080cc800(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_110a1e490;
      puVar3 = *ppuVar2;
      if ((puVar3 != (undefined8 *)0x0) && (puVar3[2] != 0)) {
        do {
          func_0x0001080cc8d8();
          puVar3 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      puVar1[3] = puVar3;
      return;
    }
    return;
  }
  return;
}



/* Entry: 1080caf50; end: 1080caf8b;  */

void FUN_1080caf50(undefined8 *param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001080cc814();
  FUN_1080cbaa0(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001080cc800(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_110a1e490;
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    param_1[3] = lVar1;
    return;
  }
  return;
}



/* Entry: 1080caf8c; end: 1080cafc7;  */

void FUN_1080caf8c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1e490;
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[3] = lVar1;
  return;
}



/* Entry: 1080cafc8; end: 1080cb003;  */

undefined8 * FUN_1080cafc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e490;
  func_0x000104bd5214(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080cb004; end: 1080cb007;  */

undefined8 * FUN_1080cb004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e490;
  func_0x000104bd5214(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080cb008; end: 1080cb01b;  */

void FUN_1080cb008(void)

{
  FUN_1080cafc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cb01c; end: 1080cb01f;  */

undefined8 FUN_1080cb01c(void)

{
  return 1;
}



/* Entry: 1080cb020; end: 1080cb16f;  */

void FUN_1080cb020(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  plVar6 = puVar3 + 1;
  *plVar6 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a1e5e8;
  FUN_1080cbe58(&puStack_70,param_3);
  puVar5 = puVar3 + 3;
  *puVar5 = &PTR_DAT_110d76a50;
  puVar3[4] = 0;
  puVar3[5] = 0;
  func_0x0001080cc8f0();
  *puVar5 = &PTR_DAT_110a1e638;
  lVar4 = *(long *)(param_2 + 0x18);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar3[9] = lVar4;
  lVar4 = *param_4;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar3[10] = lVar4;
  if ((puVar3[5] == 0) || (*(long *)(puVar3[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_70 = puVar5;
    puStack_68 = puVar3;
    func_0x0001003a8180(puVar3 + 4,&puStack_70);
    func_0x0001080cc998();
    if (puVar3[5] == 0) goto LAB_1080cb138;
  }
  do {
    func_0x0001080cc83c();
  } while (extraout_w10 != 0);
LAB_1080cb138:
  *param_1 = puVar5;
  func_0x0001080cc7f4(puVar5);
  return;
}



/* Entry: 1080cb170; end: 1080cb2db;  */

undefined8 * FUN_1080cb170(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w11;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001080cc82c();
  uStack_38 = extraout_x8;
  _objc_retain();
  puStack_60 = param_1;
  func_0x0001080cca80();
  uStack_48 = 0;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(&uStack_70);
    func_0x00010b99f560(&lStack_68,&uStack_70);
    uStack_58 = 2;
    lStack_50 = lStack_68;
    lStack_68 = 0;
    func_0x0001080cca34();
    func_0x0001080cb554(&uStack_58);
    func_0x000104bda960(lStack_68);
    func_0x0001003a8cb8(uStack_70);
    func_0x0001080cc8a8();
  }
  else {
    func_0x0001080cb310(&lStack_68,&puStack_60);
    lStack_50 = lStack_68;
    if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
      do {
        func_0x0001080cc8d8();
        lStack_50 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    uStack_58 = 1;
    func_0x0001080cca34();
    func_0x0001080cb554(&uStack_58);
    FUN_1080cb914(0);
    func_0x0001080cb578(lStack_68);
  }
  if (*param_3 != 0) {
    func_0x0001080cca04();
    (*extraout_x8_01)();
  }
  func_0x0001080cc9cc();
  func_0x0001080cc8a0();
  puVar1 = puStack_60;
  _objc_release();
  func_0x0001080cc800(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001003a8cb8(uStack_70);
    func_0x0001080cc8a8();
    func_0x0001080cc9cc();
    func_0x0001080cc8a0();
    puVar1 = puStack_60;
    _objc_release();
    func_0x0001080cc910();
    FUN_1080cb94c(puVar1 + 2);
    FUN_1080cb920(puVar1 + 1);
    _objc_release(*puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1080cb2dc; end: 1080cb38f;  */

undefined8 * FUN_1080cb2dc(undefined8 *param_1)

{
  FUN_1080cb94c(param_1 + 2);
  FUN_1080cb920(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 1080cb390; end: 1080cb3af;  */

void FUN_1080cb390(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1080cb3b0(&uStack_11,param_1);
  return;
}



/* Entry: 1080cb3b0; end: 1080cb41f;  */

void FUN_1080cb3b0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  int extraout_w11;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0001080cc814();
  FUN_1080cb430(auStack_40,1);
  FUN_1080cb480(uStack_30);
  func_0x0001080cc964();
  FUN_1080cb420();
  FUN_1080cb544(auStack_40);
  func_0x0001080cc800(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1080cb544();
  func_0x0001080cc8e8();
  func_0x0001080ccaa0();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(puVar1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cb420; end: 1080cb42f;  */

void FUN_1080cb420(long param_1,long param_2)

{
  int extraout_w11;
  
  func_0x0001080ccaa0();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cb430; end: 1080cb457;  */

long FUN_1080cb430(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080cb458();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080cb458; end: 1080cb47f;  */

undefined8 * FUN_1080cb458(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    puVar1 = (undefined8 *)(param_2 * 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1e6e0;
  param_1[1] = 0;
  func_0x0001080cb4dc(param_1 + 3);
  return param_1;
}



/* Entry: 1080cb480; end: 1080cb4bb;  */

undefined8 * FUN_1080cb480(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1e6e0;
  param_1[1] = 0;
  func_0x0001080cb4dc(param_1 + 3);
  return param_1;
}



/* Entry: 1080cb4bc; end: 1080cb4bf;  */

void FUN_1080cb4bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e6e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080cb4c0; end: 1080cb4d3;  */

void FUN_1080cb4c0(void)

{
  func_0x0001080cb4e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cb4d4; end: 1080cb4ef;  */

void FUN_1080cb4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080cc8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080cb4f0; end: 1080cb543;  */

void FUN_1080cb4f0(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cb544; end: 1080cb583;  */

void FUN_1080cb544(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080cb584; end: 1080cb5d7;  */

void FUN_1080cb584(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x10);
  FUN_1080de330(uVar1,*(undefined8 **)(param_1 + 0x10) + 1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1080cb170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080cb5d8; end: 1080cb5f7;  */

void FUN_1080cb5d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1080cb2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080cb5f8; end: 1080cb5fb;  */

void FUN_1080cb5f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080cb5fc; end: 1080cb687;  */

void FUN_1080cb5fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a1e568;
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  uVar3 = *puVar4;
  _objc_retain(uVar3);
  *puVar1 = uVar3;
  lVar2 = puVar4[1];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[1] = lVar2;
  lVar2 = puVar4[2];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080cc8d8();
      lVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[2] = lVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1080cb688; end: 1080cb6ff;  */

void FUN_1080cb688(undefined8 *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001080cc814();
  FUN_1080cb700(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001080cc800(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8[1] = lVar1;
    if (lVar1 != 0) {
      *extraout_x8 = *param_1;
    }
  }
  return;
}



/* Entry: 1080cb700; end: 1080cb71f;  */

void FUN_1080cb700(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1080cb720(&uStack_11,param_1);
  return;
}



/* Entry: 1080cb720; end: 1080cb78f;  */

void FUN_1080cb720(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  int extraout_w11;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0001080cc814();
  FUN_1080cb7a0(auStack_40,1);
  FUN_1080cb7f0(uStack_30);
  func_0x0001080cc964();
  FUN_1080cb790();
  FUN_1080cb8b4(auStack_40);
  func_0x0001080cc800(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1080cb8b4();
  func_0x0001080cc8e8();
  func_0x0001080ccaa0();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(puVar1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cb790; end: 1080cb79f;  */

void FUN_1080cb790(long param_1,long param_2)

{
  int extraout_w11;
  
  func_0x0001080ccaa0();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cb7a0; end: 1080cb7c7;  */

long FUN_1080cb7a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080cb7c8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080cb7c8; end: 1080cb7ef;  */

undefined8 * FUN_1080cb7c8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    puVar1 = (undefined8 *)(param_2 * 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1e730;
  param_1[1] = 0;
  func_0x0001080cb84c(param_1 + 3);
  return param_1;
}



/* Entry: 1080cb7f0; end: 1080cb82b;  */

undefined8 * FUN_1080cb7f0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1e730;
  param_1[1] = 0;
  func_0x0001080cb84c(param_1 + 3);
  return param_1;
}



/* Entry: 1080cb82c; end: 1080cb82f;  */

void FUN_1080cb82c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080cb830; end: 1080cb843;  */

void FUN_1080cb830(void)

{
  func_0x0001080cb854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cb844; end: 1080cb85f;  */

void FUN_1080cb844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080cc8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080cb860; end: 1080cb8b3;  */

void FUN_1080cb860(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cb8b4; end: 1080cb8cf;  */

void FUN_1080cb8b4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080cb8d0; end: 1080cb913;  */

void FUN_1080cb8d0(long param_1)

{
  func_0x0001080cca94();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 1080cb914; end: 1080cb91f;  */

void FUN_1080cb914(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080cb920; end: 1080cb93f;  */

void FUN_1080cb920(void)

{
  func_0x0001080cca28();
  FUN_1080cb940();
  return;
}



/* Entry: 1080cb940; end: 1080cb94b;  */

void FUN_1080cb940(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080cb94c; end: 1080cb96b;  */

void FUN_1080cb94c(void)

{
  func_0x0001080cca28();
  FUN_1080cb96c();
  return;
}



/* Entry: 1080cb96c; end: 1080cb977;  */

void FUN_1080cb96c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080cb978; end: 1080cb9a7;  */

undefined8 * FUN_1080cb978(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  int extraout_w10;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar1 = param_1, func_0x00010b9a5818(), ((ulong)puVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    puVar2 = &uStack_50;
    func_0x0001080cb9f8(&uStack_50,*puVar1);
    extraout_x8[1] = lStack_48;
    *extraout_x8 = uStack_50;
    if (lStack_48 != 0) {
      do {
        func_0x0001080cc83c();
      } while (extraout_w10 != 0);
    }
    FUN_1080cb8d0(&uStack_50);
    return puVar2;
  }
  return param_1;
}



/* Entry: 1080cb9a8; end: 1080cb9af;  */

void FUN_1080cb9a8(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001080cb9f8(&uStack_30,*param_2);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  FUN_1080cb8d0(&uStack_30);
  return;
}



/* Entry: 1080cb9b0; end: 1080cba9f;  */

void FUN_1080cb9b0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001080cb9f8(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001080cc83c();
    } while (extraout_w10 != 0);
  }
  FUN_1080cb8d0(&uStack_30);
  return;
}



/* Entry: 1080cbaa0; end: 1080cbabf;  */

void FUN_1080cbaa0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1080cbac0(&uStack_11,param_1);
  return;
}



/* Entry: 1080cbac0; end: 1080cbb2f;  */

void FUN_1080cbac0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  int extraout_w11;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0001080cc814();
  FUN_1080cbb40(auStack_40,1);
  FUN_1080cbb90(uStack_30);
  func_0x0001080cc964();
  FUN_1080cbb30();
  FUN_1080cbc44(auStack_40);
  func_0x0001080cc800(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1080cbc44();
  func_0x0001080cc8e8();
  func_0x0001080ccaa0();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(puVar1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cbb30; end: 1080cbb3f;  */

void FUN_1080cbb30(long param_1,long param_2)

{
  int extraout_w11;
  
  func_0x0001080ccaa0();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x0001080cc8d8();
      } while (extraout_w11 != 0);
    }
    func_0x0001080cc918();
    func_0x0001080cc998();
    return;
  }
  return;
}



/* Entry: 1080cbb40; end: 1080cbb67;  */

long FUN_1080cbb40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080cbb68();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080cbb68; end: 1080cbb8f;  */

undefined8 * FUN_1080cbb68(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    puVar1 = (undefined8 *)(param_2 * 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1e598;
  param_1[1] = 0;
  func_0x00010b92fd74(param_1 + 3);
  return param_1;
}



/* Entry: 1080cbb90; end: 1080cbbc3;  */

undefined8 * FUN_1080cbb90(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1e598;
  param_1[1] = 0;
  func_0x00010b92fd74(param_1 + 3);
  return param_1;
}



/* Entry: 1080cbbc4; end: 1080cbbc7;  */

void FUN_1080cbbc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080cbbc8; end: 1080cbbdb;  */

void FUN_1080cbbc8(void)

{
  func_0x0001080cbbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cbbdc; end: 1080cbbef;  */

void FUN_1080cbbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080cc8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


