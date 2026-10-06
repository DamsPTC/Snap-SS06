/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10580e138; end: 10580e517; -[CTPCustomStickerUpdateProcessor _batchUpdate:] */

void FUN_10580e138(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_15c;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bec40);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_140,puVar3);
  }
  lStack_158 = 0;
  lStack_150 = 0;
  uStack_148 = 0;
  uStack_15c = 0;
  puVar4 = &uStack_140;
  func_0x00010054c81c(puVar4,&lStack_158,&uStack_15c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_118);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined8 *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  else {
    _dispatch_group_create();
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    puVar3 = puVar4;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf52a60();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar2 != (undefined8 *)0x0) {
      lVar9 = *plStack_190;
      do {
        puVar7 = (undefined8 *)0x0;
        do {
          if (*plStack_190 != lVar9) {
            _objc_enumerationMutation(puVar3);
          }
          _dispatch_group_enter(puVar5);
          puVar6 = param_1;
          func_0x00010beb56e0();
          if (((ulong)puVar6 & 1) == 0) {
            puStack_1c8 = puVar1;
            uStack_1c0 = 0xc2000000;
            pcStack_1b8 = FUN_10580e518;
            puStack_1b0 = &UNK_110896ce8;
            _objc_retain(puVar5);
            puStack_1a8 = puVar5;
            func_0x00010bee1c20(param_1);
            _objc_release(puStack_1a8);
          }
          else {
            _objc_initWeak(&uStack_140,param_1);
            puStack_1f8 = puVar1;
            uStack_1f0 = 0xc2000000;
            pcStack_1e8 = FUN_10580e520;
            puStack_1e0 = &UNK_1108b5b10;
            _objc_copyWeak(auStack_1d0,&uStack_140);
            _objc_retain(puVar5);
            puStack_1d8 = puVar5;
            func_0x00010bdd50a0(param_1);
            _objc_release(puStack_1d8);
            _objc_destroyWeak(auStack_1d0);
            _objc_destroyWeak(&uStack_140);
          }
          puVar7 = (undefined8 *)((long)puVar7 + 1);
        } while (puVar2 != puVar7);
        puVar2 = puVar3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar3);
    uVar8 = param_1[9];
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_10580e58c;
    puStack_208 = &UNK_11087bb60;
    _objc_retain(param_3);
    lStack_200 = param_3;
    func_0x000100bc0718(puVar5,uVar8,&puStack_220);
    _objc_release(lStack_200);
    _objc_release(puVar5);
    puVar2 = puVar5;
  }
  _objc_release(puVar4);
  lVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_3);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar9 + 0x20));
  return;
}



/* Entry: 10580e518; end: 10580e51f;  */

void FUN_10580e518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10580e520; end: 10580e58b;  */

void FUN_10580e520(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      func_0x00010be59640(lVar1);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10580e58c; end: 10580e59b;  */

void FUN_10580e58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010580e598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 10580e59c; end: 10580e757; -[CTPCustomStickerUpdateProcessor _boltUpdateForRequest:completion:] */

void FUN_10580e59c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf5cbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf93b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c28e7e0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10580e758; end: 10580e7fb;  */

void FUN_10580e758(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_4 == 0) {
      func_0x00010bdf6640(param_1);
    }
    else {
      func_0x00010be53040(param_1);
      func_0x00010bee1c00(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10580e7fc; end: 10580f01b; -[CTPCustomStickerUpdateProcessor _ctpUpdateForRequest:contentObject:completion:] */

void FUN_10580e7fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126b0cb8;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  lVar2 = param_3;
  func_0x00010bf5cbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf649c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_alloc_init(PTR_PTR_1126b37c0);
  func_0x00010c196600(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ba828;
  _objc_alloc_init(PTR_PTR_1126ba828);
  puVar4 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188860();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0ce8;
  _objc_alloc_init(PTR_PTR_1126b0ce8);
  puVar4 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4360();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181c20();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar2 = param_3;
  func_0x00010bf92c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195660();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf92c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195640();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010bf5ab40(param_3);
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185720();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c2a5040(param_3);
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bfe0640(param_3);
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c0ed1a0(param_3);
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d64a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c06c000(param_3);
  puVar3 = puVar1;
  func_0x00010bf96da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af280();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar8 = param_1;
  func_0x00010bf61ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf559e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_78;
  _objc_copyWeak(auStack_80,puVar7);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar11 = uVar10;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar11);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  __Unwind_Resume();
  _objc_retain(puVar7);
  lVar6 = lVar2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(lVar2 + 0x20);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(lVar2 + 0x28);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(lVar2 + 0x20);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    _objc_retain(uVar8);
    func_0x00010c0c0800(puVar7);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10580f01c; end: 10580f173;  */

void FUN_10580f01c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10580f174; end: 10580f39f;  */

/* WARNING: Removing unreachable block (ram,0x00010580f1d4) */

void FUN_10580f174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bb168;
  _objc_alloc();
  func_0x00010c008360();
  _objc_retain(0);
  puVar3 = puVar2;
  func_0x00010bf58840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
    func_0x00010c13ca20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c080320();
    _objc_release(puVar5);
    _objc_release(puVar3);
    if ((int)puVar6 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      puVar3 = puVar4;
      func_0x00010c13ca20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf61ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee1bc0(uVar1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      goto LAB_10580f2dc;
    }
  }
  func_0x00010bee1c00(*(undefined8 *)(param_1 + 0x28));
LAB_10580f2dc:
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(param_2);
  return;
}



/* Entry: 10580f3a0; end: 10580f3d7;  */

void FUN_10580f3a0(long param_1,undefined8 param_2)

{
  func_0x00010be53040(*(undefined8 *)(param_1 + 0x28),param_2,0,2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__updateTablesForFailedUpdate_com_1125960a8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10580f3d8; end: 10580f65b; -[CTPCustomStickerUpdateProcessor _updatePersistedItemForUpdate:item:context:feedType:transactionContext:] */

void FUN_10580f3d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0cb0;
  _objc_alloc();
  func_0x00010c0559c0();
  puVar2 = PTR_PTR_1126bacd0;
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010bf5cbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126badb8;
  func_0x00010c11fd80(PTR_PTR_1126badb8);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x00010c01ffe0();
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x00010c0fa3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  uVar5 = uVar7;
  puVar8 = puVar1;
  puVar9 = puVar4;
  func_0x00010c266cc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar6 = lVar3;
  __Unwind_Resume();
  pcStack_98 = FUN_10580f65c;
  lStack_d0 = lVar3;
  puStack_c8 = puVar2;
  puStack_c0 = puVar1;
  uStack_b8 = param_7;
  uStack_b0 = param_4;
  lStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  _objc_initWeak(auStack_d8,lVar6);
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,auStack_d8);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  func_0x00010c0f8500(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  return;
}



/* Entry: 10580f65c; end: 10580f7cf; -[CTPCustomStickerUpdateProcessor _updateTablesForCompletedUpdate:object:completion:] */

void FUN_10580f65c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10580f7d0; end: 10580f92f;  */

void FUN_10580f7d0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bec50;
    FUN_105812320(PTR_PTR_1126bec50,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bedce40(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bedce40(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bedce40(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bedce40(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010be53040(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10580f930; end: 10580fa27; -[CTPCustomStickerUpdateProcessor _updateTablesForFailedUpdate:completion:] */

void FUN_10580f930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10580fa28;
  puStack_40 = &UNK_11084f688;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x50),param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10580fa28; end: 10580fac7;  */

void FUN_10580fa28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bec50;
  FUN_105811dfc(PTR_PTR_1126bec50,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    *(int *)(puVar1 + 0x18) = *(int *)(puVar1 + 0x18) + 1;
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10580fac8; end: 10580fbeb; -[CTPCustomStickerUpdateProcessor _shouldRetryUpdate:] */

bool FUN_10580fac8(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = param_4;
  func_0x00010bf5ab40();
  lVar3 = *(long *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf61fe0();
  _objc_release(lVar3);
  _objc_release(puVar1);
  uVar5 = param_4;
  func_0x00010c265be0(param_4);
  lVar6 = *(long *)(param_2 + 0x38);
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf61fc0();
  _objc_release(lVar6);
  _objc_release(param_4);
  return param_1 - (double)uVar2 <= (double)lVar4 || (long)(uVar5 & 0xffffffff) < lVar3;
}



/* Entry: 10580fbec; end: 10580fd27; -[CTPCustomStickerUpdateProcessor _updateTablesForTooManyFailedAttemptsForUpdate:completion:] */

void FUN_10580fbec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10580fd28; end: 10580fe57;  */

void FUN_10580fd28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bec50;
    FUN_105812320(PTR_PTR_1126bec50,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be8cda0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be8cda0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be8cda0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be8cda0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10580fe58; end: 10581002f; -[CTPCustomStickerUpdateProcessor _removePersistedItemForUpdate:context:feedType:transactionContext:] */

void FUN_10580fe58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 auStack_128 [12];
  undefined4 uStack_11c;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0cb0;
  _objc_alloc();
  func_0x00010c0559c0();
  func_0x00010c0fa3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf5cbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  puVar12 = puVar1;
  func_0x00010c266cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_6);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar12);
  lVar3 = lVar6;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bec48);
  if (lVar13 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_100,lVar13);
  }
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_11c = 0;
  puVar7 = &uStack_100;
  func_0x00010054c81c(puVar7,&lStack_118,&uStack_11c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(lVar13);
  _objc_release(lVar3);
  puVar8 = puVar7;
  func_0x00010bf529e0();
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(puVar12 + 0x10))(puVar12,1);
  }
  else {
    puVar8 = puVar7;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_initWeak(&uStack_100,lVar6);
    lVar3 = lVar6;
    func_0x00010bf61ce0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar13;
    func_0x00010bf559e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_128,&uStack_100);
    _objc_retain(puVar9);
    _objc_retain(puVar7);
    _objc_retain(puVar12);
    lVar11 = lVar10;
    func_0x00010c25ff60(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1380(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(lVar11);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar13);
    _objc_release(lVar3);
    _objc_release(puVar12);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(&uStack_100);
    _objc_release(puVar9);
  }
  _objc_release(puVar7);
  _objc_release(puVar12);
  return;
}



/* Entry: 105810030; end: 1058103b7; -[CTPCustomStickerUpdateProcessor _batchDelete:] */

void FUN_105810030(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_c8 [12];
  undefined4 uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bec48);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar2);
  }
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_bc = 0;
  puVar3 = &uStack_a0;
  func_0x00010054c81c(puVar3,&lStack_b8,&uStack_bc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  else {
    puVar4 = puVar3;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_initWeak(&uStack_a0,param_1);
    lVar1 = param_1;
    func_0x00010bf61ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf559e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,&uStack_a0);
    _objc_retain(puVar5);
    _objc_retain(puVar3);
    _objc_retain(param_3);
    lVar7 = lVar6;
    func_0x00010c25ff60(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1380(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(lVar7);
    _objc_release(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(&uStack_a0);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1058103b8; end: 105810423;  */

void FUN_1058103b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf5cbe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf649c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105810424; end: 1058105c3;  */

void FUN_105810424(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058105c4; end: 10581071f;  */

/* WARNING: Removing unreachable block (ram,0x00010581061c) */

void FUN_1058105c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bb168;
  _objc_alloc(PTR_PTR_1126bb168);
  func_0x00010c008360();
  _objc_retain(0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be59640(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf0a540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1ba0(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(param_2);
  return;
}



/* Entry: 105810720; end: 105810763;  */

void FUN_105810720(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  return;
}



/* Entry: 105810764; end: 1058107e3;  */

void FUN_105810764(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar2);
  func_0x00010be53040(uVar1,param_2,1,2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf0a540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1be0(uVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058107e4; end: 1058108db; -[CTPCustomStickerUpdateProcessor _updateTablesForCompleteDeletes:completion:] */

void FUN_1058107e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058108dc;
  puStack_40 = &UNK_11084f688;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x50),param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058108dc; end: 105810a5b;  */

void FUN_1058108dc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  puVar5 = auStack_d8;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        puVar2 = PTR_PTR_1126bec58;
        FUN_10581351c(PTR_PTR_1126bec58,*(undefined8 *)(lStack_118 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar5 = auStack_d8;
      lVar1 = lVar6;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  func_0x00010c0f8500(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 105810a5c; end: 105810b53; -[CTPCustomStickerUpdateProcessor _updateTablesForFailedDeletes:completion:] */

void FUN_105810a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105810b54;
  puStack_40 = &UNK_11084f688;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x50),param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105810b54; end: 105810ce3;  */

void FUN_105810b54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      puVar3 = PTR_PTR_1126bec58;
      FUN_105813184(PTR_PTR_1126bec58,*(undefined8 *)(lVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0x14) + 1;
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  uVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume(uVar4);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a44a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105810ce4; end: 105810d4b; -[CTPCustomStickerUpdateProcessor _logSuccessOperation:count:] */

void FUN_105810ce4(undefined8 param_1)

{
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a44a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105810d4c; end: 105810dff; -[CTPCustomStickerUpdateProcessor _logFailureForOperation:errorType:count:] */

void FUN_105810d4c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a44a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105810e00; end: 105810e07; -[CTPCustomStickerUpdateProcessor docObjectContext] */

undefined8 FUN_105810e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105810e08; end: 105810e37; -[CTPCustomStickerUpdateProcessor setDocObjectContext:] */

void FUN_105810e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105810e38; end: 105810e3f; -[CTPCustomStickerUpdateProcessor customStickerClient] */

undefined8 FUN_105810e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105810e40; end: 105810e6f; -[CTPCustomStickerUpdateProcessor setCustomStickerClient:] */

void FUN_105810e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105810e70; end: 105810e77; -[CTPCustomStickerUpdateProcessor contentManager] */

undefined8 FUN_105810e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105810e78; end: 105810ea7; -[CTPCustomStickerUpdateProcessor setContentManager:] */

void FUN_105810e78(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105810ea8; end: 105810eaf; -[CTPCustomStickerUpdateProcessor persistenceService] */

undefined8 FUN_105810ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105810eb0; end: 105810edf; -[CTPCustomStickerUpdateProcessor setPersistenceService:] */

void FUN_105810eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105810ee0; end: 105810ee7; -[CTPCustomStickerUpdateProcessor logger] */

undefined8 FUN_105810ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105810ee8; end: 105810f17; -[CTPCustomStickerUpdateProcessor setLogger:] */

void FUN_105810ee8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105810f18; end: 105810f1f; -[CTPCustomStickerUpdateProcessor repositoryExperiments] */

undefined8 FUN_105810f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105810f20; end: 105810f4f; -[CTPCustomStickerUpdateProcessor setRepositoryExperiments:] */

void FUN_105810f20(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105810f50; end: 105810f57; -[CTPCustomStickerUpdateProcessor observerLifecycle] */

undefined8 FUN_105810f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105810f58; end: 105810f87; -[CTPCustomStickerUpdateProcessor setObserverLifecycle:] */

void FUN_105810f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105810f88; end: 105810f8f; -[CTPCustomStickerUpdateProcessor updateQueue] */

undefined8 FUN_105810f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105810f90; end: 105810fbf; -[CTPCustomStickerUpdateProcessor setUpdateQueue:] */

void FUN_105810f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105810fc0; end: 105810fc7; -[CTPCustomStickerUpdateProcessor docObjectUpdateQueue] */

undefined8 FUN_105810fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105810fc8; end: 105810ff7; -[CTPCustomStickerUpdateProcessor setDocObjectUpdateQueue:] */

void FUN_105810fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105810ff8; end: 105810fff; -[CTPCustomStickerUpdateProcessor completePendingTasksTriggered] */

undefined1 FUN_105810ff8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105811000; end: 105811007; -[CTPCustomStickerUpdateProcessor setCompletePendingTasksTriggered:] */

void FUN_105811000(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105811008; end: 10581100f; -[CTPCustomStickerUpdateProcessor syncInProgress] */

undefined1 FUN_105811008(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105811010; end: 105811017; -[CTPCustomStickerUpdateProcessor setSyncInProgress:] */

void FUN_105811010(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105811018; end: 10581109b; -[CTPCustomStickerUpdateProcessor .cxx_destruct] */

void FUN_105811018(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10581109c; end: 10581121f; -[SCCTPCustomStickerPendingUpdate initWithCtId:encryptedImageData:encKey:encIv:syncAttempts:creationTimestamp:width:height:origin:isAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10581109c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12)

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
  puStack_68 = PTR_PTR_1126ea718;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a26c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a26c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a270);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a270) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a274);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a274) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a278);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a278) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272a27c) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a280) = param_8;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272a284) = param_9;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272a288) = param_10;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272a28c) = param_11;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272a290) = param_12;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105811220; end: 105811243; -[SCCTPCustomStickerPendingUpdate copyWithZone:] */

undefined8 FUN_105811220(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105811244; end: 105811317; -[SCCTPCustomStickerPendingUpdate hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105811244(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a26c);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272a270);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a274);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272a278);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(uint *)(param_1 + _DAT_11272a27c);
  uStack_50 = *(undefined8 *)(param_1 + _DAT_11272a280);
  uStack_48 = (ulong)*(uint *)(param_1 + _DAT_11272a284);
  uStack_40 = (ulong)*(uint *)(param_1 + _DAT_11272a288);
  uStack_38 = (ulong)*(uint *)(param_1 + _DAT_11272a28c);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_11272a290);
  puVar3 = &uStack_78;
  uStack_60 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105811478:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105811484;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(int *)((long)puVar3 + (long)_DAT_11272a27c) ==
            *(int *)((long)param_3 + (long)_DAT_11272a27c) &&
           (*(long *)((long)puVar3 + (long)_DAT_11272a280) ==
            *(long *)((long)param_3 + (long)_DAT_11272a280))) &&
          (*(int *)((long)puVar3 + (long)_DAT_11272a284) ==
           *(int *)((long)param_3 + (long)_DAT_11272a284))) &&
         ((*(int *)((long)puVar3 + (long)_DAT_11272a288) ==
           *(int *)((long)param_3 + (long)_DAT_11272a288) &&
          (*(int *)((long)puVar3 + (long)_DAT_11272a28c) ==
           *(int *)((long)param_3 + (long)_DAT_11272a28c))))))) &&
       (*(char *)((long)puVar3 + (long)_DAT_11272a290) ==
        *(char *)((long)param_3 + (long)_DAT_11272a290))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272a26c);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11272a26c)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272a270);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11272a270)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272a274);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11272a274)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11272a278);
            if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11272a278)) {
              func_0x00010c071ae0();
              goto LAB_105811484;
            }
            goto LAB_105811478;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105811484:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105811318; end: 10581149f; -[SCCTPCustomStickerPendingUpdate isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105811318(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105811478:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105811484;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(int *)(param_1 + (long)_DAT_11272a27c) == *(int *)(param_3 + (long)_DAT_11272a27c) &&
           (*(long *)(param_1 + (long)_DAT_11272a280) == *(long *)(param_3 + (long)_DAT_11272a280)))
          && (*(int *)(param_1 + (long)_DAT_11272a284) == *(int *)(param_3 + (long)_DAT_11272a284)))
         && ((*(int *)(param_1 + (long)_DAT_11272a288) == *(int *)(param_3 + (long)_DAT_11272a288)
             && (*(int *)(param_1 + (long)_DAT_11272a28c) ==
                 *(int *)(param_3 + (long)_DAT_11272a28c))))))) &&
       (*(char *)(param_1 + (long)_DAT_11272a290) == *(char *)(param_3 + (long)_DAT_11272a290))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11272a26c);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272a26c)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11272a270);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272a270)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11272a274);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272a274)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11272a278);
            if (lVar3 != *(long *)(param_3 + (long)_DAT_11272a278)) {
              func_0x00010c071ae0();
              goto LAB_105811484;
            }
            goto LAB_105811478;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105811484:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1058114a0; end: 1058114af; -[SCCTPCustomStickerPendingUpdate ctId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1058114a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a26c);
}



/* Entry: 1058114b0; end: 1058114bf; -[SCCTPCustomStickerPendingUpdate encryptedImageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1058114b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a270);
}



/* Entry: 1058114c0; end: 1058114cf; -[SCCTPCustomStickerPendingUpdate encKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1058114c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a274);
}



/* Entry: 1058114d0; end: 1058114df; -[SCCTPCustomStickerPendingUpdate encIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1058114d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a278);
}



/* Entry: 1058114e0; end: 1058114ef; -[SCCTPCustomStickerPendingUpdate syncAttempts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1058114e0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11272a27c);
}



/* Entry: 1058114f0; end: 1058114ff; -[SCCTPCustomStickerPendingUpdate creationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1058114f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a280);
}



/* Entry: 105811500; end: 10581150f; -[SCCTPCustomStickerPendingUpdate width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105811500(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11272a284);
}



/* Entry: 105811510; end: 10581151f; -[SCCTPCustomStickerPendingUpdate height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105811510(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11272a288);
}



/* Entry: 105811520; end: 10581152f; -[SCCTPCustomStickerPendingUpdate origin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105811520(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11272a28c);
}



/* Entry: 105811530; end: 10581153f; -[SCCTPCustomStickerPendingUpdate isAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105811530(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272a290);
}



/* Entry: 105811540; end: 10581159f; -[SCCTPCustomStickerPendingUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105811540(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a278,0);
  _objc_storeStrong(param_1 + _DAT_11272a274,0);
  _objc_storeStrong(param_1 + _DAT_11272a270,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a26c,0);
  return;
}



/* Entry: 1058115a0; end: 105811637; -[SCCTPCustomStickerPendingDelete initWithCtId:syncAttempts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1058115a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ea720;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a294);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a294) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272a298) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105811638; end: 10581165b; -[SCCTPCustomStickerPendingDelete copyWithZone:] */

undefined8 FUN_105811638(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10581165c; end: 1058116d7; -[SCCTPCustomStickerPendingDelete hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10581165c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a294);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_11272a298);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10581176c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (*(int *)((long)puVar2 + (long)_DAT_11272a298) !=
        *(int *)((long)param_3 + (long)_DAT_11272a298))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10581176c;
    }
    puVar4 = *(undefined8 **)((long)puVar2 + (long)_DAT_11272a294);
    if (puVar4 != *(undefined8 **)((long)param_3 + (long)_DAT_11272a294)) {
      func_0x00010c071ae0();
      goto LAB_10581176c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10581176c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1058116d8; end: 105811787; -[SCCTPCustomStickerPendingDelete isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1058116d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10581176c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(int *)(param_1 + (long)_DAT_11272a298) != *(int *)(param_3 + (long)_DAT_11272a298))) {
      lVar3 = 0;
      goto LAB_10581176c;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11272a294);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11272a294)) {
      func_0x00010c071ae0();
      goto LAB_10581176c;
    }
  }
  lVar3 = 1;
LAB_10581176c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105811788; end: 105811797; -[SCCTPCustomStickerPendingDelete ctId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105811788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a294);
}



/* Entry: 105811798; end: 1058117a7; -[SCCTPCustomStickerPendingDelete syncAttempts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105811798(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11272a298);
}



/* Entry: 1058117a8; end: 1058117bb; -[SCCTPCustomStickerPendingDelete .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058117a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a294,0);
  return;
}



/* Entry: 1058117bc; end: 10581181f;  */

undefined ** FUN_1058117bc(void)

{
  int iVar1;
  
  if ((bRam000000011381a2d8 & 1) == 0) {
    iVar1 = 0x1381a2d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113103068,0x100000000);
      ___cxa_guard_release(0x11381a2d8);
    }
  }
  return &PTR_PTR_113103068;
}



/* Entry: 105811820; end: 1058118a7;  */

void FUN_105811820(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058118a8; end: 105811933;  */

void FUN_1058118a8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf5cbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf5cbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105811934; end: 10581193f; +[SCCTPCustomStickerPendingUpdate table] */

undefined * FUN_105811934(void)

{
  return &UNK_10f2fd7e8;
}



/* Entry: 105811940; end: 105811c63; +[SCCTPCustomStickerPendingUpdate immutableObjectParse:bufferSize:] */

void FUN_105811940(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126bec40;
  _objc_alloc(PTR_PTR_1126bec40);
  lVar9 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar7 < 5) {
    puVar13 = (undefined *)0x0;
LAB_105811a2c:
    puVar14 = (undefined *)0x0;
LAB_105811a30:
    puVar15 = (undefined *)0x0;
LAB_105811a34:
    puVar16 = (undefined *)0x0;
LAB_105811a38:
    uVar5 = 0;
LAB_105811a44:
    uVar8 = 0;
    uVar6 = 0;
LAB_105811a48:
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar9);
    }
    lVar9 = -lVar9;
    if (uVar7 < 7) goto LAB_105811a2c;
    if (*(short *)((long)piVar1 + lVar9 + 6) == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar9 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 9) goto LAB_105811a30;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 8);
    if (uVar11 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0xb) goto LAB_105811a34;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 10);
    if (uVar11 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0xd) goto LAB_105811a38;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0xc);
    if (uVar11 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar11);
    }
    if (uVar7 < 0xf) goto LAB_105811a44;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0xe);
    if (uVar11 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)piVar1 + uVar11);
    }
    if (uVar7 < 0x11) {
      uVar8 = 0;
      goto LAB_105811a48;
    }
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x10);
    uVar8 = 0;
    if (uVar11 != 0) {
      uVar8 = *(undefined4 *)((long)piVar1 + uVar11);
    }
    if (uVar7 < 0x13) goto LAB_105811a48;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x12);
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = *(undefined4 *)((long)piVar1 + uVar11);
    }
    if (uVar7 < 0x15) {
      uVar12 = 0;
    }
    else {
      uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x14);
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = *(undefined4 *)((long)piVar1 + uVar11);
      }
      if (0x16 < uVar7) {
        uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x16);
        bVar3 = false;
        if (uVar11 != 0) {
          bVar3 = *(char *)((long)piVar1 + uVar11) != '\0';
        }
        goto LAB_105811a50;
      }
    }
  }
  bVar3 = false;
LAB_105811a50:
  func_0x00010c006c20(puVar4,param_2,puVar13,puVar14,puVar15,puVar16,uVar5,uVar6,uVar8,uVar10,uVar12
                      ,bVar3);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105811c64; end: 105811c87; +[SCCTPCustomStickerPendingUpdate objectClassFunctionPointer] */

undefined1  [16] FUN_105811c64(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105811c80;
  auVar1._0_8_ = 0x105811c78;
  return auVar1;
}



/* Entry: 105811c88; end: 105811dfb;  */

long * FUN_105811c88(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    undefined4 param_7,long param_8,undefined4 param_9,undefined4 param_10,
                    undefined4 param_11,undefined1 param_12)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126ea728;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[5];
      plVar1[5] = param_3;
      _objc_release(lVar2);
      _objc_retain(param_4);
      lVar2 = plVar1[6];
      plVar1[6] = param_4;
      _objc_release(lVar2);
      _objc_retain(param_5);
      lVar2 = plVar1[7];
      plVar1[7] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[8];
      plVar1[8] = param_6;
      _objc_release(lVar2);
      plVar1[9] = param_8;
      *(undefined4 *)(plVar1 + 3) = param_7;
      *(undefined4 *)((long)plVar1 + 0x1c) = param_9;
      *(undefined4 *)(plVar1 + 4) = param_10;
      *(undefined4 *)((long)plVar1 + 0x24) = param_11;
      *(undefined1 *)((long)plVar1 + 0x14) = param_12;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 105811dfc; end: 105811e6f;  */

void FUN_105811dfc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105811e70();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105811e70; end: 10581231f;  */

void FUN_105811e70(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bf5cbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar11,&UNK_10f2fd808);
        if (puVar11 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bf5cbe0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar11,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar11;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar11;
            _sqlite3_column_int64(puVar11,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bec40);
            _sqlite3_column_blob(puVar11,1);
            _sqlite3_column_bytes(puVar11,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar11);
            if (puVar3 == (undefined *)0x0) goto LAB_10581223c;
            puVar11 = PTR_PTR_1126bec50;
            _objc_alloc(PTR_PTR_1126bec50);
            puStack_68 = puVar3;
            func_0x00010bf5cbe0();
            _objc_retainAutoreleasedReturnValue();
            puStack_70 = puVar3;
            func_0x00010bf93b40();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010bf92c80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf92c60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c265be0(puVar3);
            puVar6 = puVar3;
            func_0x00010bf5ab40(puVar3);
            puVar7 = puVar3;
            func_0x00010c2a5040();
            puVar8 = puVar3;
            func_0x00010bfe0640();
            puVar9 = puVar3;
            func_0x00010c0ed1a0();
            puVar10 = puVar3;
            func_0x00010c06c000();
            FUN_105811c88(puVar11,puVar1,puStack_68,puStack_70,puVar2,puVar4,puVar5,puVar6,
                          (int)puVar7,(int)puVar8,(int)puVar9,(char)puVar10);
            goto LAB_105811fe8;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar11 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bec40);
      puVar3 = puVar11;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar11);
      if (puVar3 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126bec50;
        _objc_alloc(PTR_PTR_1126bec50);
        puStack_68 = puVar3;
        func_0x00010bf5cbe0();
        _objc_retainAutoreleasedReturnValue();
        puStack_70 = puVar3;
        func_0x00010bf93b40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf92c80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf92c60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c265be0(puVar3);
        puVar6 = puVar3;
        func_0x00010bf5ab40(puVar3);
        puVar7 = puVar3;
        func_0x00010c2a5040();
        puVar8 = puVar3;
        func_0x00010bfe0640();
        puVar9 = puVar3;
        func_0x00010c0ed1a0();
        puVar10 = puVar3;
        func_0x00010c06c000();
        FUN_105811c88(puVar11,puVar1,puStack_68,puStack_70,puVar2,puVar4,puVar5,puVar6,(int)puVar7,
                      (int)puVar8,(int)puVar9,(char)puVar10);
LAB_105811fe8:
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(puStack_70);
        _objc_release(puStack_68);
        param_1 = puVar3;
        goto LAB_105812244;
      }
LAB_10581223c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_105812244:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105812320; end: 105812393;  */

void FUN_105812320(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105811e70();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105812394; end: 1058126eb;  */

void FUN_105812394(long param_1,undefined1 *param_2)

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
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bec50;
  FUN_105811dfc(PTR_PTR_1126bec50,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar12 = PTR_PTR_1126bec50;
    _objc_retain(param_1);
    _objc_opt_self(puVar12);
    puVar12 = PTR_PTR_1126bec50;
    if (param_1 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010bf5cbe0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf93b40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf92c80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf92c60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c265be0(param_1);
      lVar7 = param_1;
      func_0x00010bf5ab40(param_1);
      lVar8 = param_1;
      func_0x00010c2a5040();
      lVar9 = param_1;
      func_0x00010bfe0640();
      lVar10 = param_1;
      func_0x00010c0ed1a0();
      lVar11 = param_1;
      func_0x00010c06c000();
      FUN_105811c88(puVar12,0xffffffffffffffff,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,(int)lVar8,
                    (int)lVar9,(int)lVar10,(char)lVar11);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar12 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    lVar2 = param_1;
    func_0x00010bf5cbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf93b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf92c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf92c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c265be0();
    *(int *)(puVar1 + 0x18) = (int)lVar2;
    lVar2 = param_1;
    func_0x00010bf5ab40();
    *(long *)(puVar1 + 0x48) = lVar2;
    lVar2 = param_1;
    func_0x00010c2a5040();
    *(int *)(puVar1 + 0x1c) = (int)lVar2;
    lVar2 = param_1;
    func_0x00010bfe0640();
    *(int *)(puVar1 + 0x20) = (int)lVar2;
    lVar2 = param_1;
    func_0x00010c0ed1a0();
    *(int *)(puVar1 + 0x24) = (int)lVar2;
    lVar2 = param_1;
    func_0x00010c06c000();
    puVar1[0x14] = (char)lVar2;
    _objc_retain(puVar1);
    puVar12 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1058126ec; end: 105812777;  */

void FUN_1058126ec(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bec40;
    _objc_alloc(PTR_PTR_1126bec40);
    func_0x00010c006c20();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105812778; end: 1058127bf; -[SCCTPCustomStickerPendingUpdateChangeRequest .cxx_destruct] */

void FUN_105812778(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1058127c0; end: 1058127cb; -[SCCTPCustomStickerPendingUpdateChangeRequest table] */

undefined * FUN_1058127c0(void)

{
  return &UNK_10f2fd7e8;
}



/* Entry: 1058127cc; end: 105812813; -[SCCTPCustomStickerPendingUpdateChangeRequest createTableWithSQLite:] */

void FUN_1058127cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbee98,0x89,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105812814; end: 105812b9b; -[SCCTPCustomStickerPendingUpdateChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105812814(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1058126ec(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105812b9c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2fd88e);
    if (lVar6 == 0) goto LAB_105812b38;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105812b38;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bec40);
    func_0x00010c21c9a0(puVar7);
LAB_105812b20:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2fd853);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bec40);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105812b44;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105812b44;
    }
    FUN_1058126ec(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105812b9c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2fd8d4);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bec40);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105812b20;
      }
    }
LAB_105812b38:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105812b44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105812b9c; end: 105812e8f;  */

ulong FUN_105812b9c(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar10;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf5cbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_105812e90(param_1,lVar5);
  lVar7 = param_2;
  func_0x00010bf93b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    lVar8 = lVar7;
    _objc_retainAutorelease(lVar7);
    func_0x00010bf25f00();
    lVar9 = lVar7;
    func_0x00010c08fa60(lVar7);
    uVar10 = param_1;
    func_0x0001001d1030(param_1,lVar8,lVar9);
    uVar4 = (undefined4)uVar10;
  }
  _objc_release(lVar7);
  lVar8 = param_2;
  func_0x00010bf92c80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_105812e90(param_1,lVar8);
  lVar9 = param_2;
  func_0x00010bf92c60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_105812e90(param_1,lVar9);
  lVar12 = param_2;
  func_0x00010c265be0(param_2);
  lVar13 = param_2;
  func_0x00010bf5ab40(param_2);
  lVar14 = param_2;
  func_0x00010c2a5040(param_2);
  lVar15 = param_2;
  func_0x00010bfe0640(param_2);
  lVar16 = param_2;
  func_0x00010c0ed1a0(param_2);
  lVar17 = param_2;
  func_0x00010c06c000(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,0xe,lVar13,0);
  func_0x0001001ce354(param_1,0x14,lVar16,0);
  func_0x0001001ce354(param_1,0x12,lVar15,0);
  func_0x0001001ce354(param_1,0x10,lVar14,0);
  func_0x0001001ce354(param_1,0xc,lVar12,0);
  func_0x0001001ce2e4(param_1,10,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar10 & 0xffffffff);
  func_0x0001001ce220(param_1,6,uVar4);
  func_0x0001001ce2e4(param_1,4,uVar6 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x16,lVar17,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105812e90; end: 105812fbf;  */

undefined8 FUN_105812e90(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105812f70;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105812f70;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105812f30;
    param_1 = 0;
  }
  else {
LAB_105812f30:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_105812f70:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105812fc0; end: 105812fcb; +[SCCTPCustomStickerPendingDelete table] */

undefined * FUN_105812fc0(void)

{
  return &UNK_10f2fd924;
}



/* Entry: 105812fcc; end: 1058130bb; +[SCCTPCustomStickerPendingDelete immutableObjectParse:bufferSize:] */

void FUN_105812fcc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126bec48;
  _objc_alloc(PTR_PTR_1126bec48);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    if ((6 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6)), uVar7 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar7);
      goto LAB_10581307c;
    }
  }
  uVar4 = 0;
LAB_10581307c:
  func_0x00010c006c40(puVar3,param_2,puVar8,uVar4);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058130bc; end: 1058130df; +[SCCTPCustomStickerPendingDelete objectClassFunctionPointer] */

undefined1  [16] FUN_1058130bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1058130d8;
  auVar1._0_8_ = 0x1058130d0;
  return auVar1;
}



/* Entry: 1058130e0; end: 105813183;  */

undefined1 * FUN_1058130e0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126ea730;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_4;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105813184; end: 1058131f7;  */

void FUN_105813184(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1058131f8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058131f8; end: 10581351b;  */

void FUN_1058131f8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar5 = param_1;
      func_0x00010bf5cbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf636c0();
        _objc_release(puVar5);
        func_0x0001001b9e08(puVar1,&UNK_10f2fd944);
        puVar5 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_105813488;
        puVar5 = param_1;
        func_0x00010bf5cbe0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar5 = puVar1;
        _sqlite3_step();
        if ((int)puVar5 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bec48);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_105813480;
          puVar5 = PTR_PTR_1126bec58;
          _objc_alloc(PTR_PTR_1126bec58);
          puVar1 = puVar3;
          func_0x00010bf5cbe0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c265be0(puVar3);
          FUN_1058130e0(puVar5,puVar2,puVar1,puVar4);
          param_1 = puVar3;
          goto LAB_1058132d4;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bec48);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126bec58;
        _objc_alloc(PTR_PTR_1126bec58);
        puVar1 = puVar3;
        func_0x00010bf5cbe0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c265be0(puVar3);
        FUN_1058130e0(puVar5,puVar2,puVar1,puVar4);
        param_1 = puVar3;
LAB_1058132d4:
        _objc_release(puVar1);
        goto LAB_105813488;
      }
LAB_105813480:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105813488:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


