/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10852b0c0; end: 10852b13b; +[SCBitmojiAppInfoProvider isBitmojiKeyboardEnabled] */

void FUN_10852b0c0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c06d3c0();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0a000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10852b13c; end: 10852b29f; +[SCBitmojiRemoteVideoUtils bitmojiRemoteVideoURLFromBaseUrl:avatarId:friendAvatarId:] */

void FUN_10852b13c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44760(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                          &PTR____CFConstantStringClassReference_110dd6b98,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
    }
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                          &PTR____CFConstantStringClassReference_110dd6bb8,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
    }
    func_0x00010c1e6460(puVar2,param_2,puVar3);
    puVar4 = puVar2;
    func_0x00010bdc2b80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10852b2a0; end: 10852b313; -[SCGrapheneDiscoverFeedMetric2 init] */

undefined1 * FUN_10852b2a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcbb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10852b314; end: 10852b487;  */

void FUN_10852b314(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a50a80;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a50a80,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10852b488;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a50ad0,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10852b488; end: 10852b4ff;  */

void FUN_10852b488(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a50ad0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10852b500; end: 10852b577;  */

void FUN_10852b500(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a50b20,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10852b578; end: 10852b6eb;  */

void FUN_10852b578(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a50b70;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a50b70,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a50bc0;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a50bc0,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10852b6ec(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10852b6ec; end: 10852b85f;  */

void FUN_10852b6ec(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a50bc0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a50bc0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10852b6ec(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10852b860; end: 10852b8cb;  */

void FUN_10852b860(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10852b6ec(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10852b8cc; end: 10852ba5f;  */

void FUN_10852b8cc(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110a50c10;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f4a390b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a50c10;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a50c10,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar4 = (undefined *)puVar6;
      param_4 = param_3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar4 = (undefined *)puVar6;
        param_4 = param_3;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_10852ba60;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar7 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar5 = &UNK_110a50c60;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f4a390b;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
      param_4 = (undefined *)((long)puVar4 * 10);
      puVar5 = &UNK_110a50c60;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a50c60,&uStack_100,param_4);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      puVar7 = (undefined *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined *)puVar6;
      }
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_108 = FUN_10852bbf8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_178,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar2);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    puVar2 = &UNK_110a50cb0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a50cb0,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x000107c278ac(&puStack_180);
    lVar8 = 0;
    do {
      if ((&cStack_149)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar7);
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_10852be28;
  if (puVar4 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar7;
    puStack_1b8 = puVar5;
    pppuStack_1b0 = &ppuStack_110;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110a50d00,&uStack_1e0,puVar2);
    func_0x000107c278ac(&puStack_1c8);
  }
  return;
}



/* Entry: 10852ba60; end: 10852bbf7;  */

void FUN_10852ba60(long param_1,undefined *param_2,undefined *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110a50c60;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f4a390b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      param_4 = (long)param_3 * 10;
      puVar2 = &UNK_110a50c60;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a50c60,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar5 = (undefined *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined *)puVar6;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10852bbf8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a390b;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_f8,puVar3);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar4 = &UNK_110a50cb0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a50cb0,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x000107c278ac(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(puVar5);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_10852be28;
  if (puVar3 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar5;
    puStack_138 = puVar2;
    ppuStack_130 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a50d00,&uStack_160,puVar4);
    func_0x000107c278ac(&puStack_148);
  }
  return;
}



/* Entry: 10852bbf8; end: 10852be27;  */

void FUN_10852bbf8(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a50cb0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a50cb0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_10852be28;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110a50d00,&uStack_e0,puVar1);
    func_0x000107c278ac(&puStack_c8);
  }
  return;
}



/* Entry: 10852be28; end: 10852be9f;  */

void FUN_10852be28(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a50d00,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10852bea0; end: 10852c0cf;  */

/* WARNING: Removing unreachable block (ram,0x00010852c538) */
/* WARNING: Removing unreachable block (ram,0x00010852c9e0) */

void FUN_10852bea0(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined *puStack_410;
  long *plStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [3];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  long *plStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [3];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  puVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar16 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_110a50d50;
    unaff_x23 = &uStack_98;
    puVar5 = &uStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar15 = 0;
    puVar4 = auStack_78;
    puVar7 = param_5;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_120;
  pcStack_a8 = FUN_10852c0d0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar10 = (undefined8 *)&UNK_110a50da0;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar8 = puVar12;
    puVar7 = puVar5;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar12;
      puVar7 = puVar5;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_128 = FUN_10852c244;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar10;
  puVar4 = puVar8;
  puVar2 = puVar7;
  puVar3 = param_6;
  puVar12 = param_7;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  _objc_retain(param_6);
  if (puVar5 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar5[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_1d8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_1c0,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_1a8,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      unaff_x26 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_6);
      unaff_x26 = (undefined *)param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_190,unaff_x26);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x000107c27984(&uStack_1f8,auStack_1d8,&lStack_178,4);
    puVar1 = (undefined8 *)&UNK_110a50df0;
    unaff_x25 = &uStack_1f8;
    puVar4 = &uStack_1f8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_1e0 = unaff_x25;
    func_0x000107c278ac(&puStack_1e0);
    lVar15 = 0;
    puVar2 = param_7;
    do {
      if ((&cStack_179)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar5 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_1d8);
  _objc_release(param_6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar10);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar14 = &uStack_280;
  pcStack_208 = FUN_10852c578;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar1;
  puVar13 = puVar4;
  puStack_240 = auStack_1d8;
  puStack_238 = puVar5;
  puStack_230 = (undefined *)param_6;
  puStack_228 = puVar7;
  puStack_220 = puVar8;
  puStack_218 = puVar10;
  pppuStack_210 = &ppuStack_130;
  _objc_retain(puVar1);
  plVar16 = (long *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar6[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar7 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar5 = auStack_260;
    func_0x000107c278b8(auStack_260,puVar7);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar11 = (undefined8 *)&UNK_110a50e40;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar13 = puVar14;
    puVar2 = puVar4;
    param_6 = &uStack_280;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar13 = puVar14;
      puVar2 = puVar4;
      param_6 = &uStack_280;
    }
  }
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar8 = puVar4;
  __Unwind_Resume();
  pcStack_288 = FUN_10852c6ec;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar11;
  puVar10 = puVar13;
  puStack_2d0 = unaff_x26;
  puStack_2c8 = unaff_x25;
  puStack_2c0 = auStack_1d8;
  puStack_2b8 = puVar5;
  puStack_2b0 = (undefined *)param_6;
  plStack_2a8 = plVar16;
  puStack_2a0 = puVar4;
  puStack_298 = puVar1;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar8 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar8[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar11;
      _objc_retainAutorelease(puVar11);
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_338,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar1 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x000107c278b8(auStack_320,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_308,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar9 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar9 = (undefined *)puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_2f0,puVar9);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x000107c27984(&uStack_358,auStack_338,&lStack_2d8,4);
    puVar7 = (undefined8 *)&UNK_110a50e90;
    unaff_x25 = &uStack_358;
    puVar10 = &uStack_358;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a50e90,puVar10,puVar12);
    puStack_340 = unaff_x25;
    func_0x000107c278ac(&puStack_340);
    lVar15 = 0;
    do {
      if ((&cStack_2d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  puVar1 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_338);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar11);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar12 = &uStack_3e0;
  pcStack_368 = FUN_10852ca20;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar8 = puVar10;
  puStack_3a0 = auStack_338;
  puStack_398 = puVar1;
  puStack_390 = (undefined *)puVar3;
  puStack_388 = puVar2;
  puStack_380 = puVar13;
  puStack_378 = puVar11;
  pppuStack_370 = &pppuStack_290;
  _objc_retain(puVar7);
  plVar16 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar4[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar5 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar1 = auStack_3c0;
    func_0x000107c278b8(auStack_3c0,puVar5);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x000107c27984(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
    puVar5 = (undefined8 *)&UNK_110a50ee0;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a50ee0,&uStack_3e0,puVar10);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x000107c278ac(&puStack_3c8);
    puVar8 = puVar12;
    puVar3 = &uStack_3e0;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      puVar8 = puVar12;
      puVar3 = &uStack_3e0;
    }
  }
  puVar4 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar10 = puVar4;
  __Unwind_Resume();
  pcStack_3e8 = FUN_10852cb94;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puStack_420 = auStack_338;
  puStack_418 = puVar1;
  puStack_410 = (undefined *)puVar3;
  plStack_408 = plVar16;
  puStack_400 = puVar4;
  puStack_3f8 = puVar7;
  pppuStack_3f0 = &pppuStack_370;
  _objc_retain(puVar5);
  if (puVar10 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar10[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_440,puVar1);
    uStack_460 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    func_0x000107c27984(&uStack_460,auStack_440,&lStack_428,1);
    puVar2 = (undefined8 *)&UNK_110a50f30;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a50f30,&uStack_460,puVar8);
    puStack_448 = (undefined1 *)&uStack_460;
    func_0x000107c278ac(&puStack_448);
    if (cStack_429 < '\0') {
      __ZdlPv(auStack_440[0]);
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    __Unwind_Resume();
    _objc_retain(puVar2);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_10852cb94(puVar1,puVar2,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10852c0d0; end: 10852c243;  */

/* WARNING: Removing unreachable block (ram,0x00010852c538) */
/* WARNING: Removing unreachable block (ram,0x00010852c9e0) */

void FUN_10852c0d0(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined *puStack_370;
  long *plStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [3];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  long *plStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [3];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar8 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = (undefined8 *)&UNK_110a50da0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = puVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar2;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_10852c244;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar9 = puVar8;
  puVar6 = param_5;
  puVar13 = param_6;
  puVar12 = param_7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (puVar2 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_138,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_120,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_108,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      unaff_x26 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_6);
      unaff_x26 = (undefined *)param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_f0,unaff_x26);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_d8,4);
    puVar5 = (undefined8 *)&UNK_110a50df0;
    unaff_x25 = &uStack_158;
    puVar9 = &uStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_140 = unaff_x25;
    func_0x000107c278ac(&puStack_140);
    lVar15 = 0;
    puVar6 = param_7;
    do {
      if ((&cStack_d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar8);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_138);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_1e0;
  pcStack_168 = FUN_10852c578;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar10 = puVar9;
  puStack_1a0 = auStack_138;
  puStack_198 = puVar2;
  puStack_190 = (undefined *)param_6;
  puStack_188 = param_5;
  puStack_180 = puVar8;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_90;
  _objc_retain(puVar5);
  plVar14 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar3[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar2 = auStack_1c0;
    func_0x000107c278b8(auStack_1c0,puVar1);
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x000107c27984(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
    puVar7 = (undefined8 *)&UNK_110a50e40;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1c8 = (undefined1 *)&uStack_1e0;
    func_0x000107c278ac(&puStack_1c8);
    puVar10 = puVar11;
    puVar6 = puVar9;
    param_6 = &uStack_1e0;
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
      puVar10 = puVar11;
      puVar6 = puVar9;
      param_6 = &uStack_1e0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10852c6ec;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar9 = puVar10;
  puStack_230 = unaff_x26;
  puStack_228 = unaff_x25;
  puStack_220 = auStack_138;
  puStack_218 = puVar2;
  puStack_210 = (undefined *)param_6;
  plStack_208 = plVar14;
  puStack_200 = puVar1;
  puStack_1f8 = puVar5;
  pppuStack_1f0 = &ppuStack_170;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  _objc_retain(puVar6);
  _objc_retain(puVar13);
  if (puVar3 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar3[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_298,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_280,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_268,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar4 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar4 = (undefined *)puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x000107c278b8(auStack_250,puVar4);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_238,4);
    puVar8 = (undefined8 *)&UNK_110a50e90;
    unaff_x25 = &uStack_2b8;
    puVar9 = &uStack_2b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a50e90,puVar9,puVar12);
    puStack_2a0 = unaff_x25;
    func_0x000107c278ac(&puStack_2a0);
    lVar15 = 0;
    do {
      if ((&cStack_239)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(puVar13);
  _objc_release(puVar6);
  _objc_release(puVar10);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_298);
  _objc_release(puVar13);
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_340;
  pcStack_2c8 = FUN_10852ca20;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar12 = puVar9;
  puStack_300 = auStack_298;
  puStack_2f8 = puVar1;
  puStack_2f0 = (undefined *)puVar13;
  puStack_2e8 = puVar6;
  puStack_2e0 = puVar10;
  puStack_2d8 = puVar7;
  pppuStack_2d0 = &pppuStack_1f0;
  _objc_retain(puVar8);
  plVar14 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar5[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    puVar1 = auStack_320;
    func_0x000107c278b8(auStack_320,puVar2);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    puVar2 = (undefined8 *)&UNK_110a50ee0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a50ee0,&uStack_340,puVar9);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar12 = puVar3;
    puVar13 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar12 = puVar3;
      puVar13 = &uStack_340;
    }
  }
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_348 = FUN_10852cb94;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puStack_380 = auStack_298;
  puStack_378 = puVar1;
  puStack_370 = (undefined *)puVar13;
  plStack_368 = plVar14;
  puStack_360 = puVar5;
  puStack_358 = puVar8;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar2);
  if (puVar6 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar6[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_3a0,puVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
    puVar9 = (undefined8 *)&UNK_110a50f30;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a50f30,&uStack_3c0,puVar12);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(puVar2);
    __Unwind_Resume();
    _objc_retain(puVar9);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_10852cb94(puVar1,puVar9,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 10852c244; end: 10852c577;  */

/* WARNING: Removing unreachable block (ram,0x00010852c538) */
/* WARNING: Removing unreachable block (ram,0x00010852c9e0) */

void FUN_10852c244(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  long *plStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [3];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  puVar4 = param_5;
  puVar12 = param_6;
  puVar8 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      unaff_x26 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_6);
      unaff_x26 = (undefined *)param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_70,unaff_x26);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = (undefined8 *)&UNK_110a50df0;
    unaff_x25 = &uStack_d8;
    puVar5 = &uStack_d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_c0 = unaff_x25;
    func_0x000107c278ac(&puStack_c0);
    lVar13 = 0;
    puVar4 = param_7;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_b8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_160;
  pcStack_e8 = FUN_10852c578;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar10 = puVar5;
  puStack_120 = auStack_b8;
  puStack_118 = puVar2;
  puStack_110 = (undefined *)param_6;
  puStack_108 = param_5;
  puStack_100 = param_4;
  puStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar14 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar2 = auStack_140;
    func_0x000107c278b8(auStack_140,puVar4);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x000107c27984(&uStack_160,auStack_140,&lStack_128,1);
    puVar9 = (undefined8 *)&UNK_110a50e40;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x000107c278ac(&puStack_148);
    puVar10 = puVar11;
    puVar4 = puVar5;
    param_6 = &uStack_160;
    if (cStack_129 < '\0') {
      __ZdlPv(auStack_140[0]);
      puVar10 = puVar11;
      puVar4 = puVar5;
      param_6 = &uStack_160;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_168 = FUN_10852c6ec;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar11 = puVar10;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = auStack_b8;
  puStack_198 = puVar2;
  puStack_190 = (undefined *)param_6;
  plStack_188 = plVar14;
  puStack_180 = puVar5;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_f0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  if (puVar6 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar6[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_218,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_200,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_1e8,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar7 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar7 = (undefined *)puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x000107c278b8(auStack_1d0,puVar7);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x000107c27984(&uStack_238,auStack_218,&lStack_1b8,4);
    puVar3 = (undefined8 *)&UNK_110a50e90;
    unaff_x25 = &uStack_238;
    puVar11 = &uStack_238;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a50e90,puVar11,puVar8);
    puStack_220 = unaff_x25;
    func_0x000107c278ac(&puStack_220);
    lVar13 = 0;
    do {
      if ((&cStack_1b9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar10);
  puVar1 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_218);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar8 = puVar1;
    __Unwind_Resume();
    puVar6 = &uStack_2c0;
    pcStack_248 = FUN_10852ca20;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar3;
    puVar2 = puVar11;
    puStack_280 = auStack_218;
    puStack_278 = puVar1;
    puStack_270 = (undefined *)puVar12;
    puStack_268 = puVar4;
    puStack_260 = puVar10;
    puStack_258 = puVar9;
    pppuStack_250 = &ppuStack_170;
    _objc_retain(puVar3);
    plVar14 = (long *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar8[1];
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar5 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      puVar1 = auStack_2a0;
      func_0x000107c278b8(auStack_2a0,puVar5);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
      puVar5 = (undefined8 *)&UNK_110a50ee0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a50ee0,&uStack_2c0,puVar11);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x000107c278ac(&puStack_2a8);
      puVar2 = puVar6;
      puVar12 = &uStack_2c0;
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
        puVar2 = puVar6;
        puVar12 = &uStack_2c0;
      }
    }
    puVar4 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar9 = puVar4;
    __Unwind_Resume();
    pcStack_2c8 = FUN_10852cb94;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar5;
    puStack_300 = auStack_218;
    puStack_2f8 = puVar1;
    puStack_2f0 = (undefined *)puVar12;
    plStack_2e8 = plVar14;
    puStack_2e0 = puVar4;
    puStack_2d8 = puVar3;
    pppuStack_2d0 = &pppuStack_250;
    _objc_retain(puVar5);
    if (puVar9 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar9[1];
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar1 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      func_0x000107c278b8(auStack_320,puVar1);
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
      puVar8 = (undefined8 *)&UNK_110a50f30;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a50f30,&uStack_340,puVar2);
      puStack_328 = (undefined1 *)&uStack_340;
      func_0x000107c278ac(&puStack_328);
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
      }
    }
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      __Unwind_Resume();
      _objc_retain(puVar8);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_10852cb94(puVar1,puVar8,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852c578; end: 10852c6eb;  */

/* WARNING: Removing unreachable block (ram,0x00010852c9e0) */

void FUN_10852c578(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x25;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  long *plStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [3];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar8 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = (undefined8 *)&UNK_110a50e40;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = puVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar2;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_10852c6ec;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar5 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (puVar2 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_138,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_120,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_108,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar3 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar3 = (undefined *)param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_f0,puVar3);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_d8,4);
    puVar6 = (undefined8 *)&UNK_110a50e90;
    unaff_x25 = &uStack_158;
    puVar5 = &uStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a50e90,puVar5,param_7);
    puStack_140 = unaff_x25;
    func_0x000107c278ac(&puStack_140);
    lVar12 = 0;
    do {
      if ((&cStack_d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar8);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_138);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_1e0;
  pcStack_168 = FUN_10852ca20;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar9 = puVar5;
  puStack_1a0 = auStack_138;
  puStack_198 = puVar2;
  puStack_190 = (undefined *)param_6;
  puStack_188 = param_5;
  puStack_180 = puVar8;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_90;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar2 = auStack_1c0;
    func_0x000107c278b8(auStack_1c0,puVar1);
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x000107c27984(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
    puVar7 = (undefined8 *)&UNK_110a50ee0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a50ee0,&uStack_1e0,puVar5);
    puStack_1c8 = (undefined1 *)&uStack_1e0;
    func_0x000107c278ac(&puStack_1c8);
    puVar9 = puVar10;
    param_6 = &uStack_1e0;
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
      puVar9 = puVar10;
      param_6 = &uStack_1e0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar5 = puVar1;
    __Unwind_Resume();
    pcStack_1e8 = FUN_10852cb94;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar7;
    puStack_220 = auStack_138;
    puStack_218 = puVar2;
    puStack_210 = (undefined *)param_6;
    plStack_208 = plVar11;
    puStack_200 = puVar1;
    puStack_1f8 = puVar6;
    pppuStack_1f0 = &ppuStack_170;
    _objc_retain(puVar7);
    if (puVar5 != (undefined8 *)0x0) {
      plVar11 = (long *)puVar5[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_240,puVar1);
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      func_0x000107c27984(&uStack_260,auStack_240,&lStack_228,1);
      puVar8 = (undefined8 *)&UNK_110a50f30;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a50f30,&uStack_260,puVar9);
      puStack_248 = (undefined1 *)&uStack_260;
      func_0x000107c278ac(&puStack_248);
      if (cStack_229 < '\0') {
        __ZdlPv(auStack_240[0]);
      }
    }
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      __Unwind_Resume();
      _objc_retain(puVar8);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_10852cb94(puVar1,puVar8,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852c6ec; end: 10852ca1f;  */

/* WARNING: Removing unreachable block (ram,0x00010852c9e0) */

void FUN_10852c6ec(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x25;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_88,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar2 = (undefined *)param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_70,puVar2);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = (undefined8 *)&UNK_110a50e90;
    unaff_x25 = &uStack_d8;
    puVar6 = &uStack_d8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a50e90,puVar6,param_7);
    puStack_c0 = unaff_x25;
    func_0x000107c278ac(&puStack_c0);
    lVar9 = 0;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_6);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    puVar4 = puVar3;
    __Unwind_Resume();
    puVar7 = &uStack_160;
    pcStack_e8 = FUN_10852ca20;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puVar8 = puVar6;
    puStack_120 = auStack_b8;
    puStack_118 = puVar3;
    puStack_110 = (undefined *)param_6;
    puStack_108 = param_5;
    puStack_100 = param_4;
    puStack_f8 = param_3;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    plVar10 = (long *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar10 = (long *)puVar4[1];
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar5 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      puVar3 = auStack_140;
      func_0x000107c278b8(auStack_140,puVar5);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x000107c27984(&uStack_160,auStack_140,&lStack_128,1);
      puVar5 = (undefined8 *)&UNK_110a50ee0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a50ee0,&uStack_160,puVar6);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x000107c278ac(&puStack_148);
      puVar8 = puVar7;
      param_6 = &uStack_160;
      if (cStack_129 < '\0') {
        __ZdlPv(auStack_140[0]);
        puVar8 = puVar7;
        param_6 = &uStack_160;
      }
    }
    puVar6 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      _objc_release(puVar1);
      puVar7 = puVar6;
      __Unwind_Resume();
      pcStack_168 = FUN_10852cb94;
      lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar5;
      puStack_1a0 = auStack_b8;
      puStack_198 = puVar3;
      puStack_190 = (undefined *)param_6;
      plStack_188 = plVar10;
      puStack_180 = puVar6;
      puStack_178 = puVar1;
      ppuStack_170 = &puStack_f0;
      _objc_retain(puVar5);
      if (puVar7 != (undefined8 *)0x0) {
        plVar10 = (long *)puVar7[1];
        _objc_retain(puVar5);
        if (puVar5 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f4a390b;
        }
        else {
          puVar1 = puVar5;
          _objc_retainAutorelease(puVar5);
          func_0x00010bdc3520();
        }
        _objc_release(puVar5);
        func_0x000107c278b8(auStack_1c0,puVar1);
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        func_0x000107c27984(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
        puVar4 = (undefined8 *)&UNK_110a50f30;
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a50f30,&uStack_1e0,puVar8);
        puStack_1c8 = (undefined1 *)&uStack_1e0;
        func_0x000107c278ac(&puStack_1c8);
        if (cStack_1a9 < '\0') {
          __ZdlPv(auStack_1c0[0]);
        }
      }
      puVar1 = puVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
        ___stack_chk_fail();
        _objc_release(puVar5);
        _objc_release(puVar5);
        __Unwind_Resume();
        _objc_retain(puVar4);
        if (puVar1 != (undefined8 *)0x0) {
          FUN_10852cb94(puVar1,puVar4,(long)(param_1 * 1000.0));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar4);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852ca20; end: 10852cb93;  */

void FUN_10852ca20(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a50ee0;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a50ee0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a50f30;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a50f30,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10852cb94(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10852cb94; end: 10852cd07;  */

void FUN_10852cb94(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a50f30;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a50f30,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10852cb94(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10852cd08; end: 10852cd73;  */

void FUN_10852cd08(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10852cb94(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10852cd74; end: 10852d033;  */

/* WARNING: Removing unreachable block (ram,0x00010852d2bc) */
/* WARNING: Removing unreachable block (ram,0x00010852cffc) */
/* WARNING: Removing unreachable block (ram,0x00010852d57c) */

void FUN_10852cd74(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined1 *puStack_748;
  long *plStack_740;
  long *plStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  long *plStack_6c8;
  long *plStack_6c0;
  long *plStack_6b8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 *puStack_688;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  long *plStack_648;
  undefined8 *puStack_640;
  long *plStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  undefined8 auStack_5f8 [2];
  char cStack_5e1;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  long *plStack_528;
  long *plStack_520;
  long *plStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  undefined8 *puStack_3a0;
  long *plStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  undefined8 *puStack_300;
  long *plStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long *plStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  long *plStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2;
  puVar1 = param_3;
  puVar9 = param_4;
  puVar4 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,plVar13);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    plVar13 = (long *)&UNK_110a50f80;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar12 = 0;
    puVar1 = puVar3;
    puVar9 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  plVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_c8 = FUN_10852d034;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar13;
  puVar3 = puVar1;
  puVar10 = puVar9;
  puVar8 = puVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  _objc_retain(puVar1);
  _objc_retain(puVar9);
  if (plVar14 != (long *)0x0) {
    plVar14 = (long *)plVar14[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x000107c278b8(auStack_160,plVar2);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_148,puVar3);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    plVar2 = (long *)&UNK_110a50fd0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar12 = 0;
    puVar3 = puVar7;
    puVar10 = puVar4;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar9);
  _objc_release(puVar1);
  plVar14 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_160);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar4 = &uStack_240;
  pcStack_188 = FUN_10852d2f4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar2;
  puVar1 = puVar3;
  puVar9 = puVar10;
  ppuStack_190 = &puStack_d0;
  _objc_retain(plVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  if (plVar14 != (long *)0x0) {
    plVar14 = (long *)plVar14[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    func_0x000107c278b8(auStack_220,plVar13);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_208,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_1f0,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_1d8,3);
    plVar13 = (long *)&UNK_110a51020;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51020,&uStack_240,puVar8);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar12 = 0;
    puVar1 = puVar4;
    puVar9 = puVar8;
    do {
      if ((&cStack_1d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar10);
  _objc_release(puVar3);
  plVar14 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  puVar4 = auStack_220;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar4);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(plVar2);
  plVar6 = plVar14;
  __Unwind_Resume();
  pcStack_248 = FUN_10852d5b4;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar8 = puVar1;
  puVar7 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = puVar4;
  plStack_270 = plVar14;
  puStack_268 = puVar10;
  puStack_260 = puVar3;
  plStack_258 = plVar2;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(plVar13);
  _objc_retain(puVar1);
  puVar3 = (undefined8 *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = (long *)plVar6[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_2b8;
    func_0x000107c278b8(auStack_2b8,plVar2);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar4 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_2a0,puVar4);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x000107c27984(&uStack_2d8,auStack_2b8,&lStack_288,2);
    plVar11 = (long *)&UNK_110a51070;
    puVar4 = &uStack_2d8;
    puVar8 = &uStack_2d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51070,puVar8,puVar9);
    puStack_2c0 = puVar4;
    func_0x000107c278ac(&puStack_2c0);
    lVar12 = 0;
    puVar3 = auStack_2b8;
    puVar7 = puVar9;
    do {
      if ((&cStack_289)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar1);
  plVar14 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar13);
  plVar6 = plVar14;
  __Unwind_Resume();
  pcStack_2e8 = FUN_10852d7e4;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar11;
  puVar9 = puVar8;
  puVar10 = puVar7;
  puStack_320 = unaff_x24;
  puStack_318 = puVar4;
  puStack_310 = puVar3;
  plStack_308 = plVar14;
  puStack_300 = puVar1;
  plStack_2f8 = plVar13;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(plVar11);
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar13 = (long *)plVar6[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x24 = auStack_358;
    func_0x000107c278b8(auStack_358,plVar14);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_340,puVar1);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x000107c27984(&uStack_378,auStack_358,&lStack_328,2);
    plVar2 = (long *)&UNK_110a510c0;
    puVar4 = &uStack_378;
    puVar9 = &uStack_378;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a510c0,puVar9,puVar7);
    puStack_360 = puVar4;
    func_0x000107c278ac(&puStack_360);
    lVar12 = 0;
    puVar1 = auStack_358;
    puVar10 = puVar7;
    do {
      if ((&cStack_329)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  plVar13 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(puVar8);
  _objc_release(plVar11);
  plVar6 = plVar13;
  __Unwind_Resume();
  puVar7 = &uStack_400;
  pcStack_388 = FUN_10852da14;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar2;
  puVar3 = puVar9;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = puVar4;
  puStack_3b0 = puVar1;
  plStack_3a8 = plVar13;
  puStack_3a0 = puVar8;
  plStack_398 = plVar11;
  pppuStack_390 = &pppuStack_2f0;
  _objc_retain(plVar2);
  plVar13 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar13 = (long *)plVar6[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    puVar4 = auStack_3e0;
    func_0x000107c278b8(auStack_3e0,plVar14);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x000107c27984(&uStack_400,auStack_3e0,&lStack_3c8,1);
    plVar14 = (long *)&UNK_110a51110;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51110,&uStack_400,puVar9);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x000107c278ac(&puStack_3e8);
    puVar3 = puVar7;
    puVar10 = puVar9;
    puVar1 = &uStack_400;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar3 = puVar7;
      puVar10 = puVar9;
      puVar1 = &uStack_400;
    }
  }
  plVar11 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar5 = plVar11;
  __Unwind_Resume();
  puVar8 = &uStack_480;
  pcStack_408 = FUN_10852db88;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar14;
  puVar9 = puVar3;
  puStack_440 = unaff_x24;
  puStack_438 = puVar4;
  puStack_430 = puVar1;
  plStack_428 = plVar13;
  plStack_420 = plVar11;
  plStack_418 = plVar2;
  pppuStack_410 = &pppuStack_390;
  _objc_retain(plVar14);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    puVar4 = auStack_460;
    func_0x000107c278b8(auStack_460,plVar2);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x000107c27984(&uStack_480,auStack_460,&lStack_448,1);
    plVar6 = (long *)&UNK_110a51160;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51160,&uStack_480,puVar3);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x000107c278ac(&puStack_468);
    puVar9 = puVar8;
    puVar10 = puVar3;
    puVar1 = &uStack_480;
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
      puVar9 = puVar8;
      puVar10 = puVar3;
      puVar1 = &uStack_480;
    }
  }
  plVar2 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar5 = plVar2;
  __Unwind_Resume();
  puVar8 = &uStack_500;
  pcStack_488 = FUN_10852dcfc;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar6;
  puVar3 = puVar9;
  puStack_4c0 = unaff_x24;
  puStack_4b8 = puVar4;
  puStack_4b0 = puVar1;
  plStack_4a8 = plVar13;
  plStack_4a0 = plVar2;
  plStack_498 = plVar14;
  pppuStack_490 = &pppuStack_410;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    puVar4 = auStack_4e0;
    func_0x000107c278b8(auStack_4e0,plVar14);
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    func_0x000107c27984(&uStack_500,auStack_4e0,&lStack_4c8,1);
    plVar11 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a511b0,&uStack_500,puVar9);
    puStack_4e8 = (undefined1 *)&uStack_500;
    func_0x000107c278ac(&puStack_4e8);
    puVar3 = puVar8;
    puVar10 = puVar9;
    puVar1 = &uStack_500;
    if (cStack_4c9 < '\0') {
      __ZdlPv(auStack_4e0[0]);
      puVar3 = puVar8;
      puVar10 = puVar9;
      puVar1 = &uStack_500;
    }
  }
  plVar14 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar5 = plVar14;
  __Unwind_Resume();
  puVar8 = &uStack_580;
  pcStack_508 = FUN_10852de70;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar11;
  puVar9 = puVar3;
  puStack_540 = unaff_x24;
  puStack_538 = puVar4;
  puStack_530 = puVar1;
  plStack_528 = plVar13;
  plStack_520 = plVar14;
  plStack_518 = plVar6;
  pppuStack_510 = &pppuStack_490;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar4 = auStack_560;
    func_0x000107c278b8(auStack_560,plVar14);
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x000107c27984(&uStack_580,auStack_560,&lStack_548,1);
    plVar2 = (long *)&UNK_110a51200;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51200,&uStack_580,puVar3);
    puStack_568 = (undefined1 *)&uStack_580;
    func_0x000107c278ac(&puStack_568);
    puVar9 = puVar8;
    puVar10 = puVar3;
    puVar1 = &uStack_580;
    if (cStack_549 < '\0') {
      __ZdlPv(auStack_560[0]);
      puVar9 = puVar8;
      puVar10 = puVar3;
      puVar1 = &uStack_580;
    }
  }
  plVar14 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcStack_588 = FUN_10852dfe4;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar2;
  puVar3 = puVar9;
  puStack_5c0 = unaff_x24;
  puStack_5b8 = puVar4;
  puStack_5b0 = puVar1;
  plStack_5a8 = plVar13;
  plStack_5a0 = plVar14;
  plStack_598 = plVar11;
  pppuStack_590 = &pppuStack_510;
  _objc_retain(plVar2);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x24 = auStack_5f8;
    func_0x000107c278b8(auStack_5f8,plVar14);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_5e0,puVar1);
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    func_0x000107c27984(&uStack_618,auStack_5f8,&lStack_5c8,2);
    plVar6 = (long *)&UNK_110a51250;
    puVar4 = &uStack_618;
    puVar3 = &uStack_618;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51250,puVar3,puVar10);
    puStack_600 = puVar4;
    func_0x000107c278ac(&puStack_600);
    lVar12 = 0;
    puVar1 = auStack_5f8;
    do {
      if ((&cStack_5c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    if (cStack_5e1 < '\0') {
      __ZdlPv(auStack_5f8[0]);
    }
    _objc_release(puVar9);
    _objc_release(plVar2);
    plVar11 = plVar13;
    __Unwind_Resume();
    puVar8 = &uStack_6a0;
    pcStack_628 = FUN_10852e214;
    lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar6;
    puVar10 = puVar3;
    puStack_660 = unaff_x24;
    puStack_658 = puVar4;
    puStack_650 = puVar1;
    plStack_648 = plVar13;
    puStack_640 = puVar9;
    plStack_638 = plVar2;
    pppuStack_630 = &pppuStack_590;
    _objc_retain(plVar6);
    if (plVar11 != (long *)0x0) {
      plVar13 = (long *)plVar11[1];
      plVar14 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        plVar11 = (long *)plVar11[1];
        _objc_retain(plVar6);
        if (plVar6 == (long *)0x0) {
          plVar13 = (long *)&UNK_10f4a390b;
        }
        else {
          plVar13 = plVar6;
          _objc_retainAutorelease(plVar6);
          func_0x00010bdc3520();
        }
        _objc_release(plVar6);
        puVar4 = auStack_680;
        func_0x000107c278b8(auStack_680,plVar13);
        uStack_6a0 = 0;
        uStack_698 = 0;
        uStack_690 = 0;
        func_0x000107c27984(&uStack_6a0,auStack_680,&lStack_668,1);
        plVar14 = (long *)&UNK_110a512a0;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a512a0,&uStack_6a0,puVar3);
        puStack_688 = (undefined1 *)&uStack_6a0;
        func_0x000107c278ac(&puStack_688);
        puVar10 = puVar8;
        puVar1 = &uStack_6a0;
        if (cStack_669 < '\0') {
          __ZdlPv(auStack_680[0]);
          puVar10 = puVar8;
          puVar1 = &uStack_6a0;
        }
      }
    }
    plVar13 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
      ___stack_chk_fail();
      _objc_release(plVar6);
      _objc_release(plVar6);
      plVar5 = plVar13;
      __Unwind_Resume();
      pcStack_6a8 = FUN_10852e3a8;
      lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar2 = plVar14;
      puStack_6e0 = unaff_x24;
      puStack_6d8 = puVar4;
      puStack_6d0 = puVar1;
      plStack_6c8 = plVar11;
      plStack_6c0 = plVar13;
      plStack_6b8 = plVar6;
      pppuStack_6b0 = &pppuStack_630;
      _objc_retain(plVar14);
      if (plVar5 != (long *)0x0) {
        plVar13 = (long *)plVar5[1];
        plVar2 = (long *)&UNK_110a512f0;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a512f0);
        if ((int)plVar13 != 0) {
          plVar13 = (long *)plVar5[1];
          _objc_retain(plVar14);
          if (plVar14 == (long *)0x0) {
            plVar2 = (long *)&UNK_10f4a390b;
          }
          else {
            plVar2 = plVar14;
            _objc_retainAutorelease(plVar14);
            func_0x00010bdc3520();
          }
          _objc_release(plVar14);
          func_0x000107c278b8(auStack_700,plVar2);
          uStack_720 = 0;
          uStack_718 = 0;
          uStack_710 = 0;
          func_0x000107c27984(&uStack_720,auStack_700,&lStack_6e8,1);
          plVar2 = (long *)&UNK_110a512f0;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a512f0,&uStack_720,puVar10);
          puStack_708 = (undefined1 *)&uStack_720;
          func_0x000107c278ac(&puStack_708);
          if (cStack_6e9 < '\0') {
            __ZdlPv(auStack_700[0]);
          }
        }
      }
      plVar13 = plVar14;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6e8) {
        ___stack_chk_fail();
        _objc_release(plVar14);
        _objc_release(plVar14);
        plVar11 = plVar13;
        __Unwind_Resume();
        pcStack_728 = FUN_10852e53c;
        if (plVar11 != (long *)0x0) {
          plVar6 = (long *)plVar11[1];
          plStack_740 = plVar13;
          plStack_738 = plVar14;
          pppuStack_730 = &pppuStack_6b0;
          (**(code **)(*plVar6 + 0x28))(plVar6,&UNK_110a51340);
          if ((int)plVar6 != 0) {
            uStack_760 = 0;
            uStack_758 = 0;
            uStack_750 = 0;
            (**(code **)(*(long *)plVar11[1] + 0x18))
                      ((long *)plVar11[1],&UNK_110a51340,&uStack_760,plVar2);
            puStack_748 = (undefined1 *)&uStack_760;
            func_0x000107c278ac(&puStack_748);
          }
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852d034; end: 10852d2f3;  */

/* WARNING: Removing unreachable block (ram,0x00010852d2bc) */
/* WARNING: Removing unreachable block (ram,0x00010852d57c) */

void FUN_10852d034(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 *puStack_688;
  long *plStack_680;
  long *plStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  long *plStack_600;
  long *plStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  undefined8 *puStack_580;
  long *plStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined8 *puStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined8 *puStack_240;
  long *plStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2;
  puVar1 = param_3;
  puVar7 = param_4;
  puVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,plVar13);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    plVar13 = (long *)&UNK_110a50fd0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar12 = 0;
    puVar1 = puVar3;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  plVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_c8 = FUN_10852d2f4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar13;
  puVar3 = puVar1;
  puVar9 = puVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  if (plVar14 != (long *)0x0) {
    plVar14 = (long *)plVar14[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x000107c278b8(auStack_160,plVar2);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_148,puVar3);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    plVar2 = (long *)&UNK_110a51020;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51020,&uStack_180,puVar10);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar12 = 0;
    puVar3 = puVar6;
    puVar9 = puVar10;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  plVar14 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puVar10 = auStack_160;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(plVar13);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcStack_188 = FUN_10852d5b4;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar2;
  puVar6 = puVar3;
  puVar8 = puVar9;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar10;
  plStack_1b0 = plVar14;
  puStack_1a8 = puVar7;
  puStack_1a0 = puVar1;
  plStack_198 = plVar13;
  ppuStack_190 = &puStack_d0;
  _objc_retain(plVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x24 = auStack_1f8;
    func_0x000107c278b8(auStack_1f8,plVar14);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_1e0,puVar1);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    plVar11 = (long *)&UNK_110a51070;
    puVar10 = &uStack_218;
    puVar6 = &uStack_218;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51070,puVar6,puVar9);
    puStack_200 = puVar10;
    func_0x000107c278ac(&puStack_200);
    lVar12 = 0;
    puVar1 = auStack_1f8;
    puVar8 = puVar9;
    do {
      if ((&cStack_1c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar3);
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(plVar2);
  plVar5 = plVar13;
  __Unwind_Resume();
  pcStack_228 = FUN_10852d7e4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar11;
  puVar7 = puVar6;
  puVar9 = puVar8;
  puStack_260 = unaff_x24;
  puStack_258 = puVar10;
  puStack_250 = puVar1;
  plStack_248 = plVar13;
  puStack_240 = puVar3;
  plStack_238 = plVar2;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(plVar11);
  _objc_retain(puVar6);
  puVar1 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x24 = auStack_298;
    func_0x000107c278b8(auStack_298,plVar14);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
    plVar14 = (long *)&UNK_110a510c0;
    puVar10 = &uStack_2b8;
    puVar7 = &uStack_2b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a510c0,puVar7,puVar8);
    puStack_2a0 = puVar10;
    func_0x000107c278ac(&puStack_2a0);
    lVar12 = 0;
    puVar1 = auStack_298;
    puVar9 = puVar8;
    do {
      if ((&cStack_269)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar6);
  plVar13 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar6);
  _objc_release(plVar11);
  plVar5 = plVar13;
  __Unwind_Resume();
  puVar8 = &uStack_340;
  pcStack_2c8 = FUN_10852da14;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar14;
  puVar3 = puVar7;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar10;
  puStack_2f0 = puVar1;
  plStack_2e8 = plVar13;
  puStack_2e0 = puVar6;
  plStack_2d8 = plVar11;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(plVar14);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    puVar10 = auStack_320;
    func_0x000107c278b8(auStack_320,plVar2);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    plVar2 = (long *)&UNK_110a51110;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51110,&uStack_340,puVar7);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar3 = puVar8;
    puVar9 = puVar7;
    puVar1 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar3 = puVar8;
      puVar9 = puVar7;
      puVar1 = &uStack_340;
    }
  }
  plVar11 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar4 = plVar11;
  __Unwind_Resume();
  puVar6 = &uStack_3c0;
  pcStack_348 = FUN_10852db88;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar2;
  puVar7 = puVar3;
  puStack_380 = unaff_x24;
  puStack_378 = puVar10;
  puStack_370 = puVar1;
  plStack_368 = plVar13;
  plStack_360 = plVar11;
  plStack_358 = plVar14;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar2);
  plVar13 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    puVar10 = auStack_3a0;
    func_0x000107c278b8(auStack_3a0,plVar14);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
    plVar5 = (long *)&UNK_110a51160;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51160,&uStack_3c0,puVar3);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    puVar7 = puVar6;
    puVar9 = puVar3;
    puVar1 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar7 = puVar6;
      puVar9 = puVar3;
      puVar1 = &uStack_3c0;
    }
  }
  plVar14 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar4 = plVar14;
  __Unwind_Resume();
  puVar6 = &uStack_440;
  pcStack_3c8 = FUN_10852dcfc;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar5;
  puVar3 = puVar7;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar10;
  puStack_3f0 = puVar1;
  plStack_3e8 = plVar13;
  plStack_3e0 = plVar14;
  plStack_3d8 = plVar2;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(plVar5);
  plVar13 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    puVar10 = auStack_420;
    func_0x000107c278b8(auStack_420,plVar14);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
    plVar11 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a511b0,&uStack_440,puVar7);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x000107c278ac(&puStack_428);
    puVar3 = puVar6;
    puVar9 = puVar7;
    puVar1 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar3 = puVar6;
      puVar9 = puVar7;
      puVar1 = &uStack_440;
    }
  }
  plVar14 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar14;
  __Unwind_Resume();
  puVar6 = &uStack_4c0;
  pcStack_448 = FUN_10852de70;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar11;
  puVar7 = puVar3;
  puStack_480 = unaff_x24;
  puStack_478 = puVar10;
  puStack_470 = puVar1;
  plStack_468 = plVar13;
  plStack_460 = plVar14;
  plStack_458 = plVar5;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar10 = auStack_4a0;
    func_0x000107c278b8(auStack_4a0,plVar14);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x000107c27984(&uStack_4c0,auStack_4a0,&lStack_488,1);
    plVar2 = (long *)&UNK_110a51200;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51200,&uStack_4c0,puVar3);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x000107c278ac(&puStack_4a8);
    puVar7 = puVar6;
    puVar9 = puVar3;
    puVar1 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar7 = puVar6;
      puVar9 = puVar3;
      puVar1 = &uStack_4c0;
    }
  }
  plVar14 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_488) {
    ___stack_chk_fail();
    _objc_release(plVar11);
    _objc_release(plVar11);
    plVar4 = plVar14;
    __Unwind_Resume();
    pcStack_4c8 = FUN_10852dfe4;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = plVar2;
    puVar3 = puVar7;
    puStack_500 = unaff_x24;
    puStack_4f8 = puVar10;
    puStack_4f0 = puVar1;
    plStack_4e8 = plVar13;
    plStack_4e0 = plVar14;
    plStack_4d8 = plVar11;
    pppuStack_4d0 = &pppuStack_450;
    _objc_retain(plVar2);
    _objc_retain(puVar7);
    puVar1 = (undefined8 *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar13 = (long *)plVar4[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar14 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar14 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      unaff_x24 = auStack_538;
      func_0x000107c278b8(auStack_538,plVar14);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_520,puVar1);
      uStack_558 = 0;
      uStack_550 = 0;
      uStack_548 = 0;
      func_0x000107c27984(&uStack_558,auStack_538,&lStack_508,2);
      plVar5 = (long *)&UNK_110a51250;
      puVar10 = &uStack_558;
      puVar3 = &uStack_558;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51250,puVar3,puVar9);
      puStack_540 = puVar10;
      func_0x000107c278ac(&puStack_540);
      lVar12 = 0;
      puVar1 = auStack_538;
      do {
        if ((&cStack_509)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(puVar7);
    plVar13 = plVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_521 < '\0') {
      __ZdlPv(auStack_538[0]);
    }
    _objc_release(puVar7);
    _objc_release(plVar2);
    plVar11 = plVar13;
    __Unwind_Resume();
    puVar6 = &uStack_5e0;
    pcStack_568 = FUN_10852e214;
    lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar5;
    puVar9 = puVar3;
    puStack_5a0 = unaff_x24;
    puStack_598 = puVar10;
    puStack_590 = puVar1;
    plStack_588 = plVar13;
    puStack_580 = puVar7;
    plStack_578 = plVar2;
    pppuStack_570 = &pppuStack_4d0;
    _objc_retain(plVar5);
    if (plVar11 != (long *)0x0) {
      plVar13 = (long *)plVar11[1];
      plVar14 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        plVar11 = (long *)plVar11[1];
        _objc_retain(plVar5);
        if (plVar5 == (long *)0x0) {
          plVar13 = (long *)&UNK_10f4a390b;
        }
        else {
          plVar13 = plVar5;
          _objc_retainAutorelease(plVar5);
          func_0x00010bdc3520();
        }
        _objc_release(plVar5);
        puVar10 = auStack_5c0;
        func_0x000107c278b8(auStack_5c0,plVar13);
        uStack_5e0 = 0;
        uStack_5d8 = 0;
        uStack_5d0 = 0;
        func_0x000107c27984(&uStack_5e0,auStack_5c0,&lStack_5a8,1);
        plVar14 = (long *)&UNK_110a512a0;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a512a0,&uStack_5e0,puVar3);
        puStack_5c8 = (undefined1 *)&uStack_5e0;
        func_0x000107c278ac(&puStack_5c8);
        puVar9 = puVar6;
        puVar1 = &uStack_5e0;
        if (cStack_5a9 < '\0') {
          __ZdlPv(auStack_5c0[0]);
          puVar9 = puVar6;
          puVar1 = &uStack_5e0;
        }
      }
    }
    plVar13 = plVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5a8) {
      ___stack_chk_fail();
      _objc_release(plVar5);
      _objc_release(plVar5);
      plVar4 = plVar13;
      __Unwind_Resume();
      pcStack_5e8 = FUN_10852e3a8;
      lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar2 = plVar14;
      puStack_620 = unaff_x24;
      puStack_618 = puVar10;
      puStack_610 = puVar1;
      plStack_608 = plVar11;
      plStack_600 = plVar13;
      plStack_5f8 = plVar5;
      pppuStack_5f0 = &pppuStack_570;
      _objc_retain(plVar14);
      if (plVar4 != (long *)0x0) {
        plVar13 = (long *)plVar4[1];
        plVar2 = (long *)&UNK_110a512f0;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a512f0);
        if ((int)plVar13 != 0) {
          plVar13 = (long *)plVar4[1];
          _objc_retain(plVar14);
          if (plVar14 == (long *)0x0) {
            plVar2 = (long *)&UNK_10f4a390b;
          }
          else {
            plVar2 = plVar14;
            _objc_retainAutorelease(plVar14);
            func_0x00010bdc3520();
          }
          _objc_release(plVar14);
          func_0x000107c278b8(auStack_640,plVar2);
          uStack_660 = 0;
          uStack_658 = 0;
          uStack_650 = 0;
          func_0x000107c27984(&uStack_660,auStack_640,&lStack_628,1);
          plVar2 = (long *)&UNK_110a512f0;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a512f0,&uStack_660,puVar9);
          puStack_648 = (undefined1 *)&uStack_660;
          func_0x000107c278ac(&puStack_648);
          if (cStack_629 < '\0') {
            __ZdlPv(auStack_640[0]);
          }
        }
      }
      plVar13 = plVar14;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_628) {
        ___stack_chk_fail();
        _objc_release(plVar14);
        _objc_release(plVar14);
        plVar11 = plVar13;
        __Unwind_Resume();
        pcStack_668 = FUN_10852e53c;
        if (plVar11 != (long *)0x0) {
          plVar5 = (long *)plVar11[1];
          plStack_680 = plVar13;
          plStack_678 = plVar14;
          pppuStack_670 = &pppuStack_5f0;
          (**(code **)(*plVar5 + 0x28))(plVar5,&UNK_110a51340);
          if ((int)plVar5 != 0) {
            uStack_6a0 = 0;
            uStack_698 = 0;
            uStack_690 = 0;
            (**(code **)(*(long *)plVar11[1] + 0x18))
                      ((long *)plVar11[1],&UNK_110a51340,&uStack_6a0,plVar2);
            puStack_688 = (undefined1 *)&uStack_6a0;
            func_0x000107c278ac(&puStack_688);
          }
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852d2f4; end: 10852d5b3;  */

/* WARNING: Removing unreachable block (ram,0x00010852d57c) */

void FUN_10852d2f4(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  long *plStack_548;
  long *plStack_540;
  long *plStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined8 *puStack_4c0;
  long *plStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  long *plStack_228;
  undefined8 *puStack_220;
  long *plStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2;
  puVar1 = param_3;
  puVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,plVar13);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    plVar13 = (long *)&UNK_110a51020;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51020,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar12 = 0;
    puVar1 = puVar3;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  plVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar3 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  plVar11 = plVar14;
  __Unwind_Resume();
  pcStack_c8 = FUN_10852d5b4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar13;
  puVar6 = puVar1;
  puVar9 = puVar7;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar3;
  plStack_f0 = plVar14;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  plStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  _objc_retain(puVar1);
  puVar8 = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar14 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_138;
    func_0x000107c278b8(auStack_138,plVar2);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_120,puVar3);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_108,2);
    plVar2 = (long *)&UNK_110a51070;
    puVar3 = &uStack_158;
    puVar6 = &uStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51070,puVar6,puVar7);
    puStack_140 = puVar3;
    func_0x000107c278ac(&puStack_140);
    lVar12 = 0;
    puVar8 = auStack_138;
    puVar9 = puVar7;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar1);
  plVar14 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar13);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcStack_168 = FUN_10852d7e4;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar2;
  puVar7 = puVar6;
  puVar10 = puVar9;
  puStack_1a0 = unaff_x24;
  puStack_198 = puVar3;
  puStack_190 = puVar8;
  plStack_188 = plVar14;
  puStack_180 = puVar1;
  plStack_178 = plVar13;
  ppuStack_170 = &puStack_d0;
  _objc_retain(plVar2);
  _objc_retain(puVar6);
  puVar1 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x24 = auStack_1d8;
    func_0x000107c278b8(auStack_1d8,plVar14);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_1c0,puVar1);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x000107c27984(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    plVar11 = (long *)&UNK_110a510c0;
    puVar3 = &uStack_1f8;
    puVar7 = &uStack_1f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a510c0,puVar7,puVar9);
    puStack_1e0 = puVar3;
    func_0x000107c278ac(&puStack_1e0);
    lVar12 = 0;
    puVar1 = auStack_1d8;
    puVar10 = puVar9;
    do {
      if ((&cStack_1a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar6);
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar6);
  _objc_release(plVar2);
  plVar5 = plVar13;
  __Unwind_Resume();
  puVar9 = &uStack_280;
  pcStack_208 = FUN_10852da14;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar11;
  puVar8 = puVar7;
  puStack_240 = unaff_x24;
  puStack_238 = puVar3;
  puStack_230 = puVar1;
  plStack_228 = plVar13;
  puStack_220 = puVar6;
  plStack_218 = plVar2;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar3 = auStack_260;
    func_0x000107c278b8(auStack_260,plVar14);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    plVar14 = (long *)&UNK_110a51110;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51110,&uStack_280,puVar7);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar8 = puVar9;
    puVar10 = puVar7;
    puVar1 = &uStack_280;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar8 = puVar9;
      puVar10 = puVar7;
      puVar1 = &uStack_280;
    }
  }
  plVar2 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar4 = plVar2;
  __Unwind_Resume();
  puVar6 = &uStack_300;
  pcStack_288 = FUN_10852db88;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar14;
  puVar7 = puVar8;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = puVar3;
  puStack_2b0 = puVar1;
  plStack_2a8 = plVar13;
  plStack_2a0 = plVar2;
  plStack_298 = plVar11;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(plVar14);
  plVar13 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    puVar3 = auStack_2e0;
    func_0x000107c278b8(auStack_2e0,plVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
    plVar5 = (long *)&UNK_110a51160;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51160,&uStack_300,puVar8);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x000107c278ac(&puStack_2e8);
    puVar7 = puVar6;
    puVar10 = puVar8;
    puVar1 = &uStack_300;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar7 = puVar6;
      puVar10 = puVar8;
      puVar1 = &uStack_300;
    }
  }
  plVar2 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar4 = plVar2;
  __Unwind_Resume();
  puVar8 = &uStack_380;
  pcStack_308 = FUN_10852dcfc;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar5;
  puVar6 = puVar7;
  puStack_340 = unaff_x24;
  puStack_338 = puVar3;
  puStack_330 = puVar1;
  plStack_328 = plVar13;
  plStack_320 = plVar2;
  plStack_318 = plVar14;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(plVar5);
  plVar13 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    puVar3 = auStack_360;
    func_0x000107c278b8(auStack_360,plVar14);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
    plVar11 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a511b0,&uStack_380,puVar7);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x000107c278ac(&puStack_368);
    puVar6 = puVar8;
    puVar10 = puVar7;
    puVar1 = &uStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar6 = puVar8;
      puVar10 = puVar7;
      puVar1 = &uStack_380;
    }
  }
  plVar14 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar14;
  __Unwind_Resume();
  puVar8 = &uStack_400;
  pcStack_388 = FUN_10852de70;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar11;
  puVar7 = puVar6;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = puVar3;
  puStack_3b0 = puVar1;
  plStack_3a8 = plVar13;
  plStack_3a0 = plVar14;
  plStack_398 = plVar5;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar3 = auStack_3e0;
    func_0x000107c278b8(auStack_3e0,plVar14);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x000107c27984(&uStack_400,auStack_3e0,&lStack_3c8,1);
    plVar2 = (long *)&UNK_110a51200;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51200,&uStack_400,puVar6);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x000107c278ac(&puStack_3e8);
    puVar7 = puVar8;
    puVar10 = puVar6;
    puVar1 = &uStack_400;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar7 = puVar8;
      puVar10 = puVar6;
      puVar1 = &uStack_400;
    }
  }
  plVar14 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar4 = plVar14;
  __Unwind_Resume();
  pcStack_408 = FUN_10852dfe4;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar2;
  puVar6 = puVar7;
  puStack_440 = unaff_x24;
  puStack_438 = puVar3;
  puStack_430 = puVar1;
  plStack_428 = plVar13;
  plStack_420 = plVar14;
  plStack_418 = plVar11;
  pppuStack_410 = &pppuStack_390;
  _objc_retain(plVar2);
  _objc_retain(puVar7);
  puVar1 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x24 = auStack_478;
    func_0x000107c278b8(auStack_478,plVar14);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_460,puVar1);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x000107c27984(&uStack_498,auStack_478,&lStack_448,2);
    plVar5 = (long *)&UNK_110a51250;
    puVar3 = &uStack_498;
    puVar6 = &uStack_498;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51250,puVar6,puVar10);
    puStack_480 = puVar3;
    func_0x000107c278ac(&puStack_480);
    lVar12 = 0;
    puVar1 = auStack_478;
    do {
      if ((&cStack_449)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar7);
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_461 < '\0') {
      __ZdlPv(auStack_478[0]);
    }
    _objc_release(puVar7);
    _objc_release(plVar2);
    plVar11 = plVar13;
    __Unwind_Resume();
    puVar9 = &uStack_520;
    pcStack_4a8 = FUN_10852e214;
    lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar5;
    puVar8 = puVar6;
    puStack_4e0 = unaff_x24;
    puStack_4d8 = puVar3;
    puStack_4d0 = puVar1;
    plStack_4c8 = plVar13;
    puStack_4c0 = puVar7;
    plStack_4b8 = plVar2;
    pppuStack_4b0 = &pppuStack_410;
    _objc_retain(plVar5);
    if (plVar11 != (long *)0x0) {
      plVar13 = (long *)plVar11[1];
      plVar14 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        plVar11 = (long *)plVar11[1];
        _objc_retain(plVar5);
        if (plVar5 == (long *)0x0) {
          plVar13 = (long *)&UNK_10f4a390b;
        }
        else {
          plVar13 = plVar5;
          _objc_retainAutorelease(plVar5);
          func_0x00010bdc3520();
        }
        _objc_release(plVar5);
        puVar3 = auStack_500;
        func_0x000107c278b8(auStack_500,plVar13);
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_510 = 0;
        func_0x000107c27984(&uStack_520,auStack_500,&lStack_4e8,1);
        plVar14 = (long *)&UNK_110a512a0;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a512a0,&uStack_520,puVar6);
        puStack_508 = (undefined1 *)&uStack_520;
        func_0x000107c278ac(&puStack_508);
        puVar8 = puVar9;
        puVar1 = &uStack_520;
        if (cStack_4e9 < '\0') {
          __ZdlPv(auStack_500[0]);
          puVar8 = puVar9;
          puVar1 = &uStack_520;
        }
      }
    }
    plVar13 = plVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar5);
    _objc_release(plVar5);
    plVar4 = plVar13;
    __Unwind_Resume();
    pcStack_528 = FUN_10852e3a8;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar2 = plVar14;
    puStack_560 = unaff_x24;
    puStack_558 = puVar3;
    puStack_550 = puVar1;
    plStack_548 = plVar11;
    plStack_540 = plVar13;
    plStack_538 = plVar5;
    pppuStack_530 = &pppuStack_4b0;
    _objc_retain(plVar14);
    if (plVar4 != (long *)0x0) {
      plVar13 = (long *)plVar4[1];
      plVar2 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a512f0);
      if ((int)plVar13 != 0) {
        plVar13 = (long *)plVar4[1];
        _objc_retain(plVar14);
        if (plVar14 == (long *)0x0) {
          plVar2 = (long *)&UNK_10f4a390b;
        }
        else {
          plVar2 = plVar14;
          _objc_retainAutorelease(plVar14);
          func_0x00010bdc3520();
        }
        _objc_release(plVar14);
        func_0x000107c278b8(auStack_580,plVar2);
        uStack_5a0 = 0;
        uStack_598 = 0;
        uStack_590 = 0;
        func_0x000107c27984(&uStack_5a0,auStack_580,&lStack_568,1);
        plVar2 = (long *)&UNK_110a512f0;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a512f0,&uStack_5a0,puVar8);
        puStack_588 = (undefined1 *)&uStack_5a0;
        func_0x000107c278ac(&puStack_588);
        if (cStack_569 < '\0') {
          __ZdlPv(auStack_580[0]);
        }
      }
    }
    plVar13 = plVar14;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
      ___stack_chk_fail();
      _objc_release(plVar14);
      _objc_release(plVar14);
      plVar11 = plVar13;
      __Unwind_Resume();
      pcStack_5a8 = FUN_10852e53c;
      if (plVar11 != (long *)0x0) {
        plVar5 = (long *)plVar11[1];
        plStack_5c0 = plVar13;
        plStack_5b8 = plVar14;
        pppuStack_5b0 = &pppuStack_530;
        (**(code **)(*plVar5 + 0x28))(plVar5,&UNK_110a51340);
        if ((int)plVar5 != 0) {
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          (**(code **)(*(long *)plVar11[1] + 0x18))
                    ((long *)plVar11[1],&UNK_110a51340,&uStack_5e0,plVar2);
          puStack_5c8 = (undefined1 *)&uStack_5e0;
          func_0x000107c278ac(&puStack_5c8);
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852d5b4; end: 10852d7e3;  */

void FUN_10852d5b4(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  undefined8 *puStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_2;
  puVar1 = param_3;
  puVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar11 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,plVar11);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    plVar11 = (long *)&UNK_110a51070;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a51070,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar10 = 0;
    puVar3 = auStack_78;
    puVar7 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar2 = plVar13;
  __Unwind_Resume();
  pcStack_a8 = FUN_10852d7e4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar11;
  puVar6 = puVar1;
  puVar9 = puVar7;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar3;
  plStack_c8 = plVar13;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar11);
  _objc_retain(puVar1);
  puVar3 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar13 = (long *)plVar2[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar12 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,plVar12);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    plVar12 = (long *)&UNK_110a510c0;
    unaff_x23 = &uStack_138;
    puVar6 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a510c0,puVar6,puVar7);
    puStack_120 = unaff_x23;
    func_0x000107c278ac(&puStack_120);
    lVar10 = 0;
    puVar3 = auStack_118;
    puVar9 = puVar7;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar1);
  plVar13 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar11);
  plVar5 = plVar13;
  __Unwind_Resume();
  puVar8 = &uStack_1c0;
  pcStack_148 = FUN_10852da14;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar12;
  puVar7 = puVar6;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar3;
  plStack_168 = plVar13;
  puStack_160 = puVar1;
  plStack_158 = plVar11;
  ppuStack_150 = &puStack_b0;
  _objc_retain(plVar12);
  plVar11 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar11 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,plVar13);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    plVar2 = (long *)&UNK_110a51110;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a51110,&uStack_1c0,puVar6);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar7 = puVar8;
    puVar9 = puVar6;
    puVar3 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar7 = puVar8;
      puVar9 = puVar6;
      puVar3 = &uStack_1c0;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  puVar6 = &uStack_240;
  pcStack_1c8 = FUN_10852db88;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar2;
  puVar1 = puVar7;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar3;
  plStack_1e8 = plVar11;
  plStack_1e0 = plVar13;
  plStack_1d8 = plVar12;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(plVar2);
  plVar11 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x23 = auStack_220;
    func_0x000107c278b8(auStack_220,plVar13);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    plVar5 = (long *)&UNK_110a51160;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a51160,&uStack_240,puVar7);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar1 = puVar6;
    puVar9 = puVar7;
    puVar3 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar1 = puVar6;
      puVar9 = puVar7;
      puVar3 = &uStack_240;
    }
  }
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar4 = plVar13;
  __Unwind_Resume();
  puVar6 = &uStack_2c0;
  pcStack_248 = FUN_10852dcfc;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  puVar7 = puVar1;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar3;
  plStack_268 = plVar11;
  plStack_260 = plVar13;
  plStack_258 = plVar2;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar5);
  plVar11 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,plVar13);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    plVar12 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a511b0,&uStack_2c0,puVar1);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar7 = puVar6;
    puVar9 = puVar1;
    puVar3 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar7 = puVar6;
      puVar9 = puVar1;
      puVar3 = &uStack_2c0;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  puVar6 = &uStack_340;
  pcStack_2c8 = FUN_10852de70;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar12;
  puVar1 = puVar7;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar3;
  plStack_2e8 = plVar11;
  plStack_2e0 = plVar13;
  plStack_2d8 = plVar5;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar12);
  plVar11 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = auStack_320;
    func_0x000107c278b8(auStack_320,plVar13);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    plVar2 = (long *)&UNK_110a51200;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a51200,&uStack_340,puVar7);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar1 = puVar6;
    puVar9 = puVar7;
    puVar3 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar1 = puVar6;
      puVar9 = puVar7;
      puVar3 = &uStack_340;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_348 = FUN_10852dfe4;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar2;
  puVar7 = puVar1;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar3;
  plStack_368 = plVar11;
  plStack_360 = plVar13;
  plStack_358 = plVar12;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar2);
  _objc_retain(puVar1);
  puVar3 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar13 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x24 = auStack_3b8;
    func_0x000107c278b8(auStack_3b8,plVar13);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_3a0,puVar3);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x000107c27984(&uStack_3d8,auStack_3b8,&lStack_388,2);
    plVar5 = (long *)&UNK_110a51250;
    unaff_x23 = &uStack_3d8;
    puVar7 = &uStack_3d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a51250,puVar7,puVar9);
    puStack_3c0 = unaff_x23;
    func_0x000107c278ac(&puStack_3c0);
    lVar10 = 0;
    puVar3 = auStack_3b8;
    do {
      if ((&cStack_389)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar1);
  plVar11 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar2);
  plVar12 = plVar11;
  __Unwind_Resume();
  puVar9 = &uStack_460;
  pcStack_3e8 = FUN_10852e214;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  puVar6 = puVar7;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar3;
  plStack_408 = plVar11;
  puStack_400 = puVar1;
  plStack_3f8 = plVar2;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(plVar5);
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)plVar12[1];
    plVar13 = (long *)&UNK_110a512a0;
    (**(code **)(*plVar11 + 0x28))();
    if ((int)plVar11 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        plVar11 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar11 = plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      unaff_x23 = auStack_440;
      func_0x000107c278b8(auStack_440,plVar11);
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      func_0x000107c27984(&uStack_460,auStack_440,&lStack_428,1);
      plVar13 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a512a0,&uStack_460,puVar7);
      puStack_448 = (undefined1 *)&uStack_460;
      func_0x000107c278ac(&puStack_448);
      puVar6 = puVar9;
      puVar3 = &uStack_460;
      if (cStack_429 < '\0') {
        __ZdlPv(auStack_440[0]);
        puVar6 = puVar9;
        puVar3 = &uStack_460;
      }
    }
  }
  plVar11 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar11;
  __Unwind_Resume();
  pcStack_468 = FUN_10852e3a8;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar13;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar3;
  plStack_488 = plVar12;
  plStack_480 = plVar11;
  plStack_478 = plVar5;
  pppuStack_470 = &pppuStack_3f0;
  _objc_retain(plVar13);
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    plVar2 = (long *)&UNK_110a512f0;
    (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_110a512f0);
    if ((int)plVar11 != 0) {
      plVar11 = (long *)plVar4[1];
      _objc_retain(plVar13);
      if (plVar13 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar12 = plVar13;
        _objc_retainAutorelease(plVar13);
        func_0x00010bdc3520();
      }
      _objc_release(plVar13);
      func_0x000107c278b8(auStack_4c0,plVar12);
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      func_0x000107c27984(&uStack_4e0,auStack_4c0,&lStack_4a8,1);
      plVar2 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a512f0,&uStack_4e0,puVar6);
      puStack_4c8 = (undefined1 *)&uStack_4e0;
      func_0x000107c278ac(&puStack_4c8);
      if (cStack_4a9 < '\0') {
        __ZdlPv(auStack_4c0[0]);
      }
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar11;
  __Unwind_Resume();
  pcStack_4e8 = FUN_10852e53c;
  if (plVar12 != (long *)0x0) {
    plVar5 = (long *)plVar12[1];
    plStack_500 = plVar11;
    plStack_4f8 = plVar13;
    pppuStack_4f0 = &pppuStack_470;
    (**(code **)(*plVar5 + 0x28))(plVar5,&UNK_110a51340);
    if ((int)plVar5 != 0) {
      uStack_520 = 0;
      uStack_518 = 0;
      uStack_510 = 0;
      (**(code **)(*(long *)plVar12[1] + 0x18))
                ((long *)plVar12[1],&UNK_110a51340,&uStack_520,plVar2);
      puStack_508 = (undefined1 *)&uStack_520;
      func_0x000107c278ac(&puStack_508);
    }
  }
  return;
}



/* Entry: 10852d7e4; end: 10852da13;  */

void FUN_10852d7e4(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined8 *puStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  puVar1 = param_3;
  puVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar10 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,plVar10);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    plVar10 = (long *)&UNK_110a510c0;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a510c0,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar4 = auStack_78;
    puVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  plVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar11 = plVar12;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_10852da14;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar10;
  puVar6 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  plStack_c8 = plVar12;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar10);
  plVar12 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar12 = (long *)plVar11[1];
    _objc_retain(plVar10);
    if (plVar10 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar2 = plVar10;
      _objc_retainAutorelease(plVar10);
      func_0x00010bdc3520();
    }
    _objc_release(plVar10);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,plVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    plVar2 = (long *)&UNK_110a51110;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a51110,&uStack_120,puVar1);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar6 = puVar7;
    puVar8 = puVar1;
    puVar4 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar6 = puVar7;
      puVar8 = puVar1;
      puVar4 = &uStack_120;
    }
  }
  plVar11 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar10);
  _objc_release(plVar10);
  plVar3 = plVar11;
  __Unwind_Resume();
  puVar7 = &uStack_1a0;
  pcStack_128 = FUN_10852db88;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar2;
  puVar1 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar4;
  plStack_148 = plVar12;
  plStack_140 = plVar11;
  plStack_138 = plVar10;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar2);
  plVar10 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar10 = (long *)plVar3[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar12 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,plVar12);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    plVar5 = (long *)&UNK_110a51160;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51160,&uStack_1a0,puVar6);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar1 = puVar7;
    puVar8 = puVar6;
    puVar4 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar1 = puVar7;
      puVar8 = puVar6;
      puVar4 = &uStack_1a0;
    }
  }
  plVar12 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar3 = plVar12;
  __Unwind_Resume();
  puVar7 = &uStack_220;
  pcStack_1a8 = FUN_10852dcfc;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar5;
  puVar6 = puVar1;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar4;
  plStack_1c8 = plVar10;
  plStack_1c0 = plVar12;
  plStack_1b8 = plVar2;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar5);
  plVar10 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar10 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar12 = plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,plVar12);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    plVar11 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a511b0,&uStack_220,puVar1);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar6 = puVar7;
    puVar8 = puVar1;
    puVar4 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar6 = puVar7;
      puVar8 = puVar1;
      puVar4 = &uStack_220;
    }
  }
  plVar12 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar12;
  __Unwind_Resume();
  puVar7 = &uStack_2a0;
  pcStack_228 = FUN_10852de70;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar11;
  puVar1 = puVar6;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar4;
  plStack_248 = plVar10;
  plStack_240 = plVar12;
  plStack_238 = plVar5;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar11);
  plVar10 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar10 = (long *)plVar3[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar12 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,plVar12);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    plVar2 = (long *)&UNK_110a51200;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51200,&uStack_2a0,puVar6);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar1 = puVar7;
    puVar8 = puVar6;
    puVar4 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar1 = puVar7;
      puVar8 = puVar6;
      puVar4 = &uStack_2a0;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar3 = plVar12;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10852dfe4;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar2;
  puVar6 = puVar1;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar4;
  plStack_2c8 = plVar10;
  plStack_2c0 = plVar12;
  plStack_2b8 = plVar11;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar2);
  _objc_retain(puVar1);
  puVar4 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar10 = (long *)plVar3[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar12 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x24 = auStack_318;
    func_0x000107c278b8(auStack_318,plVar12);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar4 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_300,puVar4);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x000107c27984(&uStack_338,auStack_318,&lStack_2e8,2);
    plVar5 = (long *)&UNK_110a51250;
    unaff_x23 = &uStack_338;
    puVar6 = &uStack_338;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51250,puVar6,puVar8);
    puStack_320 = unaff_x23;
    func_0x000107c278ac(&puStack_320);
    lVar9 = 0;
    puVar4 = auStack_318;
    do {
      if ((&cStack_2e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar1);
  plVar10 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar2);
  plVar11 = plVar10;
  __Unwind_Resume();
  puVar7 = &uStack_3c0;
  pcStack_348 = FUN_10852e214;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  puVar8 = puVar6;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar4;
  plStack_368 = plVar10;
  puStack_360 = puVar1;
  plStack_358 = plVar2;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(plVar5);
  if (plVar11 != (long *)0x0) {
    plVar10 = (long *)plVar11[1];
    plVar12 = (long *)&UNK_110a512a0;
    (**(code **)(*plVar10 + 0x28))();
    if ((int)plVar10 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      unaff_x23 = auStack_3a0;
      func_0x000107c278b8(auStack_3a0,plVar10);
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
      plVar12 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a512a0,&uStack_3c0,puVar6);
      puStack_3a8 = (undefined1 *)&uStack_3c0;
      func_0x000107c278ac(&puStack_3a8);
      puVar8 = puVar7;
      puVar4 = &uStack_3c0;
      if (cStack_389 < '\0') {
        __ZdlPv(auStack_3a0[0]);
        puVar8 = puVar7;
        puVar4 = &uStack_3c0;
      }
    }
  }
  plVar10 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar10;
  __Unwind_Resume();
  pcStack_3c8 = FUN_10852e3a8;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar12;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar4;
  plStack_3e8 = plVar11;
  plStack_3e0 = plVar10;
  plStack_3d8 = plVar5;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(plVar12);
  if (plVar3 != (long *)0x0) {
    plVar10 = (long *)plVar3[1];
    plVar2 = (long *)&UNK_110a512f0;
    (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_110a512f0);
    if ((int)plVar10 != 0) {
      plVar10 = (long *)plVar3[1];
      _objc_retain(plVar12);
      if (plVar12 == (long *)0x0) {
        plVar2 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar2 = plVar12;
        _objc_retainAutorelease(plVar12);
        func_0x00010bdc3520();
      }
      _objc_release(plVar12);
      func_0x000107c278b8(auStack_420,plVar2);
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
      plVar2 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a512f0,&uStack_440,puVar8);
      puStack_428 = (undefined1 *)&uStack_440;
      func_0x000107c278ac(&puStack_428);
      if (cStack_409 < '\0') {
        __ZdlPv(auStack_420[0]);
      }
    }
  }
  plVar10 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar11 = plVar10;
  __Unwind_Resume();
  pcStack_448 = FUN_10852e53c;
  if (plVar11 != (long *)0x0) {
    plVar5 = (long *)plVar11[1];
    plStack_460 = plVar10;
    plStack_458 = plVar12;
    pppuStack_450 = &pppuStack_3d0;
    (**(code **)(*plVar5 + 0x28))(plVar5,&UNK_110a51340);
    if ((int)plVar5 != 0) {
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      (**(code **)(*(long *)plVar11[1] + 0x18))
                ((long *)plVar11[1],&UNK_110a51340,&uStack_480,plVar2);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x000107c278ac(&puStack_468);
    }
  }
  return;
}



/* Entry: 10852da14; end: 10852db87;  */

void FUN_10852da14(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined8 *puStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar4 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar4 = (long *)&UNK_110a51110;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51110,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar2 = puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = puVar6;
      param_4 = param_3;
    }
  }
  plVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_10852db88;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar4;
  puVar6 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar4);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar1 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,plVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar1 = (long *)&UNK_110a51160;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51160,&uStack_100,puVar2);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = puVar7;
    param_4 = puVar2;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = puVar7;
      param_4 = puVar2;
    }
  }
  plVar10 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_10852dcfc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar1;
  puVar2 = puVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar1);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar4 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,plVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    plVar4 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a511b0,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = puVar7;
    param_4 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = puVar7;
      param_4 = puVar6;
    }
  }
  plVar10 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  __Unwind_Resume();
  puVar7 = &uStack_200;
  pcStack_188 = FUN_10852de70;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar4;
  puVar6 = puVar2;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar4);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar1 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = auStack_1e0;
    func_0x000107c278b8(auStack_1e0,plVar1);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar1 = (long *)&UNK_110a51200;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51200,&uStack_200,puVar2);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar6 = puVar7;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = puVar7;
      param_4 = puVar2;
    }
  }
  plVar10 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  pcStack_208 = FUN_10852dfe4;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar1;
  puVar2 = puVar6;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar1);
  _objc_retain(puVar6);
  puVar7 = (undefined8 *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar4 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x24 = auStack_278;
    func_0x000107c278b8(auStack_278,plVar4);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_260,puVar2);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x000107c27984(&uStack_298,auStack_278,&lStack_248,2);
    plVar4 = (long *)&UNK_110a51250;
    unaff_x23 = &uStack_298;
    puVar2 = &uStack_298;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51250,puVar2,param_4);
    puStack_280 = unaff_x23;
    func_0x000107c278ac(&puStack_280);
    lVar11 = 0;
    puVar7 = auStack_278;
    do {
      if ((&cStack_249)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar6);
  plVar10 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar6);
  _objc_release(plVar1);
  plVar12 = plVar10;
  __Unwind_Resume();
  puVar9 = &uStack_320;
  pcStack_2a8 = FUN_10852e214;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  puVar8 = puVar2;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar7;
  plStack_2c8 = plVar10;
  puStack_2c0 = puVar6;
  plStack_2b8 = plVar1;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(plVar4);
  if (plVar12 != (long *)0x0) {
    plVar10 = (long *)plVar12[1];
    plVar5 = (long *)&UNK_110a512a0;
    (**(code **)(*plVar10 + 0x28))();
    if ((int)plVar10 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_300;
      func_0x000107c278b8(auStack_300,plVar10);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
      plVar5 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a512a0,&uStack_320,puVar2);
      puStack_308 = (undefined1 *)&uStack_320;
      func_0x000107c278ac(&puStack_308);
      puVar8 = puVar9;
      puVar7 = &uStack_320;
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
        puVar8 = puVar9;
        puVar7 = &uStack_320;
      }
    }
  }
  plVar10 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar10;
  __Unwind_Resume();
  pcStack_328 = FUN_10852e3a8;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar5;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar7;
  plStack_348 = plVar12;
  plStack_340 = plVar10;
  plStack_338 = plVar4;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar5);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[1];
    plVar1 = (long *)&UNK_110a512f0;
    (**(code **)(*plVar4 + 0x28))(plVar4,&UNK_110a512f0);
    if ((int)plVar4 != 0) {
      plVar4 = (long *)plVar3[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      func_0x000107c278b8(auStack_380,plVar10);
      uStack_3a0 = 0;
      uStack_398 = 0;
      uStack_390 = 0;
      func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
      plVar1 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a512f0,&uStack_3a0,puVar8);
      puStack_388 = (undefined1 *)&uStack_3a0;
      func_0x000107c278ac(&puStack_388);
      if (cStack_369 < '\0') {
        __ZdlPv(auStack_380[0]);
      }
    }
  }
  plVar4 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar10 = plVar4;
  __Unwind_Resume();
  pcStack_3a8 = FUN_10852e53c;
  if (plVar10 != (long *)0x0) {
    plVar12 = (long *)plVar10[1];
    plStack_3c0 = plVar4;
    plStack_3b8 = plVar5;
    pppuStack_3b0 = &pppuStack_330;
    (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_110a51340);
    if ((int)plVar12 != 0) {
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      (**(code **)(*(long *)plVar10[1] + 0x18))
                ((long *)plVar10[1],&UNK_110a51340,&uStack_3e0,plVar1);
      puStack_3c8 = (undefined1 *)&uStack_3e0;
      func_0x000107c278ac(&puStack_3c8);
    }
  }
  return;
}



/* Entry: 10852db88; end: 10852dcfb;  */

void FUN_10852db88(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined8 *puStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar3 = (long *)&UNK_110a51160;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51160,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = puVar2;
      param_4 = param_3;
    }
  }
  plVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_10852dcfc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar3;
  puVar2 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar1 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,plVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar1 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a511b0,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar2 = puVar7;
    param_4 = puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar2 = puVar7;
      param_4 = puVar6;
    }
  }
  plVar10 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_10852de70;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar1;
  puVar6 = puVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar1);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar3 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,plVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    plVar3 = (long *)&UNK_110a51200;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51200,&uStack_180,puVar2);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar6 = puVar7;
    param_4 = puVar2;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = puVar7;
      param_4 = puVar2;
    }
  }
  plVar10 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  __Unwind_Resume();
  pcStack_188 = FUN_10852dfe4;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar3;
  puVar2 = puVar6;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar3);
  _objc_retain(puVar6);
  puVar7 = (undefined8 *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar1 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x24 = auStack_1f8;
    func_0x000107c278b8(auStack_1f8,plVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    plVar1 = (long *)&UNK_110a51250;
    unaff_x23 = &uStack_218;
    puVar2 = &uStack_218;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51250,puVar2,param_4);
    puStack_200 = unaff_x23;
    func_0x000107c278ac(&puStack_200);
    lVar11 = 0;
    puVar7 = auStack_1f8;
    do {
      if ((&cStack_1c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar6);
  plVar10 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar6);
  _objc_release(plVar3);
  plVar12 = plVar10;
  __Unwind_Resume();
  puVar9 = &uStack_2a0;
  pcStack_228 = FUN_10852e214;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar1;
  puVar8 = puVar2;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar7;
  plStack_248 = plVar10;
  puStack_240 = puVar6;
  plStack_238 = plVar3;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(plVar1);
  if (plVar12 != (long *)0x0) {
    plVar3 = (long *)plVar12[1];
    plVar5 = (long *)&UNK_110a512a0;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar3 = plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      unaff_x23 = auStack_280;
      func_0x000107c278b8(auStack_280,plVar3);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
      plVar5 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a512a0,&uStack_2a0,puVar2);
      puStack_288 = (undefined1 *)&uStack_2a0;
      func_0x000107c278ac(&puStack_288);
      puVar8 = puVar9;
      puVar7 = &uStack_2a0;
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
        puVar8 = puVar9;
        puVar7 = &uStack_2a0;
      }
    }
  }
  plVar3 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  plVar4 = plVar3;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10852e3a8;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar5;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar7;
  plStack_2c8 = plVar12;
  plStack_2c0 = plVar3;
  plStack_2b8 = plVar1;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar5);
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)plVar4[1];
    plVar10 = (long *)&UNK_110a512f0;
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110a512f0);
    if ((int)plVar3 != 0) {
      plVar3 = (long *)plVar4[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      func_0x000107c278b8(auStack_300,plVar10);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
      plVar10 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a512f0,&uStack_320,puVar8);
      puStack_308 = (undefined1 *)&uStack_320;
      func_0x000107c278ac(&puStack_308);
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
      }
    }
  }
  plVar3 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar1 = plVar3;
  __Unwind_Resume();
  pcStack_328 = FUN_10852e53c;
  if (plVar1 != (long *)0x0) {
    plVar12 = (long *)plVar1[1];
    plStack_340 = plVar3;
    plStack_338 = plVar5;
    pppuStack_330 = &pppuStack_2b0;
    (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_110a51340);
    if ((int)plVar12 != 0) {
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      (**(code **)(*(long *)plVar1[1] + 0x18))((long *)plVar1[1],&UNK_110a51340,&uStack_360,plVar10)
      ;
      puStack_348 = (undefined1 *)&uStack_360;
      func_0x000107c278ac(&puStack_348);
    }
  }
  return;
}



/* Entry: 10852dcfc; end: 10852de6f;  */

void FUN_10852dcfc(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar4 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar4 = (long *)&UNK_110a511b0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a511b0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar2 = puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = puVar6;
      param_4 = param_3;
    }
  }
  plVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_10852de70;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar4;
  puVar6 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar4);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar1 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,plVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar1 = (long *)&UNK_110a51200;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51200,&uStack_100,puVar2);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = puVar7;
    param_4 = puVar2;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = puVar7;
      param_4 = puVar2;
    }
  }
  plVar10 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  pcStack_108 = FUN_10852dfe4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar1;
  puVar2 = puVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar1);
  _objc_retain(puVar6);
  puVar7 = (undefined8 *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar4 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x24 = auStack_178;
    func_0x000107c278b8(auStack_178,plVar4);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_160,puVar2);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    plVar4 = (long *)&UNK_110a51250;
    unaff_x23 = &uStack_198;
    puVar2 = &uStack_198;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51250,puVar2,param_4);
    puStack_180 = unaff_x23;
    func_0x000107c278ac(&puStack_180);
    lVar11 = 0;
    puVar7 = auStack_178;
    do {
      if ((&cStack_149)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar6);
  plVar10 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar6);
  _objc_release(plVar1);
  plVar12 = plVar10;
  __Unwind_Resume();
  puVar9 = &uStack_220;
  pcStack_1a8 = FUN_10852e214;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  puVar8 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar7;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar6;
  plStack_1b8 = plVar1;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(plVar4);
  if (plVar12 != (long *)0x0) {
    plVar10 = (long *)plVar12[1];
    plVar5 = (long *)&UNK_110a512a0;
    (**(code **)(*plVar10 + 0x28))();
    if ((int)plVar10 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_200;
      func_0x000107c278b8(auStack_200,plVar10);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
      plVar5 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a512a0,&uStack_220,puVar2);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      puVar8 = puVar9;
      puVar7 = &uStack_220;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        puVar8 = puVar9;
        puVar7 = &uStack_220;
      }
    }
  }
  plVar10 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar10;
  __Unwind_Resume();
  pcStack_228 = FUN_10852e3a8;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar5;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar7;
  plStack_248 = plVar12;
  plStack_240 = plVar10;
  plStack_238 = plVar4;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar5);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[1];
    plVar1 = (long *)&UNK_110a512f0;
    (**(code **)(*plVar4 + 0x28))(plVar4,&UNK_110a512f0);
    if ((int)plVar4 != 0) {
      plVar4 = (long *)plVar3[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      func_0x000107c278b8(auStack_280,plVar10);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
      plVar1 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a512f0,&uStack_2a0,puVar8);
      puStack_288 = (undefined1 *)&uStack_2a0;
      func_0x000107c278ac(&puStack_288);
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
      }
    }
  }
  plVar4 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar10 = plVar4;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10852e53c;
  if (plVar10 != (long *)0x0) {
    plVar12 = (long *)plVar10[1];
    plStack_2c0 = plVar4;
    plStack_2b8 = plVar5;
    pppuStack_2b0 = &pppuStack_230;
    (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_110a51340);
    if ((int)plVar12 != 0) {
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      (**(code **)(*(long *)plVar10[1] + 0x18))
                ((long *)plVar10[1],&UNK_110a51340,&uStack_2e0,plVar1);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x000107c278ac(&puStack_2c8);
    }
  }
  return;
}



/* Entry: 10852de70; end: 10852dfe3;  */

void FUN_10852de70(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar3 = (long *)&UNK_110a51200;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a51200,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = puVar2;
      param_4 = param_3;
    }
  }
  plVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10852dfe4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar3;
  puVar2 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  _objc_retain(puVar6);
  puVar12 = (undefined8 *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)plVar9[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar1 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,plVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    plVar1 = (long *)&UNK_110a51250;
    unaff_x23 = &uStack_118;
    puVar2 = &uStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a51250,puVar2,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar10 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar6);
  plVar9 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar6);
  _objc_release(plVar3);
  plVar11 = plVar9;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_10852e214;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar1;
  puVar7 = puVar2;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  plStack_148 = plVar9;
  puStack_140 = puVar6;
  plStack_138 = plVar3;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar1);
  if (plVar11 != (long *)0x0) {
    plVar3 = (long *)plVar11[1];
    plVar5 = (long *)&UNK_110a512a0;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar3 = plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      unaff_x23 = auStack_180;
      func_0x000107c278b8(auStack_180,plVar3);
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
      plVar5 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a512a0,&uStack_1a0,puVar2);
      puStack_188 = (undefined1 *)&uStack_1a0;
      func_0x000107c278ac(&puStack_188);
      puVar7 = puVar8;
      puVar12 = &uStack_1a0;
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
        puVar7 = puVar8;
        puVar12 = &uStack_1a0;
      }
    }
  }
  plVar3 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  plVar4 = plVar3;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10852e3a8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar5;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar11;
  plStack_1c0 = plVar3;
  plStack_1b8 = plVar1;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar5);
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)plVar4[1];
    plVar9 = (long *)&UNK_110a512f0;
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110a512f0);
    if ((int)plVar3 != 0) {
      plVar3 = (long *)plVar4[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        plVar9 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar9 = plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      func_0x000107c278b8(auStack_200,plVar9);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
      plVar9 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a512f0,&uStack_220,puVar7);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
      }
    }
  }
  plVar3 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar1 = plVar3;
  __Unwind_Resume();
  pcStack_228 = FUN_10852e53c;
  if (plVar1 != (long *)0x0) {
    plVar11 = (long *)plVar1[1];
    plStack_240 = plVar3;
    plStack_238 = plVar5;
    pppuStack_230 = &pppuStack_1b0;
    (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_110a51340);
    if ((int)plVar11 != 0) {
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      (**(code **)(*(long *)plVar1[1] + 0x18))((long *)plVar1[1],&UNK_110a51340,&uStack_260,plVar9);
      puStack_248 = (undefined1 *)&uStack_260;
      func_0x000107c278ac(&puStack_248);
    }
  }
  return;
}



/* Entry: 10852dfe4; end: 10852e213;  */

void FUN_10852dfe4(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  puVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f4a390b;
    }
    else {
      plVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,plVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    plVar3 = (long *)&UNK_110a51250;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a51250,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar8 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  plVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar9 = plVar10;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_10852e214;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  puVar6 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  plStack_c8 = plVar10;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)plVar9[1];
    plVar4 = (long *)&UNK_110a512a0;
    (**(code **)(*plVar10 + 0x28))();
    if ((int)plVar10 != 0) {
      plVar9 = (long *)plVar9[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_100;
      func_0x000107c278b8(auStack_100,plVar10);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
      plVar4 = (long *)&UNK_110a512a0;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a512a0,&uStack_120,puVar1);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x000107c278ac(&puStack_108);
      puVar6 = puVar7;
      puVar11 = &uStack_120;
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
        puVar6 = puVar7;
        puVar11 = &uStack_120;
      }
    }
  }
  plVar10 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar2 = plVar10;
  __Unwind_Resume();
  pcStack_128 = FUN_10852e3a8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar9;
  plStack_140 = plVar10;
  plStack_138 = plVar3;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar4);
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)plVar2[1];
    plVar5 = (long *)&UNK_110a512f0;
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110a512f0);
    if ((int)plVar3 != 0) {
      plVar3 = (long *)plVar2[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar10 = (long *)&UNK_10f4a390b;
      }
      else {
        plVar10 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      func_0x000107c278b8(auStack_180,plVar10);
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
      plVar5 = (long *)&UNK_110a512f0;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a512f0,&uStack_1a0,puVar6);
      puStack_188 = (undefined1 *)&uStack_1a0;
      func_0x000107c278ac(&puStack_188);
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
      }
    }
  }
  plVar3 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar10 = plVar3;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10852e53c;
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)plVar10[1];
    plStack_1c0 = plVar3;
    plStack_1b8 = plVar4;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(*plVar9 + 0x28))(plVar9,&UNK_110a51340);
    if ((int)plVar9 != 0) {
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      (**(code **)(*(long *)plVar10[1] + 0x18))
                ((long *)plVar10[1],&UNK_110a51340,&uStack_1e0,plVar5);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x000107c278ac(&puStack_1c8);
    }
  }
  return;
}



/* Entry: 10852e214; end: 10852e3a7;  */

void FUN_10852e214(long param_1,undefined *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110a512a0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f4a390b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a512a0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a512a0,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar6 = (undefined1 *)puVar7;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar6 = (undefined1 *)puVar7;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10852e3a8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar5 = &UNK_110a512f0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a512f0);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f4a390b;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar5 = &UNK_110a512f0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a512f0,&uStack_100,puVar6);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_108 = FUN_10852e53c;
  if (puVar4 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar4 + 8);
    puStack_120 = puVar3;
    puStack_118 = puVar2;
    ppuStack_110 = &puStack_90;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a51340);
    if ((int)plVar1 != 0) {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      (**(code **)(**(long **)(puVar4 + 8) + 0x18))
                (*(long **)(puVar4 + 8),&UNK_110a51340,&uStack_140,puVar5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x000107c278ac(&puStack_128);
    }
  }
  return;
}



/* Entry: 10852e3a8; end: 10852e53b;  */

void FUN_10852e3a8(long param_1,undefined *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110a512f0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a512f0);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f4a390b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a512f0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a512f0,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_88 = FUN_10852e53c;
  if (puVar4 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar4 + 8);
    puStack_a0 = puVar3;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a51340);
    if ((int)plVar1 != 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      (**(code **)(**(long **)(puVar4 + 8) + 0x18))
                (*(long **)(puVar4 + 8),&UNK_110a51340,&uStack_c0,puVar2);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
    }
  }
  return;
}



/* Entry: 10852e53c; end: 10852e5d3;  */

void FUN_10852e53c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a51340);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_110a51340,&uStack_40,param_2);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x000107c278ac(&puStack_28);
    }
  }
  return;
}



/* Entry: 10852e5d4; end: 10852e66b;  */

void FUN_10852e5d4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a51390);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_110a51390,&uStack_40,param_2);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x000107c278ac(&puStack_28);
    }
  }
  return;
}



/* Entry: 10852e66c; end: 10852e703;  */

void FUN_10852e66c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a513e0);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_110a513e0,&uStack_40,param_2);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x000107c278ac(&puStack_28);
    }
  }
  return;
}



/* Entry: 10852e704; end: 10852e77b;  */

void FUN_10852e704(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a51430,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10852e77c; end: 10852e7f3;  */

void FUN_10852e77c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a51480,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10852e7f4; end: 10852ea43;  */

void FUN_10852e7f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar10 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = (undefined8 *)&UNK_110a514d0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x000107c278b8(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = (undefined8 *)&UNK_110a514d0;
      unaff_x23 = &uStack_98;
      puVar10 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a514d0,puVar10,param_4);
      puStack_80 = unaff_x23;
      func_0x000107c278ac(&puStack_80);
      lVar13 = 0;
      param_1 = auStack_78;
      puVar5 = param_4;
      do {
        if ((&cStack_49)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10852ea44;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar7 = puVar10;
  puVar11 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    puVar9 = (undefined8 *)&UNK_110a51520;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar4[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_118;
      func_0x000107c278b8(auStack_118,puVar3);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar3 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x000107c278b8(auStack_100,puVar3);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
      puVar9 = (undefined8 *)&UNK_110a51520;
      unaff_x23 = &uStack_138;
      puVar7 = &uStack_138;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51520,puVar7,puVar5);
      puStack_120 = unaff_x23;
      func_0x000107c278ac(&puStack_120);
      lVar13 = 0;
      puVar4 = auStack_118;
      puVar11 = puVar5;
      do {
        if ((&cStack_e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(puVar10);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar2);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_10852ec94;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar8 = puVar7;
  puVar12 = puVar11;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar10;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar9);
  _objc_retain(puVar7);
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    puVar3 = (undefined8 *)&UNK_110a51570;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar6[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      unaff_x24 = auStack_1b8;
      func_0x000107c278b8(auStack_1b8,puVar2);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_1a0,puVar2);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_188,2);
      puVar3 = (undefined8 *)&UNK_110a51570;
      unaff_x23 = &uStack_1d8;
      puVar8 = &uStack_1d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51570,puVar8,puVar11);
      puStack_1c0 = unaff_x23;
      func_0x000107c278ac(&puStack_1c0);
      lVar13 = 0;
      puVar6 = auStack_1b8;
      puVar12 = puVar11;
      do {
        if ((&cStack_189)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(puVar7);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_260;
  pcStack_1e8 = FUN_10852eee4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar3;
  puVar4 = puVar8;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar6;
  puStack_208 = puVar2;
  puStack_200 = puVar7;
  puStack_1f8 = puVar9;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar3);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar5[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_240;
    func_0x000107c278b8(auStack_240,puVar2);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x000107c27984(&uStack_260,auStack_240,&lStack_228,1);
    puVar10 = (undefined8 *)&UNK_110a515c0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a515c0,&uStack_260,puVar8);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x000107c278ac(&puStack_248);
    puVar4 = puVar11;
    puVar12 = puVar8;
    puVar6 = &uStack_260;
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
      puVar4 = puVar11;
      puVar12 = puVar8;
      puVar6 = &uStack_260;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_268 = FUN_10852f058;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar10;
  puVar9 = puVar4;
  puVar11 = puVar12;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar6;
  plStack_288 = plVar1;
  puStack_280 = puVar2;
  puStack_278 = puVar3;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(puVar10);
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar7[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_2d8;
    func_0x000107c278b8(auStack_2d8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_2c0,puVar2);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x000107c27984(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar5 = (undefined8 *)&UNK_110a51610;
    unaff_x23 = &uStack_2f8;
    puVar9 = &uStack_2f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51610,puVar9,puVar12);
    puStack_2e0 = unaff_x23;
    func_0x000107c278ac(&puStack_2e0);
    lVar13 = 0;
    puVar2 = auStack_2d8;
    puVar11 = puVar12;
    do {
      if ((&cStack_2a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar4);
  puVar3 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar10);
  puVar8 = puVar3;
  __Unwind_Resume();
  pcStack_308 = FUN_10852f288;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar2;
  puStack_328 = puVar3;
  puStack_320 = puVar4;
  puStack_318 = puVar10;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(puVar5);
  _objc_retain(puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar8[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_378,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_360,puVar2);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x000107c27984(&uStack_398,auStack_378,&lStack_348,2);
    puVar7 = (undefined8 *)&UNK_110a51660;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51660,&uStack_398,puVar11);
    puStack_380 = &uStack_398;
    func_0x000107c278ac(&puStack_380);
    lVar13 = 0;
    do {
      if ((&cStack_349)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  __Unwind_Resume();
  puStack_3c8 = (undefined1 *)&uStack_3e0;
  pcStack_3a8 = FUN_10852f4b8;
  if (puVar2 != (undefined8 *)0x0) {
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    puStack_3c0 = puVar9;
    puStack_3b8 = puVar5;
    pppuStack_3b0 = &pppuStack_310;
    (**(code **)(*(long *)puVar2[1] + 0x18))((long *)puVar2[1],&UNK_110a516b0,&uStack_3e0,puVar7);
    func_0x000107c278ac(&puStack_3c8);
  }
  return;
}



/* Entry: 10852ea44; end: 10852ec93;  */

void FUN_10852ea44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar9 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = (undefined8 *)&UNK_110a51520;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x000107c278b8(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = (undefined8 *)&UNK_110a51520;
      unaff_x23 = &uStack_98;
      puVar9 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51520,puVar9,param_4);
      puStack_80 = unaff_x23;
      func_0x000107c278ac(&puStack_80);
      lVar13 = 0;
      param_1 = auStack_78;
      puVar5 = param_4;
      do {
        if ((&cStack_49)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10852ec94;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar7 = puVar9;
  puVar12 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    puVar8 = (undefined8 *)&UNK_110a51570;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar4[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_118;
      func_0x000107c278b8(auStack_118,puVar3);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar3 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_100,puVar3);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
      puVar8 = (undefined8 *)&UNK_110a51570;
      unaff_x23 = &uStack_138;
      puVar7 = &uStack_138;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51570,puVar7,puVar5);
      puStack_120 = unaff_x23;
      func_0x000107c278ac(&puStack_120);
      lVar13 = 0;
      puVar4 = auStack_118;
      puVar12 = puVar5;
      do {
        if ((&cStack_e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(puVar9);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar11 = &uStack_1c0;
  pcStack_148 = FUN_10852eee4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar10 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar9;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar8);
  plVar1 = (long *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,puVar2);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar3 = (undefined8 *)&UNK_110a515c0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a515c0,&uStack_1c0,puVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar10 = puVar11;
    puVar12 = puVar7;
    puVar4 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar10 = puVar11;
      puVar12 = puVar7;
      puVar4 = &uStack_1c0;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10852f058;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar5 = puVar10;
  puVar6 = puVar12;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar4;
  plStack_1e8 = plVar1;
  puStack_1e0 = puVar2;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar7[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_238;
    func_0x000107c278b8(auStack_238,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_220,puVar2);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107c27984(&uStack_258,auStack_238,&lStack_208,2);
    puVar9 = (undefined8 *)&UNK_110a51610;
    unaff_x23 = &uStack_258;
    puVar5 = &uStack_258;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51610,puVar5,puVar12);
    puStack_240 = unaff_x23;
    func_0x000107c278ac(&puStack_240);
    lVar13 = 0;
    puVar2 = auStack_238;
    puVar6 = puVar12;
    do {
      if ((&cStack_209)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar10);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar4 = puVar8;
  __Unwind_Resume();
  pcStack_268 = FUN_10852f288;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar9;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar2;
  puStack_288 = puVar8;
  puStack_280 = puVar10;
  puStack_278 = puVar3;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar9);
  _objc_retain(puVar5);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_2d8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_2c0,puVar2);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x000107c27984(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar7 = (undefined8 *)&UNK_110a51660;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51660,&uStack_2f8,puVar6);
    puStack_2e0 = &uStack_2f8;
    func_0x000107c278ac(&puStack_2e0);
    lVar13 = 0;
    do {
      if ((&cStack_2a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar9);
  __Unwind_Resume();
  puStack_328 = (undefined1 *)&uStack_340;
  pcStack_308 = FUN_10852f4b8;
  if (puVar2 != (undefined8 *)0x0) {
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    puStack_320 = puVar5;
    puStack_318 = puVar9;
    pppuStack_310 = &pppuStack_270;
    (**(code **)(*(long *)puVar2[1] + 0x18))((long *)puVar2[1],&UNK_110a516b0,&uStack_340,puVar7);
    func_0x000107c278ac(&puStack_328);
  }
  return;
}



/* Entry: 10852ec94; end: 10852eee3;  */

void FUN_10852ec94(undefined8 *param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = &UNK_110a51570;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f4a390b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x000107c278b8(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f4a390b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar3 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = &UNK_110a51570;
      unaff_x23 = &uStack_98;
      puVar3 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51570,puVar3,param_4);
      puStack_80 = unaff_x23;
      func_0x000107c278ac(&puStack_80);
      lVar12 = 0;
      param_1 = auStack_78;
      puVar7 = param_4;
      do {
        if ((&cStack_49)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar10 = &uStack_120;
  pcStack_a8 = FUN_10852eee4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar9 = puVar3;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar4;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f4a390b;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar8 = &UNK_110a515c0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a515c0,&uStack_120,puVar3);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar9 = puVar10;
    puVar7 = puVar3;
    param_1 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar9 = puVar10;
      puVar7 = puVar3;
      param_1 = &uStack_120;
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_10852f058;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar3 = puVar9;
  puVar11 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = param_1;
  plStack_148 = plVar1;
  puStack_140 = puVar4;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar10 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_180,puVar3);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar5 = &UNK_110a51610;
    unaff_x23 = &uStack_1b8;
    puVar3 = &uStack_1b8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51610,puVar3,puVar7);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar12 = 0;
    puVar10 = auStack_198;
    puVar11 = puVar7;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10852f288;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar10;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar9;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar5);
  _objc_retain(puVar3);
  if (puVar6 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_238,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar7 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_220,puVar7);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107c27984(&uStack_258,auStack_238,&lStack_208,2);
    puVar4 = &UNK_110a51660;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a51660,&uStack_258,puVar11);
    puStack_240 = &uStack_258;
    func_0x000107c278ac(&puStack_240);
    lVar12 = 0;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  __Unwind_Resume();
  puStack_288 = (undefined1 *)&uStack_2a0;
  pcStack_268 = FUN_10852f4b8;
  if (puVar2 != (undefined *)0x0) {
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    puStack_280 = puVar3;
    puStack_278 = puVar5;
    pppuStack_270 = &pppuStack_1d0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110a516b0,&uStack_2a0,puVar4);
    func_0x000107c278ac(&puStack_288);
  }
  return;
}



/* Entry: 10852eee4; end: 10852f057;  */

void FUN_10852eee4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a515c0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a515c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10852f058;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar8 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar11 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110a51610;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a51610,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar10 = 0;
    puVar11 = auStack_f8;
    puVar8 = param_4;
    do {
      if ((&cStack_c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_10852f288;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_110a51660;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a51660,&uStack_1b8,puVar8);
    puStack_1a0 = &uStack_1b8;
    func_0x000107c278ac(&puStack_1a0);
    lVar10 = 0;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  __Unwind_Resume();
  puStack_1e8 = (undefined1 *)&uStack_200;
  pcStack_1c8 = FUN_10852f4b8;
  if (puVar1 != (undefined *)0x0) {
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar3;
    puStack_1d8 = puVar6;
    pppuStack_1d0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110a516b0,&uStack_200,puVar7);
    func_0x000107c278ac(&puStack_1e8);
  }
  return;
}



/* Entry: 10852f058; end: 10852f287;  */

void FUN_10852f058(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a51610;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a51610,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar8 = 0;
    puVar5 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10852f288;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a390b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_110a51660;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a51660,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x000107c278ac(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_10852f4b8;
  if (puVar3 != (undefined *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    ppuStack_150 = &puStack_b0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a516b0,&uStack_180,puVar6);
    func_0x000107c278ac(&puStack_168);
  }
  return;
}



/* Entry: 10852f288; end: 10852f4b7;  */

void FUN_10852f288(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a51660;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a51660,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_10852f4b8;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110a516b0,&uStack_e0,puVar1);
    func_0x000107c278ac(&puStack_c8);
  }
  return;
}



/* Entry: 10852f4b8; end: 10852f52f;  */

void FUN_10852f4b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a516b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10852f530; end: 10852f5a7;  */

void FUN_10852f530(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a51700,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10852f5a8; end: 10852f867;  */

/* WARNING: Removing unreachable block (ram,0x00010852f830) */
/* WARNING: Removing unreachable block (ram,0x00010852faf0) */

void FUN_10852f5a8(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  long *plStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  long *plStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  puVar4 = param_4;
  puVar7 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a51750;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    puVar6 = (undefined *)puVar3;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar3 = &uStack_180;
  pcStack_c8 = FUN_10852f868;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar6);
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_148,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar5 = &UNK_110a517a0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a517a0,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar11 = 0;
    puVar8 = (undefined *)puVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar3 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  puVar13 = auStack_160;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar13);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar2 = (undefined *)puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_200;
  pcStack_188 = FUN_10852fb28;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar9 = puVar8;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar13;
  puStack_1b0 = (undefined *)puVar3;
  puStack_1a8 = puVar4;
  puStack_1a0 = puVar6;
  puStack_198 = puVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar5);
  plVar12 = (long *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar13 = auStack_1e0;
    func_0x000107c278b8(auStack_1e0,puVar1);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar7 = &UNK_110a517f0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a517f0,&uStack_200,puVar8);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar9 = (undefined *)puVar10;
    puVar3 = &uStack_200;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar9 = (undefined *)puVar10;
      puVar3 = &uStack_200;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_280;
  pcStack_208 = FUN_10852fc9c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar2 = puVar9;
  puStack_240 = unaff_x24;
  puStack_238 = puVar13;
  puStack_230 = (undefined *)puVar3;
  plStack_228 = plVar12;
  puStack_220 = puVar1;
  puStack_218 = puVar5;
  pppuStack_210 = &ppuStack_190;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar13 = auStack_260;
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar6 = &UNK_110a51840;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a51840,&uStack_280,puVar9);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar2 = (undefined *)puVar10;
    puVar3 = &uStack_280;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar2 = (undefined *)puVar10;
      puVar3 = &uStack_280;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar5 = puVar1;
    __Unwind_Resume();
    puVar10 = &uStack_300;
    pcStack_288 = FUN_10852fe10;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar6;
    puVar8 = puVar2;
    puStack_2c0 = unaff_x24;
    puStack_2b8 = puVar13;
    puStack_2b0 = (undefined *)puVar3;
    plStack_2a8 = plVar12;
    puStack_2a0 = puVar1;
    puStack_298 = puVar7;
    pppuStack_290 = &pppuStack_210;
    _objc_retain(puVar6);
    plVar12 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar5 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a390b;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      puVar13 = auStack_2e0;
      func_0x000107c278b8(auStack_2e0,puVar1);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar4 = &UNK_110a51890;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a51890,&uStack_300,puVar2);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x000107c278ac(&puStack_2e8);
      puVar8 = (undefined *)puVar10;
      puVar3 = &uStack_300;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar8 = (undefined *)puVar10;
        puVar3 = &uStack_300;
      }
    }
    puVar1 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      puVar2 = puVar1;
      __Unwind_Resume();
      pcStack_308 = FUN_10852ff84;
      lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = puVar4;
      puStack_340 = unaff_x24;
      puStack_338 = puVar13;
      puStack_330 = (undefined *)puVar3;
      plStack_328 = plVar12;
      puStack_320 = puVar1;
      puStack_318 = puVar6;
      pppuStack_310 = &pppuStack_290;
      _objc_retain(puVar4);
      if (puVar2 != (undefined *)0x0) {
        plVar12 = *(long **)(puVar2 + 8);
        _objc_retain(puVar4);
        if (puVar4 == (undefined *)0x0) {
          puVar1 = &UNK_10f4a390b;
        }
        else {
          puVar1 = puVar4;
          _objc_retainAutorelease(puVar4);
          func_0x00010bdc3520();
        }
        _objc_release(puVar4);
        func_0x000107c278b8(auStack_360,puVar1);
        uStack_380 = 0;
        uStack_378 = 0;
        uStack_370 = 0;
        func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
        puVar7 = &UNK_110a518e0;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a518e0,&uStack_380,puVar8);
        puStack_368 = (undefined1 *)&uStack_380;
        func_0x000107c278ac(&puStack_368);
        if (cStack_349 < '\0') {
          __ZdlPv(auStack_360[0]);
        }
      }
      puVar1 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
        ___stack_chk_fail();
        _objc_release(puVar4);
        _objc_release(puVar4);
        puVar6 = puVar1;
        __Unwind_Resume();
        puStack_3a8 = (undefined1 *)&uStack_3c0;
        pcStack_388 = FUN_1085300f8;
        if (puVar6 != (undefined *)0x0) {
          uStack_3c0 = 0;
          uStack_3b8 = 0;
          uStack_3b0 = 0;
          puStack_3a0 = puVar1;
          puStack_398 = puVar4;
          pppuStack_390 = &pppuStack_310;
          (**(code **)(**(long **)(puVar6 + 8) + 0x18))
                    (*(long **)(puVar6 + 8),&UNK_110a51930,&uStack_3c0,puVar7);
          func_0x000107c278ac(&puStack_3a8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852f868; end: 10852fb27;  */

/* WARNING: Removing unreachable block (ram,0x00010852faf0) */

void FUN_10852f868(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a517a0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a517a0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar10 = 0;
    puVar5 = (undefined *)puVar2;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = (undefined8 *)param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar12 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar12);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = (undefined *)puVar2;
  __Unwind_Resume();
  puVar8 = &uStack_140;
  pcStack_c8 = FUN_10852fb28;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar12;
  puStack_f0 = (undefined *)puVar2;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar4 = &UNK_10f4a390b;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar12 = auStack_120;
    func_0x000107c278b8(auStack_120,puVar4);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x000107c27984(&uStack_140,auStack_120,&lStack_108,1);
    puVar4 = &UNK_110a517f0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a517f0,&uStack_140,puVar5);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x000107c278ac(&puStack_128);
    puVar7 = (undefined *)puVar8;
    puVar2 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar7 = (undefined *)puVar8;
      puVar2 = &uStack_140;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar8 = &uStack_1c0;
  pcStack_148 = FUN_10852fc9c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar9 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = puVar12;
  puStack_170 = (undefined *)puVar2;
  plStack_168 = plVar11;
  puStack_160 = puVar5;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar4);
  plVar11 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    puVar12 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar3 = &UNK_110a51840;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a51840,&uStack_1c0,puVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar9 = (undefined *)puVar8;
    puVar2 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = (undefined *)puVar8;
      puVar2 = &uStack_1c0;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar7 = puVar1;
    __Unwind_Resume();
    puVar8 = &uStack_240;
    pcStack_1c8 = FUN_10852fe10;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar3;
    puVar6 = puVar9;
    puStack_200 = unaff_x24;
    puStack_1f8 = puVar12;
    puStack_1f0 = (undefined *)puVar2;
    plStack_1e8 = plVar11;
    puStack_1e0 = puVar1;
    puStack_1d8 = puVar4;
    pppuStack_1d0 = &ppuStack_150;
    _objc_retain(puVar3);
    plVar11 = (long *)0x0;
    if (puVar7 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar7 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a390b;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      puVar12 = auStack_220;
      func_0x000107c278b8(auStack_220,puVar1);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
      puVar5 = &UNK_110a51890;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a51890,&uStack_240,puVar9);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x000107c278ac(&puStack_228);
      puVar6 = (undefined *)puVar8;
      puVar2 = &uStack_240;
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
        puVar6 = (undefined *)puVar8;
        puVar2 = &uStack_240;
      }
    }
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar7 = puVar1;
    __Unwind_Resume();
    pcStack_248 = FUN_10852ff84;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar5;
    puStack_280 = unaff_x24;
    puStack_278 = puVar12;
    puStack_270 = (undefined *)puVar2;
    plStack_268 = plVar11;
    puStack_260 = puVar1;
    puStack_258 = puVar3;
    pppuStack_250 = &pppuStack_1d0;
    _objc_retain(puVar5);
    if (puVar7 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar7 + 8);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a390b;
      }
      else {
        puVar1 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      func_0x000107c278b8(auStack_2a0,puVar1);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
      puVar4 = &UNK_110a518e0;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a518e0,&uStack_2c0,puVar6);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x000107c278ac(&puStack_2a8);
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
      }
    }
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      puVar3 = puVar1;
      __Unwind_Resume();
      puStack_2e8 = (undefined1 *)&uStack_300;
      pcStack_2c8 = FUN_1085300f8;
      if (puVar3 != (undefined *)0x0) {
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        puStack_2e0 = puVar1;
        puStack_2d8 = puVar5;
        pppuStack_2d0 = &pppuStack_250;
        (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                  (*(long **)(puVar3 + 8),&UNK_110a51930,&uStack_300,puVar4);
        func_0x000107c278ac(&puStack_2e8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10852fb28; end: 10852fc9b;  */

void FUN_10852fb28(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a517f0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a517f0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_10852fc9c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110a51840;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a51840,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_10852fe10;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a51890;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a51890,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  pcStack_188 = FUN_10852ff84;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar4 = &UNK_110a518e0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a518e0,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_228 = (undefined1 *)&uStack_240;
  pcStack_208 = FUN_1085300f8;
  if (puVar3 != (undefined *)0x0) {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    puStack_220 = puVar2;
    puStack_218 = puVar1;
    pppuStack_210 = &pppuStack_190;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a51930,&uStack_240,puVar4);
    func_0x000107c278ac(&puStack_228);
  }
  return;
}



/* Entry: 10852fc9c; end: 10852fe0f;  */

void FUN_10852fc9c(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a51840;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a51840,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_10852fe10;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110a51890;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a51890,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_10852ff84;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a518e0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a518e0,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_1a8 = (undefined1 *)&uStack_1c0;
  pcStack_188 = FUN_1085300f8;
  if (puVar3 != (undefined *)0x0) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    puStack_1a0 = puVar2;
    puStack_198 = puVar4;
    pppuStack_190 = &ppuStack_110;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a51930,&uStack_1c0,puVar1);
    func_0x000107c278ac(&puStack_1a8);
  }
  return;
}



/* Entry: 10852fe10; end: 10852ff83;  */

void FUN_10852fe10(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a51890;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a51890,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10852ff84;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a390b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110a518e0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a518e0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_1085300f8;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a51930,&uStack_140,puVar4);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 10852ff84; end: 1085300f7;  */

void FUN_10852ff84(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a390b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a518e0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a518e0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1085300f8;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a51930,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 1085300f8; end: 10853016f;  */

void FUN_1085300f8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a51930,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108530170; end: 1085301d7; +[IMPPublisherProfileLaunchInfo descriptor] */

void FUN_108530170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5710,
                        &PTR____CFConstantStringClassReference_110ee0b78,&PTR_s_impala_1132640a0,
                        &PTR_s_publisherId_1132641b8,8,0x30,0x1c);
    puRam000000011372c240 = puVar1;
  }
  return;
}



/* Entry: 1085301d8; end: 108530253; +[IMPPublisherMetadata descriptor] */

undefined * FUN_1085301d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5760,
                        &PTR____CFConstantStringClassReference_110ee0b98,&PTR_s_impala_1132640a0,
                        &PTR_DAT_1132642b8,0xd,0x58,0x1c);
    func_0x00010c2289e0();
    puRam000000011372c248 = puVar1;
  }
  return puRam000000011372c248;
}



/* Entry: 108530254; end: 1085302bb; +[IMPGetEpisodeListRequest descriptor] */

void FUN_108530254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba57b0,
                        &PTR____CFConstantStringClassReference_110ee0bb8,&PTR_s_impala_1132640a0,
                        &PTR_s_businessProfileId_113264158,3,0x18,0x1c);
    puRam000000011372c250 = puVar1;
  }
  return;
}



/* Entry: 1085302bc; end: 108530323; +[IMPGetEpisodeListResponse descriptor] */

void FUN_1085302bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5800,
                        &PTR____CFConstantStringClassReference_110ee0bd8,&PTR_s_impala_1132640a0,
                        &PTR_DAT_1132640d8,2,0x18,0x1c);
    puRam000000011372c258 = puVar1;
  }
  return;
}



/* Entry: 108530324; end: 10853038b; +[IMPGetEpisodeRequest descriptor] */

void FUN_108530324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c260 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5850,
                        &PTR____CFConstantStringClassReference_110ee0bf8,&PTR_s_impala_1132640a0,
                        &PTR_s_id_p_113264118,2,0x10,0x1c);
    puRam000000011372c260 = puVar1;
  }
  return;
}



/* Entry: 10853038c; end: 1085303f3; +[IMPGetEpisodeResponse descriptor] */

void FUN_10853038c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba58a0,
                        &PTR____CFConstantStringClassReference_110ee0c18,&PTR_s_impala_1132640a0,
                        &PTR_DAT_1132640b8,1,0x10,0x1c);
    puRam000000011372c268 = puVar1;
  }
  return;
}



/* Entry: 1085303f4; end: 10853046f; +[IMPShowProfileLaunchInfo descriptor] */

undefined * FUN_1085303f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5940,
                        &PTR____CFConstantStringClassReference_110ee0c38,&PTR_s_impala_113264458,
                        &PTR_s_showId_1132644d0,0x17,0x80,0x1c);
    func_0x00010c2289e0();
    puRam000000011372c270 = puVar1;
  }
  return puRam000000011372c270;
}



/* Entry: 108530470; end: 108530553; +[IMPEpisodeLaunchInfo descriptor] */

void FUN_108530470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5990,
                        &PTR____CFConstantStringClassReference_110ee0c58,&PTR_s_impala_113264458,
                        &PTR_DAT_113264470,3,0x18,0x1c);
    puRam000000011372c278 = puVar1;
  }
  return;
}



/* Entry: 108530554; end: 10853055f;  */

bool FUN_108530554(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108530560; end: 1085305db;  */

undefined * FUN_108530560(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372c288 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ee0c98,
                        &UNK_10df34c88,&UNK_10df34c9c,2,FUN_1085305dc,0);
    do {
      if (puRam000000011372c288 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372c288;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372c288,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372c288 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372c288;
}



/* Entry: 1085305dc; end: 1085305e7;  */

bool FUN_1085305dc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1085305e8; end: 108530663; +[IMPShowMetadata descriptor] */

undefined * FUN_1085305e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5a30,
                        &PTR____CFConstantStringClassReference_110ed6a78,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_1132651b8,0x14,0x90,0x1c);
    func_0x00010c2289e0();
    puRam000000011372c290 = puVar1;
  }
  return puRam000000011372c290;
}



/* Entry: 108530664; end: 1085306cb; +[IMPTrailer descriptor] */

void FUN_108530664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5a80,
                        &PTR____CFConstantStringClassReference_110ee0cb8,&PTR_s_impala_1132647c0,
                        &PTR_s_id_p_1132647d8,1,0x10,0x1c);
    puRam000000011372c298 = puVar1;
  }
  return;
}



/* Entry: 1085306cc; end: 108530757; +[IMPExtraMetadata descriptor] */

undefined * FUN_1085306cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5ad0,
                        &PTR____CFConstantStringClassReference_110ee0cd8,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_113264af8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372c2a0 = puVar1;
  }
  return puRam000000011372c2a0;
}



/* Entry: 108530758; end: 1085307bf; +[IMPEpisodeMetadata descriptor] */

void FUN_108530758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5b20,
                        &PTR____CFConstantStringClassReference_110ee0cf8,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264fd8,7,0x38,0x1c);
    puRam000000011372c2a8 = puVar1;
  }
  return;
}



/* Entry: 1085307c0; end: 108530827; +[IMPEpisodeMetadataPage descriptor] */

void FUN_1085307c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5b70,
                        &PTR____CFConstantStringClassReference_110ee0d18,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264978,2,0x18,0x1c);
    puRam000000011372c2b0 = puVar1;
  }
  return;
}



/* Entry: 108530828; end: 10853088f; +[IMPSeasonMetadata descriptor] */

void FUN_108530828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5bc0,
                        &PTR____CFConstantStringClassReference_110ee0d38,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264f38,5,0x28,0x1c);
    puRam000000011372c2b8 = puVar1;
  }
  return;
}



/* Entry: 108530890; end: 1085308f7; +[IMPSeasonMetadataPage descriptor] */

void FUN_108530890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5c10,
                        &PTR____CFConstantStringClassReference_110ee0d58,&PTR_s_impala_1132647c0,
                        &PTR_DAT_1132649b8,2,0x18,0x1c);
    puRam000000011372c2c0 = puVar1;
  }
  return;
}



/* Entry: 1085308f8; end: 10853095f; +[IMPGetSeasonMetadataRequest descriptor] */

void FUN_1085308f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5c60,
                        &PTR____CFConstantStringClassReference_110ee0d78,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_113264b58,3,0x18,0x1c);
    puRam000000011372c2c8 = puVar1;
  }
  return;
}



/* Entry: 108530960; end: 1085309c7; +[IMPGetSeasonMetadataResponse descriptor] */

void FUN_108530960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5cb0,
                        &PTR____CFConstantStringClassReference_110ee0d98,&PTR_s_impala_1132647c0,
                        &PTR_DAT_1132647f8,1,0x10,0x1c);
    puRam000000011372c2d0 = puVar1;
  }
  return;
}



/* Entry: 1085309c8; end: 108530a2f; +[IMPGetSeasonMetadataBatchRequest descriptor] */

void FUN_1085309c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5d00,
                        &PTR____CFConstantStringClassReference_110ee0db8,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264818,1,0x10,0x1c);
    puRam000000011372c2d8 = puVar1;
  }
  return;
}



/* Entry: 108530a30; end: 108530a97; +[IMPGetSeasonMetadataBatchResponse descriptor] */

void FUN_108530a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5d50,
                        &PTR____CFConstantStringClassReference_110ee0dd8,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264838,1,0x10,0x1c);
    puRam000000011372c2e0 = puVar1;
  }
  return;
}



/* Entry: 108530a98; end: 108530aff; +[IMPGetShowDisplayInfoRequest descriptor] */

void FUN_108530a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5da0,
                        &PTR____CFConstantStringClassReference_110ee0df8,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_113264d38,4,0x20,0x1c);
    puRam000000011372c2e8 = puVar1;
  }
  return;
}



/* Entry: 108530b00; end: 108530b67; +[IMPGetShowDisplayInfoResponse descriptor] */

void FUN_108530b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5df0,
                        &PTR____CFConstantStringClassReference_110ee0e18,&PTR_s_impala_1132647c0,
                        &PTR_DAT_1132650b8,8,0x48,0x1c);
    puRam000000011372c2f0 = puVar1;
  }
  return;
}



/* Entry: 108530b68; end: 108530bcf; +[IMPGetEpisodesForSeasonRequest descriptor] */

void FUN_108530b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c2f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5e40,
                        &PTR____CFConstantStringClassReference_110ee0e38,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264db8,4,0x20,0x1c);
    puRam000000011372c2f8 = puVar1;
  }
  return;
}



/* Entry: 108530bd0; end: 108530c37; +[IMPGetEpisodesForSeasonResponse descriptor] */

void FUN_108530bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5e90,
                        &PTR____CFConstantStringClassReference_110ee0e58,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264bb8,3,0x20,0x1c);
    puRam000000011372c300 = puVar1;
  }
  return;
}



/* Entry: 108530c38; end: 108530c9f; +[IMPGetSeasonListForShowRequest descriptor] */

void FUN_108530c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5ee0,
                        &PTR____CFConstantStringClassReference_110ee0e78,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_113264c18,3,0x18,0x1c);
    puRam000000011372c308 = puVar1;
  }
  return;
}



/* Entry: 108530ca0; end: 108530d07; +[IMPGetSeasonListForShowResponse descriptor] */

void FUN_108530ca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5f30,
                        &PTR____CFConstantStringClassReference_110ee0e98,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264c78,3,0x18,0x1c);
    puRam000000011372c310 = puVar1;
  }
  return;
}



/* Entry: 108530d08; end: 108530d6f; +[IMPGetEpisodeListForSeasonRequest descriptor] */

void FUN_108530d08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5f80,
                        &PTR____CFConstantStringClassReference_110ee0eb8,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_113264e38,4,0x20,0x1c);
    puRam000000011372c318 = puVar1;
  }
  return;
}



/* Entry: 108530d70; end: 108530dd7; +[IMPGetEpisodeListForSeasonResponse descriptor] */

void FUN_108530d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba5fd0,
                        &PTR____CFConstantStringClassReference_110ee0ed8,&PTR_s_impala_1132647c0,
                        &PTR_DAT_1132649f8,2,0x18,0x1c);
    puRam000000011372c320 = puVar1;
  }
  return;
}



/* Entry: 108530dd8; end: 108530e3f; +[IMPGetEpisodeMetadataBatchRequest descriptor] */

void FUN_108530dd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6020,
                        &PTR____CFConstantStringClassReference_110ee0ef8,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264858,1,0x10,0x1c);
    puRam000000011372c328 = puVar1;
  }
  return;
}



/* Entry: 108530e40; end: 108530ea7; +[IMPGetEpisodeMetadataBatchResponse descriptor] */

void FUN_108530e40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6070,
                        &PTR____CFConstantStringClassReference_110ee0f18,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264878,1,0x10,0x1c);
    puRam000000011372c330 = puVar1;
  }
  return;
}



/* Entry: 108530ea8; end: 108530f0f; +[IMPGetEpisodeMetadataForSeasonRequest descriptor] */

void FUN_108530ea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba60c0,
                        &PTR____CFConstantStringClassReference_110ee0f38,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264cd8,3,0x18,0x1c);
    puRam000000011372c338 = puVar1;
  }
  return;
}



/* Entry: 108530f10; end: 108530f77; +[IMPGetEpisodeMetadataForSeasonResponse descriptor] */

void FUN_108530f10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6110,
                        &PTR____CFConstantStringClassReference_110ee0f58,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264898,1,0x10,0x1c);
    puRam000000011372c340 = puVar1;
  }
  return;
}



/* Entry: 108530f78; end: 108530fdf; +[IMPGetShowMetadataRequest descriptor] */

void FUN_108530f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c348 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6160,
                        &PTR____CFConstantStringClassReference_110ee0f78,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_113264a38,2,0x18,0x1c);
    puRam000000011372c348 = puVar1;
  }
  return;
}



/* Entry: 108530fe0; end: 108531047; +[IMPGetShowMetadataResponse descriptor] */

void FUN_108530fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba61b0,
                        &PTR____CFConstantStringClassReference_110ee0f98,&PTR_s_impala_1132647c0,
                        &PTR_DAT_1132648b8,1,0x10,0x1c);
    puRam000000011372c350 = puVar1;
  }
  return;
}



/* Entry: 108531048; end: 1085310af; +[IMPGetShowComponentsRequest descriptor] */

void FUN_108531048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6200,
                        &PTR____CFConstantStringClassReference_110ee0fb8,&PTR_s_impala_1132647c0,
                        &PTR_DAT_1132648d8,1,0x10,0x1c);
    puRam000000011372c358 = puVar1;
  }
  return;
}



/* Entry: 1085310b0; end: 108531117; +[IMPGetShowComponentsResponse descriptor] */

void FUN_1085310b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6250,
                        &PTR____CFConstantStringClassReference_110ee0fd8,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264a78,2,0x18,0x1c);
    puRam000000011372c360 = puVar1;
  }
  return;
}



/* Entry: 108531118; end: 10853117f; +[IMPGetExtrasForShowRequest descriptor] */

void FUN_108531118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba62a0,
                        &PTR____CFConstantStringClassReference_110ee0ff8,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_1132648f8,1,0x10,0x1c);
    puRam000000011372c368 = puVar1;
  }
  return;
}



/* Entry: 108531180; end: 1085311e7; +[IMPTrailerContent descriptor] */

void FUN_108531180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba62f0,
                        &PTR____CFConstantStringClassReference_110ee1018,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264918,1,0x10,0x1c);
    puRam000000011372c370 = puVar1;
  }
  return;
}



/* Entry: 1085311e8; end: 108531273; +[IMPExtraContent descriptor] */

undefined * FUN_1085311e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6340,
                        &PTR____CFConstantStringClassReference_110ee1038,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264938,1,0x10,0x1c);
    func_0x00010c229040();
    puRam000000011372c378 = puVar1;
  }
  return puRam000000011372c378;
}



/* Entry: 108531274; end: 1085312db; +[IMPGetExtrasForShowResponse descriptor] */

void FUN_108531274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6390,
                        &PTR____CFConstantStringClassReference_110ee1058,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264958,1,0x10,0x1c);
    puRam000000011372c380 = puVar1;
  }
  return;
}



/* Entry: 1085312dc; end: 108531343; +[IMPGetSeasonPageRequest descriptor] */

void FUN_1085312dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba63e0,
                        &PTR____CFConstantStringClassReference_110ee1078,&PTR_s_impala_1132647c0,
                        &PTR_s_showId_113264eb8,4,0x20,0x1c);
    puRam000000011372c388 = puVar1;
  }
  return;
}



/* Entry: 108531344; end: 1085313ab; +[IMPGetSeasonPageResponse descriptor] */

void FUN_108531344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6430,
                        &PTR____CFConstantStringClassReference_110ee1098,&PTR_s_impala_1132647c0,
                        &PTR_DAT_113264ab8,2,0x18,0x1c);
    puRam000000011372c390 = puVar1;
  }
  return;
}



/* Entry: 1085313ac; end: 108531413; +[STOEpisode descriptor] */

void FUN_1085313ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba64d0,
                        &PTR____CFConstantStringClassReference_110ee10b8,&PTR_DAT_113265438,
                        &PTR_DAT_113265450,6,0x28,0x1c);
    puRam000000011372c398 = puVar1;
  }
  return;
}



/* Entry: 108531414; end: 10853149f; +[STOShowExtra descriptor] */

undefined * FUN_108531414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c3a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6570,
                        &PTR____CFConstantStringClassReference_110ee10d8,&PTR_DAT_113265518,
                        &PTR_s_showId_113265550,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372c3a0 = puVar1;
  }
  return puRam000000011372c3a0;
}



/* Entry: 1085314a0; end: 108531507; +[STOTrailer descriptor] */

void FUN_1085314a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c3a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba65c0,
                        &PTR____CFConstantStringClassReference_110ee0cb8,&PTR_DAT_113265518,
                        &PTR_s_id_p_113265530,1,0x10,0x1c);
    puRam000000011372c3a8 = puVar1;
  }
  return;
}


