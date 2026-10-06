/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108deed60; end: 108deed6f;  */

void FUN_108deed60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac5838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108deed70; end: 108deed8f;  */

void FUN_108deed70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac5838;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108deed90; end: 108deedf7;  */

void FUN_108deed90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108deedf8; end: 108deedfb;  */

void FUN_108deedf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108deedfc; end: 108deee6f; -[SCMemoriesPrivateMemoriesManagerServices initWithMemoriesPrivateMemoriesManager:] */

undefined1 * FUN_108deedfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe900;
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



/* Entry: 108deee70; end: 108deee77; -[SCMemoriesPrivateMemoriesManagerServices memoriesPrivateMemoriesManager] */

undefined8 FUN_108deee70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108deee78; end: 108deee83; -[SCMemoriesPrivateMemoriesManagerServices .cxx_destruct] */

void FUN_108deee78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108deee84; end: 108deee8f; -[SCSoundServices .cxx_destruct] */

void FUN_108deee84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108deee90; end: 108deef33; -[SCReauthenticationServices initWithReauthenticationService:reauthenticationServiceWithDefaultErrorHandling:] */

undefined1 *
FUN_108deee90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe910;
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



/* Entry: 108deef34; end: 108deef3b; -[SCReauthenticationServices reauthenticationService] */

undefined8 FUN_108deef34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108deef3c; end: 108deef43; -[SCReauthenticationServices reauthenticationServiceWithDefaultErrorHandling] */

undefined8 FUN_108deef3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108deef44; end: 108deef73; -[SCReauthenticationServices .cxx_destruct] */

void FUN_108deef44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108deef74; end: 108def16f; +[SCMemoriesGrapheneLogger fireGalleryUploadResultWithStatusCode:host:mediaType:uploadLatencyInSec:contentLengthInByte:grapheneRegistry:] */

void FUN_108deef74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c28e5a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110df2dd8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_6 != (undefined **)0x0) {
    ppuStack_90 = param_6;
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_88 = param_5;
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_90,&ppuStack_a8,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010bfcdf00(param_2,param_3,puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar7 = param_7;
  func_0x00010bef9180(uVar1,param_3,param_2);
  func_0x00010bfec2a0(uVar1,param_3,param_2);
  uVar8 = param_2;
  func_0x00010befc000(param_1,uVar1);
  _objc_release(param_2);
  uVar6 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_108def170;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = puVar2;
  ppuStack_e8 = param_6;
  ppuStack_e0 = param_5;
  uStack_d8 = param_2;
  uStack_d0 = uVar1;
  uStack_c8 = param_7;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c266460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e29c38;
  func_0x00010b5faa7c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dd6078;
  ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0588;
  uStack_108 = uVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_100 = ppuVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_108,&ppuStack_118,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfcdf00(uVar6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar9);
  _objc_release(uVar8);
  _objc_release(puVar2);
  uVar11 = uVar6;
  func_0x00010bfec2a0(uVar1,param_3,uVar6);
  _objc_release(uVar6);
  uVar7 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_108def2dc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = puVar3;
  ppuStack_158 = ppuVar9;
  puStack_150 = puVar2;
  uStack_148 = uVar6;
  uStack_140 = uVar8;
  uStack_138 = uVar1;
  ppuStack_130 = &puStack_c0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf14cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110dd6078;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_170 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_170,&ppuStack_178,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar7,param_3,puVar3,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = uVar7;
  func_0x00010bfec2a0(puVar2,param_3,uVar7);
  _objc_release(uVar7);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf14ca0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(puVar2,param_3,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfec2a0(uVar6,param_3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 108def170; end: 108def2db; +[SCMemoriesGrapheneLogger fireServletResponseErrorWithEntryType:grapheneRegistry:] */

void FUN_108def170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c266460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e29c38;
  func_0x00010b5faa7c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dd6078;
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0588;
  uStack_58 = param_3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfcdf00(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar9 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  uVar5 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_108def2dc;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = puVar4;
  ppuStack_a8 = ppuVar3;
  puStack_a0 = puVar2;
  uStack_98 = param_1;
  uStack_90 = param_3;
  uStack_88 = uVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar4 = PTR_PTR_1126b2438;
  func_0x00010bf14cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dd6078;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&ppuStack_c8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar5,param_2,puVar4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  uVar1 = uVar5;
  func_0x00010bfec2a0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2438;
  func_0x00010bf14ca0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(puVar2,param_2,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bfec2a0(uVar5,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108def2dc; end: 108def43b; +[SCMemoriesGrapheneLogger fireBackupSnapDocError:grapheneRegistry:] */

void FUN_108def2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd6078;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar6 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14ca0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar7,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 108def43c; end: 108def4df; +[SCMemoriesGrapheneLogger fireGallerySkipOperationFromDeletionWithGrapheneRegistry:] */

void FUN_108def43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14ca0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108def4e0; end: 108def5b3; +[SCMemoriesGrapheneLogger fireGalleryLocalOperationMetricWithQueueLength:blockedDuration:grapheneRegistry:] */

void FUN_108def4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14bc0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_2,param_3,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_3,param_2);
  func_0x00010bef9180(uVar1,param_3,param_2,param_4);
  func_0x00010befc000(param_1,uVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108def5b4; end: 108def713; +[SCMemoriesGrapheneLogger fireGalleryOperationTotalTimeMetricWithQueueLength:durationInSec:operationType:grapheneRegistry:] */

void FUN_108def5b4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14d80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_60 = param_5;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ef87d8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bfcdf00(param_2,param_3,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_3,param_2);
  uVar4 = param_2;
  func_0x00010bef9180(uVar1,param_3,param_2,(long)param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14740(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar1,param_3,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar5,param_3,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108def714; end: 108def7b7; +[SCMemoriesGrapheneLogger fireGallerySnapBackgroundUploadScheduledWithGrapheneRegistry:] */

void FUN_108def714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14740(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108def7b8; end: 108def85b; +[SCMemoriesGrapheneLogger fireGallerySnapBackgroundUploadFinishedWithGrapheneRegistry:] */

void FUN_108def7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14720(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108def85c; end: 108def9d7; +[SCMemoriesGrapheneLogger fireLegacyEditsSize:mediaType:grapheneRegistry:] */

undefined **
FUN_108def85c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14ba0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e8a318;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(ppuVar1,param_2,param_1);
  ppuVar7 = param_3;
  func_0x00010bef9180(ppuVar1,param_2,param_1,param_3);
  _objc_release(param_1);
  ppuVar6 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_108def9d8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = puVar4;
  puStack_a8 = puVar2;
  uStack_a0 = param_1;
  puStack_98 = puVar3;
  ppuStack_90 = ppuVar1;
  ppuStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010c269d40(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf2a880(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dae878;
  ppuVar7 = ppuVar6;
  _objc_opt_class();
  func_0x00010c25d880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_c0 = ppuVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,&ppuStack_c8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(ppuVar6,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  ppuVar7 = ppuVar6;
  func_0x00010bfec2a0(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef87f8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8818;
  }
  return ppuVar1;
}



/* Entry: 108def9d8; end: 108defb1f; +[SCMemoriesGrapheneLogger fireGrantFullAccessTappedWithContext:grapheneRegistry:] */

undefined ** FUN_108def9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf2a880(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dae878;
  lVar3 = param_1;
  _objc_opt_class();
  func_0x00010c25d880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_50 = lVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bfec2a0(ppuVar1);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef87f8;
  if (lVar3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8818;
  }
  return ppuVar1;
}



/* Entry: 108defb20; end: 108defb3b; +[SCMemoriesGrapheneLogger stringValueWithContext:] */

undefined ** FUN_108defb20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef87f8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8818;
  }
  return ppuVar1;
}



/* Entry: 108defb3c; end: 108defddb; +[SCMemoriesGrapheneLogger fireCloudSyncCleanupWithUnsyncedSnapCount:unsyncedEntryCount:removedEntryCount:isLastPageCleanup:grapheneRegistry:] */

void FUN_108defb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar3 = PTR_PTR_1126b2438;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)param_6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
  func_0x00010bf3e640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ef8858;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ef8838;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_78,&ppuStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfcdf00(param_1,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bef9180(uVar2,param_2,uVar5,param_3);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf3e640(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ef8858;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ef8878;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_90 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_98,&ppuStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfcdf00(param_1,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bef9180(uVar2,param_2,uVar6,param_4);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf3e640();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ef8858;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ef8898;
  uVar9 = 2;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_b0 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_b8,&ppuStack_c8,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010bfcdf00(param_1,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar8 = param_1;
  func_0x00010bef9180(uVar2,param_2,param_1,param_5);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf3e680(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bfcdf00(uVar2,param_2,puVar3,&PTR__OBJC_CLASS___NSConstantDictionary_111174fe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bef9180(uVar5,param_2,uVar7,uVar8);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf3e680(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bfcdf00(uVar2,param_2,puVar3,&PTR__OBJC_CLASS___NSConstantDictionary_111175008);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bef9180(uVar5,param_2,uVar6,param_5);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf3e680(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar2,param_2,puVar3,&PTR__OBJC_CLASS___NSConstantDictionary_111175030);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bef9180(uVar5,param_2,uVar2,uVar9);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108defddc; end: 108deff4b; +[SCMemoriesGrapheneLogger fireCloudSyncSnapshotDeletionWithDeletedCount:totalCount:entryIdsCount:grapheneRegistry:] */

void FUN_108defddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf3e680(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcdf00(param_1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantDictionary_111174fe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,uVar3,param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf3e680(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfcdf00(param_1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantDictionary_111175008);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,uVar4,param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf3e680(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantDictionary_111175030);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108deff4c; end: 108df00b7; +[SCMemoriesGrapheneLogger fireCloudSyncOperationDiscardedWithType:reason:grapheneRegistry:] */

void FUN_108deff4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf3e660();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuStack_58 = param_4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ec2238;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110daf558;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_50 = param_5;
  }
  uVar15 = 2;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar10 = ppuVar3;
  func_0x00010bfcdf00(param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  uVar12 = param_2;
  func_0x00010bfec2a0(ppuVar1,param_3,param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_78 = FUN_108df00b8;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_7;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    puVar2 = PTR_PTR_1126b2438;
    func_0x00010bfbda20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110ef88b8;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,uVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar4 != (undefined **)0x0) {
      ppuStack_f0 = ppuVar4;
    }
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar10 != (undefined **)0x0) {
      ppuStack_e8 = ppuVar10;
    }
    ppuStack_100 = &PTR____CFConstantStringClassReference_110dd8fd8;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110ef88d8;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,uVar15);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar5 != (undefined **)0x0) {
      ppuStack_e0 = ppuVar5;
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_f0,&ppuStack_108,
                        3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    puVar9 = puVar6;
    func_0x00010bfcdf00(ppuVar1,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar2);
    func_0x00010bfec2a0(ppuVar3,param_3,ppuVar1);
    ppuVar13 = ppuVar1;
    func_0x00010befc000(param_1,ppuVar3);
    _objc_release(ppuVar1);
    ppuVar7 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      puVar6 = PTR_PTR_1126b2438;
      pcStack_118 = FUN_108df0298;
      lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_150 = ppuVar5;
      ppuStack_148 = ppuVar4;
      puStack_140 = puVar2;
      ppuStack_138 = ppuVar10;
      ppuStack_130 = ppuVar1;
      ppuStack_128 = ppuVar3;
      ppuStack_120 = &puStack_80;
      _objc_retain(puVar9);
      _objc_retain(ppuVar13);
      func_0x00010bf52320();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_160 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar13 != (undefined **)0x0) {
        ppuStack_160 = ppuVar13;
      }
      ppuStack_168 = &PTR____CFConstantStringClassReference_110dd6078;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_160,
                          &ppuStack_168,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      puVar14 = puVar2;
      func_0x00010bfcdf00(ppuVar7,param_3,puVar6,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar8 = puVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010c0c8b00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar7;
      func_0x00010bfec2a0();
      _objc_release(puVar9);
      _objc_release(puVar8);
      ppuVar1 = ppuVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
        ___stack_chk_fail();
        pcStack_178 = FUN_108df03f0;
        lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar10 = (undefined **)PTR_PTR_1126b2438;
        ppuStack_1b0 = ppuVar5;
        puStack_1a8 = puVar2;
        puStack_1a0 = puVar6;
        puStack_198 = puVar8;
        ppuStack_190 = ppuVar7;
        puStack_188 = puVar9;
        pppuStack_180 = &ppuStack_120;
        func_0x00010c2919a0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1d8 = &PTR____CFConstantStringClassReference_110ef8918;
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar4 != (undefined **)0x0) {
          ppuStack_1c8 = ppuVar4;
        }
        ppuStack_1d0 = &PTR____CFConstantStringClassReference_110ef8938;
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,puVar14);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar3 != (undefined **)0x0) {
          ppuStack_1c0 = ppuVar3;
        }
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_1c8,
                            &ppuStack_1d8,2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar1;
        ppuVar13 = ppuVar10;
        func_0x00010bfcdf00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(ppuVar3);
        _objc_release(ppuVar4);
        ppuVar7 = ppuVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
          ___stack_chk_fail();
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          pcStack_1e8 = FUN_108df053c;
          lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_220 = puVar2;
          ppuStack_218 = ppuVar3;
          ppuStack_210 = ppuVar1;
          ppuStack_208 = ppuVar4;
          ppuStack_200 = ppuVar5;
          ppuStack_1f8 = ppuVar10;
          pppuStack_1f0 = &pppuStack_180;
          _objc_retain(ppuVar13);
          func_0x00010c14de00(ppuVar11,param_3,&PTR____CFConstantStringClassReference_110dcfe58);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b2438;
          func_0x00010c266760(PTR_PTR_1126b2438);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_238 = &PTR____CFConstantStringClassReference_110dd2518;
          if (ppuVar13 != (undefined **)0x0) {
            ppuStack_238 = ppuVar13;
          }
          ppuStack_248 = &PTR____CFConstantStringClassReference_110db0db8;
          ppuStack_240 = &PTR____CFConstantStringClassReference_110db0dd8;
          ppuStack_230 = &PTR____CFConstantStringClassReference_110dd2518;
          if (ppuVar11 != (undefined **)0x0) {
            ppuStack_230 = ppuVar11;
          }
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_238,
                              &ppuStack_248,2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
          func_0x00010bfcdf00(ppuVar7,param_3,puVar2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar2);
          _objc_release(ppuVar11);
          ppuVar5 = ppuVar7;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
            ___stack_chk_fail();
            puVar2 = PTR_PTR_1126b2438;
            func_0x00010bf63da0(PTR_PTR_1126b2438);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfcdf00(ppuVar11,param_3,puVar2,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            ppuVar5 = ppuVar11;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108df00b8; end: 108df0297; +[SCMemoriesGrapheneLogger fireGallerySQLCipherKeyDeriveLatencyMetric:rekeyed:version:userBasedKey:grapheneRegistry:] */

void FUN_108df00b8(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbda20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ef88b8;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_80 = ppuVar3;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_78 = param_5;
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dd8fd8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ef88d8;
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_70 = ppuVar4;
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar8 = puVar5;
  func_0x00010bfcdf00(param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(ppuVar1,param_3,param_2);
  ppuVar9 = param_2;
  func_0x00010befc000(param_1,ppuVar1);
  _objc_release(param_2);
  ppuVar6 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b2438;
    pcStack_a8 = FUN_108df0298;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_e0 = ppuVar4;
    ppuStack_d8 = ppuVar3;
    puStack_d0 = puVar2;
    ppuStack_c8 = param_5;
    ppuStack_c0 = param_2;
    ppuStack_b8 = ppuVar1;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(ppuVar9);
    func_0x00010bf52320();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar9 != (undefined **)0x0) {
      ppuStack_f0 = ppuVar9;
    }
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110dd6078;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_f0,&ppuStack_f8,1
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    puVar13 = puVar2;
    func_0x00010bfcdf00(ppuVar6,param_3,puVar5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar7 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010bfec2a0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    ppuVar1 = ppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      pcStack_108 = FUN_108df03f0;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar9 = (undefined **)PTR_PTR_1126b2438;
      ppuStack_140 = ppuVar4;
      puStack_138 = puVar2;
      puStack_130 = puVar5;
      puStack_128 = puVar7;
      ppuStack_120 = ppuVar6;
      puStack_118 = puVar8;
      ppuStack_110 = &puStack_b0;
      func_0x00010c2919a0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_168 = &PTR____CFConstantStringClassReference_110ef8918;
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_158 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar4 != (undefined **)0x0) {
        ppuStack_158 = ppuVar4;
      }
      ppuStack_160 = &PTR____CFConstantStringClassReference_110ef8938;
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_150 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar3 != (undefined **)0x0) {
        ppuStack_150 = ppuVar3;
      }
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_158,
                          &ppuStack_168,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar1;
      ppuVar12 = ppuVar9;
      func_0x00010bfcdf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(ppuVar3);
      _objc_release(ppuVar4);
      ppuVar10 = ppuVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
        ___stack_chk_fail();
        ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        pcStack_178 = FUN_108df053c;
        lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_1b0 = puVar2;
        ppuStack_1a8 = ppuVar3;
        ppuStack_1a0 = ppuVar1;
        ppuStack_198 = ppuVar4;
        ppuStack_190 = ppuVar6;
        ppuStack_188 = ppuVar9;
        pppuStack_180 = &ppuStack_110;
        _objc_retain(ppuVar12);
        func_0x00010c14de00(ppuVar11,param_3,&PTR____CFConstantStringClassReference_110dcfe58);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b2438;
        func_0x00010c266760(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar12 != (undefined **)0x0) {
          ppuStack_1c8 = ppuVar12;
        }
        ppuStack_1d8 = &PTR____CFConstantStringClassReference_110db0db8;
        ppuStack_1d0 = &PTR____CFConstantStringClassReference_110db0dd8;
        ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar11 != (undefined **)0x0) {
          ppuStack_1c0 = ppuVar11;
        }
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_1c8,
                            &ppuStack_1d8,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        func_0x00010bfcdf00(ppuVar10,param_3,puVar2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_release(ppuVar11);
        ppuVar6 = ppuVar10;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
          ___stack_chk_fail();
          puVar2 = PTR_PTR_1126b2438;
          func_0x00010bf63da0(PTR_PTR_1126b2438);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfcdf00(ppuVar11,param_3,puVar2,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          ppuVar6 = ppuVar11;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108df0298; end: 108df03ef; +[SCMemoriesGrapheneLogger fireGalleryDataObjectError:grapheneRegistry:] */

void FUN_108df0298(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b2438;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf52320();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuStack_50 = param_3;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd6078;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar12 = puVar2;
  func_0x00010bfcdf00(param_1,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_108df03f0;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar5 = (undefined **)PTR_PTR_1126b2438;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010c2919a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110ef8918;
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar6 != (undefined **)0x0) {
      ppuStack_b8 = ppuVar6;
    }
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110ef8938;
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar7 != (undefined **)0x0) {
      ppuStack_b0 = ppuVar7;
    }
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_b8,&ppuStack_c8,2
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_1;
    ppuVar11 = ppuVar5;
    func_0x00010bfcdf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    ppuVar9 = ppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      pcStack_d8 = FUN_108df053c;
      lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_110 = puVar1;
      ppuStack_108 = ppuVar7;
      ppuStack_100 = param_1;
      ppuStack_f8 = ppuVar6;
      ppuStack_f0 = ppuVar8;
      ppuStack_e8 = ppuVar5;
      ppuStack_e0 = &puStack_70;
      _objc_retain(ppuVar11);
      func_0x00010c14de00(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b2438;
      func_0x00010c266760(PTR_PTR_1126b2438);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_128 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar11 != (undefined **)0x0) {
        ppuStack_128 = ppuVar11;
      }
      ppuStack_138 = &PTR____CFConstantStringClassReference_110db0db8;
      ppuStack_130 = &PTR____CFConstantStringClassReference_110db0dd8;
      ppuStack_120 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar10 != (undefined **)0x0) {
        ppuStack_120 = ppuVar10;
      }
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_128,
                          &ppuStack_138,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      func_0x00010bfcdf00(ppuVar9,param_2,puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(ppuVar10);
      ppuVar8 = ppuVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
        ___stack_chk_fail();
        puVar1 = PTR_PTR_1126b2438;
        func_0x00010bf63da0(PTR_PTR_1126b2438);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfcdf00(ppuVar10,param_2,puVar1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        ppuVar8 = ppuVar10;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return;
  }
  return;
}



/* Entry: 108df03f0; end: 108df053b; +[SCMemoriesGrapheneLogger createUserDataStatus:hasLogoutUserData:] */

void FUN_108df03f0(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR_PTR_1126b2438;
  func_0x00010c2919a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ef8918;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_58 = ppuVar2;
  }
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ef8938;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_50 = ppuVar3;
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_1;
  ppuVar9 = ppuVar1;
  func_0x00010bfcdf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar6 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    pcStack_78 = FUN_108df053c;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b0 = puVar4;
    ppuStack_a8 = ppuVar3;
    ppuStack_a0 = param_1;
    ppuStack_98 = ppuVar2;
    ppuStack_90 = ppuVar5;
    ppuStack_88 = ppuVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar9);
    func_0x00010c14de00(ppuVar7,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2438;
    func_0x00010c266760(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar9 != (undefined **)0x0) {
      ppuStack_c8 = ppuVar9;
    }
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110db0db8;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110db0dd8;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar7 != (undefined **)0x0) {
      ppuStack_c0 = ppuVar7;
    }
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c8,&ppuStack_d8,2
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    func_0x00010bfcdf00(ppuVar6,param_2,puVar4,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(ppuVar7);
    ppuVar5 = ppuVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      puVar4 = PTR_PTR_1126b2438;
      func_0x00010bf63da0(PTR_PTR_1126b2438);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcdf00(ppuVar7,param_2,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      ppuVar5 = ppuVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 108df053c; end: 108df067f; +[SCMemoriesGrapheneLogger createSyncThumbnailGenerationErrorWithDomain:code:] */

void FUN_108df053c(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c14de00(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c266760(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuStack_58 = param_3;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db0db8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110db0dd8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_50 = ppuVar1;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b2438;
    func_0x00010bf63da0(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcdf00(ppuVar1,param_2,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    param_1 = ppuVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108df0680; end: 108df06db; +[SCMemoriesGrapheneLogger createGalleryDataLossRename] */

void FUN_108df0680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf63da0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108df06dc; end: 108df0737; +[SCMemoriesGrapheneLogger createGalleryExpiredUserDataPurged] */

void FUN_108df06dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf9cac0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108df0738; end: 108df0833; +[SCMemoriesGrapheneLogger createGalleryFetchCollections:] */

void FUN_108df0738(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b5f0f80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfa5b60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuStack_40 = param_3;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dae878;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puVar3 = puVar2;
  func_0x00010bfcdf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c10c1c0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e0a338;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a0 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a0,&ppuStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010bfcdf00(param_3,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar4 = param_3;
  func_0x00010bfec2a0(puVar1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfa2b20(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(ppuVar5,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 108df0834; end: 108df0967; +[SCMemoriesGrapheneLogger fireGalleryPresentFeaturedStoriesErrorWithErrorMessage:grapheneRegistry:] */

void FUN_108df0834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c10c1c0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e0a338;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfa2b20(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df0968; end: 108df09db; +[SCMemoriesGrapheneLogger fireGalleryFeatureSettingsCallbackWithGrapheneRegistry:] */

void FUN_108df0968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfa2b20(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df09dc; end: 108df0b47; +[SCMemoriesGrapheneLogger fireDeeplinkFeaturedStoryAtStage:result:grapheneRegistry:] */

void FUN_108df09dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf685c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuStack_58 = param_4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e354b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dce878;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_50 = param_5;
  }
  iVar9 = 2;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_58,&ppuStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar12 = ppuVar2;
  func_0x00010bfcdf00(param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  uVar3 = param_2;
  func_0x00010bfec2a0(uVar10);
  iVar6 = (int)uVar3;
  _objc_release(param_2);
  uVar3 = uVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_108df0b48;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_7;
  ppuStack_b0 = ppuVar2;
  puStack_a8 = puVar1;
  ppuStack_a0 = param_5;
  ppuStack_98 = param_4;
  uStack_90 = param_2;
  uStack_88 = uVar10;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar12);
  if (iVar9 == 0) {
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dab0d8;
    if (iVar6 == 0) {
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    if (ppuVar12 != (undefined **)0x0) {
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110daeeb8;
    }
  }
  else {
    _objc_release(ppuVar12);
    ppuVar12 = (undefined **)0x0;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110df6498;
  }
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfbcd60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110daf4d8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110daeeb8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_c8 = ppuVar12;
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110db76f8;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 3;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_d0,&ppuStack_e8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puVar8 = puVar5;
  func_0x00010bfcdf00(uVar3,param_3,puVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(ppuVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_8;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    func_0x00010bfbcd80(ppuVar12,param_3,puVar7,puVar8,uVar10,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010bfec2a0(uVar3,param_3,ppuVar12);
    func_0x00010befc000(param_1,uVar3,param_3,ppuVar12);
    _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108df0b48; end: 108df0ccb; +[SCMemoriesGrapheneLogger galleryExportCompleteWithSuccess:error:cancelled:savedToCameraRoll:] */

void FUN_108df0b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined **param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_7;
  _objc_retain(param_5);
  if (param_6 == 0) {
    ppuStack_60 = &PTR____CFConstantStringClassReference_110dab0d8;
    if (param_4 == 0) {
      ppuStack_60 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    if (param_5 != (undefined **)0x0) {
      ppuStack_60 = &PTR____CFConstantStringClassReference_110daeeb8;
    }
  }
  else {
    _objc_release(param_5);
    param_5 = (undefined **)0x0;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110df6498;
  }
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfbcd60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daf4d8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110daeeb8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_58 = param_5;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db76f8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 3;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puVar6 = puVar3;
  func_0x00010bfcdf00(param_2,param_3,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_8;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    func_0x00010bfbcd80(param_5,param_3,puVar5,puVar6,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bfec2a0(uVar4,param_3,param_5);
    func_0x00010befc000(param_1,uVar4,param_3,param_5);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108df0ccc; end: 108df0da7; +[SCMemoriesGrapheneLogger fireGalleryExportCompleteWithLatency:success:error:cancelled:savedToCameraRoll:grapheneRegistry:] */

void FUN_108df0ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bfbcd80(param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bfec2a0(uVar1,param_3,param_2);
  func_0x00010befc000(param_1,uVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df0da8; end: 108df0e93; +[SCMemoriesGrapheneLogger galleryExportStartMetricWithMetric:contextMenuSource:] */

void FUN_108df0da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuStack_40 = param_4;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ef8ad8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar7 = 1;
  func_0x00010bf72080(puVar1,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar6 = param_3;
  puVar5 = puVar1;
  func_0x00010bfcdf00(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bfbcde0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfbcdc0(puVar1,param_2,puVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bef9180(uVar2,param_2,puVar4,puVar5);
  func_0x00010bfec2a0(uVar2,param_2,puVar4);
  puVar5 = PTR_PTR_1126b2438;
  func_0x00010bfbce00(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbcdc0(puVar1,param_2,puVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  func_0x00010bef9180(uVar2,param_2,puVar1,uVar7);
  func_0x00010bfec2a0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108df0e94; end: 108df0fd3; +[SCMemoriesGrapheneLogger fireGalleryExportStartWithContextMenuSource:snapsCount:storiesCount:grapheneRegistry:] */

void FUN_108df0e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbcde0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfbcdc0(param_1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,uVar3,param_4);
  func_0x00010bfec2a0(uVar1,param_2,uVar3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbce00(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbcdc0(param_1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_5);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df0fd4; end: 108df1077; +[SCMemoriesGrapheneLogger fireGalleryExportLowDiskSpaceWithGrapheneRegistry:] */

void FUN_108df0fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbcda0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df1078; end: 108df122b; +[SCMemoriesGrapheneLogger fireGalleryMeoAttempt:approach:rateLimited:grapheneRegistry:] */

void FUN_108df1078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_6;
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c0caa00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuStack_68 = param_4;
  }
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ef8af8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e5df78;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_70 = puVar3;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 3;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar8 = puVar5;
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar14 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108df122c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = uVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c125960();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ef8b18;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110db0dd8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ef8b38;
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_f8 = puVar5;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 3;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_100,&ppuStack_118,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bfcdf00(uVar1,param_2,puVar2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar6 = uVar1;
  func_0x00010bfec2a0(uVar7,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_108df1400;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &puStack_a0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c0caa20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ec2f38;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a0 = puVar4;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ef8b58;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_198 = puVar8;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 3;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_190 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1a0,&ppuStack_1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bfcdf00(uVar7,param_2,puVar2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar14 = uVar7;
  func_0x00010bfec2a0(uVar1,param_2,uVar7);
  _objc_release(uVar7);
  uVar6 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_108df15f4;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_210 = puVar8;
  puStack_208 = puVar5;
  puStack_200 = puVar9;
  puStack_1f8 = puVar4;
  puStack_1f0 = puVar3;
  uStack_1e8 = uVar7;
  puStack_1e0 = puVar2;
  uStack_1d8 = uVar1;
  ppuStack_1d0 = &ppuStack_130;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar13;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd740();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_238 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_230 = &PTR____CFConstantStringClassReference_110ef8b78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_228 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_220 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_228,&ppuStack_238,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar6,param_2,puVar2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar14 = uVar6;
  func_0x00010bfec2a0(uVar1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd4a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar6,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 108df122c; end: 108df13ff; +[SCMemoriesGrapheneLogger fireGalleryRegenerateSqlcipher:errorCode:regenerateSucceeded:grapheneRegistry:] */

void FUN_108df122c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c125960();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ef8b18;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110db0dd8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ef8b38;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_68 = puVar5;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 3;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar11 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108df1400;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c0caa20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ec2f38;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar4;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ef8b58;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_108 = puVar6;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 3;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_110,&ppuStack_128);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bfcdf00(uVar1,param_2,puVar2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar8 = uVar1;
  func_0x00010bfec2a0(uVar9,param_2,uVar1);
  _objc_release(uVar1);
  uVar11 = uVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108df15f4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = puVar6;
  puStack_178 = puVar5;
  puStack_170 = puVar7;
  puStack_168 = puVar4;
  puStack_160 = puVar3;
  uStack_158 = uVar1;
  puStack_150 = puVar2;
  uStack_148 = uVar9;
  ppuStack_140 = &puStack_a0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar13;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd740();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ef8b78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_198 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_190 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_198,&ppuStack_1a8,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar11,param_2,puVar2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar8 = uVar11;
  func_0x00010bfec2a0(uVar1,param_2,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd4a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar11,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 108df1400; end: 108df15f3; +[SCMemoriesGrapheneLogger fireMemoriesMeoUnlockGetSksAssertion:retryCount:missingTag:grapheneRegistry:] */

void FUN_108df1400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c0caa20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ec2f38;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar4;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ef8b58;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar6;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 3;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar10 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  uVar9 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_108df15f4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = puVar6;
  puStack_e8 = puVar5;
  puStack_e0 = puVar7;
  puStack_d8 = puVar4;
  puStack_d0 = puVar3;
  uStack_c8 = param_1;
  puStack_c0 = puVar2;
  uStack_b8 = uVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar12;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd740();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ef8b78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_108,&ppuStack_118,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar9,param_2,puVar2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar10 = uVar9;
  func_0x00010bfec2a0(uVar1,param_2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd4a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar9,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 108df15f4; end: 108df17a3; +[SCMemoriesGrapheneLogger fireGallerySksRetrieveKey:rateLimitTime:grapheneRegistry:] */

void FUN_108df15f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd740();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ef8b78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar8 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd4a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar9,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 108df17a4; end: 108df1847; +[SCMemoriesGrapheneLogger fireGalleryPrivateFinishSetupWithGrapheneRegistry:] */

void FUN_108df17a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bfbd4a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df1848; end: 108df199b; +[SCMemoriesGrapheneLogger fireGalleryPrivateChangePasscode:initialMEO:grapheneRegistry:] */

void FUN_108df1848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 **ppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfbd480();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ef8b98;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ef8bb8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bfcdf00(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar11 = param_1;
  func_0x00010bfec2a0(uVar13);
  _objc_release(param_1);
  uVar3 = uVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_108df199c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = puVar2;
  puStack_a8 = puVar1;
  uStack_a0 = param_4;
  uStack_98 = param_3;
  uStack_90 = param_1;
  uStack_88 = uVar13;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(uVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2438;
  func_0x00010bfbd4c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ef8bd8;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_c0 = uVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_c0,&ppuStack_c8,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar13 = uVar3;
  puVar7 = puVar5;
  func_0x00010bfcdf00(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar11 = uVar13;
  func_0x00010bfec2a0(puVar1,param_2,uVar13);
  _objc_release(uVar13);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_108df1ad0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = puVar2;
  puStack_108 = puVar5;
  puStack_100 = puVar4;
  uStack_f8 = uVar3;
  uStack_f0 = uVar13;
  puStack_e8 = puVar1;
  ppuStack_e0 = &puStack_80;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar4 = PTR_PTR_1126b2438;
  func_0x00010c0c8080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ef8bf8;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_120 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_120,&ppuStack_128,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bfcdf00(puVar6,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar12 = puVar6;
  func_0x00010bfec2a0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108df1c18;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = puVar2;
  puStack_168 = puVar7;
  puStack_160 = puVar4;
  puStack_158 = puVar6;
  puStack_150 = puVar5;
  puStack_148 = puVar1;
  ppuStack_140 = &ppuStack_e0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar9;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf214c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110de3a38;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_190 = &PTR____CFConstantStringClassReference_110ef8c18;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_188 = puVar4;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 2;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_180 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_188,&ppuStack_198,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfcdf00(puVar8,param_2,puVar2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar8;
  func_0x00010bfec2a0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126b2438;
  uVar3 = param_6;
  func_0x00010bfbd900();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_238 = &PTR____CFConstantStringClassReference_110ef8c38;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_230 = &PTR____CFConstantStringClassReference_110ef8c58;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_218 = puVar5;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_228 = &PTR____CFConstantStringClassReference_110ef8c78;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_210 = puVar2;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_220 = &PTR____CFConstantStringClassReference_110e29c38;
  lVar10 = (long)(int)param_6;
  puStack_208 = puVar6;
  func_0x00010b5faa7c();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_200 = lVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_218,&ppuStack_238,4)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  puVar12 = puVar7;
  func_0x00010bfcdf00(puVar1,param_2,puVar4,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar10);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd920(puVar4,param_2,puVar8,puVar12,uVar13,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar11,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 108df199c; end: 108df1acf; +[SCMemoriesGrapheneLogger fireGalleryPrivateForgetPasscode:grapheneRegistry:] */

void FUN_108df199c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfbd4c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ef8bd8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bfcdf00(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar9 = param_1;
  func_0x00010bfec2a0(uVar12,param_2,param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c0c8080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ef8bf8;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b0 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,&ppuStack_b8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfcdf00(uVar12,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar9 = uVar12;
  func_0x00010bfec2a0(puVar1,param_2,uVar12);
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf214c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110de3a38;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ef8c18;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_118 = puVar4;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 2;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_110 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_118,&ppuStack_128,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bfcdf00(puVar1,param_2,puVar3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bfec2a0(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2438;
  uVar9 = param_6;
  func_0x00010bfbd900();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110ef8c38;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110ef8c58;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_1a8 = puVar4;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ef8c78;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_1a0 = puVar3;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e29c38;
  lVar7 = (long)(int)param_6;
  puStack_198 = puVar5;
  func_0x00010b5faa7c();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 4;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_190 = lVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1a8,&ppuStack_1c8,4)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puVar11 = puVar6;
  func_0x00010bfcdf00(puVar2,param_2,puVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd920(puVar1,param_2,puVar10,puVar11,uVar12,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar8,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 108df1ad0; end: 108df1c17; +[SCMemoriesGrapheneLogger fireGallerySnapCanStream:grapheneRegistry:] */

void FUN_108df1ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c0c8080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ef8bf8;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfcdf00(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar12 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf214c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110de3a38;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ef8c18;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_b8 = puVar4;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 2;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b0 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b8,&ppuStack_c8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bfcdf00(uVar1,param_2,puVar3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar12 = uVar1;
  func_0x00010bfec2a0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126b2438;
  uVar1 = param_6;
  func_0x00010bfbd900();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_168 = &PTR____CFConstantStringClassReference_110ef8c38;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_160 = &PTR____CFConstantStringClassReference_110ef8c58;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_148 = puVar4;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ef8c78;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_140 = puVar5;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e29c38;
  lVar7 = (long)(int)param_6;
  puStack_138 = puVar6;
  func_0x00010b5faa7c();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 4;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_130 = lVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_148,&ppuStack_168,4)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puVar10 = puVar8;
  func_0x00010bfcdf00(puVar2,param_2,puVar3,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd920(puVar3,param_2,puVar9,puVar10,uVar12,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar11,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 108df1c18; end: 108df1d8b; +[SCMemoriesGrapheneLogger fireGalleryBrowseCacheHit:grapheneRegistry:] */

void FUN_108df1c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf214c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110de3a38;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ef8c18;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_58 = puVar3;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 2;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bfcdf00(param_1,param_2,puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar11 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2438;
  uVar12 = param_6;
  func_0x00010bfbd900();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ef8c38;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ef8c58;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_e8 = puVar3;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ef8c78;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_e0 = puVar4;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e29c38;
  lVar6 = (long)(int)param_6;
  puStack_d8 = puVar5;
  func_0x00010b5faa7c();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_d0 = lVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e8,&ppuStack_108,4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puVar9 = puVar7;
  func_0x00010bfcdf00(uVar1,param_2,puVar2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd920(puVar2,param_2,puVar8,puVar9,uVar11,uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df1d8c; end: 108df1f2f; +[SCMemoriesGrapheneLogger gallerySnapUploadMetricWithTempCellular:skipOperation:isRetry:entryType:] */

void FUN_108df1d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2438;
  uVar11 = param_6;
  func_0x00010bfbd900();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ef8c38;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ef8c58;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar2;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ef8c78;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_70 = puVar3;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e29c38;
  lVar5 = (long)(int)param_6;
  puStack_68 = puVar4;
  func_0x00010b5faa7c();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 4;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = lVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puVar9 = puVar6;
  func_0x00010bfcdf00(param_1,param_2,puVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd920(puVar1,param_2,puVar8,puVar9,uVar10,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar7,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 108df1f30; end: 108df1fdb; +[SCMemoriesGrapheneLogger fireGallerySnapUploadMetricWithTempCellular:skipOperation:isRetry:entryType:grapheneRegistry:] */

void FUN_108df1f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd920(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df1fdc; end: 108df2247; +[SCMemoriesGrapheneLogger fireGalleryBackupErrorMetricWithStatusCode:detailStatusCode:retryCount:retryPolicy:backupStatus:operationType:grapheneRegistry:] */

void FUN_108df1fdc(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_6;
  ppuVar9 = param_7;
  ppuStack_d8 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_9;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar12;
  _objc_release(param_9);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf14c00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dde9d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ef8c98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_88 = param_5;
  }
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ec2f38;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ef8cb8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_6 != (undefined **)0x0) {
    ppuStack_80 = param_6;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_7 != (undefined **)0x0) {
    ppuStack_78 = param_7;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ef8cd8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ec2238;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_8 != (undefined **)0x0) {
    ppuStack_70 = param_8;
  }
  uVar11 = 6;
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_98,&ppuStack_c8,6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  ppuVar7 = ppuStack_d8;
  ppuVar10 = ppuVar6;
  func_0x00010bfcdf00(ppuStack_d8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar12 = uStack_d0;
  ppuVar6 = ppuVar7;
  func_0x00010bfec2a0(uStack_d0);
  _objc_release(ppuVar7);
  uVar8 = uVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b2438;
  uStack_f8 = uVar12;
  pcStack_e8 = FUN_108df2248;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = param_8;
  ppuStack_118 = param_7;
  ppuStack_110 = param_6;
  ppuStack_108 = ppuVar7;
  puStack_100 = puVar5;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar6);
  func_0x00010bfbd580();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110e29cf8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e29d18;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_140 = ppuVar6;
  }
  ppuStack_138 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_138 = ppuVar10;
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e29d38;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 3;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_130 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_140,&ppuStack_158,3
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  _objc_release(ppuVar6);
  puVar4 = puVar1;
  puVar5 = puVar3;
  func_0x00010bfcdf00(uVar8,param_2,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c269d40(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar9;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  func_0x00010bfbd5a0(puVar1,param_2,puVar4,puVar5,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bef9180(ppuVar6,param_2,puVar1,ppuVar13);
  func_0x00010bfec2a0(ppuVar6,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 108df2248; end: 108df23a7; +[SCMemoriesGrapheneLogger gallerySavingStartMetricWithSaveSource:saveDestination:edited:] */

void FUN_108df2248(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b2438;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfbd580();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e29cf8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e29d18;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuStack_60 = param_3;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuStack_58 = param_4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e29d38;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 3;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar5 = puVar1;
  puVar6 = puVar3;
  func_0x00010bfcdf00(param_1,param_2,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd5a0(puVar1,param_2,puVar5,puVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bef9180(uVar4,param_2,puVar1,param_6);
  func_0x00010bfec2a0(uVar4,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108df23a8; end: 108df2483; +[SCMemoriesGrapheneLogger fireGallerySavingStartWithSaveSource:saveDestination:edited:snapCount:grapheneRegistry:] */

void FUN_108df23a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfbd5a0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bef9180(uVar1,param_2,param_1,param_6);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2484; end: 108df25e3; +[SCMemoriesGrapheneLogger fireGallerySavingLowDiskSpaceError:grapheneRegistry:] */

void FUN_108df2484(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c14bfa0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ef8cf8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = (undefined **)0x1;
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_50,&ppuStack_58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar4;
  func_0x00010bfcdf00(param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  ppuVar7 = param_2;
  func_0x00010bfec2a0(uVar10);
  _objc_release(param_2);
  uVar5 = uVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126b2438;
  pcStack_68 = FUN_108df25e4;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a0 = ppuVar4;
  puStack_98 = puVar3;
  puStack_90 = puVar1;
  ppuStack_88 = param_2;
  puStack_80 = puVar2;
  uStack_78 = uVar10;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar7);
  func_0x00010bfbd600();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_c0 = ppuVar7;
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dea7b8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110db8558;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_b8 = ppuVar8;
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_b0 = ppuVar9;
  }
  uVar10 = 3;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_c0,&ppuStack_d8,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  puVar2 = puVar6;
  puVar3 = puVar1;
  func_0x00010bfcdf00(uVar5,param_3,puVar6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bfbd620(puVar6,param_3,puVar2,puVar3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bef9180(uVar5,param_3,puVar6,param_7);
  func_0x00010befc000(param_1,uVar5,param_3,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108df25e4; end: 108df2737; +[SCMemoriesGrapheneLogger gallerySearchQueryPerformanceMetricWithSearchType:locale:source:] */

void FUN_108df25e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b2438;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfbd600();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuStack_60 = param_4;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dea7b8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110db8558;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuStack_58 = param_5;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_6 != (undefined **)0x0) {
    ppuStack_50 = param_6;
  }
  uVar6 = 3;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = puVar1;
  puVar5 = puVar2;
  func_0x00010bfcdf00(param_2,param_3,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bfbd620(puVar1,param_3,puVar4,puVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bef9180(uVar3,param_3,puVar1,param_7);
  func_0x00010befc000(param_1,uVar3,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108df2738; end: 108df2833; +[SCMemoriesGrapheneLogger fireGallerySearchQueryPerformanceMetricWithSearchType:locale:source:resultCount:elapsedTime:grapheneRegistry:] */

void FUN_108df2738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_8;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bfbd620(param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010bef9180(uVar1,param_3,param_2,param_7);
  func_0x00010befc000(param_1,uVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2834; end: 108df2937; +[SCMemoriesGrapheneLogger gallerySendTaskFinishMetricWithSuccess:] */

void FUN_108df2834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c15ce00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puVar4 = puVar3;
  func_0x00010bfcdf00(param_2,param_3,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bfbd700(puVar1,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar2,param_3,puVar1);
  func_0x00010befc000(param_1,puVar2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108df2938; end: 108df29d7; +[SCMemoriesGrapheneLogger fireGallerySendTaskFinishMetricWithSuccess:elapsedTime:grapheneRegistry:] */

void FUN_108df2938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bfbd700(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar1,param_3,param_2);
  func_0x00010befc000(param_1,uVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df29d8; end: 108df2aef; +[SCMemoriesGrapheneLogger fireSnapsTabEntryPredicateFilterWithExcludedCount:totalCount:grapheneRegistry:] */

void FUN_108df29d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245ae0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcdf00(param_1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantDictionary_111175058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,uVar3,param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245ae0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantDictionary_111175080);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_4);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2af0; end: 108df2b9b; +[SCMemoriesGrapheneLogger fireSnapsTabSnapPredicateFilterWithExcludedCount:grapheneRegistry:] */

void FUN_108df2af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245be0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2b9c; end: 108df2c5b; +[SCMemoriesGrapheneLogger fireSnapsTabCustomStoryDedupWithCounts:grapheneRegistry:] */

void FUN_108df2b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108df2c5c;
  puStack_48 = &UNK_110ac58f0;
  uStack_40 = uVar1;
  uStack_38 = param_1;
  _objc_retain(uVar1);
  func_0x00010bf97ce0(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2c5c; end: 108df2d97;  */

void FUN_108df2c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2438;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c245a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_3;
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010bef9180(uVar5);
  _objc_release(param_2);
  _objc_release(uVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c245bc0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bef9180(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108df2d98; end: 108df2e43; +[SCMemoriesGrapheneLogger fireSnapsTabSnapIdDedupWithCount:grapheneRegistry:] */

void FUN_108df2d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245bc0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2e44; end: 108df2eef; +[SCMemoriesGrapheneLogger fireSnapsTabStorageAtRiskFilterWithCount:grapheneRegistry:] */

void FUN_108df2e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245c60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2ef0; end: 108df2f9b; +[SCMemoriesGrapheneLogger fireSnapsTabEncryptedSnapSkipWithCount:grapheneRegistry:] */

void FUN_108df2ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245ac0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df2f9c; end: 108df3047; +[SCMemoriesGrapheneLogger fireSnapsTabEmptyResultWithTotalFetched:grapheneRegistry:] */

void FUN_108df2f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245aa0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df3048; end: 108df30f3; +[SCMemoriesGrapheneLogger fireSnapsTabReclusterNoChangeWithEntryCount:grapheneRegistry:] */

void FUN_108df3048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245ba0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(uVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df30f4; end: 108df327b; +[SCMemoriesGrapheneLogger fireSnapsTabFetchErrorWithDomain:code:grapheneRegistry:] */

void FUN_108df30f4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010c245b00(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuStack_58 = param_3;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db0db8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110db0dd8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_50 = ppuVar2;
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfcdf00(param_1,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = param_1;
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010c245b80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(uVar1,param_2,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfec2a0(uVar6,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 108df327c; end: 108df331f; +[SCMemoriesGrapheneLogger fireSnapsTabNilProfileWithGrapheneRegistry:] */

void FUN_108df327c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010c245b80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdf00(param_1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df3320; end: 108df347f; +[SCMemoriesGrapheneLogger fireSnapsTabFilterFunnelAtStage:count:grapheneRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108df3320(undefined1 *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b2438;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c245b20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuStack_50 = param_3;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e354b8;
  uVar10 = 1;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfcdf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  uVar9 = param_4;
  func_0x00010bef9180();
  uVar8 = (undefined1)uVar9;
  _objc_release(uVar3);
  _objc_release(uVar6);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_b0;
  pcStack_68 = FUN_108df3480;
  puStack_a0 = puVar2;
  puStack_98 = puVar1;
  uStack_90 = uVar6;
  puStack_88 = param_1;
  uStack_80 = uVar3;
  uStack_78 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar10);
  puStack_a8 = PTR_PTR_1126fe918;
  puStack_b0 = puVar4;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (ppuVar5 != (undefined1 **)0x0) {
    lVar11 = (long)_DAT_11277bc2c;
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined1 **)((long)ppuVar5 + lVar11) = puVar7;
    _objc_release(uVar6);
    *(undefined1 *)((long)ppuVar5 + (long)_DAT_11277bc30) = uVar8;
    lVar11 = (long)_DAT_11277bc34;
    _objc_retain(uVar10);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined8 *)((long)ppuVar5 + lVar11) = uVar10;
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar6 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_11277bc38);
    *(undefined **)((long)ppuVar5 + (long)_DAT_11277bc38) = puVar1;
    _objc_release(uVar6);
  }
  _objc_release(uVar10);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar5;
}



/* Entry: 108df3480; end: 108df3577; -[SCMemoriesInformationWebViewController initWithURL:showToolbar:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108df3480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe918;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11277bc2c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277bc30) = param_4;
    lVar4 = (long)_DAT_11277bc34;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bc38);
    *(undefined **)((long)puVar1 + (long)_DAT_11277bc38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108df3578; end: 108df35f7; -[SCMemoriesInformationWebViewController initWithURLString:currentPageTracker:] */

undefined8
FUN_108df3578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_4);
  func_0x00010bdc3460(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c20(param_1,param_2,puVar1,0,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108df35f8; end: 108df3647; -[SCMemoriesInformationWebViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df35f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11277bc38));
  puStack_28 = PTR_PTR_1126fe918;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108df3648; end: 108df3cbf; -[SCMemoriesInformationWebViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df3648(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126fe918;
  lStack_a8 = param_1;
  _objc_msgSendSuper2(&lStack_a8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  lVar5 = (long)_DAT_11277bc3c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277bc40;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar4);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  lVar6 = (long)_DAT_11277bc44;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c16f5a0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c640(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIProgressView_1126c14e0;
  _objc_alloc();
  func_0x00010c03b440();
  lVar6 = (long)_DAT_11277bc48;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_alloc_init(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x00010c167460();
  puVar3 = PTR_PTR_1126b4f58;
  func_0x00010bdc3620(uVar7,uVar8,uVar9,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277bc4c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1cb840(*(undefined8 *)(param_1 + lVar5));
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_11277bc30) == '\x01') {
    func_0x00010be3bd40(param_1);
  }
  lVar6 = (long)_DAT_11277bc38;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 108df3cc0; end: 108df3efb;  */

void FUN_108df3cc0(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  double dVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar6 + 0x10))(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar8 = param_1;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c0df720(param_1 - dVar8,puVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108df3efc; end: 108df42e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df3efc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108df42e8; end: 108df43ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df42e8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108df43ac; end: 108df459b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df43ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bc3c);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108df459c; end: 108df4603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df459c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277bc44);
  _objc_release(param_2);
  func_0x00010c212f20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108df4604; end: 108df463b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df4604(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277bc48);
  func_0x00010bf997e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(double)CONCAT44(uVar3,uVar2),uVar1,PTR_s_setProgress_animated__112656bd0,1);
  return;
}



/* Entry: 108df463c; end: 108df472b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df463c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277bc48);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c076be0();
  if ((int)uVar1 == 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108df472c;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c312d4(0x3f000000,"APPSTORE",&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  else {
    func_0x00010c1a7f60(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 108df472c; end: 108df4767;  */

void FUN_108df472c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c076be0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108df4768; end: 108df476f; -[SCMemoriesInformationWebViewController pageViewName] */

undefined8 FUN_108df4768(void)

{
  return 0x84;
}



/* Entry: 108df4770; end: 108df481f; -[SCMemoriesInformationWebViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df4770(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fe918;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  lVar4 = (long)_DAT_11277bc4c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
    func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 108df4820; end: 108df487f; -[SCMemoriesInformationWebViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df4820(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe918;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277bc34);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 108df4880; end: 108df488b; -[SCMemoriesInformationWebViewController supportedInterfaceOrientations] */

undefined8 FUN_108df4880(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 108df488c; end: 108df4893; -[SCMemoriesInformationWebViewController preferredStatusBarStyle] */

undefined8 FUN_108df488c(void)

{
  return 0;
}



/* Entry: 108df4894; end: 108df489b; -[SCMemoriesInformationWebViewController prefersStatusBarHidden] */

undefined8 FUN_108df4894(void)

{
  return 0;
}



/* Entry: 108df489c; end: 108df48a3; -[SCMemoriesInformationWebViewController shouldPopToRootViewController] */

undefined8 FUN_108df489c(void)

{
  return 0;
}



/* Entry: 108df48a4; end: 108df48ab; -[SCMemoriesInformationWebViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_108df48a4(void)

{
  return 0;
}



/* Entry: 108df48ac; end: 108df48b3; -[SCMemoriesInformationWebViewController shouldDisplayStatusBar] */

undefined8 FUN_108df48ac(void)

{
  return 1;
}



/* Entry: 108df48b4; end: 108df4943; -[SCMemoriesInformationWebViewController _updateToolbarButtonState] */

/* WARNING: Possible PIC construction at 0x000108df48fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108df4914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108df4900) */
/* WARNING: Removing unreachable block (ram,0x000108df4918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df48b4(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_11277bc30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277bc4c);
    func_0x00010bf2cac0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277bc50),PTR_s_setEnabled__112642f38,uVar1);
    return;
  }
  return;
}



/* Entry: 108df4944; end: 108df4947; -[SCMemoriesInformationWebViewController webView:didStartProvisionalNavigation:] */

void FUN_108df4944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateToolbarButtonState_1125962e0);
  return;
}



/* Entry: 108df4948; end: 108df494b; -[SCMemoriesInformationWebViewController webView:didFinishNavigation:] */

void FUN_108df4948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateToolbarButtonState_1125962e0);
  return;
}



/* Entry: 108df494c; end: 108df499b; -[SCMemoriesInformationWebViewController webView:didFailProvisionalNavigation:withError:] */

void FUN_108df494c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  func_0x00010bee24e0();
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e75518;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e75518,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 108df499c; end: 108df49eb; -[SCMemoriesInformationWebViewController webView:didFailNavigation:withError:] */

void FUN_108df499c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  func_0x00010bee24e0();
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e75518;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e75518,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 108df49ec; end: 108df4a27; -[SCMemoriesInformationWebViewController _didPressBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df49ec(long param_1)

{
  param_1 = param_1 + _DAT_11277bc5c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c8bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108df4a28; end: 108df4e8b; -[SCMemoriesInformationWebViewController _initializeToolBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df4a28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR_PTR_1126d0b18;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3feebebebebebebf,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277bc50;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e75258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,0);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e75278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,1);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,PTR_s__backPressed_11253d350,
                      0x40);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010befbb60(puVar1,param_2,*(undefined8 *)(param_1 + lVar4));
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar5 = (long)_DAT_11277bc54;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e75298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,0);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e752b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,1);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                      PTR_s__forwardPressed_11253d358,0x40);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(puVar1,param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar6 = (long)_DAT_11277bc58;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e752d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,0);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e752f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,1);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar6),param_2,param_1,
                      PTR_s__refreshPressed_11253d360,0x40);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010befbb60(puVar1,param_2,*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108df4e8c;
  puStack_88 = &UNK_11084fc58;
  _objc_retain(puVar1);
  puStack_80 = puVar1;
  lStack_78 = param_1;
  func_0x00010c0bbfc0(uVar3,param_2,&puStack_a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puStack_d0 = puVar2;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x108df5070;
  puStack_b8 = &UNK_11084fc58;
  _objc_retain(puVar1);
  puStack_b0 = puVar1;
  lStack_a8 = param_1;
  func_0x00010c0bbfc0(uVar3,param_2,&puStack_d0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  puStack_f8 = puVar2;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x108df5254;
  puStack_e0 = &UNK_1108471b0;
  _objc_retain(puVar1);
  puStack_d8 = puVar1;
  func_0x00010c0bbfc0(uVar3,param_2,&puStack_f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puStack_120 = puVar2;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x108df53e8;
  puStack_108 = &UNK_1108471b0;
  lStack_100 = param_1;
  func_0x00010c0bbfc0(puVar1,param_2,&puStack_120);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277bc4c);
  puStack_148 = puVar2;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x108df5598;
  puStack_130 = &UNK_1108471b0;
  puStack_128 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(uVar3,param_2,&puStack_148);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_128);
  _objc_release(puStack_d8);
  _objc_release(puStack_b0);
  _objc_release(puStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


