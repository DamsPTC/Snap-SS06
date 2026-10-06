/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c4af50; end: 105c4b03f; -[SCAdSettingsService fetchLifestyleCategoriesWithCompletion:] */

void FUN_105c4af50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c35b0;
  _objc_retain(uVar4);
  _objc_opt_new(puVar1);
  uVar2 = uVar4;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bf93c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195bc0(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c1ebac0(puVar1,param_2,1);
  FUN_105e853e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21eae0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bea0040(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c4b040; end: 105c4b187; -[SCAdSettingsService updateLifestyleCategoriesWithUpdatedUserInterestArray:completion:] */

void FUN_105c4b040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c35b0;
  _objc_retain(uVar5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = uVar5;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010bf93c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195bc0(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar2);
  func_0x00010c1ebac0(puVar1,param_2,2);
  puVar3 = PTR_PTR_1126c35b8;
  _objc_opt_new(PTR_PTR_1126c35b8);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c1ae420(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010c163e80(puVar1,param_2,puVar3);
  FUN_105e853e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21eae0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bea0040(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c4b188; end: 105c4b257; -[SCAdSettingsService _sendSLCTargetingSettingsRequest:completion:] */

void FUN_105c4b188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c4b258;
  puStack_50 = &UNK_1108dfe88;
  _objc_retain(param_4);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105c4b374;
  puStack_78 = &UNK_110859a38;
  uStack_70 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bea0920(param_1,param_2,param_3,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105c4b258; end: 105c4b373;  */

void FUN_105c4b258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bef3f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0690a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105c4b374; end: 105c4b393;  */

void FUN_105c4b374(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c4b38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,param_2);
    return;
  }
  return;
}



/* Entry: 105c4b394; end: 105c4b6cf; -[SCAdSettingsService _sendTargetingSettingsRequest:successBlock:failureBlock:] */

void FUN_105c4b394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105c4b6d0;
  uStack_88 = 0x105c4b6e0;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105c4b6d0;
  uStack_b8 = 0x105c4b6e0;
  uStack_b0 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105c4b6e8;
  puStack_f0 = &UNK_11084a578;
  puStack_e0 = &uStack_d8;
  _objc_retain(uVar2);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105c4b744;
  puStack_118 = &UNK_110849810;
  uStack_e8 = uVar2;
  _objc_retain(uVar2);
  uStack_110 = uVar2;
  func_0x00010bfa48e0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_105c4b74c;
  puStack_148 = &UNK_11084a578;
  puStack_138 = &uStack_a8;
  _objc_retain(uVar2);
  uStack_140 = uVar2;
  func_0x00010c25d760(uVar3);
  _objc_initWeak(auStack_168,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_105c4b7a8;
  puStack_1a0 = &UNK_1108dfeb8;
  _objc_copyWeak(auStack_170,auStack_168);
  puStack_178 = &uStack_a8;
  puStack_180 = &uStack_d8;
  uStack_198 = param_3;
  uStack_190 = param_4;
  uStack_188 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,uVar3,&puStack_1b8);
  _objc_release(uVar3);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(uStack_198);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(uStack_140);
  _objc_release(uStack_110);
  _objc_release(uStack_e8);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c4b6d0; end: 105c4b6e7;  */

void FUN_105c4b6d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c4b6e8; end: 105c4b743;  */

void FUN_105c4b6e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c4b744; end: 105c4b74b;  */

void FUN_105c4b744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105c4b74c; end: 105c4b7a7;  */

void FUN_105c4b74c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c4b7a8; end: 105c4b863;  */

void FUN_105c4b7a8(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c4b864; end: 105c4bb9b; -[SCAdSettingsService _sendTargetingSettingsRequest:snapToken:endpoint:successBlock:failureBlock:] */

void FUN_105c4b864(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aeae0();
    _objc_release(uVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b4960;
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x000105e85488();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = lVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105c4bb9c;
  puStack_a8 = &UNK_1108dfee8;
  _objc_retain(param_7);
  uStack_98 = param_7;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_7);
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(param_3);
  func_0x00010c25f660(uVar2);
  puVar5 = PTR___dispatch_main_q_11034be20;
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(param_7);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c4bb9c; end: 105c4bc87;  */

/* WARNING: Removing unreachable block (ram,0x000105c4bc00) */
/* WARNING: Removing unreachable block (ram,0x000105c4bc08) */

void FUN_105c4bb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c35c0;
  _objc_retain(param_3);
  func_0x00010c0f40e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c252ee0(param_3);
  _objc_release(param_3);
  func_0x00010be57c80(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 105c4bc88; end: 105c4bcff;  */

void FUN_105c4bc88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c252ee0(param_3);
  func_0x00010be57c80(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c4bd00; end: 105c4bdcb; -[SCAdSettingsService _logRequestMetricsWithStatusCode:request:] */

void FUN_105c4bd00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c134680();
  _objc_release(param_4);
  iVar5 = (int)uVar2;
  if (iVar5 < 2) {
    if ((iVar5 == -0x4524111) ||
       (ppuVar3 = &PTR____CFConstantStringClassReference_110e23ad8, iVar5 == 0)) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110db8b78;
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e23ad8;
    if (iVar5 == 2) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e23af8;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e23b18;
    if (iVar5 != 3) {
      ppuVar1 = ppuVar3;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110e23b38;
    if (iVar5 != 4) {
      ppuVar3 = ppuVar1;
    }
  }
  func_0x00010c0b1900(uVar4,param_2,param_3,ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105c4bdcc; end: 105c4be2b; -[SCAdSettingsService .cxx_destruct] */

void FUN_105c4bdcc(long param_1)

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



/* Entry: 105c4be2c; end: 105c4be87; -[SCLifeStyleAndInterestsViewModel init] */

undefined1 * FUN_105c4be2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec810;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = &PTR__OBJC_CLASS___NSConstantArray_11117f450;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c4be88; end: 105c4bf1f; -[SCLifeStyleAndInterestsViewModel copyWithZone:] */

undefined * FUN_105c4be88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c35c8;
  _objc_alloc_init(PTR_PTR_1126c35c8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar2);
  func_0x00010c21e920(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar2);
  func_0x00010c21efc0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010c164b80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 105c4bf20; end: 105c4c0af; -[SCLifeStyleAndInterestsViewModel adTopics] */

void FUN_105c4bf20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126c35d0;
  _objc_alloc_init(PTR_PTR_1126c35d0);
  puVar3 = puVar2;
  func_0x00010af4713c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1a99c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e23b58);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1031a0(uVar4);
  func_0x00010c162740(puVar2,param_2,(uint)uVar4 ^ 1);
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126c35d0;
  _objc_alloc_init(PTR_PTR_1126c35d0);
  puVar5 = puVar3;
  func_0x00010af47154();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1a99c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e23b78);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beff380(uVar4);
  func_0x00010c162740(puVar3,param_2,(uint)uVar4 ^ 1);
  func_0x00010befa120(puVar1,param_2,puVar3);
  puVar5 = PTR_PTR_1126c35d0;
  _objc_alloc_init(PTR_PTR_1126c35d0);
  puVar6 = puVar5;
  func_0x00010af4716c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c1a99c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e23b98);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbdf20(uVar4);
  func_0x00010c162740(puVar5,param_2,(uint)uVar4 ^ 1);
  func_0x00010befa120(puVar1,param_2,puVar5);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105c4c0b0; end: 105c4c0b7; -[SCLifeStyleAndInterestsViewModel sections] */

undefined8 FUN_105c4c0b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c4c0b8; end: 105c4c0bf; -[SCLifeStyleAndInterestsViewModel userInterestArray] */

undefined8 FUN_105c4c0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c4c0c0; end: 105c4c0ef; -[SCLifeStyleAndInterestsViewModel setUserInterestArray:] */

void FUN_105c4c0c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c4c0f0; end: 105c4c0f7; -[SCLifeStyleAndInterestsViewModel userProfileResponse] */

undefined8 FUN_105c4c0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c4c0f8; end: 105c4c127; -[SCLifeStyleAndInterestsViewModel setUserProfileResponse:] */

void FUN_105c4c0f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c4c128; end: 105c4c12f; -[SCLifeStyleAndInterestsViewModel adTopicsPreference] */

undefined8 FUN_105c4c128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105c4c130; end: 105c4c15f; -[SCLifeStyleAndInterestsViewModel setAdTopicsPreference:] */

void FUN_105c4c130(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c4c160; end: 105c4c1a7; -[SCLifeStyleAndInterestsViewModel .cxx_destruct] */

void FUN_105c4c160(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c4c1a8; end: 105c4c317;  */

void FUN_105c4c1a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c189840(puVar1);
  _objc_release(param_2);
  func_0x00010c18b5e0(puVar1);
  _objc_release(param_1);
  func_0x00010c16e9a0(puVar1);
  func_0x00010c2026e0(puVar1);
  func_0x00010c167740(puVar1);
  func_0x00010c1f7b20(puVar1);
  func_0x00010c21e900(puVar1);
  puVar2 = PTR_PTR_1126c35d8;
  func_0x00010c098ee0(PTR_PTR_1126c35d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar1);
  _objc_release(puVar2);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c4c318; end: 105c4c41b;  */

void FUN_105c4c318(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
  func_0x00010c1a8560();
  func_0x00010c23d620(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c4c41c; end: 105c4c533;  */

void FUN_105c4c41c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_5);
  _objc_opt_new(puVar2);
  uVar3 = param_5;
  func_0x000105c4c360(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010bfb68e0(uVar3);
  func_0x00010c19f0e0(0x4026000000000000,0x4018000000000000,param_1 + -22.0,uVar3);
  func_0x00010befbb60(puVar2);
  puVar1 = PTR_PTR_1126b0620;
  func_0x00010bfb68e0(uVar3);
  func_0x00010bef9600(param_4 + 6.0 + 8.0,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c4c534; end: 105c4cb07;  */

void FUN_105c4c534(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_PTR_1126c35e0;
    _objc_alloc(PTR_PTR_1126c35e0);
    func_0x00010c04ec80();
    func_0x00010c18b5e0();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_2);
    _objc_release(puVar1);
    puVar2 = param_5;
    func_0x00010c0d4f60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_retain();
    _objc_alloc_init(puVar1);
    func_0x00010c1bdb00();
    func_0x00010c1cfce0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar3);
    func_0x00010c212f20(puVar1);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar3);
    func_0x00010c211780(puVar1);
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    puVar2 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf493c0(0x4030000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf493c0(0x402c000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf493c0(0xc02c000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c2a5060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c2a5060(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493c0(0xc05e000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1e3380(0x4479c000,puVar4);
    func_0x00010c162480(puVar4);
    puVar2 = param_5;
    func_0x00010bfe5ea0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_2);
    _objc_release(puVar2);
    func_0x00010c161260(param_2);
    func_0x00010c1fbac0(param_2);
    puVar2 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    func_0x00010c17d4c0(param_2);
  }
  else {
    puVar2 = param_2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c29ea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = param_5;
    func_0x00010c0d4f60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  func_0x00010bef0860(param_5);
  _objc_release(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105c4cb08;
  puStack_70 = &UNK_1108dff48;
  uStack_68 = param_6;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_retain(&puStack_88);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1d1360();
  puVar2 = PTR_PTR_1126c35d8;
  func_0x00010c23e7e0(PTR_PTR_1126c35d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar1);
  _objc_release(puVar2);
  func_0x00010bfd0980(puVar1);
  _objc_release(&puStack_88);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(puVar1);
  _objc_release(puVar2);
  func_0x00010c161280(param_2);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105c4cb08; end: 105c4cb13;  */

void FUN_105c4cb08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c4cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c4cb14; end: 105c4cc8f; -[SCLifestyleAndInterestsPresenter initWithFeatureManager:userId:requestManager:snapTokenProvider:adTopicsService:adConfigProvider:scope:] */

undefined1 *
FUN_105c4cb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ec818;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c4cc90; end: 105c4ccd3; -[SCLifestyleAndInterestsPresenter didLoad] */

void FUN_105c4cc90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c35c8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
  func_0x00010be12260(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchAdTopics_112561628);
  return;
}



/* Entry: 105c4ccd4; end: 105c4cd13; -[SCLifestyleAndInterestsPresenter didAppear] */

void FUN_105c4ccd4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c4cd14; end: 105c4cd37; -[SCLifestyleAndInterestsPresenter didDisappear] */

void FUN_105c4cd14(undefined8 param_1)

{
  func_0x00010bedac20();
                    /* WARNING: Could not recover jumptable at 0x00010bed2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAdTopics_112592470);
  return;
}



/* Entry: 105c4cd38; end: 105c4cd5b; -[SCLifestyleAndInterestsPresenter didEnterBackground] */

void FUN_105c4cd38(undefined8 param_1)

{
  func_0x00010bedac20();
                    /* WARNING: Could not recover jumptable at 0x00010bed2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAdTopics_112592470);
  return;
}



/* Entry: 105c4cd5c; end: 105c4cd9b; -[SCLifestyleAndInterestsPresenter willEnterForeground] */

void FUN_105c4cd5c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c4cd9c; end: 105c4cd9f; -[SCLifestyleAndInterestsPresenter didSelectRowAtIndexPath:] */

void FUN_105c4cd9c(void)

{
  return;
}



/* Entry: 105c4cda0; end: 105c4cdd3; -[SCLifestyleAndInterestsPresenter didDismiss] */

void FUN_105c4cda0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef3400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c4cdd4; end: 105c4ce23; -[SCLifestyleAndInterestsPresenter didSelectUserInterest:isOn:] */

void FUN_105c4cdd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c162740(param_3,param_2,param_4);
  func_0x00010c28bb00(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c4ce24; end: 105c4d023; -[SCLifestyleAndInterestsPresenter didSelectAdTopic:isOn:] */

void FUN_105c4ce24(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_3;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) goto LAB_105c4d008;
      puVar5 = PTR_PTR_1126c35e8;
      _objc_alloc(PTR_PTR_1126c35e8);
      uVar3 = *(ulong *)(param_1 + 0x40);
      func_0x00010bef5b60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c1031a0();
      uVar4 = *(ulong *)(param_1 + 0x40);
      func_0x00010bef5b60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010beff380();
      uVar8 = (ulong)(param_4 ^ 1);
    }
    else {
      puVar5 = PTR_PTR_1126c35e8;
      _objc_alloc(PTR_PTR_1126c35e8);
      uVar3 = *(ulong *)(param_1 + 0x40);
      func_0x00010bef5b60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c1031a0();
      uVar4 = *(ulong *)(param_1 + 0x40);
      func_0x00010bef5b60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bfbdf20();
      uVar7 = (ulong)(param_4 ^ 1);
    }
  }
  else {
    puVar5 = PTR_PTR_1126c35e8;
    _objc_alloc(PTR_PTR_1126c35e8);
    uVar3 = *(ulong *)(param_1 + 0x40);
    func_0x00010bef5b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010beff380();
    uVar4 = *(ulong *)(param_1 + 0x40);
    func_0x00010bef5b60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bfbdf20();
    uVar6 = (ulong)(param_4 ^ 1);
  }
  func_0x00010c037a00(puVar5,param_2,uVar6,uVar7,uVar8);
  func_0x00010c164b80(*(undefined8 *)(param_1 + 0x40),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_105c4d008:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c4d024; end: 105c4d05b; -[SCLifestyleAndInterestsPresenter didSelectLeftButton] */

void FUN_105c4d024(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c4d05c; end: 105c4d16f; -[SCLifestyleAndInterestsPresenter _fetchLifestyleCategories] */

void FUN_105c4d05c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c235a60();
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105c4d170;
  puStack_58 = &UNK_110842c58;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bfa8020(uVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c4d170; end: 105c4d1ef;  */

void FUN_105c4d170(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedac40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c4d1f0; end: 105c4d2eb; -[SCLifestyleAndInterestsPresenter _updateLifestyleCategoriesWithResult:success:] */

void FUN_105c4d1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105c4d2ec; end: 105c4d323;  */

void FUN_105c4d2ec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c4d324; end: 105c4d3eb; -[SCLifestyleAndInterestsPresenter _safeThreadUpdateLifestyleCategoriesWithResult:success:] */

void FUN_105c4d324(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c235a60();
  _objc_release(lVar1);
  if (param_4 == 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x000105c503bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c21e920(*(undefined8 *)(param_1 + 0x40),param_2,uVar2);
    _objc_release(uVar2);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf47d60();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c4d3ec; end: 105c4d4d3; -[SCLifestyleAndInterestsPresenter _updateLifestyleCategoriesAndLogEvent] */

void FUN_105c4d3ec(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c0a9900(param_1 - *(double *)(param_2 + 0x28),*(undefined8 *)(param_2 + 8));
  _objc_initWeak(auStack_38,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c287420(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c4d4d4; end: 105c4d51b;  */

void FUN_105c4d4d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0e320();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c4d51c; end: 105c4d60f; -[SCLifestyleAndInterestsPresenter _failedToUpdateLifestyleCategories:] */

void FUN_105c4d51c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105c4d610; end: 105c4d643;  */

void FUN_105c4d610(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c4d644; end: 105c4d823; -[SCLifestyleAndInterestsPresenter _safeThreadFailedToUpdateLifestyleCategories:] */

void FUN_105c4d644(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x000105c503d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c292aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        lVar6 = *(long *)(lStack_128 + lVar8 * 8);
        lVar3 = lVar6;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        if (lVar4 != 0) {
          lVar4 = param_3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            lVar4 = param_3;
            func_0x00010c0dff20(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef0860();
            func_0x00010c162740(lVar6);
            _objc_release(lVar4);
          }
        }
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf47d60();
  _objc_release(lVar1);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105c4d824;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_158,lVar1);
  uVar5 = *(undefined8 *)(lVar1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_160,auStack_158);
  func_0x00010bfa4a80(uVar5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  return;
}



/* Entry: 105c4d824; end: 105c4d8eb; -[SCLifestyleAndInterestsPresenter _fetchAdTopics] */

void FUN_105c4d824(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfa4a80(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c4d8ec; end: 105c4d943;  */

void FUN_105c4d8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c4d944; end: 105c4da07; -[SCLifestyleAndInterestsPresenter _handleAdTopicsFetchResponse:adTopicsPreference:] */

void FUN_105c4d944(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010af47124();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  else {
    uVar1 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    _objc_release(uVar3);
    uVar1 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010c164b80(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
    _objc_release(uVar1);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf47d60();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c4da08; end: 105c4db87; -[SCLifestyleAndInterestsPresenter _updateAdTopics] */

void FUN_105c4da08(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010bef5b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  if (uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bef5b60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2834a0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c4db88; end: 105c4dbdf;  */

void FUN_105c4db88(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25580();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c4dbe0; end: 105c4dc17; -[SCLifestyleAndInterestsPresenter _handleAdTopicsUpdateResponse:adTopicsPreference:] */

void FUN_105c4dbe0(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105c4dc18; end: 105c4dc2f; -[SCLifestyleAndInterestsPresenter userInterface] */

void FUN_105c4dc18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c4dc30; end: 105c4dc3b; -[SCLifestyleAndInterestsPresenter setUserInterface:] */

void FUN_105c4dc30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105c4dc3c; end: 105c4dcc7; -[SCLifestyleAndInterestsPresenter .cxx_destruct] */

void FUN_105c4dc3c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105c4dcc8; end: 105c4dd3f; -[SCLifestyleAndInterestsRow initWithConfiguredCell:] */

undefined1 * FUN_105c4dcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c4dd40; end: 105c4dd47; -[SCLifestyleAndInterestsRow configuredCell] */

undefined8 FUN_105c4dd40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c4dd48; end: 105c4dd4f; -[SCLifestyleAndInterestsRow setConfiguredCell:] */

void FUN_105c4dd48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c4dd50; end: 105c4dd5b; -[SCLifestyleAndInterestsRow .cxx_destruct] */

void FUN_105c4dd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c4dd5c; end: 105c4de8f; -[SCLifestyleAndInterestsSection initWithHeaderView:headerViewHeight:rows:footerView:footerViewHeight:] */

undefined1 *
FUN_105c4dd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ec828;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c4de90; end: 105c4de97; -[SCLifestyleAndInterestsSection headerView] */

undefined8 FUN_105c4de90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c4de98; end: 105c4de9f; -[SCLifestyleAndInterestsSection setHeaderView:] */

void FUN_105c4de98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c4dea0; end: 105c4dea7; -[SCLifestyleAndInterestsSection headerViewHeight] */

undefined8 FUN_105c4dea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c4dea8; end: 105c4deaf; -[SCLifestyleAndInterestsSection setHeaderViewHeight:] */

void FUN_105c4dea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c4deb0; end: 105c4deb7; -[SCLifestyleAndInterestsSection rows] */

undefined8 FUN_105c4deb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c4deb8; end: 105c4dee7; -[SCLifestyleAndInterestsSection setRows:] */

void FUN_105c4deb8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c4dee8; end: 105c4deef; -[SCLifestyleAndInterestsSection footerView] */

undefined8 FUN_105c4dee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105c4def0; end: 105c4def7; -[SCLifestyleAndInterestsSection setFooterView:] */

void FUN_105c4def0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c4def8; end: 105c4deff; -[SCLifestyleAndInterestsSection footerViewHeight] */

undefined8 FUN_105c4def8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105c4df00; end: 105c4df07; -[SCLifestyleAndInterestsSection setFooterViewHeight:] */

void FUN_105c4df00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105c4df08; end: 105c4df5b; -[SCLifestyleAndInterestsSection .cxx_destruct] */

void FUN_105c4df08(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c4df5c; end: 105c4e017; -[SCLifestyleAndInterestsTable initWithViewModel:presenter:layoutAccessoryDelegate:] */

undefined1 *
FUN_105c4df5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ec830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c4e018; end: 105c4e0ef; -[SCLifestyleAndInterestsTable sections] */

void FUN_105c4e018(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c156b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c4e0f0; end: 105c4e1af; -[SCLifestyleAndInterestsTable _lifestyleSection] */

void FUN_105c4e0f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c292aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c35f8;
  _objc_alloc(PTR_PTR_1126c35f8);
  func_0x00010c01a120();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c4e1b0; end: 105c4e233;  */

void FUN_105c4e1b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_105c503a4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0620;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cd80(puVar2,param_2,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c4e234; end: 105c4e29b;  */

undefined8 FUN_105c4e234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_105c503a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0780(PTR_PTR_1126b0620);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105c4e29c; end: 105c4e34f;  */

void FUN_105c4e29c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c4e350;
  puStack_48 = &UNK_1108e0088;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retainBlock(&puStack_60);
  puVar2 = PTR_PTR_1126c35f0;
  _objc_alloc(PTR_PTR_1126c35f0);
  func_0x00010c002040();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c4e350; end: 105c4e44f;  */

void FUN_105c4e350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar4 = lVar4 + 0x18;
  _objc_loadWeakRetained(lVar4);
  uVar1 = param_3;
  func_0x00010c142240(param_3);
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105c4e450;
  puStack_58 = &UNK_1108e0058;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  lVar2 = lVar4;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  FUN_105c4c534(lVar4,param_2,&PTR____CFConstantStringClassReference_110e23bb8,uVar1,uVar3,
                &puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uStack_48);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105c4e450; end: 105c4e4bb;  */

void FUN_105c4e450(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c079040(param_2);
  _objc_release(param_2);
  func_0x00010bf7b2a0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c4e4bc; end: 105c4e4cb;  */

undefined8 FUN_105c4e4bc(void)

{
  return 0;
}



/* Entry: 105c4e4cc; end: 105c4e58b; -[SCLifestyleAndInterestsTable _adTopicsSection] */

void FUN_105c4e4cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef5b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c35f8;
  _objc_alloc(PTR_PTR_1126c35f8);
  func_0x00010c01a120();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c4e58c; end: 105c4e643;  */

void FUN_105c4e58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x00010af470f4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010af4710c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_6);
  _objc_release(param_6);
  uVar3 = uVar1;
  FUN_105c4c41c(param_1,param_2,param_3,param_4,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c4e644; end: 105c4e703;  */

double FUN_105c4e644(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010af4710c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010af470f4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000105c4c360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bfb68e0(uVar3);
  _CGRectGetHeight();
  param_1 = param_1 + 8.0;
  dVar4 = param_1 + 6.0;
  func_0x00010bfe0780(PTR_PTR_1126b0620);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return dVar4 + param_1;
}



/* Entry: 105c4e704; end: 105c4e7b7;  */

void FUN_105c4e704(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c4e7b8;
  puStack_48 = &UNK_1108e0088;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retainBlock(&puStack_60);
  puVar2 = PTR_PTR_1126c35f0;
  _objc_alloc(PTR_PTR_1126c35f0);
  func_0x00010c002040();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c4e7b8; end: 105c4e8b7;  */

void FUN_105c4e7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar4 = lVar4 + 0x18;
  _objc_loadWeakRetained(lVar4);
  uVar1 = param_3;
  func_0x00010c142240(param_3);
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105c4e8b8;
  puStack_58 = &UNK_1108e0058;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  lVar2 = lVar4;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  FUN_105c4c534(lVar4,param_2,&PTR____CFConstantStringClassReference_110e23bd8,uVar1,uVar3,
                &puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uStack_48);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105c4e8b8; end: 105c4e923;  */

void FUN_105c4e8b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c079040(param_2);
  _objc_release(param_2);
  func_0x00010bf7a5e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c4e924; end: 105c4e93f;  */

void FUN_105c4e924(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c4e940; end: 105c4e947;  */

undefined8 FUN_105c4e940(void)

{
  return 0;
}



/* Entry: 105c4e948; end: 105c4e97b; -[SCLifestyleAndInterestsTable .cxx_destruct] */

void FUN_105c4e948(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c4e97c; end: 105c4ea0b; -[SCLifestyleAndInterestsViewController initWithPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105c4e97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ec838;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112732c3c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c4ea0c; end: 105c4ede3; -[SCLifestyleAndInterestsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4ea0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ec838;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  FUN_105c4c1a8(param_1,param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112732c40;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar1;
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c274200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08e400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release();
  FUN_105c4c318();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112732c44;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf34860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105c4ede4; end: 105c4ee3b; -[SCLifestyleAndInterestsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4ede4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bea9780(param_1);
  func_0x00010bf77880(*(undefined8 *)(param_1 + _DAT_112732c3c));
  return;
}



/* Entry: 105c4ee3c; end: 105c4ee8b; -[SCLifestyleAndInterestsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4ee3c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf72460(*(undefined8 *)(param_1 + _DAT_112732c3c));
  return;
}


