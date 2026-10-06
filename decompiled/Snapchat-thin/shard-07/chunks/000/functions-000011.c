/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105026ba0; end: 105026bf3;  */

void FUN_105026ba0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b3e88;
    _objc_alloc(PTR_PTR_1126b3e88);
    func_0x00010c04a0a0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105026bf4; end: 105027497; -[SCProfileFlatlandMyProfileRootViewCreator _createContextWithActionHandler:presentingViewController:delegate:showIdentityViewOnCreate:] */

void FUN_105026bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [8];
  undefined1 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580();
  func_0x00010c1804e0(uVar2);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf58c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_initWeak(auStack_88,param_1);
  puVar7 = PTR_PTR_1126b3ed0;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105027498;
  puStack_98 = &UNK_110862d58;
  _objc_copyWeak(auStack_90,auStack_80);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1050274f4;
  puStack_c0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b8,auStack_80);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x105027520;
  puStack_e8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_e0,auStack_80);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x10502754c;
  puStack_118 = &UNK_110841fb0;
  _objc_copyWeak(auStack_108,auStack_88);
  _objc_retain(param_3);
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x10502758c;
  puStack_140 = &UNK_110849200;
  uStack_110 = param_3;
  _objc_copyWeak(auStack_138,auStack_80);
  puVar8 = auStack_80;
  _objc_loadWeakRetained();
  puVar9 = puVar8;
  func_0x00010c141880();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x1050275c0;
  puStack_168 = &UNK_110849200;
  _objc_copyWeak(auStack_160,auStack_80);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1050275f4;
  puStack_198 = &UNK_110863548;
  _objc_copyWeak(auStack_188,auStack_88);
  _objc_retain(param_3);
  puStack_1e0 = puVar1;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x105027788;
  puStack_1c8 = &UNK_110863548;
  uStack_190 = param_3;
  _objc_copyWeak(auStack_1b8,auStack_88);
  _objc_retain(param_3);
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x105027894;
  puStack_1f8 = &UNK_110841fb0;
  uStack_1c0 = param_3;
  _objc_copyWeak(auStack_1e8,auStack_88);
  _objc_retain(param_3);
  puStack_240 = puVar1;
  uStack_238 = 0xc2000000;
  uStack_230 = 0x105027904;
  puStack_228 = &UNK_110841fb0;
  uStack_1f0 = param_3;
  _objc_copyWeak(auStack_218,auStack_88);
  _objc_retain(param_3);
  uVar16 = uVar2;
  uStack_220 = param_3;
  func_0x00010bfc7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bfc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c0e6400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c15c520();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e100();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bf5a020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2980(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_105027974;
  puStack_258 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_250,auStack_88);
  uStack_248 = param_6;
  func_0x00010c18fba0(puVar7);
  uVar15 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010bf05f20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201fe0(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar15);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219ac0(puVar7);
  _objc_release(uVar6);
  func_0x00010c21c760(puVar7);
  _objc_copyWeak(auStack_278,auStack_88);
  _objc_retain(param_3);
  func_0x00010c1e1180(puVar7);
  uVar11 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bf669c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010bf45200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(uVar11);
  uVar6 = uVar14;
  func_0x00010c272120(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a2a0(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_278);
  _objc_destroyWeak(auStack_250);
  _objc_release(uStack_220);
  _objc_destroyWeak(auStack_218);
  _objc_release(uStack_1f0);
  _objc_destroyWeak(auStack_1e8);
  _objc_release(uStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(uStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105027498; end: 1050274f3;  */

void FUN_105027498(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c141900(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050274f4; end: 1050275f3;  */

void FUN_1050274f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c141820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050275f4; end: 105027973;  */

/* WARNING: Possible PIC construction at 0x000105027620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105027624) */
/* WARNING: Removing unreachable block (ram,0x000105027634) */
/* WARNING: Removing unreachable block (ram,0x0001050276c8) */
/* WARNING: Removing unreachable block (ram,0x0001050276fc) */
/* WARNING: Removing unreachable block (ram,0x0001050276e8) */

void FUN_1050275f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010b9688dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105027974; end: 1050279a7;  */

void FUN_105027974(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be38440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050279a8; end: 105027aaf;  */

void FUN_1050279a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b3ed8;
  _objc_alloc(PTR_PTR_1126b3ed8);
  func_0x00010c031b40();
  puVar2 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be9e6c0();
  _objc_release(lVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105027ab0;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105027ab0; end: 105027adb;  */

void FUN_105027ab0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1a7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105027adc; end: 105027b3f; -[SCProfileFlatlandMyProfileRootViewCreator _bindPublicProfileManagerControllerWithProfileManagementValdiViewProvider:context:presentingViewController:] */

void FUN_105027adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010c119860(param_3,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aaf00(param_4,param_2,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105027b40; end: 105027b77; -[SCProfileFlatlandMyProfileRootViewCreator _handleDismissBitmojiGesturesEducationOverlay] */

void FUN_105027b40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105027b78; end: 105027b83; -[SCProfileFlatlandMyProfileRootViewCreator _sendActionIdentifier:toActionHandler:] */

void FUN_105027b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendActionIdentifier_actionData_112585358,param_3,0,param_4);
  return;
}



/* Entry: 105027b84; end: 105027c6f; -[SCProfileFlatlandMyProfileRootViewCreator _sendActionIdentifier:actionDataModel:toActionHandler:] */

void FUN_105027b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01b460();
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105027c70;
  puStack_60 = &UNK_110848ba8;
  uStack_58 = param_5;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(param_5);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 105027c70; end: 105027c83;  */

void FUN_105027c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleActionWithSender_actionMod_1125d19f8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 105027c84; end: 105027f2b; -[SCProfileFlatlandMyProfileRootViewCreator _createViewModelWithShowIdentityViewOnCreate:profileManagementComposerViewProvider:profileBackgroundPickerMode:] */

void FUN_105027c84(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2519e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar10 = uVar1;
  func_0x00010bf41860(uVar1,param_2,uVar3,&PTR___NSConcreteGlobalBlock_110863938);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 & 1) == 0) {
    if (param_5 == 1) {
      uVar9 = 4;
    }
    else if (param_5 == 2) {
      uVar9 = 6;
    }
    else {
      lVar4 = *(long *)(param_1 + 0xb0);
      func_0x00010c0f1180();
      if (lVar4 == 0x1a) {
        uVar9 = 5;
      }
      else {
        lVar4 = *(long *)(param_1 + 0xb0);
        func_0x00010c0f1180();
        uVar9 = 2;
        if (lVar4 != 0xc) {
          uVar9 = 0;
        }
      }
    }
  }
  else {
    uVar9 = 3;
  }
  puVar5 = PTR_PTR_1126b3ee0;
  _objc_alloc(PTR_PTR_1126b3ee0);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = uVar10;
  FUN_105027ff0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  FUN_105027ff0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d320(puVar5,param_2,uVar11,uVar6,uVar7,uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b3c80;
  _objc_opt_new(PTR_PTR_1126b3c80);
  func_0x00010c21ab00(puVar5,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c072ba0();
  func_0x00010c0df6e0(puVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c27d8a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2960();
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(uVar7);
  uVar6 = param_4;
  func_0x00010c119ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1aafc0(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105027f2c; end: 105027fef;  */

void FUN_105027f2c(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126ae750;
  if (lVar2 == 0) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105027ff0; end: 10502803b;  */

void FUN_105027ff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108639c8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10502803c; end: 1050280a3; -[SCProfileFlatlandMyProfileRootViewCreator _incrementExpandedIdentityViewImpressionCountWithEnabled:] */

void FUN_10502803c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x80);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c116840();
    func_0x00010c1e4080(uVar1,param_2,lVar3 + 1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1050280a4; end: 10502829f; -[SCProfileFlatlandMyProfileRootViewCreator _generateAddFriendLinkAndCopyToClipboard] */

void FUN_1050280a4(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x68);
  func_0x000108faa8ec();
  if (iVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e7c0(puVar5);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_2 + 0xf8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126afde0;
    uVar4 = uVar6;
    FUN_10502b080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _CACurrentMediaTime();
    uVar6 = *(undefined8 *)(param_2 + 0x100);
    uVar4 = uVar2;
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f9516c(param_1,0,0x19,0,0,0,uVar6,3,uVar4,0,0xc,0,6,0,0,0);
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be26140(param_2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1050282a0; end: 1050284a7; -[SCProfileFlatlandMyProfileRootViewCreator _handleAutoCopyViaOPSServiceWithLink:] */

void FUN_1050282a0(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1050284a8;
  puStack_78 = &UNK_110863958;
  uStack_70 = uVar1;
  uStack_68 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  puVar4 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  puVar5 = PTR_PTR_1126b3ee8;
  _objc_alloc(PTR_PTR_1126b3ee8);
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045aa0(puVar5,param_2,3,0,puVar3,param_1,puVar4,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf57580();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = uVar9;
  _objc_release(uVar10);
  _objc_release(uVar8);
  func_0x00010bfd26e0(*(undefined8 *)(param_1 + 0x110),param_2,0x19);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050284a8; end: 105028517;  */

void FUN_1050284a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105028518; end: 10502852f;  */

void FUN_105028518(void)

{
  return;
}



/* Entry: 105028530; end: 105028537; -[SCProfileFlatlandMyProfileRootViewCreator handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_105028530(void)

{
  return 0;
}



/* Entry: 105028538; end: 10502853b; -[SCProfileFlatlandMyProfileRootViewCreator shareSheetDismissedWithShareDestination:] */

void FUN_105028538(void)

{
  return;
}



/* Entry: 10502853c; end: 1050286df; -[SCProfileFlatlandMyProfileRootViewCreator .cxx_destruct] */

void FUN_10502853c(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 1050286e0; end: 1050287db;  */

void FUN_1050286e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1050287dc;
  uStack_30 = 0x1050287ec;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050287dc; end: 1050287f3;  */

void FUN_1050287dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050287f4; end: 105028883;  */

void FUN_1050287f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105028884; end: 105028e67; -[SCProfileFlatlandMyProfileRootViewCreatorFactoryImpl initWithScopedValdiRuntimeProvider:myUserId:myUsernameProvider:myDisplayNameProvider:myBitmojiAvatarIdProvider:bitmojiServiceFactory:displaySnapcodeViewSubject:snapcodeScopeExposer:composerAlertPresenterFactory:sharePageController:flatlandLoggingHelper:composerCOFStore:circumstanceEngine:phoneNumberProvider:contactPermissionInfoProvider:featureSettings:profileBackgroundPickerMode:plusFeatureBadging:generativeBackgroundsFeatureStatusProvider:generativeBackgroundsComposerContextFactory:openningData:glbFetcher:bitmojiAvatarProvider:transitionToViewStateSubject:updateScrollPositionYSubject:deckServices:linkGenerationService:notificationPool:userTrackedLogger:offPlatformShareFeatureProvider:] */

undefined8 *
FUN_105028884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  func_0x00010c08fa60(param_4);
  puStack_70 = PTR_PTR_1126e5ad8;
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
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    puVar1[0x11] = param_19;
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
  }
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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



/* Entry: 105028e68; end: 105028f5b; -[SCProfileFlatlandMyProfileRootViewCreatorFactoryImpl createProfileSessionIdForLogging:openningData:showBitmojiIdentityViewOnOpen:] */

void FUN_105028e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e44c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b3ef0;
  _objc_alloc(PTR_PTR_1126b3ef0);
  func_0x00010c042260();
  func_0x00010c2a1d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105028f5c; end: 1050290cf; -[SCProfileFlatlandMyProfileRootViewCreatorFactoryImpl .cxx_destruct] */

void FUN_105028f5c(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 1050290d0; end: 10502926b; -[SCProfileFlatlandMyProfileServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050290d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar4 = puVar3;
  func_0x00010c272140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112719ccc);
  puVar5 = PTR_PTR_1126b3ef8;
  _objc_alloc(PTR_PTR_1126b3ef8);
  func_0x00010c0403c0();
  func_0x00010bf9d660(uVar6);
  _objc_release(puVar5);
  func_0x00010be0cee0(param_1);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10502926c; end: 1050292b7;  */

void FUN_10502926c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050292b8; end: 105029303; -[SCProfileFlatlandMyProfileServicesEntryPoint end] */

void FUN_1050292b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8c380();
  puStack_28 = PTR_PTR_1126e5ae0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105029304; end: 105029a33; -[SCProfileFlatlandMyProfileServicesEntryPoint _createRootViewCreatorFactory:transitionToViewStateSubject:updateScrollPositionYSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105029304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105029a34;
  puStack_90 = &UNK_110863a48;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105029a74;
  puStack_b8 = &UNK_110863a78;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3f00;
  _objc_alloc();
  lVar5 = param_1 + _DAT_112719cd0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112719cd4;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_112719cd8;
  lVar10 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112719cdc;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf1b5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112719ce4;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112719ce8;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar22 = lVar46;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112719cec;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112719cf0;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = (long)_DAT_112719cf4;
  lVar27 = param_1 + lVar47;
  _objc_loadWeakRetained();
  func_0x00010c1165c0();
  lVar28 = param_1 + _DAT_112719cf8;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bfa1900();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_112719cfc;
  lVar30 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar32 = lVar48;
  func_0x00010bf4e720();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + lVar47;
  _objc_loadWeakRetained();
  lVar33 = lVar47;
  func_0x00010c0e9e80();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112719d00;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bf1b7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_112719d04;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_112719d08;
  _objc_loadWeakRetained();
  lVar39 = param_1 + _DAT_112719d0c;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112719d10;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_112719d14;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112719d18;
  _objc_loadWeakRetained();
  lVar45 = param_1;
  func_0x00010bfa2a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042240();
  _objc_release(lVar45);
  _objc_release(param_1);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar47);
  _objc_release(lVar32);
  _objc_release(lVar48);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar46);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105029a34; end: 105029ab3;  */

void FUN_105029a34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf33c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105029ab4; end: 105029b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105029ab4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112719d58;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bf3f680(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105029b40; end: 105029bcf; -[SCProfileFlatlandMyProfileServicesEntryPoint _createLoggingHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105029b40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3f08;
  _objc_opt_new(PTR_PTR_1126b3f08);
  param_1 = param_1 + _DAT_112719d1c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105029bd0; end: 10502a00b; -[SCProfileFlatlandMyProfileServicesEntryPoint _createSharePageController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105029bd0(long param_1,undefined8 param_2)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  
  puVar1 = PTR_PTR_1126b3f10;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112719d20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112719d24;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112719d10;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112719d14;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112719d28;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112719d2c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = (long)_DAT_112719cd8;
  lVar14 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar16 = lVar38;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112719d0c;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112719d30;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c2a29c0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112719d34);
  lVar21 = param_1 + _DAT_112719cd4;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112719d38;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112719d3c;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112719d40;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112719d44;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c06a980();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112719ce8;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112719d48;
  _objc_loadWeakRetained();
  lVar34 = param_1 + _DAT_112719d4c;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112719cf0;
  _objc_loadWeakRetained();
  lVar36 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060160(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar16,lVar18,
                      lVar20,uVar37,lVar22,lVar24,lVar26,lVar28,lVar30,lVar32,lVar33,lVar35,lVar36);
  _objc_release(lVar36);
  _objc_release(param_1);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar38);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10502a00c; end: 10502a0c3; -[SCProfileFlatlandMyProfileServicesEntryPoint _exposeGenerativeBackgroundsImageLoaderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502a00c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1 + _DAT_112719cfc;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072ba0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126b3cb8;
  _objc_alloc();
  func_0x00010c017740();
  lVar5 = (long)_DAT_112719d50;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112719d54),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 10502a0c4; end: 10502a0eb; -[SCProfileFlatlandMyProfileServicesEntryPoint _removeGenerativeBackgroundsImageLoaderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502a0c4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112719d54));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10502a0ec; end: 10502a2f3; -[SCProfileFlatlandMyProfileServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502a0ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112719d08);
  _objc_destroyWeak(param_1 + _DAT_112719d4c);
  _objc_destroyWeak(param_1 + _DAT_112719d04);
  _objc_destroyWeak(param_1 + _DAT_112719d00);
  _objc_storeStrong(param_1 + _DAT_112719ccc,0);
  _objc_storeStrong(param_1 + _DAT_112719d54,0);
  _objc_storeStrong(param_1 + _DAT_112719ce0,0);
  _objc_storeStrong(param_1 + _DAT_112719d34,0);
  _objc_destroyWeak(param_1 + _DAT_112719d48);
  _objc_destroyWeak(param_1 + _DAT_112719d44);
  _objc_destroyWeak(param_1 + _DAT_112719cfc);
  _objc_destroyWeak(param_1 + _DAT_112719cf8);
  _objc_destroyWeak(param_1 + _DAT_112719d64);
  _objc_destroyWeak(param_1 + _DAT_112719d40);
  _objc_destroyWeak(param_1 + _DAT_112719cf0);
  _objc_destroyWeak(param_1 + _DAT_112719cec);
  _objc_destroyWeak(param_1 + _DAT_112719d3c);
  _objc_destroyWeak(param_1 + _DAT_112719d60);
  _objc_destroyWeak(param_1 + _DAT_112719d5c);
  _objc_destroyWeak(param_1 + _DAT_112719d58);
  _objc_destroyWeak(param_1 + _DAT_112719ce8);
  _objc_destroyWeak(param_1 + _DAT_112719d38);
  _objc_destroyWeak(param_1 + _DAT_112719d30);
  _objc_destroyWeak(param_1 + _DAT_112719d18);
  _objc_destroyWeak(param_1 + _DAT_112719d0c);
  _objc_destroyWeak(param_1 + _DAT_112719d2c);
  _objc_destroyWeak(param_1 + _DAT_112719d28);
  _objc_destroyWeak(param_1 + _DAT_112719d1c);
  _objc_destroyWeak(param_1 + _DAT_112719d14);
  _objc_destroyWeak(param_1 + _DAT_112719d10);
  _objc_destroyWeak(param_1 + _DAT_112719d24);
  _objc_destroyWeak(param_1 + _DAT_112719ce4);
  _objc_destroyWeak(param_1 + _DAT_112719cd8);
  _objc_destroyWeak(param_1 + _DAT_112719cd0);
  _objc_destroyWeak(param_1 + _DAT_112719d20);
  _objc_destroyWeak(param_1 + _DAT_112719cdc);
  _objc_destroyWeak(param_1 + _DAT_112719cd4);
  _objc_destroyWeak(param_1 + _DAT_112719cf4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719d50,0);
  return;
}



/* Entry: 10502a2f4; end: 10502a5ff; -[SCProfileFlatlandMyProfileSharePageController initWithValdiRuntimeProvider:snapSaver:notificationPool:userTrackedLogger:performerProvider:grapheneRegistry:usernameProvider:displayNameProvider:linkGenerationService:watermarkGenerator:legacySendToScopeExposer:userSession:temporaryFileWriter:ephemeralMediaFactory:galleryStorySaver:inviteService:circumstanceEngine:crashServices:previewSnapSenderFactory:featureSettingsService:] */

undefined8 *
FUN_10502a2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_70 = PTR_PTR_1126e5ae8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[3];
    puVar1[3] = param_13;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined1 *)((long)puVar1 + 0x44) = 0;
    puVar3 = PTR_PTR_1126b3f18;
    _objc_alloc();
    func_0x00010c048560();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 10502a600; end: 10502a6d3; -[SCProfileFlatlandMyProfileSharePageController getNavigator] */

void FUN_10502a600(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b3f20;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c040c00(puVar1,param_2,uVar5,lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1c1bc0(*(undefined8 *)(param_1 + 0x10),param_2,lVar3);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10502a6d4; end: 10502a7af; -[SCProfileFlatlandMyProfileSharePageController getAvailableDestinations] */

void FUN_10502a6d4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10502a75c;
  puStack_38 = &UNK_11085dc48;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10502a7b0; end: 10502a83f; -[SCProfileFlatlandMyProfileSharePageController onSelectShareDestination] */

void FUN_10502a7b0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10502a840;
  puStack_40 = &UNK_110863aa8;
  _objc_copyWeak(auStack_30,auStack_28);
  ppuVar1 = &puStack_58;
  uStack_38 = param_1;
  _objc_retainBlock(ppuVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10502a840; end: 10502a8e7;  */

void FUN_10502a840(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar2 = param_2;
  func_0x00010b9688dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010c10fd00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6420(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10502a8e8; end: 10502a9b7; -[SCProfileFlatlandMyProfileSharePageController sendPreviewViewSnapshot] */

void FUN_10502a8e8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10502a970;
  puStack_38 = &UNK_110863718;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10502a9b8; end: 10502aa3f; -[SCProfileFlatlandMyProfileSharePageController _sendPreviewViewSnapshot:] */

void FUN_10502a9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10502aa40;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10502aa40; end: 10502abab;  */

void FUN_10502aa40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar5 + 0x40);
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x44) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(lVar5 + 0x40);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x44) = 1;
  _os_unfair_lock_unlock(lVar5 + 0x40);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010b9688dc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar3,param_2,uVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x28) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c10fd00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c560(uVar6,param_2,puVar3,uVar1,*(long *)(param_1 + 0x20),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar6;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10502abac; end: 10502ac07; -[SCProfileFlatlandMyProfileSharePageController legacySendToScopeDidDismiss:selectedItems:] */

void FUN_10502abac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = 0;
  _os_unfair_lock_unlock(param_1 + 0x40);
  func_0x00010bddf260(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10502ac08; end: 10502acf3; -[SCProfileFlatlandMyProfileSharePageController legacySendToScopeWillSend:sendToSelection:] */

void FUN_10502ac08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10502acf4; end: 10502ad27;  */

void FUN_10502acf4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502ad28; end: 10502ae33; -[SCProfileFlatlandMyProfileSharePageController _didDetachUIWithSendToSelection:] */

void FUN_10502ad28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_lock(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = 0;
  _os_unfair_lock_unlock(param_1 + 0x40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10502ae34; end: 10502ae67;  */

void FUN_10502ae34(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502ae68; end: 10502af8b; -[SCProfileFlatlandMyProfileSharePageController _didEndFeatureWithSendToSelection:] */

void FUN_10502ae68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2584a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf24f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c15c8c0(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c10fd00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bddf270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpSendToStates_112555638);
  return;
}



/* Entry: 10502af8c; end: 10502afbb; -[SCProfileFlatlandMyProfileSharePageController _cleanUpSendToStates] */

void FUN_10502af8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10502afbc; end: 10502afd3; -[SCProfileFlatlandMyProfileSharePageController presentingViewController] */

void FUN_10502afbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502afd4; end: 10502afdf; -[SCProfileFlatlandMyProfileSharePageController setPresentingViewController:] */

void FUN_10502afd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10502afe0; end: 10502aff7; -[SCProfileFlatlandMyProfileSharePageController composerViewOwner] */

void FUN_10502afe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502aff8; end: 10502b003; -[SCProfileFlatlandMyProfileSharePageController setComposerViewOwner:] */

void FUN_10502aff8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10502b004; end: 10502b07f; -[SCProfileFlatlandMyProfileSharePageController .cxx_destruct] */

void FUN_10502b004(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 10502b080; end: 10502b097;  */

void FUN_10502b080(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2f58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2f58,
                      &PTR____CFConstantStringClassReference_110dc2f38,0);
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



/* Entry: 10502b098; end: 10502b14f; -[SCProfileFlatlandMyProfileSharePageNavigator initWithRuntime:composerViewOwner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10502b098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e5af0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithRuntime__1125edce0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112719d94;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112719d98),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10502b150; end: 10502b3a7; -[SCProfileFlatlandMyProfileSharePageNavigator makeContainerViewControllerWithPage:parentComposerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502b150(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c040b80();
  func_0x00010bf4ac20(param_1);
  func_0x00010c181960(lVar1);
  func_0x00010c0d66c0(param_1);
  func_0x00010c1cb7e0(lVar1);
  uVar2 = param_3;
  func_0x00010bf443a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  func_0x00010c1d0640(uVar3);
  puVar4 = PTR_PTR_1126afcc8;
  _objc_alloc(PTR_PTR_1126afcc8);
  uVar2 = param_3;
  func_0x00010bf44480(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112719d98;
  _objc_loadWeakRetained(lVar5);
  uVar6 = param_3;
  func_0x00010bf445a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf51e00(uVar3);
  func_0x00010c000640(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar2);
  if (param_4 != 0) {
    puVar8 = puVar4;
    func_0x00010c295200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d90a0();
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126b3f28;
  _objc_alloc(PTR_PTR_1126b3f28);
  func_0x00010c0601e0();
  uVar2 = param_3;
  func_0x00010c239260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c202620(puVar8);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0fe2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar8);
  _objc_release(uVar2);
  func_0x00010c1c1bc0(lVar1);
  _objc_storeWeak(param_1 + _DAT_112719d9c,puVar8);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10502b3a8; end: 10502b3c7; -[SCProfileFlatlandMyProfileSharePageNavigator presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502b3a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112719d9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502b3c8; end: 10502b40f; -[SCProfileFlatlandMyProfileSharePageNavigator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502b3c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112719d9c);
  _objc_destroyWeak(param_1 + _DAT_112719d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719d94,0);
  return;
}



/* Entry: 10502b410; end: 10502b4b3; -[SCProfileFlatlandMyProfileSharePageViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10502b410(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5af8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c1c8b80();
    func_0x00010b83741c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112719da0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b20(puVar1);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10502b4b4; end: 10502b587; -[SCProfileFlatlandMyProfileSharePageViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502b4b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1126e5af8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112719da0);
  func_0x00010c2954c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10502b588; end: 10502b58b; -[SCProfileFlatlandMyProfileSharePageViewController cardToExpandTransition] */

void FUN_10502b588(void)

{
  return;
}



/* Entry: 10502b58c; end: 10502b637; -[SCProfileFlatlandMyProfileSharePageViewController cardTransitionShouldBeginWithView:touchLocation:] */

undefined8
FUN_10502b58c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c2954c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar1);
  if (param_5 == uVar1) {
    func_0x00010c2954c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf2d520(param_1,param_2);
    _objc_release(param_3);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 10502b638; end: 10502b643; -[SCProfileFlatlandMyProfileSharePageViewController cardTransitionWillBeginWithView:] */

void FUN_10502b638(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10502b644; end: 10502b647; -[SCProfileFlatlandMyProfileSharePageViewController cardTransitionEndedWithView:transitionType:] */

void FUN_10502b644(void)

{
  return;
}



/* Entry: 10502b648; end: 10502b65b; -[SCProfileFlatlandMyProfileSharePageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502b648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719da0,0);
  return;
}



/* Entry: 10502b65c; end: 10502b6cf; -[SCProfileFlatlandBitmojiPickerServices initWithPickerProvider:] */

undefined1 * FUN_10502b65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5b00;
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



/* Entry: 10502b6d0; end: 10502b6d7; -[SCProfileFlatlandBitmojiPickerServices pickerProvider] */

undefined8 FUN_10502b6d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10502b6d8; end: 10502b6e3; -[SCProfileFlatlandBitmojiPickerServices .cxx_destruct] */

void FUN_10502b6d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10502b6e4; end: 10502b6ef; -[SCFeatureSettingsService hasBitmojiGesturesEducationOverlayViewed] */

void FUN_10502b6e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2f78);
  return;
}



/* Entry: 10502b6f0; end: 10502b6fb; -[SCFeatureSettingsService bitmojiGesturesEducationOverlayViewedServerParam] */

undefined ** FUN_10502b6f0(void)

{
  return &PTR____CFConstantStringClassReference_110dc2f78;
}



/* Entry: 10502b6fc; end: 10502b70b; -[SCFeatureSettingsService setBitmojiGesturesEducationOverlayViewed:] */

void FUN_10502b6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc2f78,param_3);
  return;
}



/* Entry: 10502b70c; end: 10502b713; -[SCFeatureSettingsService PROFILE_BITMOJI_GESTURES_EDUCATION_OVERLAY_VIEWED_client_value:] */

undefined * FUN_10502b70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10502b714; end: 10502b71b; -[SCFeatureSettingsService PROFILE_BITMOJI_GESTURES_EDUCATION_OVERLAY_VIEWED_server_value:] */

void FUN_10502b714(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10502b71c; end: 10502b72b; -[SCFeatureSettingsService bitmojiGesturesEducationOverlayViewed] */

void FUN_10502b71c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc2f78,0);
  return;
}



/* Entry: 10502b72c; end: 10502b733; -[SCAddFriendQRCodeServices client] */

undefined8 FUN_10502b72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10502b734; end: 10502b763; -[SCAddFriendQRCodeServices .cxx_destruct] */

void FUN_10502b734(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10502b764; end: 10502b7eb; -[SCAddFriendQRCode initWithCoder:] */

undefined1 * FUN_10502b764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5b10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10502b7ec; end: 10502b863; -[SCAddFriendQRCode initWithSvg:] */

undefined1 * FUN_10502b7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5b10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10502b864; end: 10502b887; -[SCAddFriendQRCode copyWithZone:] */

undefined8 FUN_10502b864(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10502b888; end: 10502b89f; -[SCAddFriendQRCode encodeWithCoder:] */

void FUN_10502b888(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110dc2f98);
  return;
}



/* Entry: 10502b8a0; end: 10502b8a7; -[SCAddFriendQRCode hash] */

void FUN_10502b8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10502b8a8; end: 10502b937; -[SCAddFriendQRCode isEqual:] */

long FUN_10502b8a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10502b91c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10502b91c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10502b91c;
    }
  }
  lVar3 = 1;
LAB_10502b91c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10502b938; end: 10502b93f; -[SCAddFriendQRCode svg] */

undefined8 FUN_10502b938(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10502b940; end: 10502b94b; -[SCAddFriendQRCode .cxx_destruct] */

void FUN_10502b940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10502b94c; end: 10502b977; +[SCGrapheneAddFriendQrCodeMetric syncAttempt] */

void FUN_10502b94c(void)

{
  _objc_alloc(PTR_PTR_1126b3f30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502b978; end: 10502b9a3; +[SCGrapheneAddFriendQrCodeMetric syncWithUpdates] */

void FUN_10502b978(void)

{
  _objc_alloc(PTR_PTR_1126b3f30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502b9a4; end: 10502b9cf; +[SCGrapheneAddFriendQrCodeMetric syncFailure] */

void FUN_10502b9a4(void)

{
  _objc_alloc(PTR_PTR_1126b3f30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502b9d0; end: 10502b9fb; +[SCGrapheneAddFriendQrCodeMetric syncSuccess] */

void FUN_10502b9d0(void)

{
  _objc_alloc(PTR_PTR_1126b3f30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502b9fc; end: 10502ba27; +[SCGrapheneAddFriendQrCodeMetric updateQrCode] */

void FUN_10502b9fc(void)

{
  _objc_alloc(PTR_PTR_1126b3f30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502ba28; end: 10502bac7; -[SCGrapheneAddFriendQrCodeMetric description] */

void FUN_10502ba28(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2fb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc2fb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e5b18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10502bac8; end: 10502bc33; -[SCGrapheneRegistry addFriendQrCodeGraphene] */

void FUN_10502bac8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10502bb50;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b92d0 != -1) {
    func_0x00010002a2fc(0x1136b92d0,&puStack_48);
  }
  uVar1 = uRam00000001136b92c8;
  _objc_retain(uRam00000001136b92c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10502bc34; end: 10502be2f; -[SCBestFriendPinningAction initWithFriend:context:plusFeatureGating:pinBestFriendService:notificationPool:plusSubscribeScopeExposer:plusSubscribeScopeServices:friendmojiRegistry:grapheneRegistry:] */

undefined1 *
FUN_10502bc34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e5b20;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x68) = 0x20;
    func_0x00010bea8d60(puVar1);
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
  return (undefined1 *)puVar1;
}


