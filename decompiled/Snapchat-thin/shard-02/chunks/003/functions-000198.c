/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b376b0; end: 101b376d7; -[SCSCBitmojiSettingsScopedServicesSaberEntryPoint begin] */

void FUN_101b376b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b375d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b376d8; end: 101b3784f;  */

/* WARNING: Possible PIC construction at 0x000101b37740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b377d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b37744) */
/* WARNING: Removing unreachable block (ram,0x000101b377dc) */
/* WARNING: Removing unreachable block (ram,0x000101b377f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b376d8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e02b48);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101b37850; end: 101b37857;  */

void FUN_101b37850(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b37858; end: 101b3788b; -[SCSCBitmojiSettingsScopedServicesSaberEntryPoint end] */

void FUN_101b37858(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b376d8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b3788c; end: 101b379ab;  */

void FUN_101b3788c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "BitmojiSettingsScopeGraphBridge/SCSCBitmojiSettingsScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b379ac);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b379ac; end: 101b37a57; -[SCSCBitmojiSettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101b379ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101b3788c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b37a58; end: 101b37ab7; -[SCSCBitmojiSettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b37a58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e02b40,0);
  *(undefined8 *)(param_1 + _DAT_112e02b48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b37ab8; end: 101b37aeb;  */

void FUN_101b37ab8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b37aec; end: 101b37b23; -[SCSCBitmojiSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b37aec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e02b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02b48));
  return;
}



/* Entry: 101b37b24; end: 101b37b43;  */

void FUN_101b37b24(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8e20);
  return;
}



/* Entry: 101b37b44; end: 101b37cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101b37b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e02b78;
  func_0x000107c61614(unaff_x20 + _DAT_112e02b78,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e02b80) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e02b88) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02b90);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02b98);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02ba0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02ba8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bb0);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bb8);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bc0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bc8);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 101b37cdc; end: 101b380b3; -[SCBitmojiUnlinkWithEditOptionDialogPresenter initWithPresentingViewController:title:message:editButtonTitle:deleteButtonTitle:cancelButtonTitle:editHandler:deleteHandler:cancelHandler:] */

undefined8
FUN_101b37cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec();
  func_0x000107c5faec();
  func_0x000107c5faec(param_6);
  func_0x000107c5faec(param_7);
  func_0x000107c5faec();
  puVar1 = &UNK_110447740;
  func_0x000107c613fc(&UNK_110447740,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  puVar1 = &UNK_110447768;
  func_0x000107c613fc(&UNK_110447768,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  puVar1 = &UNK_110447790;
  func_0x000107c613fc(&UNK_110447790,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  FUN_101b3985c();
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 101b380b4; end: 101b380db; -[SCBitmojiUnlinkWithEditOptionDialogPresenter present] */

void FUN_101b380b4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101b37e5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b380dc; end: 101b3810f;  */

void FUN_101b380dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b38110; end: 101b381e7; -[SCBitmojiUnlinkWithEditOptionDialogPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b381b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b381b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b38110(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e02b78);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e02b80));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e02b90 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e02b98 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e02ba0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e02ba8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e02bb0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e02bb8 + 8));
  return;
}



/* Entry: 101b381e8; end: 101b38573;  */

void FUN_101b381e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 auStack_130 [2];
  long alStack_120 [5];
  undefined8 *apuStack_f8 [12];
  undefined8 uStack_98;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  lVar4 = 0x112e02c00;
  alStack_120[3] = param_1;
  func_0x0001000285a8(0x112e02c00,&UNK_10d9d5150);
  alStack_120[2] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar11 = (long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  lVar4 = 0x112e02c08;
  func_0x0001000285a8(0x112e02c08,&UNK_10d9d5158);
  alStack_120[1] = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_120[1] + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_00;
  func_0x000107c5f6c8();
  lVar6 = lVar5;
  func_0x000107c5f6d4(0x3fd999999999999a);
  func_0x000107c61574();
  func_0x000107c5f350();
  lVar7 = lVar5;
  func_0x000107c5f56c();
  uStack_70 = (undefined1)lVar7;
  puVar8 = &UNK_1104476a0;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  func_0x000107c613fc(&UNK_1104476a0,0x90,7);
  uVar15 = param_6[8];
  uVar9 = param_6[0xb];
  uVar16 = param_6[10];
  *(undefined8 *)(puVar8 + 0x58) = param_6[9];
  *(undefined8 *)(puVar8 + 0x50) = uVar15;
  *(undefined8 *)(puVar8 + 0x68) = uVar9;
  *(undefined8 *)(puVar8 + 0x60) = uVar16;
  uVar15 = param_6[0xc];
  uVar9 = param_6[0xf];
  uVar16 = param_6[0xe];
  *(undefined8 *)(puVar8 + 0x78) = param_6[0xd];
  *(undefined8 *)(puVar8 + 0x70) = uVar15;
  *(undefined8 *)(puVar8 + 0x88) = uVar9;
  *(undefined8 *)(puVar8 + 0x80) = uVar16;
  uVar15 = *param_6;
  uVar9 = param_6[3];
  uVar16 = param_6[2];
  *(undefined8 *)(puVar8 + 0x18) = param_6[1];
  *(undefined8 *)(puVar8 + 0x10) = uVar15;
  *(undefined8 *)(puVar8 + 0x28) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar16;
  uVar15 = param_6[4];
  uVar9 = param_6[7];
  uVar16 = param_6[6];
  *(undefined8 *)(puVar8 + 0x38) = param_6[5];
  *(undefined8 *)(puVar8 + 0x30) = uVar15;
  *(undefined8 *)(puVar8 + 0x48) = uVar9;
  *(undefined8 *)(puVar8 + 0x40) = uVar16;
  func_0x000101b39fb4(param_6,alStack_120 + 4);
  uVar15 = 0x112e02c10;
  func_0x0001000285a8(0x112e02c10,&UNK_10d9d5160);
  uVar16 = uVar15;
  FUN_101b39fc4();
  func_0x000107c5f620(lVar14,1,FUN_101b3b110,puVar8,uVar15,uVar16);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(puVar8);
  uVar15 = 0x112e02c20;
  apuStack_f8[1] = param_6;
  func_0x0001000285a8(0x112e02c20,&UNK_10d9d5168);
  uVar16 = uVar15;
  FUN_101b3a20c();
  pcVar10 = FUN_101b3a034;
  uVar9 = 0;
  func_0x000103060aa4(lVar12,0,FUN_101b3a034,alStack_120 + 4,uVar15,uVar16);
  func_0x000107c5f7ac();
  *(undefined8 *)(lVar14 + -0x10) = uVar9;
  *(code **)(lVar14 + -8) = pcVar10;
  *(undefined1 *)(lVar14 + -0x18) = 1;
  *(undefined8 *)(lVar14 + -0x20) = 0;
  *(undefined1 *)(lVar14 + -0x28) = 1;
  *(undefined8 *)(lVar14 + -0x30) = 0;
  func_0x000107c5f388(alStack_120 + 4,0,1,0,1,0x4073600000000000,0,0,1);
  lVar5 = 0x112e02c80;
  func_0x0001000285a8(0x112e02c80,&UNK_10d9d5198);
  puVar3 = apuStack_f8[1];
  puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar5 + 0x24));
  puVar1[9] = apuStack_f8[8];
  puVar1[8] = apuStack_f8[7];
  puVar1[0xb] = apuStack_f8[10];
  puVar1[10] = apuStack_f8[9];
  puVar1[0xd] = uStack_98;
  puVar1[0xc] = apuStack_f8[0xb];
  puVar1[1] = apuStack_f8[0];
  *puVar1 = alStack_120[4];
  puVar1[3] = apuStack_f8[2];
  puVar1[2] = puVar3;
  puVar1[5] = apuStack_f8[4];
  puVar1[4] = apuStack_f8[3];
  puVar1[7] = apuStack_f8[6];
  puVar1[6] = apuStack_f8[5];
  func_0x000107c5f568();
  uVar16 = 0x4030000000000000;
  uVar15 = apuStack_f8[3];
  func_0x000107c5f280();
  puVar2 = (undefined1 *)(lVar12 + *(int *)(alStack_120[2] + 0x24));
  *puVar2 = (char)lVar5;
  *(undefined8 *)(puVar2 + 8) = uVar16;
  lVar6 = alStack_120[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar15;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  pcVar10 = *(code **)(alStack_120[1] + 0x10);
  (*pcVar10)(lVar13,lVar14,lVar4);
  func_0x000101b3a42c(lVar12,lVar11,0x112e02c00,&UNK_10d9d5150);
  lVar7 = alStack_120[3];
  (*pcVar10)(alStack_120[3],lVar13,lVar4);
  lVar5 = 0x112e02c88;
  func_0x0001000285a8(0x112e02c88,&UNK_10d9d51a0);
  func_0x000101b3a42c(lVar11,lVar7 + *(int *)(lVar5 + 0x30),0x112e02c00,&UNK_10d9d5150);
  func_0x000101b3a9e0(lVar12,0x112e02c00,&UNK_10d9d5150);
  pcVar10 = *(code **)(lVar6 + 8);
  (*pcVar10)(lVar14,lVar4);
  func_0x000101b3a9e0(lVar11,0x112e02c00,&UNK_10d9d5150);
  (*pcVar10)(lVar13,lVar4);
  return;
}



/* Entry: 101b38574; end: 101b38ca7;  */

void FUN_101b38574(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar10;
  long extraout_x12;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_1560 [6];
  long lStack_1530;
  long *plStack_1528;
  undefined8 *puStack_1520;
  long lStack_1518;
  long lStack_1510;
  undefined8 *puStack_1508;
  undefined1 auStack_1500 [360];
  undefined1 auStack_1398 [360];
  undefined1 auStack_1230 [312];
  undefined1 auStack_10f8 [8];
  undefined8 uStack_10f0;
  undefined1 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined1 uStack_1098;
  undefined8 uStack_1090;
  long lStack_1088;
  undefined1 uStack_1048;
  undefined *puStack_1040;
  undefined1 uStack_1038;
  undefined1 auStack_1030 [312];
  undefined1 auStack_ef8 [312];
  undefined1 auStack_dc0 [312];
  undefined1 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined1 uStack_c60;
  undefined1 auStack_c58 [312];
  undefined1 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined1 uStack_af8;
  undefined1 auStack_af0 [312];
  undefined1 auStack_9b8 [360];
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined *puStack_758;
  undefined1 uStack_750;
  undefined1 auStack_748 [120];
  undefined1 auStack_6d0 [8];
  undefined8 uStack_6c8;
  undefined1 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_668;
  long lStack_660;
  undefined1 uStack_620;
  undefined *puStack_618;
  undefined1 uStack_610;
  undefined1 auStack_608 [312];
  undefined1 auStack_4d0 [312];
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined *puStack_2e0;
  undefined1 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [112];
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined *puStack_a0;
  undefined1 uStack_98;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = (undefined8 *)0x112e02c98;
  puVar6 = &UNK_10d9d51b0;
  lStack_1510 = extraout_x8;
  func_0x0001000285a8();
  puStack_1520 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar3[-1] + 0x40));
  lVar9 = (long)&lStack_1530 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_1518 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar10 = (long *)(lVar9 - extraout_x12);
  plStack_1528 = plVar10;
  func_0x000103081b14();
  uVar2 = *(undefined1 *)puVar3;
  uVar14 = puVar3[1];
  uVar1 = *(undefined1 *)(puVar3 + 2);
  uVar16 = puVar3[3];
  func_0x000103080be4();
  uStack_2c8 = puVar3[1];
  uStack_2d0 = *puVar3;
  uStack_2b8 = puVar3[3];
  uStack_2c0 = puVar3[2];
  uStack_2a8 = puVar3[5];
  uStack_2b0 = puVar3[4];
  uStack_298 = puVar3[7];
  uStack_2a0 = puVar3[6];
  uVar12 = *param_1;
  lVar9 = param_1[1];
  puVar4 = &UNK_10d9d51b8;
  puStack_1508 = param_1;
  func_0x000107c614e0();
  lVar5 = lVar9;
  func_0x000107c61434();
  func_0x000107c5f7ac();
  uStack_130 = uStack_2c8;
  uStack_138 = uStack_2d0;
  uStack_120 = uStack_2b8;
  uStack_128 = uStack_2c0;
  uStack_110 = uStack_2a8;
  uStack_118 = uStack_2b0;
  uStack_100 = uStack_298;
  uStack_108 = uStack_2a0;
  uStack_f8 = 0;
  uStack_a8 = 1;
  uStack_98 = 1;
  plVar10[-2] = lVar5;
  plVar10[-1] = (long)puVar6;
  *(undefined1 *)(plVar10 + -3) = 1;
  plVar10[-4] = 0;
  *(undefined1 *)(plVar10 + -5) = 1;
  plVar10[-6] = 0;
  uStack_158 = uVar2;
  uStack_150 = uVar14;
  uStack_148 = uVar1;
  uStack_140 = uVar16;
  uStack_f0 = uVar12;
  lStack_e8 = lVar9;
  puStack_a0 = puVar4;
  func_0x000107c5f388(auStack_1c8,0,1,0,1,0x7ff0000000000000,0,0,1);
  uStack_1e0 = CONCAT71(uStack_a7,uStack_a8);
  uStack_1e8 = uStack_b0;
  uStack_1f0 = uStack_b8;
  puStack_1d8 = puStack_a0;
  uStack_1d0 = uStack_98;
  uStack_230 = CONCAT71(uStack_f7,uStack_f8);
  uStack_228 = uStack_f0;
  uStack_218 = uStack_e0;
  lStack_220 = lStack_e8;
  uStack_1f8 = uStack_c0;
  uStack_200 = uStack_c8;
  uStack_208 = uStack_d0;
  uStack_210 = uStack_d8;
  uStack_268 = uStack_130;
  uStack_270 = uStack_138;
  uStack_258 = uStack_120;
  uStack_260 = uStack_128;
  uStack_238 = uStack_100;
  uStack_240 = uStack_108;
  uStack_248 = uStack_110;
  uStack_250 = uStack_118;
  uStack_290 = CONCAT71(uStack_157,uStack_158);
  uStack_280 = CONCAT71(uStack_147,uStack_148);
  uStack_278 = uStack_140;
  uStack_288 = uStack_150;
  uStack_6a8 = uStack_2c8;
  uStack_6b0 = uStack_2d0;
  uStack_698 = uStack_2b8;
  uStack_6a0 = uStack_2c0;
  uStack_688 = uStack_2a8;
  uStack_690 = uStack_2b0;
  uStack_678 = uStack_298;
  uStack_680 = uStack_2a0;
  uStack_670 = 0;
  uStack_620 = 1;
  uStack_610 = 1;
  auStack_6d0[0] = uVar2;
  uStack_6c8 = uVar14;
  uStack_6c0 = uVar1;
  uStack_6b8 = uVar16;
  uStack_668 = uVar12;
  lStack_660 = lVar9;
  puStack_618 = puVar4;
  func_0x000101b3aa54(&uStack_158,auStack_9b8,0x112e02ca0,&UNK_10d9d51e8);
  func_0x000101b3aa9c(auStack_6d0,0x112e02ca0,&UNK_10d9d51e8);
  func_0x000107c610b4(auStack_608,&uStack_290,0x138);
  func_0x000107c610b4(auStack_4d0,&uStack_290,0x138);
  lVar9 = 0x112e02ca8;
  func_0x000101b3aa54(auStack_608,auStack_9b8,0x112e02ca8,&UNK_10d9d51f0);
  puVar8 = auStack_4d0;
  func_0x000101b3aa9c(puVar8,0x112e02ca8,&UNK_10d9d51f0);
  func_0x000103081b2c();
  uVar2 = *puVar8;
  uVar15 = *(undefined8 *)(puVar8 + 8);
  uVar1 = puVar8[0x10];
  uVar17 = *(undefined8 *)(puVar8 + 0x18);
  uStack_848 = puVar3[1];
  uStack_850 = *puVar3;
  uStack_838 = puVar3[3];
  uStack_840 = puVar3[2];
  uStack_828 = puVar3[5];
  uStack_830 = puVar3[4];
  uStack_818 = puVar3[7];
  uStack_820 = puVar3[6];
  uVar12 = puStack_1508[2];
  lVar5 = puStack_1508[3];
  puVar6 = &UNK_10d9d51b8;
  func_0x000107c614e0();
  lVar7 = lVar5;
  func_0x000107c61434();
  func_0x000107c5f7ac();
  uStack_370 = uStack_848;
  uStack_378 = uStack_850;
  uStack_360 = uStack_838;
  uStack_368 = uStack_840;
  uStack_350 = uStack_828;
  uStack_358 = uStack_830;
  uStack_340 = uStack_818;
  uStack_348 = uStack_820;
  uStack_338 = 0;
  uStack_2e8 = 1;
  uStack_2d8 = 1;
  plVar10[-2] = lVar7;
  plVar10[-1] = lVar9;
  *(undefined1 *)(plVar10 + -3) = 1;
  plVar10[-4] = 0;
  *(undefined1 *)(plVar10 + -5) = 1;
  plVar10[-6] = 0;
  uStack_398 = uVar2;
  uStack_390 = uVar15;
  uStack_388 = uVar1;
  uStack_380 = uVar17;
  uStack_330 = uVar12;
  lStack_328 = lVar5;
  puStack_2e0 = puVar6;
  func_0x000107c5f388(auStack_748,0,1,0,1,0x7ff0000000000000,0,0,1);
  uStack_760 = CONCAT71(uStack_2e7,uStack_2e8);
  uStack_768 = uStack_2f0;
  uStack_770 = uStack_2f8;
  puStack_758 = puStack_2e0;
  uStack_750 = uStack_2d8;
  uStack_7b0 = CONCAT71(uStack_337,uStack_338);
  uStack_7a8 = uStack_330;
  uStack_798 = uStack_320;
  lStack_7a0 = lStack_328;
  uStack_778 = uStack_300;
  uStack_780 = uStack_308;
  uStack_788 = uStack_310;
  uStack_790 = uStack_318;
  uStack_800 = CONCAT71(uStack_387,uStack_388);
  uStack_7e8 = uStack_370;
  uStack_7f0 = uStack_378;
  uStack_7d8 = uStack_360;
  uStack_7e0 = uStack_368;
  uStack_7b8 = uStack_340;
  uStack_7c0 = uStack_348;
  uStack_7c8 = uStack_350;
  uStack_7d0 = uStack_358;
  uStack_810 = CONCAT71(uStack_397,uStack_398);
  uStack_7f8 = uStack_380;
  uStack_808 = uStack_390;
  uStack_10d0 = uStack_848;
  uStack_10d8 = uStack_850;
  uStack_10c0 = uStack_838;
  uStack_10c8 = uStack_840;
  uStack_10b0 = uStack_828;
  uStack_10b8 = uStack_830;
  uStack_10a0 = uStack_818;
  uStack_10a8 = uStack_820;
  uStack_1098 = 0;
  uStack_1048 = 1;
  uStack_1038 = 1;
  uVar14 = uStack_820;
  uVar16 = uStack_358;
  uVar13 = uStack_368;
  auStack_10f8[0] = uVar2;
  uStack_10f0 = uVar15;
  uStack_10e8 = uVar1;
  uStack_10e0 = uVar17;
  uStack_1090 = uVar12;
  lStack_1088 = lVar5;
  puStack_1040 = puVar6;
  func_0x000101b3aa54(&uStack_398,auStack_9b8,0x112e02ca0,&UNK_10d9d51e8);
  puVar8 = auStack_10f8;
  func_0x000101b3aa9c(puVar8,0x112e02ca0,&UNK_10d9d51e8);
  uVar2 = SUB81(puVar8,0);
  func_0x000107c5f570();
  func_0x000107c610b4(auStack_1030,&uStack_810,0x138);
  uVar11 = 0x4030000000000000;
  func_0x000107c5f280();
  uVar12 = uVar14;
  uVar15 = uVar16;
  uVar17 = uVar13;
  func_0x000107c610b4(auStack_ef8,&uStack_810,0x138);
  func_0x000101b3aa54(auStack_1030,auStack_9b8,0x112e02ca8,&UNK_10d9d51f0);
  func_0x000101b3aa9c(auStack_ef8,0x112e02ca8,&UNK_10d9d51f0);
  func_0x000107c610b4(auStack_dc0,&uStack_810,0x138);
  uStack_c60 = 0;
  uStack_c88 = uVar2;
  uStack_c80 = uVar11;
  uStack_c78 = uVar14;
  uStack_c70 = uVar16;
  uStack_c68 = uVar13;
  func_0x000107c610b4(auStack_c58,&uStack_810,0x138);
  uStack_af8 = 0;
  uStack_b20 = uVar2;
  uStack_b18 = uVar11;
  uStack_b10 = uVar14;
  uStack_b08 = uVar16;
  uStack_b00 = uVar13;
  func_0x000101b3aa54(auStack_dc0,auStack_9b8,0x112e02cb0,&UNK_10d9d51f8);
  puVar8 = auStack_c58;
  func_0x000101b3aa9c(puVar8,0x112e02cb0,&UNK_10d9d51f8);
  func_0x000107c5f438();
  plVar10 = plStack_1528;
  *plStack_1528 = (long)puVar8;
  plVar10[1] = 0x4020000000000000;
  *(undefined1 *)(plVar10 + 2) = 0;
  lVar9 = 0x112e02cb8;
  func_0x0001000285a8(0x112e02cb8,&UNK_10d9d5200);
  puVar3 = puStack_1508;
  FUN_101b38ca8((long)plVar10 + (long)*(int *)(lVar9 + 0x2c));
  uVar2 = SUB81(puVar3,0);
  func_0x000107c5f570();
  uVar14 = 0x4030000000000000;
  func_0x000107c5f280();
  puVar8 = (undefined1 *)((long)plVar10 + (long)*(int *)((long)puStack_1520 + 0x24));
  *puVar8 = uVar2;
  *(undefined8 *)(puVar8 + 8) = uVar14;
  *(undefined8 *)(puVar8 + 0x10) = uVar12;
  *(undefined8 *)(puVar8 + 0x18) = uVar15;
  *(undefined8 *)(puVar8 + 0x20) = uVar17;
  puVar8[0x28] = 0;
  func_0x000107c610b4(auStack_1230,auStack_608,0x138);
  func_0x000107c610b4(auStack_1398,auStack_dc0,0x161);
  lVar5 = lStack_1518;
  func_0x000101b3a42c(plVar10,lStack_1518,0x112e02c98,&UNK_10d9d51b0);
  func_0x000107c610b4(auStack_af0,auStack_1230,0x138);
  func_0x000107c610b4(lStack_1510,auStack_1230,0x138);
  func_0x000107c610b4(auStack_9b8,auStack_1398,0x161);
  func_0x000107c610b4(lStack_1510 + 0x138,auStack_1398,0x161);
  lVar9 = 0x112e02cc0;
  func_0x0001000285a8(0x112e02cc0,&UNK_10d9d5208);
  func_0x000101b3a42c(lVar5,lStack_1510 + *(int *)(lVar9 + 0x40),0x112e02c98,&UNK_10d9d51b0);
  func_0x000101b3aa54(auStack_af0,auStack_1500,0x112e02ca8,&UNK_10d9d51f0);
  func_0x000101b3aa54(auStack_9b8,auStack_1500,0x112e02cb0,&UNK_10d9d51f8);
  func_0x000101b3a9e0(plVar10,0x112e02c98,&UNK_10d9d51b0);
  func_0x000101b3a9e0(lVar5,0x112e02c98,&UNK_10d9d51b0);
  func_0x000101b3aa9c(auStack_1398,0x112e02cb0,&UNK_10d9d51f8);
  func_0x000101b3aa9c(auStack_1230,0x112e02ca8,&UNK_10d9d51f0);
  return;
}



/* Entry: 101b38ca8; end: 101b39323;  */

void FUN_101b38ca8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined1 auStack_340 [16];
  undefined8 *puStack_330;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  long lStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar2 = 0;
  func_0x000107c5f374();
  lStack_348 = *(long *)(lVar2 + -8);
  lStack_350 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_348 + 0x40));
  lVar7 = (long)&lStack_3b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112e02cc8;
  lStack_380 = lVar7;
  func_0x0001000285a8(0x112e02cc8,&UNK_10d9d5210);
  lStack_358 = *(long *)(lVar2 + -8);
  lStack_370 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_358 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar2 = 0x112e02cd0;
  lStack_398 = lVar7;
  func_0x0001000285a8(0x112e02cd0,&UNK_10d9d5218);
  lStack_368 = *(long *)(lVar2 + -8);
  lStack_360 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_368 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_378 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lVar2 = 0x112e02cd8;
  lStack_388 = lVar7;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_02;
  lVar8 = 0x112e02ce0;
  func_0x0001000285a8(0x112e02ce0,&UNK_10d9d5228);
  lStack_3a0 = *(long *)(lVar8 + -8);
  lStack_3a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_3a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar7 - extraout_x8_03;
  lVar8 = 0x112e02ce8;
  func_0x0001000285a8(0x112e02ce8,&UNK_10d9d5230);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar11 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_390 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_3b0 = lVar8 - extraout_x12_00;
  uStack_1d0 = param_2[4];
  uVar13 = param_2[5];
  uStack_188 = 1;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0;
  uStack_138 = 0xff;
  puVar3 = &UNK_1104476c8;
  uStack_1c8 = uVar13;
  func_0x000107c613fc(&UNK_1104476c8,0x90,7);
  uVar12 = param_2[8];
  uVar15 = param_2[0xb];
  uVar14 = param_2[10];
  *(undefined8 *)(puVar3 + 0x58) = param_2[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar12;
  *(undefined8 *)(puVar3 + 0x68) = uVar15;
  *(undefined8 *)(puVar3 + 0x60) = uVar14;
  uVar12 = param_2[0xc];
  uVar15 = param_2[0xf];
  uVar14 = param_2[0xe];
  *(undefined8 *)(puVar3 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar3 + 0x70) = uVar12;
  *(undefined8 *)(puVar3 + 0x88) = uVar15;
  *(undefined8 *)(puVar3 + 0x80) = uVar14;
  uVar12 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  *(undefined8 *)(puVar3 + 0x18) = param_2[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  *(undefined8 *)(puVar3 + 0x28) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar14;
  uVar12 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  *(undefined8 *)(puVar3 + 0x38) = param_2[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar12;
  *(undefined8 *)(puVar3 + 0x48) = uVar15;
  *(undefined8 *)(puVar3 + 0x40) = uVar14;
  func_0x000107c61434(uVar13);
  func_0x000101b39fb4(param_2,&lStack_130);
  func_0x00010305def0(&lStack_288,1,3,0x100000000,&uStack_1d0,&uStack_180,0x101b3a474,puVar3);
  puVar3 = &UNK_1104476f0;
  func_0x000107c613fc(&UNK_1104476f0,0x90,7);
  uVar13 = param_2[8];
  uVar14 = param_2[0xb];
  uVar12 = param_2[10];
  *(undefined8 *)(puVar3 + 0x58) = param_2[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar13;
  *(undefined8 *)(puVar3 + 0x68) = uVar14;
  *(undefined8 *)(puVar3 + 0x60) = uVar12;
  uVar13 = param_2[0xc];
  uVar14 = param_2[0xf];
  uVar12 = param_2[0xe];
  *(undefined8 *)(puVar3 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar3 + 0x70) = uVar13;
  *(undefined8 *)(puVar3 + 0x88) = uVar14;
  *(undefined8 *)(puVar3 + 0x80) = uVar12;
  uVar13 = *param_2;
  uVar14 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(puVar3 + 0x18) = param_2[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar13;
  *(undefined8 *)(puVar3 + 0x28) = uVar14;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  uVar13 = param_2[4];
  uVar14 = param_2[7];
  uVar12 = param_2[6];
  *(undefined8 *)(puVar3 + 0x38) = param_2[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x48) = uVar14;
  *(undefined8 *)(puVar3 + 0x40) = uVar12;
  puStack_330 = param_2;
  func_0x000101b39fb4(param_2,&lStack_130);
  func_0x000107c5f738(lVar7,0x101b3a494,puVar3,FUN_101b3a4b4,auStack_340,
                      PTR___s7SwiftUI4TextVN_1103493f8,PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
  uVar13 = 0x112e02cf0;
  func_0x000101b3b0cc(0x112e02cf0,0x112e02cd8,&UNK_10d9d5220,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar12 = uVar13;
  FUN_101b3a4d4();
  func_0x000107c5f60c(lVar11);
  lVar6 = lVar2;
  (**(code **)(lVar10 + 8))(lVar7);
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef6518;
  func_0x000107c5faec();
  puStack_128 = &UNK_110447830;
  plVar5 = &lStack_130;
  lStack_130 = lVar2;
  lStack_120 = uVar13;
  lStack_118 = uVar12;
  func_0x000107c614f4(plVar5,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  lVar2 = lStack_3a8;
  lVar8 = lStack_3b0;
  func_0x000107c5f674(lStack_3b0,ppuVar4,lVar6,lStack_3a8,plVar5);
  func_0x000107c6142c(lVar6);
  (**(code **)(lStack_3a0 + 8))(lVar11,lVar2);
  puVar3 = &UNK_110447718;
  func_0x000107c613fc(&UNK_110447718,0x90,7);
  uVar13 = param_2[8];
  uVar14 = param_2[0xb];
  uVar12 = param_2[10];
  *(undefined8 *)(puVar3 + 0x58) = param_2[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar13;
  *(undefined8 *)(puVar3 + 0x68) = uVar14;
  *(undefined8 *)(puVar3 + 0x60) = uVar12;
  uVar13 = param_2[0xc];
  uVar14 = param_2[0xf];
  uVar12 = param_2[0xe];
  *(undefined8 *)(puVar3 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar3 + 0x70) = uVar13;
  *(undefined8 *)(puVar3 + 0x88) = uVar14;
  *(undefined8 *)(puVar3 + 0x80) = uVar12;
  uVar13 = *param_2;
  uVar14 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(puVar3 + 0x18) = param_2[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar13;
  *(undefined8 *)(puVar3 + 0x28) = uVar14;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  uVar13 = param_2[4];
  uVar14 = param_2[7];
  uVar12 = param_2[6];
  *(undefined8 *)(puVar3 + 0x38) = param_2[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x48) = uVar14;
  *(undefined8 *)(puVar3 + 0x40) = uVar12;
  puStack_330 = param_2;
  func_0x000101b39fb4(param_2,&lStack_130);
  uVar13 = 0x112e02cf8;
  func_0x0001000285a8(0x112e02cf8,&UNK_10d9d5238);
  uVar12 = uVar13;
  FUN_101b3a874();
  lVar2 = lStack_398;
  func_0x000107c5f738(lStack_398,FUN_101b3a570,puVar3,FUN_101b3a590,auStack_340,uVar13,uVar12);
  lVar6 = lStack_380;
  func_0x000107c5f370(lStack_380);
  uVar13 = 0x112e02d20;
  func_0x000101b3b0cc(0x112e02d20,0x112e02cc8,&UNK_10d9d5210,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar12 = 0x112e02d28;
  func_0x000101b3b08c(0x112e02d28,PTR___s7SwiftUI16PlainButtonStyleVMa_110348b30,
                      PTR___s7SwiftUI16PlainButtonStyleVAA09PrimitivedE0AAMc_110348b20);
  lVar11 = lStack_350;
  lVar10 = lStack_370;
  lVar7 = lStack_388;
  func_0x000107c5f608(lStack_388,lVar6,lStack_370,lStack_350,uVar13,uVar12);
  (**(code **)(lStack_348 + 8))(lVar6,lVar11);
  (**(code **)(lStack_358 + 8))(lVar2,lVar10);
  lVar6 = lStack_390;
  func_0x000100cc6688(lVar8,lStack_390);
  lVar1 = lStack_360;
  lVar11 = lStack_368;
  lVar10 = lStack_378;
  pcVar9 = *(code **)(lStack_368 + 0x10);
  (*pcVar9)(lStack_378,lVar7,lStack_360);
  lStack_a8 = lStack_200;
  lStack_b0 = lStack_208;
  lStack_98 = lStack_1f0;
  lStack_a0 = lStack_1f8;
  lStack_88 = lStack_1e0;
  lStack_90 = lStack_1e8;
  lStack_e8 = lStack_240;
  lStack_f0 = lStack_248;
  lStack_d8 = lStack_230;
  lStack_e0 = lStack_238;
  lStack_c8 = lStack_220;
  lStack_d0 = lStack_228;
  lStack_b8 = lStack_210;
  lStack_c0 = lStack_218;
  puStack_128 = (undefined *)lStack_280;
  lStack_130 = lStack_288;
  lStack_118 = lStack_270;
  lStack_120 = lStack_278;
  lStack_108 = lStack_260;
  lStack_110 = lStack_268;
  lStack_f8 = lStack_250;
  lStack_100 = lStack_258;
  param_1[0x11] = lStack_200;
  param_1[0x10] = lStack_208;
  param_1[0x13] = lStack_1f0;
  param_1[0x12] = lStack_1f8;
  param_1[0x15] = lStack_1e0;
  param_1[0x14] = lStack_1e8;
  param_1[9] = lStack_240;
  param_1[8] = lStack_248;
  param_1[0xb] = lStack_230;
  param_1[10] = lStack_238;
  param_1[0xd] = lStack_220;
  param_1[0xc] = lStack_228;
  param_1[0xf] = lStack_210;
  param_1[0xe] = lStack_218;
  param_1[1] = lStack_280;
  *param_1 = lStack_288;
  param_1[3] = lStack_270;
  param_1[2] = lStack_278;
  lStack_80 = lStack_1d8;
  param_1[0x16] = lStack_1d8;
  param_1[5] = lStack_260;
  param_1[4] = lStack_268;
  param_1[7] = lStack_250;
  param_1[6] = lStack_258;
  lVar2 = 0x112e02d30;
  func_0x0001000285a8(0x112e02d30,&UNK_10d9d5248);
  func_0x000100cc6688(lVar6,(long)param_1 + (long)*(int *)(lVar2 + 0x30));
  (*pcVar9)((long)param_1 + (long)*(int *)(lVar2 + 0x40),lVar10,lVar1);
  FUN_101b3a9a4(&lStack_130,auStack_340);
  pcVar9 = *(code **)(lVar11 + 8);
  (*pcVar9)(lVar7,lVar1);
  func_0x000101b3a9e0(lVar8,0x112e02ce8,&UNK_10d9d5230);
  (*pcVar9)(lVar10,lVar1);
  func_0x000101b3a9e0(lVar6,0x112e02ce8,&UNK_10d9d5230);
  func_0x000101b3aa20(&lStack_288);
  return;
}



/* Entry: 101b39324; end: 101b3932f;  */

void FUN_101b39324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101b39330; end: 101b3939f;  */

void FUN_101b39330(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_28 = unaff_x20[0xf];
  uStack_30 = unaff_x20[0xe];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c5f7ac();
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0x112e02bf8;
  func_0x0001000285a8(0x112e02bf8,&UNK_10d9d5148);
  FUN_101b381e8((long)param_1 + (long)*(int *)(lVar1 + 0x2c),&uStack_a0);
  return;
}



/* Entry: 101b393a0; end: 101b397bb;  */

void FUN_101b393a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_88;
  
  func_0x000107c5f4ec();
  func_0x000103081b38();
  uVar4 = (ulong)*param_6;
  func_0x000103081288(*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x18),uVar4,
                      param_6[0x10]);
  puVar5 = &UNK_10d9d52c0;
  func_0x000107c614e0();
  puVar6 = (undefined8 *)0x112e02d48;
  func_0x0001000285a8(0x112e02d48,&UNK_10d9d52f0);
  puVar10 = (undefined8 *)(param_1 + *(int *)((long)puVar6 + 0x24));
  *puVar10 = puVar5;
  puVar10[1] = uVar4;
  func_0x000103080bb4();
  uStack_b8 = puVar6[1];
  uStack_c0 = *puVar6;
  uStack_a8 = puVar6[3];
  uStack_b0 = puVar6[2];
  uStack_98 = puVar6[5];
  uStack_a0 = puVar6[4];
  uStack_88 = puVar6[7];
  uVar14 = puVar6[6];
  uStack_90 = uVar14;
  func_0x000103080684();
  lVar7 = 0x112e02d50;
  func_0x0001000285a8(0x112e02d50,&UNK_10d9d52f8);
  *(undefined8 **)(param_1 + *(int *)(lVar7 + 0x24)) = puVar6;
  func_0x000107c5f568();
  uVar12 = 0x4038000000000000;
  func_0x000107c5f280();
  lVar8 = 0x112e02d58;
  uVar16 = uVar14;
  uVar13 = param_4;
  uVar15 = param_5;
  func_0x0001000285a8(0x112e02d58,&UNK_10d9d5300);
  puVar1 = (undefined1 *)(param_1 + *(int *)(lVar8 + 0x24));
  *puVar1 = (char)lVar7;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = uVar14;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f584();
  uVar12 = 0x402c000000000000;
  func_0x000107c5f280();
  lVar7 = 0x112e02d60;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = (char)lVar8;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x18) = uVar13;
  *(undefined8 *)(puVar1 + 0x20) = uVar15;
  puVar1[0x28] = 0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_1e0,0,1,0,1,0,1,0x404a000000000000,0,0,1);
  lVar7 = 0x112e02d68;
  func_0x0001000285a8();
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar6[9] = uStack_198;
  puVar6[8] = uStack_1a0;
  puVar6[0xb] = uStack_188;
  puVar6[10] = uStack_190;
  puVar6[0xd] = uStack_178;
  puVar6[0xc] = uStack_180;
  puVar6[1] = uStack_1d8;
  *puVar6 = uStack_1e0;
  puVar6[3] = uStack_1c8;
  puVar6[2] = uStack_1d0;
  puVar6[5] = uStack_1b8;
  puVar6[4] = uStack_1c0;
  puVar6[7] = uStack_1a8;
  puVar6[6] = uStack_1b0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_170,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar7 = 0x112e02d70;
  func_0x0001000285a8(0x112e02d70,&UNK_10d9d5318);
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar6[9] = uStack_128;
  puVar6[8] = uStack_130;
  puVar6[0xb] = uStack_118;
  puVar6[10] = uStack_120;
  puVar6[0xd] = uStack_108;
  puVar6[0xc] = uStack_110;
  puVar6[1] = uStack_168;
  *puVar6 = uStack_170;
  puVar6[3] = uStack_158;
  puVar6[2] = uStack_160;
  puVar6[5] = uStack_148;
  puVar6[4] = uStack_150;
  puVar6[7] = uStack_138;
  puVar6[6] = uStack_140;
  lVar7 = 0x112e02d78;
  func_0x0001000285a8(0x112e02d78,&UNK_10d9d5320);
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar9 = 0;
  func_0x000107c5f41c();
  pcVar11 = *(code **)(*(long *)(lVar9 + -8) + 0x68);
  puVar10 = puVar6;
  (*pcVar11)(puVar6,uVar3,lVar9);
  func_0x000103080b48();
  uStack_f8 = puVar10[1];
  uStack_100 = *puVar10;
  uStack_e8 = puVar10[3];
  uStack_f0 = puVar10[2];
  uStack_d8 = puVar10[5];
  uStack_e0 = puVar10[4];
  uStack_c8 = puVar10[7];
  uStack_d0 = puVar10[6];
  func_0x000103080684();
  lVar7 = 0x112e02d80;
  puVar5 = &UNK_10d9dee00;
  func_0x0001000285a8();
  *(undefined8 **)((long)puVar6 + (long)*(int *)(lVar7 + 0x34)) = puVar10;
  *(undefined2 *)((long)puVar6 + (long)*(int *)(lVar7 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar8 = 0x112e02d88;
  func_0x0001000285a8(0x112e02d88,&UNK_10d9d5330);
  plVar2 = (long *)((long)puVar6 + (long)*(int *)(lVar8 + 0x24));
  *plVar2 = lVar7;
  plVar2[1] = (long)puVar5;
  lVar7 = 0x112e02d90;
  func_0x0001000285a8(0x112e02d90,&UNK_10d9d5338);
  lVar7 = param_1 + *(int *)(lVar7 + 0x24);
  (*pcVar11)(lVar7,uVar3,lVar9);
  uVar4 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar7 + *(int *)(uVar4 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar13 = 0x3feeb851eb851eb8;
  uVar15 = 0x3ff0000000000000;
  uVar16 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar16 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar7 = 0x112e02da0;
  func_0x0001000285a8(0x112e02da0,&UNK_10d9d5348);
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar6 = uVar16;
  puVar6[1] = uVar16;
  puVar6[2] = uVar13;
  puVar6[3] = uVar15;
  func_0x000107c5f7c8(0x3fd0000000000000,0x3fe6666666666666,0);
  lVar9 = lVar7;
  func_0x000107c5f4f0();
  lVar8 = 0x112e02da8;
  func_0x0001000285a8(0x112e02da8,&UNK_10d9d5350);
  plVar2 = (long *)(param_1 + *(int *)(lVar8 + 0x24));
  *plVar2 = lVar7;
  *(byte *)(plVar2 + 1) = (byte)lVar9 & 1;
  return;
}



/* Entry: 101b397bc; end: 101b397bf;  */

void FUN_101b397bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_88;
  
  func_0x000107c5f4ec();
  func_0x000103081b38();
  uVar4 = (ulong)*param_6;
  func_0x000103081288(*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x18),uVar4,
                      param_6[0x10]);
  puVar5 = &UNK_10d9d52c0;
  func_0x000107c614e0();
  puVar6 = (undefined8 *)0x112e02d48;
  func_0x0001000285a8(0x112e02d48,&UNK_10d9d52f0);
  puVar10 = (undefined8 *)(param_1 + *(int *)((long)puVar6 + 0x24));
  *puVar10 = puVar5;
  puVar10[1] = uVar4;
  func_0x000103080bb4();
  uStack_b8 = puVar6[1];
  uStack_c0 = *puVar6;
  uStack_a8 = puVar6[3];
  uStack_b0 = puVar6[2];
  uStack_98 = puVar6[5];
  uStack_a0 = puVar6[4];
  uStack_88 = puVar6[7];
  uVar14 = puVar6[6];
  uStack_90 = uVar14;
  func_0x000103080684();
  lVar7 = 0x112e02d50;
  func_0x0001000285a8(0x112e02d50,&UNK_10d9d52f8);
  *(undefined8 **)(param_1 + *(int *)(lVar7 + 0x24)) = puVar6;
  func_0x000107c5f568();
  uVar12 = 0x4038000000000000;
  func_0x000107c5f280();
  lVar8 = 0x112e02d58;
  uVar16 = uVar14;
  uVar13 = param_4;
  uVar15 = param_5;
  func_0x0001000285a8(0x112e02d58,&UNK_10d9d5300);
  puVar1 = (undefined1 *)(param_1 + *(int *)(lVar8 + 0x24));
  *puVar1 = (char)lVar7;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = uVar14;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f584();
  uVar12 = 0x402c000000000000;
  func_0x000107c5f280();
  lVar7 = 0x112e02d60;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = (char)lVar8;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x18) = uVar13;
  *(undefined8 *)(puVar1 + 0x20) = uVar15;
  puVar1[0x28] = 0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_1e0,0,1,0,1,0,1,0x404a000000000000,0,0,1);
  lVar7 = 0x112e02d68;
  func_0x0001000285a8();
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar6[9] = uStack_198;
  puVar6[8] = uStack_1a0;
  puVar6[0xb] = uStack_188;
  puVar6[10] = uStack_190;
  puVar6[0xd] = uStack_178;
  puVar6[0xc] = uStack_180;
  puVar6[1] = uStack_1d8;
  *puVar6 = uStack_1e0;
  puVar6[3] = uStack_1c8;
  puVar6[2] = uStack_1d0;
  puVar6[5] = uStack_1b8;
  puVar6[4] = uStack_1c0;
  puVar6[7] = uStack_1a8;
  puVar6[6] = uStack_1b0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_170,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar7 = 0x112e02d70;
  func_0x0001000285a8(0x112e02d70,&UNK_10d9d5318);
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar6[9] = uStack_128;
  puVar6[8] = uStack_130;
  puVar6[0xb] = uStack_118;
  puVar6[10] = uStack_120;
  puVar6[0xd] = uStack_108;
  puVar6[0xc] = uStack_110;
  puVar6[1] = uStack_168;
  *puVar6 = uStack_170;
  puVar6[3] = uStack_158;
  puVar6[2] = uStack_160;
  puVar6[5] = uStack_148;
  puVar6[4] = uStack_150;
  puVar6[7] = uStack_138;
  puVar6[6] = uStack_140;
  lVar7 = 0x112e02d78;
  func_0x0001000285a8(0x112e02d78,&UNK_10d9d5320);
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar9 = 0;
  func_0x000107c5f41c();
  pcVar11 = *(code **)(*(long *)(lVar9 + -8) + 0x68);
  puVar10 = puVar6;
  (*pcVar11)(puVar6,uVar3,lVar9);
  func_0x000103080b48();
  uStack_f8 = puVar10[1];
  uStack_100 = *puVar10;
  uStack_e8 = puVar10[3];
  uStack_f0 = puVar10[2];
  uStack_d8 = puVar10[5];
  uStack_e0 = puVar10[4];
  uStack_c8 = puVar10[7];
  uStack_d0 = puVar10[6];
  func_0x000103080684();
  lVar7 = 0x112e02d80;
  puVar5 = &UNK_10d9dee00;
  func_0x0001000285a8();
  *(undefined8 **)((long)puVar6 + (long)*(int *)(lVar7 + 0x34)) = puVar10;
  *(undefined2 *)((long)puVar6 + (long)*(int *)(lVar7 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar8 = 0x112e02d88;
  func_0x0001000285a8(0x112e02d88,&UNK_10d9d5330);
  plVar2 = (long *)((long)puVar6 + (long)*(int *)(lVar8 + 0x24));
  *plVar2 = lVar7;
  plVar2[1] = (long)puVar5;
  lVar7 = 0x112e02d90;
  func_0x0001000285a8(0x112e02d90,&UNK_10d9d5338);
  lVar7 = param_1 + *(int *)(lVar7 + 0x24);
  (*pcVar11)(lVar7,uVar3,lVar9);
  uVar4 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar7 + *(int *)(uVar4 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar13 = 0x3feeb851eb851eb8;
  uVar15 = 0x3ff0000000000000;
  uVar16 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar16 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar7 = 0x112e02da0;
  func_0x0001000285a8(0x112e02da0,&UNK_10d9d5348);
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar6 = uVar16;
  puVar6[1] = uVar16;
  puVar6[2] = uVar13;
  puVar6[3] = uVar15;
  func_0x000107c5f7c8(0x3fd0000000000000,0x3fe6666666666666,0);
  lVar9 = lVar7;
  func_0x000107c5f4f0();
  lVar8 = 0x112e02da8;
  func_0x0001000285a8(0x112e02da8,&UNK_10d9d5350);
  plVar2 = (long *)(param_1 + *(int *)(lVar8 + 0x24));
  *plVar2 = lVar7;
  *(byte *)(plVar2 + 1) = (byte)lVar9 & 1;
  return;
}



/* Entry: 101b397c0; end: 101b3985b;  */

void FUN_101b397c0(undefined1 *param_1,undefined1 param_2)

{
  func_0x000107c5f3d4();
  *param_1 = param_2;
  return;
}



/* Entry: 101b3985c; end: 101b399df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3985c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e02b78;
  func_0x000107c61614(unaff_x20 + _DAT_112e02b78,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e02b80) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e02b88) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02b90);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02b98);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02ba0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02ba8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bb0);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bb8);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bc0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e02bc8);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b399e0; end: 101b39a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b399e0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if ((*(byte *)(lVar5 + _DAT_112e02b88) & 1) == 0) {
      pcVar1 = *(code **)(lVar5 + _DAT_112e02bb8);
      uVar2 = ((undefined8 *)(lVar5 + _DAT_112e02bb8))[1];
      *(undefined1 *)(lVar5 + _DAT_112e02b88) = 1;
      lVar3 = _DAT_112e02b80;
      lVar7 = *(long *)(lVar5 + _DAT_112e02b80);
      if (lVar7 == 0) {
        (*pcVar1)();
      }
      else {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        puStack_70 = &UNK_1104477f8;
        ppuVar6 = &puStack_88;
        pcStack_68 = pcVar1;
        uStack_60 = uVar2;
        func_0x000107c60bc4(ppuVar6);
        uVar4 = uStack_60;
        func_0x000107c61174(lVar7);
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(uVar4);
        func_0x000107c420a8(lVar7);
        func_0x000107c61170(lVar7);
        func_0x000107c60bd0(ppuVar6);
        *(undefined8 *)(lVar5 + lVar3) = 0;
        func_0x000107c61170(lVar5);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101b39a1c; end: 101b39b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b39a1c(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if ((*(byte *)(lVar5 + _DAT_112e02b88) & 1) == 0) {
      pcVar1 = *(code **)(lVar5 + *param_1);
      uVar2 = ((undefined8 *)(lVar5 + *param_1))[1];
      *(undefined1 *)(lVar5 + _DAT_112e02b88) = 1;
      lVar3 = _DAT_112e02b80;
      lVar7 = *(long *)(lVar5 + _DAT_112e02b80);
      if (lVar7 == 0) {
        (*pcVar1)();
      }
      else {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        ppuVar6 = &puStack_88;
        uStack_70 = param_2;
        pcStack_68 = pcVar1;
        uStack_60 = uVar2;
        func_0x000107c60bc4(ppuVar6);
        uVar4 = uStack_60;
        func_0x000107c61174(lVar7);
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(uVar4);
        func_0x000107c420a8(lVar7);
        func_0x000107c61170(lVar7);
        func_0x000107c60bd0(ppuVar6);
        *(undefined8 *)(lVar5 + lVar3) = 0;
        func_0x000107c61170(lVar5);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101b39b44; end: 101b39b83;  */

void FUN_101b39b44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113487010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d50f8;
  func_0x000107c61520(&UNK_10d9d50f8,&UNK_110447660);
  puRam0000000113487010 = puVar1;
  return;
}



/* Entry: 101b39b84; end: 101b39ba7;  */

undefined8 FUN_101b39b84(undefined8 param_1)

{
  func_0x000101b39bf4();
  return param_1;
}



/* Entry: 101b39ba8; end: 101b39bc7;  */

void FUN_101b39ba8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8ee0);
  return;
}



/* Entry: 101b39bc8; end: 101b39c4b;  */

long FUN_101b39bc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b39c4c; end: 101b39d1f;  */

undefined8 * FUN_101b39c4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[8] = param_2[8];
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  uVar6 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar6;
  uVar4 = param_2[0xf];
  uVar7 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar7;
  param_1[0xf] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  return param_1;
}



/* Entry: 101b39d20; end: 101b39e3f;  */

undefined8 * FUN_101b39d20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xb];
  uVar1 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xd];
  uVar1 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 101b39e40; end: 101b39eeb;  */

undefined8 * FUN_101b39e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  func_0x000107c6142c(param_1[9]);
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  func_0x000107c61574(param_1[0xb]);
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  func_0x000107c61574(param_1[0xd]);
  uVar1 = param_2[0xf];
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  uVar2 = param_1[0xf];
  param_1[0xf] = uVar1;
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 101b39eec; end: 101b39fc3;  */

int FUN_101b39eec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b39fc4; end: 101b3a033;  */

void FUN_101b39fc4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000112e02c18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e02c10;
  func_0x00010002969c(0x112e02c10,&UNK_10d9d5160);
  puStack_20 = PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0;
  puStack_18 = PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVAA12ViewModifierAAWP_1103491f0;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_20);
  puRam0000000112e02c18 = puVar2;
  return;
}



/* Entry: 101b3a034; end: 101b3a20b;  */

void FUN_101b3a034(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = (undefined1)*(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5f438();
  *param_1 = param_6;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar4 = 0x112e02c90;
  func_0x0001000285a8(0x112e02c90,&UNK_10d9d51a8);
  FUN_101b38574((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  func_0x000107c5f568();
  uVar8 = 0x4040000000000000;
  func_0x000107c5f280();
  lVar4 = 0x112e02c58;
  uVar9 = param_3;
  uVar10 = param_4;
  uVar11 = param_5;
  func_0x0001000285a8(0x112e02c58,&UNK_10d9d5180);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f584();
  uVar8 = 0x4038000000000000;
  func_0x000107c5f280();
  lVar5 = 0x112e02c48;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = (char)lVar4;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_100,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  puVar6 = (undefined8 *)0x112e02c38;
  func_0x0001000285a8(0x112e02c38,&UNK_10d9d5170);
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)((long)puVar6 + 0x24));
  puVar7[9] = uStack_b8;
  puVar7[8] = uStack_c0;
  puVar7[0xb] = uStack_a8;
  puVar7[10] = uStack_b0;
  puVar7[0xd] = uStack_98;
  puVar7[0xc] = uStack_a0;
  puVar7[1] = uStack_f8;
  *puVar7 = uStack_100;
  puVar7[3] = uStack_e8;
  puVar7[2] = uStack_f0;
  puVar7[5] = uStack_d8;
  puVar7[4] = uStack_e0;
  puVar7[7] = uStack_c8;
  puVar7[6] = uStack_d0;
  func_0x000103080af4();
  uStack_88 = puVar6[1];
  uStack_90 = *puVar6;
  uStack_78 = puVar6[3];
  uStack_80 = puVar6[2];
  uStack_68 = puVar6[5];
  uStack_70 = puVar6[4];
  uStack_58 = puVar6[7];
  uStack_60 = puVar6[6];
  func_0x000103080684();
  puVar7 = puVar6;
  func_0x000107c5f56c();
  lVar4 = 0x112e02c20;
  func_0x0001000285a8(0x112e02c20,&UNK_10d9d5168);
  plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *plVar2 = (long)puVar6;
  *(char *)(plVar2 + 1) = (char)puVar7;
  return;
}



/* Entry: 101b3a20c; end: 101b3a4b3;  */

void FUN_101b3a20c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e02c28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e02c20;
  func_0x00010002969c(0x112e02c20,&UNK_10d9d5168);
  uVar2 = uVar1;
  func_0x000101b3a2a4();
  uVar3 = 0x112e02c70;
  func_0x000101b3b0cc(0x112e02c70,0x112e02c78,&UNK_10d9d5190,
                      PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_110349100);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e02c28 = puVar4;
  return;
}



/* Entry: 101b3a4b4; end: 101b3a4d3;  */

void FUN_101b3a4b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x38);
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x30);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 101b3a4d4; end: 101b3a56f;  */

void FUN_101b3a4d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001134870a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d5288;
  func_0x000107c61520(&UNK_10d9d5288,&UNK_110447830);
  puRam00000001134870a8 = puVar1;
  return;
}



/* Entry: 101b3a570; end: 101b3a58f;  */

void FUN_101b3a570(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Entry: 101b3a590; end: 101b3a873;  */

void FUN_101b3a590(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_d3;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_950 [344];
  undefined1 auStack_7f8 [8];
  undefined8 uStack_7f0;
  undefined1 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 uStack_748;
  undefined8 uStack_747;
  undefined8 uStack_73f;
  undefined8 uStack_737;
  undefined8 uStack_72f;
  undefined8 uStack_727;
  undefined8 uStack_71f;
  undefined8 uStack_717;
  undefined8 uStack_70f;
  undefined8 uStack_707;
  undefined8 uStack_6ff;
  undefined8 uStack_6f7;
  undefined8 uStack_6ef;
  undefined8 uStack_6e7;
  undefined7 uStack_6df;
  undefined1 uStack_6d8;
  undefined7 uStack_6d7;
  undefined1 auStack_6d0 [8];
  undefined8 uStack_6c8;
  undefined1 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 uStack_620;
  undefined8 uStack_61f;
  undefined8 uStack_617;
  undefined8 uStack_60f;
  undefined8 uStack_607;
  undefined8 uStack_5ff;
  undefined8 uStack_5f7;
  undefined8 uStack_5ef;
  undefined8 uStack_5e7;
  undefined8 uStack_5df;
  undefined8 uStack_5d7;
  undefined8 uStack_5cf;
  undefined8 uStack_5c7;
  undefined8 uStack_5bf;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  undefined1 auStack_5a8 [296];
  undefined1 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined1 auStack_450 [296];
  undefined1 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 uStack_2e9;
  undefined7 uStack_2e8;
  undefined1 uStack_2e1;
  undefined7 uStack_2e0;
  undefined1 uStack_2d9;
  undefined7 uStack_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  undefined1 uStack_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined1 uStack_2b9;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined7 uStack_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [296];
  undefined1 auStack_110 [128];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  func_0x000103081b20();
  uVar3 = *(undefined1 *)param_2;
  uVar10 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  uVar11 = param_2[3];
  func_0x000103080be4();
  uStack_278 = param_2[1];
  uStack_280 = *param_2;
  uStack_268 = param_2[3];
  uStack_270 = param_2[2];
  uStack_258 = param_2[5];
  uStack_260 = param_2[4];
  uStack_248 = param_2[7];
  uStack_250 = param_2[6];
  uVar1 = *(undefined8 *)(lVar6 + 0x40);
  uVar2 = *(undefined8 *)(lVar6 + 0x48);
  func_0x000107c61434();
  func_0x000107c5f7ac();
  uVar5 = 0;
  func_0x000107c5f388(auStack_110,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  uStack_2b9 = (undefined1)auStack_110._56_8_;
  uStack_2b8 = SUB87(auStack_110._56_8_,1);
  uStack_2c1 = (undefined1)auStack_110._48_8_;
  uStack_2c0 = SUB87(auStack_110._48_8_,1);
  uStack_2a9 = (undefined1)auStack_110._72_8_;
  uStack_2a8 = SUB87(auStack_110._72_8_,1);
  uStack_2b1 = (undefined1)auStack_110._64_8_;
  uStack_2b0 = SUB87(auStack_110._64_8_,1);
  uStack_299 = (undefined1)auStack_110._88_8_;
  uStack_298 = SUB87(auStack_110._88_8_,1);
  uStack_2a1 = (undefined1)auStack_110._80_8_;
  uStack_2a0 = SUB87(auStack_110._80_8_,1);
  uStack_289 = (undefined1)auStack_110._104_8_;
  uStack_288 = SUB87(auStack_110._104_8_,1);
  uStack_291 = (undefined1)auStack_110._96_8_;
  uStack_290 = SUB87(auStack_110._96_8_,1);
  uStack_2e9 = (undefined1)auStack_110._8_8_;
  uStack_2e8 = SUB87(auStack_110._8_8_,1);
  uStack_2f1 = (undefined1)auStack_110._0_8_;
  uStack_2f0 = SUB87(auStack_110._0_8_,1);
  uStack_2d9 = (undefined1)auStack_110._24_8_;
  uStack_2d8 = SUB87(auStack_110._24_8_,1);
  uStack_2e1 = (undefined1)auStack_110._16_8_;
  uStack_2e0 = SUB87(auStack_110._16_8_,1);
  uStack_2c9 = (undefined1)auStack_110._40_8_;
  uStack_2c8 = SUB87(auStack_110._40_8_,1);
  uStack_2d1 = (undefined1)auStack_110._32_8_;
  uStack_2d0 = SUB87(auStack_110._32_8_,1);
  func_0x000107c5f584();
  uStack_7d0 = uStack_278;
  uStack_7d8 = uStack_280;
  uStack_7c0 = uStack_268;
  uStack_7c8 = uStack_270;
  uStack_7b0 = uStack_258;
  uStack_7b8 = uStack_260;
  uStack_7a0 = uStack_248;
  uStack_7a8 = uStack_250;
  uStack_6ef = CONCAT17(uStack_299,uStack_2a0);
  uStack_6f7 = CONCAT17(uStack_2a1,uStack_2a8);
  uStack_6e7 = CONCAT17(uStack_291,uStack_298);
  uStack_6ff = CONCAT17(uStack_2a9,uStack_2b0);
  uVar9 = CONCAT17(uStack_2b1,uStack_2b8);
  uStack_6df = uStack_290;
  uStack_73f = CONCAT17(uStack_2e9,uStack_2f0);
  uStack_747 = CONCAT17(uStack_2f1,uStack_2f8);
  uStack_72f = CONCAT17(uStack_2d9,uStack_2e0);
  uStack_737 = CONCAT17(uStack_2e1,uStack_2e8);
  uStack_71f = CONCAT17(uStack_2c9,uStack_2d0);
  uStack_727 = CONCAT17(uStack_2d1,uStack_2d8);
  uStack_70f = CONCAT17(uStack_2b9,uStack_2c0);
  uVar8 = CONCAT17(uStack_2c1,uStack_2c8);
  uStack_798 = 0;
  uStack_748 = 1;
  uStack_6d8 = uStack_289;
  uStack_6d7 = uStack_288;
  uVar7 = 0x4020000000000000;
  auStack_7f8[0] = uVar3;
  uStack_7f0 = uVar10;
  uStack_7e8 = uVar4;
  uStack_7e0 = uVar11;
  uStack_790 = uVar1;
  uStack_788 = uVar2;
  uStack_717 = uVar8;
  uStack_707 = uVar9;
  func_0x000107c5f280();
  func_0x000107c610b4(auStack_238,auStack_7f8,0x128);
  uStack_6a8 = uStack_278;
  uStack_6b0 = uStack_280;
  uStack_698 = uStack_268;
  uStack_6a0 = uStack_270;
  uStack_688 = uStack_258;
  uStack_690 = uStack_260;
  uStack_678 = uStack_248;
  uStack_680 = uStack_250;
  uStack_670 = 0;
  uStack_620 = 1;
  uStack_5c7 = CONCAT17(uStack_299,uStack_2a0);
  uStack_5cf = CONCAT17(uStack_2a1,uStack_2a8);
  uStack_5bf = CONCAT17(uStack_291,uStack_298);
  uStack_5d7 = CONCAT17(uStack_2a9,uStack_2b0);
  uStack_5df = CONCAT17(uStack_2b1,uStack_2b8);
  uStack_5b7 = uStack_290;
  uStack_5b0 = uStack_289;
  uStack_5af = uStack_288;
  uStack_617 = CONCAT17(uStack_2e9,uStack_2f0);
  uStack_61f = CONCAT17(uStack_2f1,uStack_2f8);
  uStack_607 = CONCAT17(uStack_2d9,uStack_2e0);
  uStack_60f = CONCAT17(uStack_2e1,uStack_2e8);
  uStack_5f7 = CONCAT17(uStack_2c9,uStack_2d0);
  uStack_5ff = CONCAT17(uStack_2d1,uStack_2d8);
  uStack_5e7 = CONCAT17(uStack_2b9,uStack_2c0);
  uStack_5ef = CONCAT17(uStack_2c1,uStack_2c8);
  auStack_6d0[0] = uVar3;
  uStack_6c8 = uVar10;
  uStack_6c0 = uVar4;
  uStack_6b8 = uVar11;
  uStack_668 = uVar1;
  uStack_660 = uVar2;
  func_0x000101b3aa54(auStack_7f8,auStack_450,0x112e02d10,&UNK_10d9d5240);
  func_0x000101b3aa9c(auStack_6d0,0x112e02d10,&UNK_10d9d5240);
  func_0x000107c610b4(auStack_5a8,auStack_238,0x128);
  uStack_458 = 0;
  uStack_480 = uVar5;
  uStack_478 = uVar7;
  uStack_470 = uVar8;
  uStack_468 = uVar9;
  uStack_460 = in_d3;
  func_0x000107c610b4(auStack_450,auStack_238,0x128);
  uStack_300 = 0;
  uStack_328 = uVar5;
  uStack_320 = uVar7;
  uStack_318 = uVar8;
  uStack_310 = uVar9;
  uStack_308 = in_d3;
  func_0x000101b3aa54(auStack_5a8,auStack_950,0x112e02cf8,&UNK_10d9d5238);
  func_0x000101b3aa9c(auStack_450,0x112e02cf8,&UNK_10d9d5238);
  func_0x000107c610b4(param_1,auStack_5a8,0x151);
  return;
}



/* Entry: 101b3a874; end: 101b3a963;  */

void FUN_101b3a874(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e02d00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e02cf8;
  func_0x00010002969c(0x112e02cf8,&UNK_10d9d5238);
  uVar2 = uVar1;
  func_0x000101b3a8ec();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e02d00 = puVar3;
  return;
}



/* Entry: 101b3a964; end: 101b3a9a3;  */

void FUN_101b3a964(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e02d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80700;
  func_0x000107c61520(&UNK_10db80700,&UNK_110603ba0);
  puRam0000000112e02d18 = puVar1;
  return;
}



/* Entry: 101b3a9a4; end: 101b3aadb;  */

undefined8 FUN_101b3a9a4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10305e928)(param_2,param_1);
  return param_2;
}



/* Entry: 101b3aadc; end: 101b3ab23;  */

void FUN_101b3aadc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101b3aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101b3ab24; end: 101b3b10f;  */

void FUN_101b3ab24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e02db0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e02da8;
  func_0x00010002969c(0x112e02da8,&UNK_10d9d5350);
  uVar2 = uVar1;
  func_0x000101b3abbc();
  uVar3 = 0x112e02e28;
  func_0x000101b3b0cc(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e02db0 = puVar4;
  return;
}



/* Entry: 101b3b110; end: 101b3b12b;  */

void FUN_101b3b110(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Entry: 101b3b12c; end: 101b3b313;  */

long FUN_101b3b12c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000100945a6c();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return unaff_x20;
}



/* Entry: 101b3b314; end: 101b3b39f;  */

void FUN_101b3b314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e02e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126dee58;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e02e38 = puVar1;
  return;
}



/* Entry: 101b3b3a0; end: 101b3b3db;  */

undefined ** FUN_101b3b3a0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 101b3b3dc; end: 101b3b427;  */

void FUN_101b3b3dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101b3b428,param_1);
  return;
}



/* Entry: 101b3b428; end: 101b3b48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3b428(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_101b3b63c();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e02f30) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 101b3b490; end: 101b3b4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3b490(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02f30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b3b4dc; end: 101b3b5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3b4dc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4453c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
    func_0x000107c30efc(param_1);
  }
  else {
    uVar1 = uVar2;
    func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_pushToValdiMarshaller__112624b18);
    if ((uVar1 & 1) == 0) {
      func_0x000107c30efc(param_1);
    }
    else {
      func_0x000107c4f6d8(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 101b3b5ac; end: 101b3b5e7; -[_TtC24GroupStorePluginProvider16GroupStorePlugin pushToValdiMarshaller:] */

undefined8 FUN_101b3b5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101b3b4dc(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 101b3b5e8; end: 101b3b61b;  */

void FUN_101b3b5e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b3b61c; end: 101b3b62b;  */

undefined1  [16] FUN_101b3b61c(void)

{
  return ZEXT816(0x110447a80);
}



/* Entry: 101b3b62c; end: 101b3b63b; -[_TtC24GroupStorePluginProvider16GroupStorePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3b62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e02f30));
  return;
}



/* Entry: 101b3b63c; end: 101b3b65b;  */

void FUN_101b3b63c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8ff0);
  return;
}



/* Entry: 101b3b65c; end: 101b3b847;  */

void FUN_101b3b65c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_b0;
  func_0x000100083b20(&puStack_80);
  puVar4 = puStack_80;
  puVar3 = puStack_80;
  func_0x000107c43a50();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000100083b20(&puStack_80);
  puVar4 = puStack_80;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  if (puVar4 != (undefined *)0x0) {
    uVar5 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010effe7c0);
    puVar6 = puVar4;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(uVar5);
    puVar4 = &UNK_110447b68;
    func_0x000107c613fc(&UNK_110447b68,0x19,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    puVar4[0x18] = (char)puVar6;
    puVar6 = &UNK_110447b90;
    func_0x000107c613fc(&UNK_110447b90,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar3;
    puVar7 = PTR_PTR_1126a8a60;
    func_0x000107c610f8();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_101b3b94c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    uStack_70 = 0x101b3bdf4;
    puStack_68 = &UNK_110447ba8;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar8);
    pcStack_90 = FUN_101b3ba3c;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    uStack_a0 = 0x101b3bdf0;
    puStack_98 = &UNK_110447bd0;
    puStack_88 = puVar6;
    func_0x000107c60bc4(&puStack_b0);
    func_0x000107c61174(puVar3);
    func_0x000107c46a64();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_88);
    func_0x000107c61574(puStack_58);
    *param_1 = puVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3b848);
  (*pcVar2)();
}



/* Entry: 101b3b848; end: 101b3b85f;  */

void FUN_101b3b848(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_b0;
  func_0x000100083b20(&puStack_80,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  puVar4 = puStack_80;
  puVar3 = puStack_80;
  func_0x000107c43a50();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000100083b20(&puStack_80);
  puVar4 = puStack_80;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  if (puVar4 != (undefined *)0x0) {
    uVar5 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010effe7c0);
    puVar6 = puVar4;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(uVar5);
    puVar4 = &UNK_110447b68;
    func_0x000107c613fc(&UNK_110447b68,0x19,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    puVar4[0x18] = (char)puVar6;
    puVar6 = &UNK_110447b90;
    func_0x000107c613fc(&UNK_110447b90,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar3;
    puVar7 = PTR_PTR_1126a8a60;
    func_0x000107c610f8();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_101b3b94c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    uStack_70 = 0x101b3bdf4;
    puStack_68 = &UNK_110447ba8;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar8);
    pcStack_90 = FUN_101b3ba3c;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    uStack_a0 = 0x101b3bdf0;
    puStack_98 = &UNK_110447bd0;
    puStack_88 = puVar6;
    func_0x000107c60bc4(&puStack_b0);
    func_0x000107c61174(puVar3);
    func_0x000107c46a64();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_88);
    func_0x000107c61574(puStack_58);
    *param_1 = puVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3b848);
  (*pcVar2)();
}



/* Entry: 101b3b860; end: 101b3b94b;  */

undefined * FUN_101b3b860(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110447c58;
  func_0x000107c613fc(&UNK_110447c58,0x21,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar2[0x20] = param_3;
  uStack_50 = 0x101b3bb60;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b3bdfc;
  puStack_58 = &UNK_110447c70;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  return puVar1;
}



/* Entry: 101b3b94c; end: 101b3b957;  */

undefined * FUN_101b3b94c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_110447c58;
  func_0x000107c613fc(&UNK_110447c58,0x21,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar3[0x20] = uVar1;
  uStack_50 = 0x101b3bb60;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b3bdfc;
  puStack_58 = &UNK_110447c70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  return puVar2;
}



/* Entry: 101b3b958; end: 101b3ba3b;  */

undefined * FUN_101b3b958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110447c08;
  func_0x000107c613fc(&UNK_110447c08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_50 = FUN_101b3bb58;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b3bdf8;
  puStack_58 = &UNK_110447c20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  return puVar1;
}



/* Entry: 101b3ba3c; end: 101b3ba43;  */

undefined * FUN_101b3ba3c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110447c08;
  func_0x000107c613fc(&UNK_110447c08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_50 = FUN_101b3bb58;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b3bdf8;
  puStack_58 = &UNK_110447c20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  return puVar1;
}



/* Entry: 101b3ba44; end: 101b3baa7;  */

void FUN_101b3ba44(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c5abcc(param_2);
    func_0x000107c5abc8(param_2);
  }
  func_0x000107c610f8(PTR_PTR_1126cf628);
                    /* WARNING: Could not recover jumptable at 0x00010c016110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101b3baa8; end: 101b3badf;  */

void FUN_101b3baa8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101b3bae0; end: 101b3bafb;  */

void FUN_101b3bae0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101b3bafc; end: 101b3bb57;  */

void FUN_101b3bafc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 101b3bb58; end: 101b3bb6b;  */

void FUN_101b3bb58(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    func_0x000107c5abcc(lVar1);
    func_0x000107c5abc8(lVar1);
  }
  func_0x000107c610f8(PTR_PTR_1126cf628);
                    /* WARNING: Could not recover jumptable at 0x00010c016110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101b3bb6c; end: 101b3bdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3bb6c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  long lVar6;
  
  lVar3 = 0;
  func_0x000107c5ffd8();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&pcStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar6 = param_2;
    func_0x000107c5abcc();
    uVar2 = (undefined4)lVar6;
    func_0x000107c5abc8();
  }
  if ((param_3 & 1) != 0) {
    uVar7 = 0;
    func_0x0001000295c4();
    pcStack_90 = "FRIENDMOJI_PROVIDER";
    uStack_88 = uVar7;
    func_0x000107c5f80c(lVar5);
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100029608();
    uVar9 = 0x112d4ac70;
    uStack_7c = uVar2;
    func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
    uVar8 = uVar9;
    func_0x00010002964c();
    func_0x000107c60264(lVar12,&puStack_68,uVar9,uVar8,lVar4,uVar7);
    (**(code **)(lVar11 + 0x68))
              (lVar10,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
               ,lVar3);
    uVar9 = 0xd000000000000026;
    func_0x000107c5ffec(0xd000000000000026,(ulong)pcStack_90 | 0x8000000000000000,lVar5,lVar12,
                        lVar10,0);
    lVar4 = 0;
    FUN_101b3e80c();
    lVar3 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112e02f68) = param_1;
    *(char *)(lVar3 + _DAT_112e02f70) = (char)uStack_7c;
    *(char *)(lVar3 + _DAT_112e02f78) = (char)param_2;
    *(undefined8 *)(lVar3 + _DAT_112e02f80) = uVar9;
    puVar1 = PTR_s_init_1125d9248;
    lStack_78 = lVar3;
    lStack_70 = lVar4;
    func_0x000107c61174(param_1);
    func_0x000107c61154(&lStack_78,puVar1);
    return;
  }
  func_0x000107c610f8(PTR_PTR_1126a8a68);
                    /* WARNING: Could not recover jumptable at 0x00010c016110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101b3bdd8; end: 101b3bdff;  */

void FUN_101b3bdd8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101b3be00; end: 101b3be8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3be00(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02f68) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112e02f70) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112e02f78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e02f80) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b3be8c; end: 101b3be97; -[ValdiFriendmojiProvider pushToValdiMarshaller:] */

void FUN_101b3be8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 101b3be98; end: 101b3c04b;  */

void FUN_101b3be98(code *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar6 = param_3;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x000107c61174();
    func_0x000100403514(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3c04c);
      (*pcVar2)();
    }
    uVar7 = 0;
    do {
      uVar5 = param_3;
      if ((param_3 & 0xc000000000000001) == 0) {
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3c01c);
          (*pcVar2)();
        }
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3c020);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_3 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar7;
        FUN_101b3df8c(uVar7,param_3,&PTR_PTR_1126a8a78,0x112e02fd8);
      }
      uVar4 = uVar3;
      FUN_101b3c058();
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(ulong *)(puVar1 + uVar3 * 0x10 + 0x20) = uVar4;
      *(ulong *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar5;
    } while (uVar6 != uVar7);
    func_0x000107c61170(param_4);
  }
  (*param_1)(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 101b3c04c; end: 101b3c057;  */

void FUN_101b3c04c(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  pcVar3 = *(code **)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  if (uVar1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar8 = uVar1;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    func_0x000107c61174();
    func_0x000100403514(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b3c04c);
      (*pcVar3)();
    }
    uVar9 = 0;
    do {
      uVar7 = uVar1;
      if ((uVar1 & 0xc000000000000001) == 0) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b3c01c);
          (*pcVar3)();
        }
        if (*(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b3c020);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(uVar1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar9;
        FUN_101b3df8c(uVar9,uVar1,&PTR_PTR_1126a8a78,0x112e02fd8);
      }
      uVar6 = uVar5;
      FUN_101b3c058();
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar5) {
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar5 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar5 + 1;
      *(ulong *)(puVar2 + uVar5 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puVar2 + uVar5 * 0x10 + 0x28) = uVar7;
    } while (uVar8 != uVar9);
    func_0x000107c61170(uVar4);
  }
  (*pcVar3)(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
  return;
}



/* Entry: 101b3c058; end: 101b3c297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3c058(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  uVar3 = param_1;
  func_0x000107c43a60();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar1 = 0;
    FUN_101b3e834(0,0x112e02fa0,&PTR_PTR_1126dc9b8);
    uVar2 = uVar3;
    func_0x000107c5fc54(uVar3,uVar1);
    func_0x000107c61170(uVar3);
    if (uVar2 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar3 = uVar2;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112e02f68);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar3 = uVar2;
        FUN_101b3e148(uVar2);
        func_0x000107c6142c(uVar2);
        uVar1 = 0;
        FUN_101b3e834(0,0x112de0af8,&PTR_PTR_1126ba270);
        uVar2 = uVar3;
        func_0x000107c5fc48(uVar3,uVar1);
        func_0x000107c6142c(uVar3);
        uVar3 = param_1;
        func_0x000107c5c0d4();
        func_0x000107c61180();
        if (uVar3 != 0) {
          func_0x000107c49820();
          func_0x000107c61170(uVar3);
        }
        uVar3 = param_1;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar3 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar1);
        }
        func_0x000107c499dc();
        func_0x000107c61180();
        if (param_1 != 0) {
          func_0x000107c3ebcc();
          func_0x000107c61170(param_1);
        }
        lVar5 = lVar4;
        func_0x000107c4215c(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c5faec(lVar5);
        func_0x000107c61170(lVar5);
        return;
      }
    }
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 101b3c298; end: 101b3c2b3;  */

void FUN_101b3c298(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101b3c2b4; end: 101b3c3d3; -[ValdiFriendmojiProvider forUsersWithRequests:completion:] */

void FUN_101b3c2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  FUN_101b3e834(0,0x112e02fd8,&PTR_PTR_1126a8a78);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_110447d70;
  func_0x000107c613fc(&UNK_110447d70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101b3c3d4(param_3,0x101b3e878,puVar2,&UNK_110447ca8,FUN_101b3c04c,&UNK_110447cc0);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101b3c3d4; end: 101b3c813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3c3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_b8 = param_6;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar6 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar2 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112e02f80);
  func_0x000107c613fc(param_4,0x30,7);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined8 *)(param_4 + 0x20) = param_1;
  *(long *)(param_4 + 0x28) = unaff_x20;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  uStack_78 = uStack_b8;
  ppuVar3 = &puStack_90;
  uStack_70 = param_5;
  lStack_68 = param_4;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_1);
  func_0x000107c61174();
  func_0x000107c5f808(lVar2);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar4 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar5 = uVar4;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar6,&puStack_98,uVar4,uVar5,lVar1,unaff_x20);
  func_0x000107c5ffe8(0,lVar2,puVar6,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  (**(code **)(lStack_a0 + 8))(puVar6,lVar1);
  (**(code **)(lVar7 + 8))(lVar2,lStack_a8);
  func_0x000107c61574(lStack_68);
  return;
}



/* Entry: 101b3c814; end: 101b3c847;  */

void FUN_101b3c814(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b3c848; end: 101b3c853;  */

/* WARNING: Possible PIC construction at 0x000101b3c6f0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3c848(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  pcVar3 = *(code **)(unaff_x20 + 0x10);
  puVar2 = *(undefined **)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar13 = puVar2;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    puVar9 = (undefined *)((ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000107c61174();
    func_0x000100403514(0,puVar9,0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b3c814);
      (*pcVar3)();
    }
    puVar11 = (undefined *)0x0;
    lVar12 = *(long *)(lVar4 + _DAT_112e02f68);
    do {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b3c7ec);
          (*pcVar3)();
        }
        if (*(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b3c7f0);
          (*pcVar3)();
        }
        puVar10 = *(undefined **)(puVar2 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar10 = puVar11;
        puVar9 = puVar2;
        FUN_101b3df8c(puVar11,puVar2,&PTR_PTR_1126a8a70,0x112e02fd0);
      }
      lVar5 = lVar12;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(puVar10);
        puVar10 = (undefined *)0xe000000000000000;
        puVar6 = puVar9;
      }
      else {
        puVar6 = puVar10;
        func_0x000107c444fc();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          puVar8 = puVar9;
          func_0x000107c5faec();
          func_0x000107c5fadc();
          goto code_r0x000107c6142c;
        }
        lVar7 = lVar5;
        func_0x000107c43a48();
        func_0x000107c61180();
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(puVar6);
        lVar5 = lVar7;
        func_0x000107c5faec();
        puVar6 = puVar9;
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar7);
        puVar10 = puVar9;
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar9 = (undefined *)(uVar1 + 1);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar6 = puVar9;
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),puVar9,1);
      }
      puVar11 = puVar11 + 1;
      *(undefined **)(puVar8 + 0x10) = puVar9;
      *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar5;
      *(undefined **)(puVar8 + uVar1 * 0x10 + 0x28) = puVar10;
      puVar9 = puVar6;
    } while (puVar13 != puVar11);
    func_0x000107c61170(lVar4);
  }
  (*pcVar3)(puVar8,0);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar8);
  return;
}



/* Entry: 101b3c854; end: 101b3c917; -[ValdiFriendmojiProvider forGroupsWithRequests:completion:] */

void FUN_101b3c854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  FUN_101b3e834(0,0x112e02fd0,&PTR_PTR_1126a8a70);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_110447d48;
  func_0x000107c613fc(&UNK_110447d48,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101b3c3d4(param_3,FUN_101b3e82c,puVar2,&UNK_110447cf8,FUN_101b3c848,&UNK_110447d10);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101b3c918; end: 101b3ceb7;  */

/* WARNING: Removing unreachable block (ram,0x000101b3cea0) */
/* WARNING: Removing unreachable block (ram,0x000101b3ceac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b3c918(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar14 = param_1;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar12 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
  if (uVar14 == 0) {
    puVar11 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 != (undefined *)0x0) goto LAB_101b3cac8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101b3d330(0,uVar12,0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b3ce9c);
      (*pcVar1)();
    }
    uVar13 = 0;
    do {
      puVar8 = puStack_68;
      uVar6 = param_1;
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar13;
        FUN_101b3df8c(uVar13,param_1,&PTR_PTR_1126a8a78,0x112e02fd8);
      }
      uVar3 = uVar2;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      uVar3 = uVar2;
      func_0x000107c43a60();
      func_0x000107c61180();
      if (uVar3 == 0) {
        uVar10 = 0;
      }
      else {
        uVar5 = 0;
        FUN_101b3e834(0,0x112e02fa0,&PTR_PTR_1126dc9b8);
        uVar10 = uVar3;
        func_0x000107c5fc54(uVar3,uVar5);
        func_0x000107c61170(uVar3);
      }
      uVar3 = uVar10;
      FUN_101b3e148();
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar10);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puVar11 = (undefined *)(uVar2 + 1);
      puStack_68 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        func_0x000101b3d330(1 < *(ulong *)(puVar8 + 0x18),puVar11,1);
      }
      uVar13 = uVar13 + 1;
      *(undefined **)(puStack_68 + 0x10) = puVar11;
      *(ulong *)(puStack_68 + uVar2 * 0x18 + 0x20) = uVar4;
      *(ulong *)(puStack_68 + uVar2 * 0x18 + 0x28) = uVar6;
      *(ulong *)(puStack_68 + uVar2 * 0x18 + 0x30) = uVar3;
      puVar7 = puStack_68;
    } while (uVar14 != uVar13);
LAB_101b3cac8:
    func_0x0001000285a8(0x112e02f88,&UNK_10d9d5578);
    func_0x000107c60498();
    puVar8 = puVar11;
  }
  puStack_68 = puVar8;
  FUN_101b3e598(puVar7,1,&puStack_68);
  func_0x000107c6142c(puVar7);
  puVar11 = puStack_68;
  if (uVar14 == 0) {
    puVar8 = *(undefined **)(puVar9 + 0x10);
    puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if (puVar8 == (undefined *)0x0) goto LAB_101b3cc74;
  }
  else {
    puStack_68 = puVar9;
    func_0x000101b3d314(0,uVar12,0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b3cea0);
      (*pcVar1)();
    }
    uVar12 = 0;
    do {
      puVar9 = puStack_68;
      uVar13 = param_1;
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar12;
        FUN_101b3df8c(uVar12,param_1,&PTR_PTR_1126a8a78,0x112e02fd8);
      }
      uVar2 = uVar6;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      uVar2 = uVar6;
      func_0x000107c499dc();
      func_0x000107c61180();
      if (uVar2 != 0) {
        func_0x000107c3ebcc();
        func_0x000107c61170(uVar2);
      }
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      func_0x000107c61170(uVar6);
      uVar6 = *(ulong *)(puVar9 + 0x10);
      puVar8 = (undefined *)(uVar6 + 1);
      puStack_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar6) {
        func_0x000101b3d314(1 < *(ulong *)(puVar9 + 0x18),puVar8,1);
      }
      uVar12 = uVar12 + 1;
      *(undefined **)(puStack_68 + 0x10) = puVar8;
      *(ulong *)(puStack_68 + uVar6 * 0x18 + 0x20) = uVar3;
      *(ulong *)(puStack_68 + uVar6 * 0x18 + 0x28) = uVar13;
      *(undefined **)(puStack_68 + uVar6 * 0x18 + 0x30) = puVar7;
      puVar9 = puStack_68;
    } while (uVar14 != uVar12);
  }
  func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
  func_0x000107c60498();
  puVar7 = puVar8;
LAB_101b3cc74:
  puStack_68 = puVar7;
  FUN_101b3e31c(puVar9,1,&puStack_68);
  func_0x000107c6142c(puVar9);
  puVar9 = puStack_68;
  puVar8 = *(undefined **)(unaff_x20 + _DAT_112e02f68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61574(puVar11);
    func_0x000107c61574(puVar9);
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c453e4();
    func_0x000107c4a8a4(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar5 = 0x112e02f98;
    func_0x0001000285a8(0x112e02f98,&UNK_10d9d5588);
    puVar7 = puVar11;
    func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
    func_0x000107c61574(puVar11);
    uVar5 = 0;
    FUN_101b3e834(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar11 = puVar9;
    func_0x000107c5f9dc(puVar9,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
    func_0x000107c61574(puVar9);
    puVar9 = puVar8;
    func_0x000107c4da44(puVar8);
    func_0x000107c61180();
    func_0x000107c615e8(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar11);
    func_0x000107c61174(puVar9);
    puVar11 = puVar9;
  }
  puVar8 = puVar9;
  func_0x000107c5cb24(puVar9);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar11);
  return puVar8;
}



/* Entry: 101b3ceb8; end: 101b3ced3; -[ValdiFriendmojiProvider observeFriendmojisForUsersWithRequests:] */

void FUN_101b3ceb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101b3e834(0,0x112e02fd8,&PTR_PTR_1126a8a78);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101b3c918(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b3ced4; end: 101b3d1cb;  */

/* WARNING: Removing unreachable block (ram,0x000101b3d1c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b3ced4(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_68;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    if (puVar10 != (undefined *)0x0) goto LAB_101b3cf10;
LAB_101b3d024:
    puVar5 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 == (undefined *)0x0) goto LAB_101b3d054;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
    if (puVar10 == (undefined *)0x0) goto LAB_101b3d024;
LAB_101b3cf10:
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar8 = (undefined *)((ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000101b3d330(0,puVar8,0);
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3d1c0);
      (*pcVar2)();
    }
    puVar11 = (undefined *)0x0;
    do {
      puVar7 = puStack_68;
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(param_1 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
        puVar9 = puVar8;
      }
      else {
        puVar5 = puVar11;
        puVar9 = param_1;
        FUN_101b3df8c(puVar11,param_1,&PTR_PTR_1126a8a70,0x112e02fd0);
      }
      puVar3 = puVar5;
      func_0x000107c444fc();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5faec();
      puVar8 = puVar9;
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar5 = (undefined *)(uVar1 + 1);
      puStack_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar8 = puVar5;
        func_0x000101b3d330(1 < *(ulong *)(puVar7 + 0x18),puVar5,1);
      }
      puVar11 = puVar11 + 1;
      *(undefined **)(puStack_68 + 0x10) = puVar5;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x20) = puVar4;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x28) = puVar9;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar7 = puStack_68;
    } while (puVar10 != puVar11);
  }
  func_0x0001000285a8(0x112e02f88,&UNK_10d9d5578);
  func_0x000107c60498();
  puVar10 = puVar5;
LAB_101b3d054:
  puStack_68 = puVar10;
  FUN_101b3e598(puVar7,1,&puStack_68);
  func_0x000107c6142c(puVar7);
  puVar10 = puStack_68;
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112e02f68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61574(puVar10);
    puVar10 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c453e4();
    func_0x000107c4a8a4(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar6 = 0x112e02f98;
    func_0x0001000285a8(0x112e02f98,&UNK_10d9d5588);
    puVar7 = puVar10;
    func_0x000107c5f9dc(puVar10,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
    func_0x000107c61574(puVar10);
    puVar10 = puVar5;
    func_0x000107c4da48(puVar5);
    func_0x000107c61180();
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61174(puVar10);
    puVar5 = puVar10;
  }
  puVar7 = puVar10;
  func_0x000107c5cb24(puVar10);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar5);
  return puVar7;
}



/* Entry: 101b3d1cc; end: 101b3d1e7; -[ValdiFriendmojiProvider observeFriendmojisForGroupsWithRequests:] */

void FUN_101b3d1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101b3e834(0,0x112e02fd0,&PTR_PTR_1126a8a70);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101b3ced4(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b3d1e8; end: 101b3d25f;  */

void FUN_101b3d1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101b3e834(0,param_4,param_5);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_6)(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b3d260; end: 101b3d2bf; -[ValdiFriendmojiProvider init] */

void FUN_101b3d260(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiFriendmojiBridge.ValdiFriendmojiProvider",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b3d28c);
  (*pcVar1)();
}



/* Entry: 101b3d2c0; end: 101b3d2f7; -[ValdiFriendmojiProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b3d2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b3d2e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3d2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02f68));
  return;
}



/* Entry: 101b3d2f8; end: 101b3d34b;  */

void FUN_101b3d2f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101b3d34c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101b3d34c; end: 101b3d707;  */

undefined * FUN_101b3d34c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3d480);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_101b3d708();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101b3e834(0,0x112de0af8,&PTR_PTR_1126ba270);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101b3d708; end: 101b3d773;  */

void FUN_101b3d708(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101b3e834(0,0x112de0af8,&PTR_PTR_1126ba270);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e02ff0;
  plVar5 = (long *)&UNK_10d9d55b8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101b3d774; end: 101b3da53;  */

void FUN_101b3d774(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101b3d850;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_101b3d850:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b3d8e4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101b3d8bc;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101b3d8bc:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101b3da54; end: 101b3df8b;  */

void FUN_101b3da54(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e02f90;
  func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101b3dcbc:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b3dcec);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101b3dcbc;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b3dcf0);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101b3df8c; end: 101b3e147;  */

ulong FUN_101b3df8c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3e070);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3e074);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101b3e834(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b3e148);
  (*pcVar2)();
}



/* Entry: 101b3e148; end: 101b3e31b;  */

undefined * FUN_101b3e148(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  if ((ulong)puVar1 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar1) {
      puVar9 = puVar1;
    }
    func_0x000107c60480();
  }
  if (puVar9 == (undefined *)0x0) {
    func_0x000107c61434(param_2);
  }
  else {
    puVar10 = (undefined *)((ulong)puVar9 & ((long)puVar9 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000107c61434(param_2);
    FUN_101b3d2f8(0,puVar10,0);
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b3e31c);
      (*pcVar4)();
    }
    puVar11 = (undefined *)0x0;
    do {
      if (((ulong)puVar1 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(puVar1 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174(puVar5);
        puVar8 = puVar10;
      }
      else {
        puVar5 = puVar11;
        puVar8 = puVar1;
        FUN_101b3df8c(puVar11,puVar1,&PTR_PTR_1126dc9b8,0x112e02fa0);
      }
      puVar10 = puVar5;
      func_0x000107c3f710();
      func_0x000107c61180();
      puVar6 = puVar10;
      func_0x000107c5faec();
      func_0x000107c61170(puVar10);
      func_0x000107c42bd4(puVar5);
      puVar7 = PTR_PTR_1126ba270;
      func_0x000107c610f8();
      puVar10 = puVar8;
      func_0x000107c5fadc(puVar6,puVar8);
      func_0x000107c6142c(puVar8);
      func_0x000107c45d58(param_1);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      uVar2 = *(ulong *)(puVar3 + 0x10);
      puVar5 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        puVar10 = puVar5;
        FUN_101b3d2f8(1 < *(ulong *)(puVar3 + 0x18),puVar5,1);
      }
      puVar11 = puVar11 + 1;
      *(undefined **)(puVar3 + 0x10) = puVar5;
      *(undefined **)(puVar3 + uVar2 * 8 + 0x20) = puVar7;
    } while (puVar9 != puVar11);
  }
  func_0x000107c6142c(puVar1);
  return puVar3;
}



/* Entry: 101b3e31c; end: 101b3e597;  */

void FUN_101b3e31c(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar5 = uVar2;
  uVar7 = uVar3;
  func_0x000100029284();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar7 & 1;
  lVar12 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
LAB_101b3e590:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b3e594);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar12) {
    FUN_101b3da54(lVar12,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) {
LAB_101b3e3d0:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b3e3e0);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_101b3d774();
    lVar12 = *param_3;
    goto joined_r0x000101b3e428;
  }
  lVar12 = *param_3;
joined_r0x000101b3e428:
  if ((uVar7 & 1) == 0) {
    lVar8 = lVar12 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
LAB_101b3e594:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b3e598);
      (*pcVar4)();
    }
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
  }
  else {
    func_0x000107c6142c(uVar3);
    uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    func_0x000107c61170(uVar6);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar13 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar5 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      lVar8 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar7 & 1;
      lVar12 = lVar8 + uVar9;
      if (SCARRY8(lVar8,uVar9)) goto LAB_101b3e590;
      if (*(long *)(lVar11 + 0x18) < lVar12) {
        FUN_101b3da54(lVar12,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) goto LAB_101b3e3d0;
      }
      lVar12 = *param_3;
      if ((uVar7 & 1) == 0) {
        lVar8 = lVar12 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) goto LAB_101b3e594;
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar3);
        uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        func_0x000107c61170(uVar6);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 101b3e598; end: 101b3e80b;  */

void FUN_101b3e598(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar13);
  uVar5 = uVar2;
  uVar7 = uVar3;
  func_0x000100029284();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar7 & 1;
  lVar12 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
LAB_101b3e804:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b3e808);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar12) {
    func_0x000101b3dcf0(lVar12,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) {
LAB_101b3e648:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b3e658);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000101b3d8e4();
    lVar12 = *param_3;
    goto joined_r0x000101b3e6a0;
  }
  lVar12 = *param_3;
joined_r0x000101b3e6a0:
  if ((uVar7 & 1) == 0) {
    lVar8 = lVar12 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
LAB_101b3e808:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b3e80c);
      (*pcVar4)();
    }
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
  }
  else {
    func_0x000107c6142c(uVar3);
    uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    func_0x000107c6142c(uVar6);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar13 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar13);
      uVar5 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      lVar8 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar7 & 1;
      lVar12 = lVar8 + uVar9;
      if (SCARRY8(lVar8,uVar9)) goto LAB_101b3e804;
      if (*(long *)(lVar11 + 0x18) < lVar12) {
        func_0x000101b3dcf0(lVar12,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) goto LAB_101b3e648;
      }
      lVar12 = *param_3;
      if ((uVar7 & 1) == 0) {
        lVar8 = lVar12 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) goto LAB_101b3e808;
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar3);
        uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        func_0x000107c6142c(uVar6);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 101b3e80c; end: 101b3e82b;  */

void FUN_101b3e80c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f90b0);
  return;
}


