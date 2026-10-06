/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d1c6b0; end: 106d1c773; -[SCGalleryOperaActionHandlerSession _handleActionMenuDeleteForPage:] */

void FUN_106d1c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcff80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1c774; end: 106d1c7bb;  */

void FUN_106d1c774(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfdc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1c7bc; end: 106d1c957; -[SCGalleryOperaActionHandlerSession _asyncHandleActionMenuDeleteForOperaSnap:] */

void FUN_106d1c7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106d1c958;
  puStack_80 = &UNK_110976738;
  uStack_78 = param_1;
  _objc_copyWeak(auStack_70,auStack_68);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106d1caf4;
  puStack_a8 = &UNK_110976768;
  _objc_copyWeak(auStack_a0,auStack_68);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106d1cc50;
  puStack_d8 = &UNK_110976798;
  uStack_d0 = param_1;
  _objc_copyWeak(auStack_c8,auStack_68);
  _objc_copyWeak(auStack_f8,auStack_68);
  func_0x00010c0bfe60(param_3);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1c958; end: 106d1ca43;  */

void FUN_106d1c958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010bdcfd40(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1ca44; end: 106d1caf3;  */

void FUN_106d1ca44(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_DAT_1126a4ec0;
  if (param_1 != 0) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010010fab4(param_2,puVar2);
    lVar1 = param_2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_2);
    if (lVar1 != 0) {
      func_0x00010be28200(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1caf4; end: 106d1cc0f;  */

void FUN_106d1caf4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_DAT_1126a4ec0;
  if (lVar3 != 0) {
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010010fab4(param_2,puVar2);
    lVar1 = param_2;
    if ((int)lVar4 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_2);
    if (lVar1 != 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106d1cc10;
      puStack_58 = &UNK_110841fb0;
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      _objc_retain(param_2);
      lStack_50 = lVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      _objc_release(lStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1cc10; end: 106d1cc4f;  */

void FUN_106d1cc10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be28200(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d1cc50; end: 106d1cd73;  */

void FUN_106d1cc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  func_0x00010bdcfd40(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1cd74; end: 106d1ce0f;  */

void FUN_106d1cd74(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_DAT_1126a4ec0;
  if (param_1 != 0) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010010fab4(param_2,puVar2);
    lVar1 = param_2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_2);
    if (lVar1 != 0) {
      func_0x00010be28200(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1ce10; end: 106d1cefb;  */

void FUN_106d1ce10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010bdcfd40(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1cefc; end: 106d1cfab;  */

void FUN_106d1cefc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_DAT_1126a4ec0;
  if (param_1 != 0) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010010fab4(param_2,puVar2);
    lVar1 = param_2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_2);
    if (lVar1 != 0) {
      func_0x00010be28200(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1cfac; end: 106d1d343; -[SCGalleryOperaActionHandlerSession _handleDeleteForGalleryItem:snaps:] */

void FUN_106d1cfac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined **unaff_x26;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1e8 [8];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  undefined1 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_70;
  
  ppuVar8 = &puStack_190;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar7 = param_4;
    func_0x00010bf529e0();
    puVar9 = PTR_DAT_1126a4ec8;
    if (lVar7 == 0) {
      unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_f8 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      _objc_retain(param_3);
      lVar3 = param_3;
      func_0x00010010fab4(param_3,puVar9);
      lVar7 = param_3;
      if ((int)lVar3 == 0) {
        lVar7 = 0;
      }
      _objc_retain(lVar7);
      _objc_release(param_3);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      _objc_retain(param_4);
      lVar3 = param_4;
      func_0x00010bf52a60();
      unaff_x22 = PTR____NSArray0__struct_11034ab48;
      if (lVar3 != 0) {
        lVar11 = *plStack_130;
        do {
          lVar12 = 0;
          puVar9 = unaff_x22;
          do {
            if (*plStack_130 != lVar11) {
              _objc_enumerationMutation(param_4);
            }
            uVar4 = *(undefined8 *)(lStack_138 + lVar12 * 8);
            func_0x00010b6f8630(uVar4,lVar7);
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = puVar9;
            func_0x00010bf09f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(uVar4);
            lVar12 = lVar12 + 1;
            puVar9 = unaff_x22;
          } while (lVar3 != lVar12);
          lVar3 = param_4;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(param_4);
      _objc_release(lVar7);
      unaff_x23 = (undefined *)0x0;
    }
    uVar5 = *(ulong *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf5f400();
    _objc_release(uVar5);
    iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
    FUN_106dbdcd8();
    if ((iVar2 == 0) || (*(long *)(param_1 + 0x1d0) == 0)) {
      uVar10 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x1d8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 0;
      if (uVar6 < 0x10) {
        uVar1 = 0xf1f8 >> (ulong)((uint)uVar6 & 0x1f);
      }
      uVar10 = 0;
      if (lVar7 != 0) {
        uVar10 = uVar1;
      }
      _objc_release();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = uVar4;
    func_0x00010c2909a0();
    _objc_release(uVar4);
    _objc_initWeak(auStack_148,param_1);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_106d1d344;
    puStack_178 = &UNK_11087b968;
    _objc_copyWeak(auStack_160,auStack_148);
    _objc_retain(unaff_x23);
    puStack_170 = unaff_x23;
    _objc_retain(unaff_x22);
    uStack_150 = (undefined1)unaff_x25;
    puStack_168 = unaff_x22;
    uStack_158 = uVar6;
    _objc_retainBlock();
    if ((uVar10 & 1) == 0) {
      (**(code **)((long)ppuVar8 + 0x10))(ppuVar8);
    }
    else {
      param_1 = *(long *)(param_1 + 0x1d8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106d244f8();
      _objc_release(param_1);
    }
    _objc_release(ppuVar8);
    _objc_release(puStack_168);
    _objc_release(puStack_170);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_148);
    _objc_release(unaff_x22);
    _objc_release(unaff_x23);
    unaff_x24 = (undefined1 *)ppuVar8;
    unaff_x26 = &puStack_190;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x30));
    _objc_destroyWeak(auStack_148);
    lVar3 = param_3;
    __Unwind_Resume();
    pcStack_198 = FUN_106d1d344;
    lVar7 = lVar3 + 0x30;
    puStack_1e0 = (undefined1 *)unaff_x26;
    uStack_1d8 = unaff_x25;
    puStack_1d0 = unaff_x24;
    puStack_1c8 = unaff_x23;
    puStack_1c0 = unaff_x22;
    lStack_1b8 = param_1;
    lStack_1b0 = param_4;
    lStack_1a8 = param_3;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_loadWeakRetained();
    if (lVar7 != 0) {
      puVar9 = PTR_PTR_1126b2218;
      _objc_alloc(PTR_PTR_1126b2218);
      lVar11 = lVar7 + 0x20;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c016ea0(puVar9);
      _objc_release(lVar11);
      _objc_copyWeak(auStack_1e8,lVar3 + 0x30);
      func_0x00010c142b00(puVar9);
      _objc_destroyWeak(auStack_1e8);
      _objc_release(puVar9);
    }
    _objc_release(lVar7);
    return;
  }
  return;
}



/* Entry: 106d1d344; end: 106d1d483;  */

void FUN_106d1d344(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b2218;
    _objc_alloc(PTR_PTR_1126b2218);
    lVar3 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c016ea0(puVar2);
    _objc_release(lVar3);
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    func_0x00010c142b00(puVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106d1d484; end: 106d1d4d3;  */

void FUN_106d1d484(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_1 + 0x240;
      _objc_loadWeakRetained(lVar1);
      func_0x00010beee640();
      _objc_release(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d1d4d4; end: 106d1d643; -[SCGalleryOperaActionHandlerSession _handleActionMenuSendForPage:fromActionMenu:params:quickPostType:] */

void FUN_106d1d4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  byte bStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    puVar1 = PTR_PTR_1126b5b28;
    func_0x00010c15b3c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010c15c9e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  bStack_60 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(puVar1);
  uStack_68 = param_6;
  func_0x00010bdcff80(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1d644; end: 106d1d6a3;  */

void FUN_106d1d644(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfe60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1d6a4; end: 106d1d947; -[SCGalleryOperaActionHandlerSession _asyncHandleActionMenuSendFromActionMenu:page:params:operaSnap:event:quickPostType:] */

void FUN_106d1d6a4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined1 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  _objc_retain(param_6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0f5ec0();
  _objc_release(uVar3);
  lVar4 = 0;
  if ((param_8 == 2) && ((int)uVar2 != 0)) {
    _objc_retain(param_1);
    lVar4 = param_1;
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106d1d948;
  puStack_b0 = &UNK_1109767f8;
  lStack_a8 = param_1;
  _objc_retain(param_7);
  uStack_a0 = param_7;
  uStack_80 = param_3;
  _objc_retain(param_5);
  uStack_98 = param_5;
  lStack_88 = param_8;
  _objc_retain(lVar4);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_106d1d9dc;
  puStack_108 = &UNK_110976828;
  lStack_100 = param_1;
  uStack_f8 = param_4;
  lStack_90 = lVar4;
  _objc_retain(param_7);
  uStack_f0 = param_7;
  uStack_d0 = param_3;
  _objc_retain(param_5);
  uStack_e8 = param_5;
  lStack_d8 = param_8;
  _objc_retain(lVar4);
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x106d1dc54;
  puStack_158 = &UNK_110976858;
  lStack_150 = param_1;
  lStack_e0 = lVar4;
  _objc_retain(param_7);
  uStack_148 = param_7;
  uStack_128 = param_3;
  _objc_retain(param_5);
  uStack_140 = param_5;
  lStack_130 = param_8;
  _objc_retain(lVar4);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_106d1dd24;
  puStack_1a8 = &UNK_1109767f8;
  lStack_1a0 = param_1;
  uStack_198 = param_7;
  lStack_190 = lVar4;
  uStack_188 = param_5;
  lStack_180 = param_8;
  uStack_178 = param_3;
  lStack_138 = lVar4;
  _objc_retain(param_5);
  _objc_retain(lVar4);
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010c0bfe60(param_6,param_2,&puStack_c8,&puStack_120,&puStack_170,&puStack_1c0);
  _objc_release(param_6);
  _objc_release(uStack_188);
  _objc_release(lStack_190);
  _objc_release(uStack_198);
  _objc_release(lStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(lStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(lStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_5);
  _objc_release(lVar4);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d1d948; end: 106d1d9db;  */

void FUN_106d1d948(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c07b240();
    func_0x00010be7e680(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106d1d9dc; end: 106d1dd23;  */

void FUN_106d1d9dc(double param_1,long param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  lVar1 = param_3;
  func_0x000107f6ff64();
  if ((int)lVar1 == 0) {
    if (param_3 == 0) goto LAB_106d1dc10;
    lVar1 = *(long *)(param_2 + 0x28);
    FUN_106d4ac3c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar2 = param_3;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    uVar9 = *(ulong *)(param_2 + 0x30);
    puVar3 = PTR_PTR_1126b2d30;
    func_0x00010bf52060(PTR_PTR_1126b2d30);
    func_0x00010c0720c0();
    if ((uVar9 & 1) == 0) {
      func_0x00010bdf32e0();
    }
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c15d960();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_2 + 0x20) + 0x20;
    _objc_loadWeakRetained();
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    puVar4 = PTR_PTR_1126b2cf0;
    func_0x00010bf4f080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar3;
    func_0x00010c10e1c0(uVar8);
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(puVar3);
    _objc_release(uVar8);
    _objc_release(lVar1);
  }
  else {
    lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    func_0x000109127d28();
    func_0x000107f6fef4(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38));
    puVar7 = (undefined *)(*(long *)(param_2 + 0x20) + 0x20);
    _objc_loadWeakRetained();
    if (lVar5 <= (long)param_1) {
      lVar5 = (long)param_1;
    }
    func_0x000108df9e90();
  }
  _objc_release(puVar7);
LAB_106d1dc10:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(lVar5);
    _objc_retain(param_4);
    lVar1 = lVar5;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar8 = *(undefined8 *)(param_3 + 0x20);
      lVar1 = lVar5;
      func_0x00010bfb1920(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b240();
      func_0x00010be7e680(uVar8);
      _objc_release(lVar1);
    }
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 106d1dd24; end: 106d1df33;  */

void FUN_106d1dd24(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    func_0x00010be877c0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = param_3;
    func_0x00010bf977c0();
    uVar1 = 0;
    if ((int)uVar2 == 0x28) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
    }
    _objc_retain(uVar1);
    if (*(long *)(param_1 + 0x40) != 2) {
      func_0x00010be4c7c0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_60,uVar1);
    _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_90,auStack_58);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_70 = *(undefined1 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_88,auStack_60);
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_3);
    func_0x00010be8e3a0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1df34; end: 106d1dfff;  */

void FUN_106d1df34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  func_0x00010c07b240();
  func_0x00010be7e680(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d1e000; end: 106d1e197; -[SCGalleryOperaActionHandlerSession _presentSendViewControllerForGallerySnap:actionMenuEvent:fromActionMenu:params:quickPostType:sendControllerDelegate:quickPostFlowDelegate:isPrivate:] */

void FUN_106d1e000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_4);
  uStack_70 = param_5;
  _objc_retain(param_6);
  uStack_78 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_9);
  uStack_6f = param_10;
  func_0x00010bdcfd40(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1e198; end: 106d1e2f3;  */

void FUN_106d1e198(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b2d30;
    func_0x00010bf52060(PTR_PTR_1126b2d30);
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      func_0x00010bdf32e0();
    }
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    func_0x00010be1ca80(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1e2f4; end: 106d1e44b;  */

void FUN_106d1e2f4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar1 + lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15d960(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c1607a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_1126b2cf0;
    func_0x00010bf4f080(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e1c0(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1e44c; end: 106d1e563; -[SCGalleryOperaActionHandlerSession _handleActionMenuCopyLinkForPage:fromActionMenu:params:quickPostType:] */

void FUN_106d1e44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_58 = param_6;
  func_0x00010bdcff80(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1e564; end: 106d1e5fb;  */

void FUN_106d1e564(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf52060(PTR_PTR_1126b2d30);
  func_0x00010bdcfe60(param_1);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1e5fc; end: 106d1e6bf; -[SCGalleryOperaActionHandlerSession _handleBoomboxForPage:] */

void FUN_106d1e5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcffa0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1e6c0; end: 106d1e707;  */

void FUN_106d1e6c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfe80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1e708; end: 106d1e80b; -[SCGalleryOperaActionHandlerSession _exposeBoomboxScopeForSnapIds:entryIds:initialSnapId:] */

void FUN_106d1e708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf23d00(uVar3,param_2,puVar1,param_1,param_4,param_3,param_5,0x3a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x140),param_2,uVar3);
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee6a0();
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d1e80c; end: 106d1ea07; -[SCGalleryOperaActionHandlerSession _asyncHandleBoomboxForSnap:] */

void FUN_106d1e80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_88,param_1);
    puVar8 = PTR_PTR_1126b2d30;
    func_0x00010bf1f540(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bdcfd40(param_1);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c13a560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0e0ea0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106d1ea08;
    puStack_68 = &UNK_110860d58;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lVar7 = lVar6;
    uStack_58 = param_3;
    func_0x00010c25ff60(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d1ea08; end: 106d1ebb7;  */

void FUN_106d1ea08(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        uVar4 = uVar7;
        func_0x00010b5fa528();
        if ((int)uVar4 != 0) {
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = puVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)puVar3;
    func_0x00010be0cbc0(uVar7);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(puVar6);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_2 != 0) {
    lVar2 = lVar5;
    func_0x00010bf97200(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2268e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)puVar6;
    func_0x00010c241220(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0cbc0(param_2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106d1ebb8; end: 106d1ec93;  */

void FUN_106d1ebb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2268e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0cbc0(param_1);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1ec94; end: 106d1edc7; -[SCGalleryOperaActionHandlerSession _handleMusicRecommendationSelectedForPage:params:] */

void FUN_106d1ec94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(lVar1);
    func_0x00010bdcff80(param_1);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1edc8; end: 106d1ee1b;  */

void FUN_106d1edc8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1ee1c; end: 106d1ef83; -[SCGalleryOperaActionHandlerSession _asyncHandleMusicRecommendationSelectedForPage:operaSnap:musicSelection:] */

void FUN_106d1ee1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(&PTR____CFConstantStringClassReference_110e878d8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d1ef84;
  puStack_88 = &UNK_110976978;
  uStack_80 = param_1;
  _objc_retain(&PTR____CFConstantStringClassReference_110e878d8);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e878d8;
  uStack_68 = 2;
  _objc_retain(param_5);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106d1f128;
  puStack_c8 = &UNK_1109769f8;
  uStack_c0 = param_1;
  uStack_70 = param_5;
  _objc_retain(&PTR____CFConstantStringClassReference_110e878d8);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e878d8;
  uStack_a8 = 2;
  _objc_retain(param_5);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_106d1f3b8;
  puStack_108 = &UNK_110976978;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e878d8;
  uStack_e8 = 2;
  uStack_100 = param_1;
  uStack_f0 = param_5;
  uStack_b0 = param_5;
  _objc_retain(param_5);
  func_0x00010c0bfe60(param_4,param_2,&puStack_a0,&PTR___NSConcreteGlobalBlock_1109769a8,&puStack_e0
                      ,&puStack_120);
  _objc_release(uStack_f0);
  _objc_release(ppuStack_f8);
  _objc_release(uStack_b0);
  _objc_release(ppuStack_b8);
  _objc_release(uStack_70);
  _objc_release(ppuStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d1ef84; end: 106d1f087;  */

void FUN_106d1ef84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010bdcfd40(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1f088; end: 106d1f123;  */

void FUN_106d1f088(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be28be0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1f124; end: 106d1f127;  */

void FUN_106d1f124(void)

{
  return;
}



/* Entry: 106d1f128; end: 106d1f2e3;  */

void FUN_106d1f128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010bdcfd40(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1f2e4; end: 106d1f3b7;  */

void FUN_106d1f2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    func_0x00010be28be0(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1f3b8; end: 106d1f4bb;  */

void FUN_106d1f3b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010bdcfd40(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1f4bc; end: 106d1f557;  */

void FUN_106d1f4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be28be0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1f558; end: 106d1f673; -[SCGalleryOperaActionHandlerSession _handleRemixForPage:] */

void FUN_106d1f558(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdcff80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1f674; end: 106d1f6c7;  */

void FUN_106d1f674(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1f6c8; end: 106d1f93f; -[SCGalleryOperaActionHandlerSession _asyncHandleRemixForPage:operaSnap:] */

void FUN_106d1f6c8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d1f940;
  puStack_88 = &UNK_110871898;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar1 = &puStack_a0;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  func_0x00010c0bfe60(param_4);
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee6a0();
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1f940; end: 106d1f9e3;  */

void FUN_106d1f940(long param_1,undefined1 param_2,undefined1 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d1f9e4;
  puStack_48 = &UNK_11086a898;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = param_2;
  uStack_37 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106d1f9e4; end: 106d1fa8b;  */

void FUN_106d1f9e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((*(byte *)(param_1 + 0x28) & 1) == 0) && ((*(byte *)(param_1 + 0x29) & 1) == 0)) {
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x000108df7438();
      _objc_release(lVar2);
    }
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x2) {
      lVar2 = lVar1 + 0x30;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c13d1c0();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d1fa8c; end: 106d1fbff;  */

void FUN_106d1fa8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860();
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15ffa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5f400();
  uVar6 = param_3;
  func_0x00010bf3fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10dea0(uVar7);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106d1fc00; end: 106d1fcf7;  */

void FUN_106d1fc00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x000107f6ff64(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  if ((int)uVar3 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x108);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15ffa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10de80(lVar1);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x000109127d28();
    func_0x000107f6fef4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    lVar1 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x000108df9e90();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1fcf8; end: 106d1fcfb;  */

void FUN_106d1fcf8(void)

{
  return;
}



/* Entry: 106d1fcfc; end: 106d1fe6f;  */

void FUN_106d1fcfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860();
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15ffa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5f400();
  uVar6 = param_3;
  func_0x00010bf3fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10dea0(uVar7);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106d1fe70; end: 106d1ff8b; -[SCGalleryOperaActionHandlerSession _handleAIRemixForPage:] */

void FUN_106d1fe70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdcff80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1ff8c; end: 106d1ffdf;  */

void FUN_106d1ff8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1ffe0; end: 106d20283; -[SCGalleryOperaActionHandlerSession _asyncHandleAIRemixForPage:operaSnap:] */

void FUN_106d1ffe0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d20284;
  puStack_88 = &UNK_110871898;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar1 = &puStack_a0;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar1);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  func_0x00010c0bfe60(param_4);
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee6a0();
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d20284; end: 106d20327;  */

void FUN_106d20284(long param_1,undefined1 param_2,undefined1 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d20328;
  puStack_48 = &UNK_11086a898;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = param_2;
  uStack_37 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106d20328; end: 106d203cf;  */

void FUN_106d20328(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((*(byte *)(param_1 + 0x28) & 1) == 0) && ((*(byte *)(param_1 + 0x29) & 1) == 0)) {
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x000108df7438();
      _objc_release(lVar2);
    }
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x2) {
      lVar2 = lVar1 + 0x30;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c13d1c0();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d203d0; end: 106d2054b;  */

void FUN_106d203d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10aec0(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d2054c; end: 106d2055f;  */

void FUN_106d2054c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d2055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 106d20560; end: 106d2060b;  */

void FUN_106d20560(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10aec0(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d2060c; end: 106d2063b; -[SCGalleryOperaActionHandlerSession _getSnapDocFromData:] */

void FUN_106d2060c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x000108020568(param_3,&uStack_18);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d2063c; end: 106d206ff; -[SCGalleryOperaActionHandlerSession _handleToggleGenAIContextCardForPage:] */

void FUN_106d2063c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcff80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d20700; end: 106d2074f;  */

void FUN_106d20700(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2a240(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d20750; end: 106d207bf; -[SCGalleryOperaActionHandlerSession _handleGenAIContextCardWithGalleryOperaSnap:] */

void FUN_106d20750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106d207cc;
  puStack_20 = &UNK_110975ee8;
  uStack_18 = param_1;
  func_0x00010c0bfe60(param_3,param_2,&PTR___NSConcreteGlobalBlock_110976af8,
                      &PTR___NSConcreteGlobalBlock_110976b18,&PTR___NSConcreteGlobalBlock_110976b38,
                      &puStack_38);
  return;
}



/* Entry: 106d207c0; end: 106d207cb;  */

void FUN_106d207c0(void)

{
  return;
}



/* Entry: 106d207cc; end: 106d209eb;  */

void FUN_106d207cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_106d2083c;
  uVar1 = param_3;
  func_0x00010bf3d240();
  if ((uVar1 & 0x7b40) == 0) {
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x188) == 0) goto LAB_106d2083c;
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar9 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c038f40(puVar2);
    _objc_release(lVar9);
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x188);
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c080120();
    if ((uVar5 & 1) == 0) {
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
LAB_106d20964:
      lVar9 = *(long *)(param_1 + 0x20) + 400;
      _objc_loadWeakRetained();
      lVar6 = lVar9;
      func_0x00010c071800();
      _objc_release(lVar9);
      if ((int)lVar6 == 0) goto LAB_106d20834;
      puVar7 = (undefined *)(*(long *)(param_1 + 0x20) + 0x198);
      _objc_loadWeakRetained(puVar7);
      puVar8 = puVar7;
      func_0x00010bf24080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      lVar9 = 400;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x20) + 0x180;
      _objc_loadWeakRetained();
      lVar6 = lVar9;
      func_0x00010c071800();
      _objc_release(lVar9);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
      if ((int)lVar6 == 0) goto LAB_106d20964;
      puVar8 = PTR_PTR_1126b3470;
      _objc_alloc(PTR_PTR_1126b3470);
      func_0x00010c057420();
      lVar9 = 0x180;
    }
    lVar9 = *(long *)(param_1 + 0x20) + lVar9;
    _objc_loadWeakRetained(lVar9);
    func_0x00010bf9d620();
    _objc_release(lVar9);
    _objc_release(puVar8);
  }
  else {
    puVar2 = (undefined *)(*(long *)(param_1 + 0x20) + 0x240);
    _objc_loadWeakRetained(puVar2);
    func_0x00010beee660();
  }
LAB_106d20834:
  _objc_release(puVar2);
LAB_106d2083c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d209ec; end: 106d20a67; -[SCGalleryOperaActionHandlerSession plusManagementDidDismiss] */

void FUN_106d209ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x180;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x180;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d20a68; end: 106d20ae3; -[SCGalleryOperaActionHandlerSession plusSubscribeDidDismiss] */

void FUN_106d20a68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 400;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 400;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d20ae4; end: 106d20bbf; -[SCGalleryOperaActionHandlerSession _handleToggleMEOForPage:] */

void FUN_106d20ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3220;
    _objc_alloc(PTR_PTR_1126c3220);
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c016880(puVar3,param_2,lVar4,param_1);
    _objc_release(lVar4);
    param_1 = param_1 + 0x160;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010beccd20(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d20bc0; end: 106d20c83; -[SCGalleryOperaActionHandlerSession _toggleMEOForPage:] */

void FUN_106d20bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcff80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d20c84; end: 106d20ccb;  */

void FUN_106d20c84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcffe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d20ccc; end: 106d20d53; -[SCGalleryOperaActionHandlerSession _asyncToggleMEOForOperaSnap:] */

void FUN_106d20ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106d20d54;
  puStack_20 = &UNK_110975ee8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d20ed0;
  puStack_48 = &UNK_1108fdf00;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfe60(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_110976b58
                      ,&PTR___NSConcreteGlobalBlock_110976b78);
  return;
}



/* Entry: 106d20d54; end: 106d20e63;  */

void FUN_106d20d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c272a20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bdcfd40(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d20e64; end: 106d20ecf;  */

void FUN_106d20e64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c07b240();
    if ((int)uVar1 == 0) {
      func_0x00010be5b980(param_1);
    }
    else {
      func_0x00010be5b9a0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d20ed0; end: 106d20ee3;  */

void FUN_106d20ed0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__makePHAssetPrivate__112574968,param_2);
  return;
}



/* Entry: 106d20ee4; end: 106d2101f; -[SCGalleryOperaActionHandlerSession _makeEntryPublic:] */

void FUN_106d20ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c135d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106d21020; end: 106d21193;  */

void FUN_106d21020(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *unaff_x22;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 == (undefined *)0x6) && (puVar1 != (undefined *)0x0)) {
    uVar2 = *(undefined8 *)(puVar1 + 0xa0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR_PTR_1126b2220;
    _objc_alloc();
    unaff_x23 = &PTR____CFConstantStringClassReference_110ec3478;
    unaff_x24 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uStack_60 = 0;
    func_0x00010c04a560();
    func_0x00010c288c60(uVar2);
    _objc_release(unaff_x22);
    _objc_release(unaff_x24);
    _objc_release(param_1);
    _objc_release(uVar2);
    param_2 = puVar1 + 0x240;
    _objc_loadWeakRetained();
    param_3 = puVar1;
    func_0x00010beee640();
    _objc_release(param_2);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106d21194;
  puStack_a0 = unaff_x24;
  ppuStack_98 = unaff_x23;
  puStack_90 = unaff_x22;
  puStack_88 = param_1;
  puStack_80 = param_2;
  puStack_78 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_a8,puVar3);
    uVar4 = *(undefined8 *)(puVar3 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(param_3);
    uVar2 = uVar4;
    func_0x00010c135d60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar3 + 0x210);
    *(undefined8 *)(puVar3 + 0x210) = uVar2;
    _objc_release(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d21194; end: 106d212eb; -[SCGalleryOperaActionHandlerSession _makeEntryPrivate:] */

void FUN_106d21194(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010c135d60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x210) = uVar3;
    _objc_release(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d212ec; end: 106d21497;  */

void FUN_106d212ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  lVar7 = param_2;
  _objc_loadWeakRetained();
  puVar3 = PTR_DAT_1126a4ec0;
  iVar6 = (int)lVar7;
  if ((param_2 == 6) && (lVar1 != 0)) {
    lVar9 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar9);
    lVar2 = lVar9;
    func_0x00010010fab4();
    iVar6 = (int)puVar3;
    lVar7 = lVar9;
    if ((int)lVar2 == 0) {
      lVar7 = 0;
    }
    _objc_retain(lVar7);
    _objc_release(lVar9);
    if (lVar7 != 0) {
      puVar3 = PTR_PTR_1126c38e8;
      _objc_alloc(PTR_PTR_1126c38e8);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      uVar5 = *(undefined8 *)(lVar1 + 0x120);
      func_0x00010c29a4c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c016e80(puVar3);
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_release(puVar4);
      func_0x00010c142b00(puVar3);
      _objc_release(puVar3);
    }
    _objc_release(lVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20) + 0x240;
    _objc_loadWeakRetained(lVar1);
    func_0x00010beee640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106d21498; end: 106d214d7;  */

void FUN_106d21498(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x240;
    _objc_loadWeakRetained(lVar1);
    func_0x00010beee640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106d214d8; end: 106d21613; -[SCGalleryOperaActionHandlerSession _makePHAssetPrivate:] */

void FUN_106d214d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c135d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106d21614; end: 106d21797;  */

void FUN_106d21614(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar6 = (int)param_2;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 == 6) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126c38e8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    uVar5 = *(undefined8 *)(lVar1 + 0x120);
    func_0x00010c29a4c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016e80();
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010c142b00(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5d80();
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    _objc_retain(uVar8);
    func_0x00010c0f7fe0(0x3fe8000000000000,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar8);
  }
  return;
}



/* Entry: 106d21798; end: 106d2193b;  */

void FUN_106d21798(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5d80();
    _objc_release(uVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0f7fe0(0x3fe8000000000000,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106d2193c; end: 106d21a3b; -[SCGalleryOperaActionHandlerSession _presentSystemExportForItem:snaps:shouldPauseVideo:page:] */

void FUN_106d2193c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_5;
  func_0x00010be1ca80(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d21a3c; end: 106d21bfb;  */

void FUN_106d21a3c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf529e0();
    lVar3 = param_2;
    func_0x00010bf529e0();
    if (lVar2 + lVar3 != 0) {
      _objc_initWeak(auStack_68,lVar1);
      uVar4 = *(undefined8 *)(lVar1 + 0x80);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      lVar3 = param_3;
      func_0x00010bf00560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107e2e2c8();
      func_0x00010bf529e0(param_2);
      func_0x00010bdf32e0(lVar1);
      _objc_copyWeak(auStack_78,auStack_68);
      uStack_70 = *(undefined1 *)(param_1 + 0x28);
      func_0x00010c10c3c0(uVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d21bfc; end: 106d21cab;  */

void FUN_106d21bfc(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      lVar2 = lVar1 + 0x30;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c13d1c0();
      _objc_release(lVar2);
    }
    if ((param_3 & 1) == 0) {
      if (((param_2 & 1) == 0) && ((param_4 & 1) == 0)) {
        lVar2 = lVar1 + 0x20;
        _objc_loadWeakRetained(lVar2);
        func_0x000108df7438();
        _objc_release(lVar2);
      }
      lVar2 = lVar1 + 0x240;
      _objc_loadWeakRetained(lVar2);
      func_0x00010beee6a0();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d21cac; end: 106d21d27; -[SCGalleryOperaActionHandlerSession privateGallerySetupFlowDidCancel:] */

void FUN_106d21cac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x160;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x160;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d21d28; end: 106d21de3; -[SCGalleryOperaActionHandlerSession privateGallerySetupFlowDidFinish:] */

void FUN_106d21d28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010beccd20(param_1,param_2,*(undefined8 *)(param_1 + 0x208));
    uVar2 = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = 0;
    _objc_release(uVar2);
  }
  lVar3 = param_1 + 0x160;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    param_1 = param_1 + 0x160;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d21de4; end: 106d21ff7; -[SCGalleryOperaActionHandlerSession _liveRenderActionForEvent:] */

undefined8 FUN_106d21de4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar4 = 5;
  }
  else {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010bf8c140(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126b5b28;
      func_0x00010bf8c140(PTR_PTR_1126b5b28);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126b2d30;
        func_0x00010c15c9e0(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        if ((int)uVar2 == 0) {
          puVar3 = PTR_PTR_1126b5b28;
          func_0x00010c15b3c0(PTR_PTR_1126b5b28);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar1);
          if ((uVar2 & 1) == 0) {
            puVar1 = PTR_PTR_1126b2d30;
            func_0x00010c11e700(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar1);
            if ((int)uVar2 == 0) {
              puVar3 = PTR_PTR_1126b5b28;
              func_0x00010c1052e0(PTR_PTR_1126b5b28);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0(param_3,param_2,puVar3);
              _objc_release(puVar3);
              _objc_release(puVar1);
              if ((uVar2 & 1) == 0) {
                puVar1 = PTR_PTR_1126b5b28;
                func_0x00010c105200(PTR_PTR_1126b5b28);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0(param_3,param_2,puVar1);
                _objc_release(puVar1);
                if ((uVar2 & 1) == 0) {
                  puVar1 = PTR_PTR_1126b2d30;
                  func_0x00010bef9700(PTR_PTR_1126b2d30);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = param_3;
                  func_0x00010c0720c0(param_3,param_2,puVar1);
                  _objc_release(puVar1);
                  uVar4 = 4;
                  if ((int)uVar2 == 0) {
                    uVar4 = 5;
                  }
                }
                else {
                  uVar4 = 3;
                }
                goto LAB_106d21e84;
              }
            }
            else {
              _objc_release(puVar1);
            }
            uVar4 = 2;
            goto LAB_106d21e84;
          }
        }
        else {
          _objc_release(puVar1);
        }
        uVar4 = 1;
        goto LAB_106d21e84;
      }
    }
    else {
      _objc_release(puVar1);
    }
    uVar4 = 0;
  }
LAB_106d21e84:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106d21ff8; end: 106d220c7; -[SCGalleryOperaActionHandlerSession _isFromActionMenuWithEvent:] */

ulong FUN_106d21ff8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b5b28;
    func_0x00010bf8c140(PTR_PTR_1126b5b28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR_PTR_1126b2d30;
      func_0x00010bef9700(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106d220c8; end: 106d2215f; -[SCGalleryOperaActionHandlerSession _memoriesUserContextActionSourceFromEvent:] */

undefined8 FUN_106d220c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bef9700(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010be40a60(param_1,param_2,param_3);
    func_0x00010bdf32e0(param_1,param_2,uVar3,0);
  }
  else {
    param_1 = 0x11;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106d22160; end: 106d221b3; -[SCGalleryOperaActionHandlerSession _createSessionUserContext:presentingViewController:] */

undefined8 FUN_106d22160(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 2;
  }
  else {
    param_1 = param_1 + 0x240;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010beee680();
    uVar2 = 1;
    if ((int)lVar1 == 0) {
      uVar2 = 2;
    }
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 106d221b4; end: 106d221bb; -[SCGalleryOperaActionHandlerSession animationControllerForPresentedController:presentingController:sourceController:] */

undefined8 FUN_106d221b4(void)

{
  return 0;
}



/* Entry: 106d221bc; end: 106d22217; -[SCGalleryOperaActionHandlerSession animationControllerForDismissedController:] */

void FUN_106d221bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5110);
  puVar2 = (undefined *)0x0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126d23a0;
    _objc_alloc_init(PTR_PTR_1126d23a0);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d22218; end: 106d2236f; -[SCGalleryOperaActionHandlerSession boomboxScopeDidDismiss:] */

void FUN_106d22218(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x140);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beee640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c12e1c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106d22370;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      func_0x00010c2a4ae0(uVar4,param_2,&puStack_58);
    }
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106d22370; end: 106d223ab;  */

void FUN_106d22370(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d223ac; end: 106d223af; -[SCGalleryOperaActionHandlerSession galleryPreviewControllerWillDismiss:] */

void FUN_106d223ac(void)

{
  return;
}



/* Entry: 106d223b0; end: 106d223ef; -[SCGalleryOperaActionHandlerSession galleryPreviewControllerDidDismiss:] */

void FUN_106d223b0(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    *(undefined1 *)(param_1 + 0x228) = 0;
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c13d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d223f0; end: 106d2242f; -[SCGalleryOperaActionHandlerSession galleryPreviewControllerDidCancel:] */

void FUN_106d223f0(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    *(undefined1 *)(param_1 + 0x228) = 0;
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c13d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d22430; end: 106d22433; -[SCGalleryOperaActionHandlerSession galleryPreviewController:presentingViewController:didFailToLoadContent:] */

void FUN_106d22430(void)

{
  return;
}



/* Entry: 106d22434; end: 106d22467; -[SCGalleryOperaActionHandlerSession galleryPreviewControllerDidSaveAsCopy:] */

void FUN_106d22434(long param_1)

{
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


