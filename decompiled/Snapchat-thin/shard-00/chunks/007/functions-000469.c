/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100966928; end: 1009669d7;  */

void FUN_100966928(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100293db8();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1009669d8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009669d8; end: 100966b87;  */

void FUN_1009669d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9088;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef38f70);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100966b88; end: 100966bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100966b88(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274b844);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100966bac; end: 100966c8f; -[SCActiveUserApplicationLoggerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100966be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100966c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100966c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100966c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100966c60) */
/* WARNING: Removing unreachable block (ram,0x000100966c18) */
/* WARNING: Removing unreachable block (ram,0x000100966bec) */
/* WARNING: Removing unreachable block (ram,0x000100966c70) */

void FUN_100966bac(undefined8 param_1)

{
  FUN_100966b88();
  func_0x000107c61180();
  func_0x000107c5da60();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100966c90; end: 100966cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100966c90(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274b840);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100966cb4; end: 100966cc3; -[_TtC18SCBlizzardServices33SCSystemApplicationLoggerServices systemApplicationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100966cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130837d0));
  return;
}



/* Entry: 100966cc4; end: 100966cf7;  */

void FUN_100966cc4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100966cf8; end: 100966eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100966cf8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  func_0x000107c61174();
  FUN_100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_113092298);
  func_0x000107c615f0(uVar9);
  func_0x000107c61170(lStack_68);
  FUN_100083b20(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c444a4(uStack_70);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  FUN_100083b20(&lStack_78);
  uVar3 = *(undefined8 *)(lStack_78 + _DAT_113052a38);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_78);
  FUN_100083b20(&lStack_80);
  uVar4 = *(undefined8 *)(lStack_80 + _DAT_1130522f8);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_80);
  FUN_100083b20(&uStack_88);
  uVar5 = uStack_88;
  func_0x000107c4acf8(uStack_88);
  func_0x000107c61180();
  func_0x000107c61170(uStack_88);
  puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x0001000ad7c4();
  puVar8 = PTR_PTR_1126a6ff8;
  func_0x000107c610f8();
  func_0x000107c48d08();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  *param_1 = puVar8;
  return;
}



/* Entry: 100966eec; end: 100966f7b;  */

void FUN_100966eec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100092fc0(0);
  func_0x000107c610f8();
  func_0x000100966f30(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 100966f7c; end: 100967093; -[SCNTivClientParameters initWithUserId:fileLocation:fileLocationV2:replaceCurrentlyPresented:] */

undefined1 *
FUN_100966f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126f3488;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_100967094(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_100967094(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_100967094(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100967094; end: 10096709b;  */

void FUN_100967094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10096709c; end: 1009670a3; -[SCLegacyBlizzardServices legacyBlizzardLogger] */

undefined8 FUN_10096709c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1009670a4; end: 100967117; -[SCTIVBlizzardLogger initWithBlizzardLogger:] */

undefined1 * FUN_1009670a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f3408;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100967118; end: 1009675e7; -[SCTIVServicesEntryPoint _createRequestPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100967118(long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  
  puVar1 = PTR_PTR_1126ce380;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112750ae8;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112750b00;
  func_0x000107c61148();
  lVar6 = lVar5;
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c41050();
  func_0x000107c61180();
  lVar9 = param_1 + _DAT_112750b04;
  func_0x000107c61148();
  lVar10 = param_1 + _DAT_112750b08;
  func_0x000107c61148();
  lVar11 = lVar10;
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar42 = *(undefined8 *)(param_1 + _DAT_112750b0c);
  lVar12 = param_1 + _DAT_112750b10;
  func_0x000107c61148();
  lVar13 = param_1 + _DAT_112750b14;
  func_0x000107c61148();
  lVar14 = lVar13;
  func_0x000107c453b0();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_112750b18;
  func_0x000107c61148();
  lVar16 = lVar15;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar17 = param_1 + _DAT_112750b1c;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c3fd24();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_112750b20;
  func_0x000107c61148();
  lVar20 = lVar19;
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar21 = param_1 + _DAT_112750b24;
  func_0x000107c61148();
  lVar22 = lVar21;
  func_0x000107c51d3c();
  func_0x000107c61180();
  lVar23 = param_1 + _DAT_112750b28;
  func_0x000107c61148();
  lVar24 = lVar23;
  func_0x000107c4e604();
  func_0x000107c61180();
  lVar25 = param_1 + _DAT_112750b2c;
  func_0x000107c61148();
  lVar26 = lVar25;
  func_0x000107c44588();
  func_0x000107c61180();
  lVar27 = param_1 + _DAT_112750b30;
  func_0x000107c61148();
  lVar28 = lVar27;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar29 = param_1 + _DAT_112750b34;
  func_0x000107c61148();
  lVar30 = lVar29;
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar31 = param_1 + _DAT_112750b38;
  func_0x000107c61148();
  lVar32 = lVar31;
  func_0x000107c414e4();
  func_0x000107c61180();
  lVar33 = param_1 + _DAT_112750b3c;
  func_0x000107c61148();
  lVar34 = lVar33;
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar43 = (long)_DAT_112750b40;
  lVar35 = param_1 + lVar43;
  func_0x000107c61148();
  lVar36 = lVar35;
  func_0x000107c4141c();
  func_0x000107c61180();
  lVar37 = lVar36;
  func_0x000107c41414();
  func_0x000107c61180();
  lVar43 = param_1 + lVar43;
  func_0x000107c61148();
  lVar38 = lVar43;
  func_0x000107c4141c();
  func_0x000107c61180();
  lVar39 = lVar38;
  func_0x000107c3ff98();
  func_0x000107c61180();
  lVar40 = param_1 + _DAT_112750b44;
  func_0x000107c61148();
  lVar41 = lVar40;
  func_0x000107c4d48c();
  func_0x000107c61180();
  func_0x000107c49284(puVar1,param_2,lVar4,lVar8,lVar9,lVar11,uVar42,lVar12,lVar14,lVar16,lVar18,
                      lVar20,lVar22,lVar24,lVar26,lVar28,lVar30,lVar32,lVar34,lVar37,lVar39,lVar41,
                      *(undefined8 *)(param_1 + _DAT_112750b48),param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar41);
  func_0x000107c61170(lVar40);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar43);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1009675e8; end: 10096783f; -[SCApplicationLogger initWithTimeProvider:appStartExperimentReader:grapheneRegistry:deviceInfoProvider:deepLinkInfoService:legacyBlizzardLogger:application:circumstanceEngineLazy:] */

undefined8 *
FUN_1009675e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126f1fe0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c45454();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = puVar1[9];
    puVar1[9] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar1[10];
    puVar1[10] = param_4;
    func_0x000107c61170(uVar3);
    uVar3 = param_4;
    func_0x000107c3ebd4();
    *(char *)(puVar1 + 7) = (char)uVar3;
    func_0x000107c61174(param_5);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_7;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_9;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_10);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_10;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_8);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100967840; end: 10096788b;  */

void FUN_100967840(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096788c; end: 100967933; -[SCApplicationLogger setActiveUserSession:withContext:] */

/* WARNING: Possible PIC construction at 0x0001009678d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009678e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100967904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010096791c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100967908) */
/* WARNING: Removing unreachable block (ram,0x000100967910) */
/* WARNING: Removing unreachable block (ram,0x0001009678e8) */
/* WARNING: Removing unreachable block (ram,0x0001009678d4) */
/* WARNING: Removing unreachable block (ram,0x000100967920) */

void FUN_10096788c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x000107c61174(param_3);
    param_4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100967934; end: 100967a6b; -[SCApplicationLogger beginObservingSessionContext] */

void FUN_100967934(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100967a6c;
  puStack_58 = &UNK_110849200;
  func_0x000107c6111c(auStack_50,auStack_48);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_1065e3e9c;
  puStack_80 = &UNK_110892500;
  func_0x000107c6111c(auStack_78,auStack_48);
  func_0x000107c6111c(auStack_a0,auStack_48);
  func_0x000107c4c6fc(uVar2);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100967a6c; end: 100967a97;  */

void FUN_100967a6c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c4c8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100967a98; end: 100967ae7; -[SCApplicationLogger maybeLogAAOFromResumed] */

void FUN_100967a98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x39) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c40ef8(uVar1);
    func_0x000107c61180();
    func_0x000107c4ba04(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 100967ae8; end: 100967b1b;  */

void FUN_100967ae8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100967b1c; end: 100967b27;  */

undefined ** FUN_100967b1c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100967b28; end: 100967bb3;  */

void FUN_100967b28(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100967bb4,param_1);
  return;
}



/* Entry: 100967bb4; end: 100967bbb;  */

void FUN_100967bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cdc16c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100967bbc; end: 100967c3f;  */

void FUN_100967bbc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cdc16c,param_2,FUN_100967c40,param_2,&UNK_101cdc170,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100967c40; end: 100967c67;  */

void FUN_100967c40(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100967c68; end: 100967c6f;  */

void FUN_100967c68(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002b7594();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100967cf8(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100967c70; end: 100967cf7;  */

void FUN_100967c70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002b7594();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100967cf8(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100967cf8; end: 100967e23;  */

void FUN_100967cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a9090;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100967e24; end: 100967e67; -[SCActiveUserBlizzardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100967e24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0320;
  param_1 = param_1 + _DAT_11275775c;
  func_0x000107c61148(param_1);
  func_0x000107c59908(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100967e68; end: 100967f33; +[SCBlizzardEventConfigurer setStoriesExperimentServices:] */

/* WARNING: Possible PIC construction at 0x000100967e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100967ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100967efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100967ecc) */
/* WARNING: Removing unreachable block (ram,0x000100967ef0) */
/* WARNING: Removing unreachable block (ram,0x000100967e9c) */
/* WARNING: Removing unreachable block (ram,0x000100967f04) */
/* WARNING: Removing unreachable block (ram,0x000100967ea4) */
/* WARNING: Removing unreachable block (ram,0x000100967f00) */
/* WARNING: Removing unreachable block (ram,0x000100967f18) */

void FUN_100967e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001136c4a68;
  uRam00000001136c4a68 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100967f34; end: 100967f5f;  */

void FUN_100967f34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100967f60; end: 100967f73;  */

undefined ** FUN_100967f60(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100967f74; end: 10096801b;  */

void FUN_100967f74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11043d468;
  func_0x000107c613fc(&UNK_11043d468,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10096801c;
  FUN_1000823a8(FUN_10096801c,puVar1);
  FUN_100082720("SCActiveUserSessionScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10096801c; end: 100968023;  */

void FUN_10096801c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11043ba98;
  func_0x000107c613fc(&UNK_11043ba98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_101ab30f8;
  FUN_10058fa64(&UNK_101ab30f8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100968024; end: 1009680e7;  */

void FUN_100968024(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11043ba98;
  func_0x000107c613fc(&UNK_11043ba98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_101ab30f8;
  FUN_10058fa64(&UNK_101ab30f8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009680e8; end: 10096810b;  */

void FUN_1009680e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096810c; end: 100968143;  */

void FUN_10096810c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 100968144; end: 10096814b;  */

void FUN_100968144(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096814c; end: 100968177;  */

void FUN_10096814c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100968178; end: 100968183;  */

undefined ** FUN_100968178(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100968184; end: 10096820f;  */

void FUN_100968184(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100968210,param_1);
  return;
}



/* Entry: 100968210; end: 100968293;  */

void FUN_100968210(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101f03ef4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100968294; end: 1009682bb;  */

void FUN_100968294(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009682bc; end: 100969287;  */

void FUN_1009682bc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_1002b778c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x90) = uStack_78;
  *(undefined8 *)(param_2 + 0x98) = uStack_80;
  *(undefined8 *)(param_2 + 0xa0) = uStack_88;
  *(undefined8 *)(param_2 + 0xa8) = uStack_90;
  *(undefined8 *)(param_2 + 0xb0) = uStack_98;
  FUN_1000285a8(0x112e3d890,&UNK_10da2a148);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar6;
  FUN_1000285a8(0x112e3d898,&UNK_10da2a150);
  func_0x000107c610f8();
  uVar8 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x20) = puVar6;
  FUN_1000285a8(0x112e3d8a0,&UNK_10da2a158);
  func_0x000107c610f8();
  uVar8 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x28) = puVar6;
  FUN_1000285a8(0x112e3d8a8,&UNK_10da2a160);
  func_0x000107c610f8();
  uVar8 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x30) = puVar6;
  FUN_1000285a8(0x112e3d8b0,&UNK_10da2a168);
  func_0x000107c610f8();
  uVar8 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x38) = puVar6;
  FUN_1000285a8(0x112e3d8b8,&UNK_10da2a170);
  func_0x000107c610f8();
  uVar8 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x40) = puVar6;
  FUN_1000285a8(0x112e3d8c0,&UNK_10da2a178);
  func_0x000107c610f8();
  uVar8 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x48) = puVar6;
  FUN_1000285a8(0x112e3d8c8,&UNK_10da2a180);
  func_0x000107c610f8();
  uVar8 = uStack_d8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x50) = puVar6;
  FUN_1000285a8(0x112e3d8d0,&UNK_10da2a188);
  func_0x000107c610f8();
  uVar8 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x58) = puVar6;
  FUN_1000285a8(0x112e3d8d8,&UNK_10da2a190);
  func_0x000107c610f8();
  uVar8 = uStack_e8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x60) = puVar6;
  FUN_1000285a8(0x112e3d8e0,&UNK_10da2a198);
  func_0x000107c610f8();
  uVar8 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x68) = puVar6;
  FUN_1000285a8(0x112e3d8e8,&UNK_10da2a1a0);
  func_0x000107c610f8();
  uVar8 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x70) = puVar6;
  FUN_1000285a8(0x112e3d8f0,&UNK_10da2a1a8);
  func_0x000107c610f8();
  uVar8 = uStack_100;
  func_0x000107c6157c(uStack_100);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x78) = puVar6;
  FUN_1000285a8(0x112e3d8f8,&UNK_10da2a1b0);
  func_0x000107c610f8();
  uVar8 = uStack_108;
  func_0x000107c6157c(uStack_108);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x80) = puVar6;
  FUN_1000285a8(0x112e3d900,&UNK_10da2a1b8);
  func_0x000107c610f8();
  uVar8 = uStack_110;
  func_0x000107c6157c(uStack_110);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x88) = puVar6;
  puVar6 = PTR_PTR_1126a9930;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = auStack_70[0];
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar6);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f01a380);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000026;
  uVar8 = uVar10;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f01a3b0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a3e0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000026,0x800000010f01a410);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar10 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f01a440);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar11 = 0xd00000000000002f;
  uVar8 = uVar11;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f01a480);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar10 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f01a4b0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar10 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f01a4f0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000033;
  func_0x000107c5fadc(0xd000000000000033,0x800000010f01a530);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f01a570);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f01a5b0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000041;
  func_0x000107c5fadc(0xd000000000000041,0x800000010f01a5f0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f01a640);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar10 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f01a680);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar10 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f01a6c0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar12 = 0xd00000000000002b;
  uVar8 = uVar12;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f01a700);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar10 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f01a730);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f01a770);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x88);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f01a7a0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar9);
  func_0x000107c61574(uStack_110);
  func_0x000107c61574(uStack_108);
  func_0x000107c61574(uStack_100);
  func_0x000107c61574(uStack_f8);
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(uStack_e8);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_c0);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  *param_1 = param_2;
  return;
}



/* Entry: 100969288; end: 1009692ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100969288(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b3254();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f32a60) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1009692f0; end: 1009692fb;  */

/* WARNING: Possible PIC construction at 0x00010096939c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009693ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009693a0) */
/* WARNING: Removing unreachable block (ram,0x0001009693b0) */

void FUN_1009692f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110440260;
  func_0x000107c613fc(&UNK_110440260,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112df9c50;
  FUN_1000285a8(0x112df9c50,&UNK_10d9cb318);
  func_0x000107c613fc();
  puVar6 = &UNK_101ad1868;
  FUN_1000841f8(&UNK_101ad1868,puVar4,uVar5);
  FUN_100084214(&UNK_10d9cb2d0,0x43,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1009692fc; end: 1009693c7;  */

/* WARNING: Possible PIC construction at 0x00010096939c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009693ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009693a0) */
/* WARNING: Removing unreachable block (ram,0x0001009693b0) */

void FUN_1009692fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110440260;
  func_0x000107c613fc(&UNK_110440260,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112df9c50;
  FUN_1000285a8(0x112df9c50,&UNK_10d9cb318);
  func_0x000107c613fc();
  puVar3 = &UNK_101ad1868;
  FUN_1000841f8(&UNK_101ad1868,puVar1,uVar2);
  FUN_100084214(&UNK_10d9cb2d0,0x43,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1009693c8; end: 1009693cf;  */

void FUN_1009693c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009693d0; end: 10096940b;  */

void FUN_1009693d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096940c; end: 100969473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096940c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b32c0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f32ab0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100969474; end: 10096947b;  */

/* WARNING: Possible PIC construction at 0x00010096950c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100969510) */

void FUN_100969474(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_110440840;
  func_0x000107c613fc(&UNK_110440840,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112df9f30;
  FUN_1000285a8(0x112df9f30,&UNK_10d9cbad0);
  func_0x000107c613fc();
  puVar4 = &UNK_101ad4010;
  FUN_1000841f8(&UNK_101ad4010,puVar2,uVar3);
  FUN_100084214(&UNK_10d9cba90,0x3f,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10096947c; end: 100969523;  */

/* WARNING: Possible PIC construction at 0x00010096950c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100969510) */

void FUN_10096947c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110440840;
  func_0x000107c613fc(&UNK_110440840,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112df9f30;
  FUN_1000285a8(0x112df9f30,&UNK_10d9cbad0);
  func_0x000107c613fc();
  puVar3 = &UNK_101ad4010;
  FUN_1000841f8(&UNK_101ad4010,puVar1,uVar2);
  FUN_100084214(&UNK_10d9cba90,0x3f,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100969524; end: 10096952b;  */

void FUN_100969524(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096952c; end: 100969557;  */

void FUN_10096952c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100969558; end: 100969563;  */

void FUN_100969558(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined1 auStack_f0 [32];
  long lStack_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      uVar6 = 0x7379656b73736170;
      func_0x000107c5fadc(0x7379656b73736170,0xe800000000000000);
      lVar7 = lVar5;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar6);
      if (lVar7 != 0) {
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
        lVar5 = lVar7;
        func_0x000107c6148c(lVar7,puVar11);
        if (lVar5 != 0) {
          lStack_f8 = lVar7;
          func_0x000107c600f4(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000100e15a08();
          func_0x000107c601c0(auStack_a0,lVar3,lVar5);
          puVar2 = PTR___sypN_11034f1a8;
          puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          while (lStack_88 != 0) {
            FUN_100102924(auStack_a0,auStack_c8);
            FUN_100102924(auStack_c8,auStack_f0);
            uVar6 = 0;
            func_0x000101c6fd8c(0);
            plVar10 = &lStack_d0;
            func_0x000107c6147c(plVar10,auStack_f0,puVar2 + 8,uVar6,6);
            lVar7 = lStack_d0;
            if ((((ulong)plVar10 & 1) != 0) && (lStack_d0 != 0)) {
              puVar9 = puVar11;
              func_0x000107c61550();
              if (((int)puVar9 == 0) ||
                 (((long)puVar11 < 0 || (puVar9 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)))) {
                if ((ulong)puVar11 >> 0x3e == 0) {
                  puVar8 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar8 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar11) {
                    puVar8 = puVar11;
                  }
                  func_0x000107c60480(puVar8);
                }
                puVar9 = (undefined *)0x0;
                func_0x000101c7007c(0,puVar8 + 1,1,puVar11);
              }
              uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
              uVar1 = *(ulong *)(uVar12 + 0x10);
              puVar11 = puVar9;
              if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
                puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
                func_0x000101c7007c(puVar11,uVar1 + 1,1,puVar9);
                uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
              *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar7;
            }
            func_0x000107c601c0(auStack_a0,lVar3,lVar5);
          }
          (**(code **)(lVar13 + 8))(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
          uVar6 = *(undefined8 *)(lVar4 + 0x60);
          puStack_90 = puVar11;
          func_0x000107c6157c(uVar6);
          FUN_100075034(&UNK_101c70314,auStack_a0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar6);
          uVar6 = *(undefined8 *)(lVar4 + 0x58);
          func_0x000107c61174(uVar6);
          puVar9 = puVar11;
          func_0x000101c6f99c(puVar11);
          func_0x000107c6142c(puVar11);
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar8 = puVar9;
          func_0x000107c5fc48(puVar9,puVar2 + 8);
          func_0x000107c6142c(puVar9);
          func_0x000107c45788(puVar11);
          func_0x000107c61170(puVar8);
          func_0x000107c4d664(uVar6);
          func_0x000107c61574(lVar4);
          func_0x000107c615e8(lStack_f8);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(puVar11);
          return;
        }
        func_0x000107c61574(lVar4);
        func_0x000107c615e8(lVar7);
        return;
      }
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 100969564; end: 1009698af;  */

void FUN_100969564(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined1 auStack_f0 [32];
  long lStack_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar5 = 0x7379656b73736170;
      func_0x000107c5fadc(0x7379656b73736170,0xe800000000000000);
      lVar6 = lVar4;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar5);
      if (lVar6 != 0) {
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
        lVar4 = lVar6;
        func_0x000107c6148c(lVar6,puVar10);
        if (lVar4 != 0) {
          lStack_f8 = lVar6;
          func_0x000107c600f4(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000100e15a08();
          func_0x000107c601c0(auStack_a0,lVar3,lVar4);
          puVar2 = PTR___sypN_11034f1a8;
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          while (lStack_88 != 0) {
            FUN_100102924(auStack_a0,auStack_c8);
            FUN_100102924(auStack_c8,auStack_f0);
            uVar5 = 0;
            func_0x000101c6fd8c(0);
            plVar9 = &lStack_d0;
            func_0x000107c6147c(plVar9,auStack_f0,puVar2 + 8,uVar5,6);
            lVar6 = lStack_d0;
            if ((((ulong)plVar9 & 1) != 0) && (lStack_d0 != 0)) {
              puVar8 = puVar10;
              func_0x000107c61550();
              if (((int)puVar8 == 0) ||
                 (((long)puVar10 < 0 || (puVar8 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
                if ((ulong)puVar10 >> 0x3e == 0) {
                  puVar7 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar7 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar10) {
                    puVar7 = puVar10;
                  }
                  func_0x000107c60480(puVar7);
                }
                puVar8 = (undefined *)0x0;
                func_0x000101c7007c(0,puVar7 + 1,1,puVar10);
              }
              uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
              uVar1 = *(ulong *)(uVar11 + 0x10);
              puVar10 = puVar8;
              if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
                func_0x000101c7007c(puVar10,uVar1 + 1,1,puVar8);
                uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
              *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar6;
            }
            func_0x000107c601c0(auStack_a0,lVar3,lVar4);
          }
          (**(code **)(lVar12 + 8))(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
          uVar5 = *(undefined8 *)(param_1 + 0x60);
          puStack_90 = puVar10;
          func_0x000107c6157c(uVar5);
          FUN_100075034(&UNK_101c70314,auStack_a0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar5);
          uVar5 = *(undefined8 *)(param_1 + 0x58);
          func_0x000107c61174(uVar5);
          puVar8 = puVar10;
          func_0x000101c6f99c(puVar10);
          func_0x000107c6142c(puVar10);
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar7 = puVar8;
          func_0x000107c5fc48(puVar8,puVar2 + 8);
          func_0x000107c6142c(puVar8);
          func_0x000107c45788(puVar10);
          func_0x000107c61170(puVar7);
          func_0x000107c4d664(uVar5);
          func_0x000107c61574(param_1);
          func_0x000107c615e8(lStack_f8);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar10);
          return;
        }
        func_0x000107c61574(param_1);
        func_0x000107c615e8(lVar6);
        return;
      }
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1009698b0; end: 100969917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009698b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b3398();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f32a10) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100969918; end: 100969927;  */

/* WARNING: Possible PIC construction at 0x0001009699d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009699e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009699d8) */
/* WARNING: Removing unreachable block (ram,0x0001009699e8) */

void FUN_100969918(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11043eb88;
  func_0x000107c613fc(&UNK_11043eb88,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112df9260;
  FUN_1000285a8(0x112df9260,&UNK_10d9c9f10);
  func_0x000107c613fc();
  puVar6 = &UNK_101ac72ac;
  FUN_1000841f8(&UNK_101ac72ac,puVar4,uVar5);
  FUN_100084214(&UNK_10d9c9ed0,0x3b,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100969928; end: 100969a0b;  */

/* WARNING: Possible PIC construction at 0x0001009699d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009699e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009699d8) */
/* WARNING: Removing unreachable block (ram,0x0001009699e8) */

void FUN_100969928(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_11043eb88;
  func_0x000107c613fc(&UNK_11043eb88,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112df9260;
  FUN_1000285a8(0x112df9260,&UNK_10d9c9f10);
  func_0x000107c613fc();
  puVar3 = &UNK_101ac72ac;
  FUN_1000841f8(&UNK_101ac72ac,puVar1,uVar2);
  FUN_100084214(&UNK_10d9c9ed0,0x3b,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100969a0c; end: 100969a13;  */

void FUN_100969a0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100969a14; end: 100969a57;  */

void FUN_100969a14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100969a58; end: 100969abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100969a58(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b332c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f329c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100969ac0; end: 100969acf;  */

/* WARNING: Possible PIC construction at 0x000100969b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100969b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100969b80) */
/* WARNING: Removing unreachable block (ram,0x000100969b90) */

void FUN_100969ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110449aa0;
  func_0x000107c613fc(&UNK_110449aa0,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112e03bb0;
  FUN_1000285a8(0x112e03bb0,&UNK_10d9d6f50);
  func_0x000107c613fc();
  puVar6 = &UNK_101b4c898;
  FUN_1000841f8(&UNK_101b4c898,puVar4,uVar5);
  FUN_100084214(&UNK_10d9d6f10,0x3f,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100969ad0; end: 100969bb3;  */

/* WARNING: Possible PIC construction at 0x000100969b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100969b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100969b80) */
/* WARNING: Removing unreachable block (ram,0x000100969b90) */

void FUN_100969ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110449aa0;
  func_0x000107c613fc(&UNK_110449aa0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112e03bb0;
  FUN_1000285a8(0x112e03bb0,&UNK_10d9d6f50);
  func_0x000107c613fc();
  puVar3 = &UNK_101b4c898;
  FUN_1000841f8(&UNK_101b4c898,puVar1,uVar2);
  FUN_100084214(&UNK_10d9d6f10,0x3f,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100969bb4; end: 100969bbb;  */

void FUN_100969bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100969bbc; end: 100969bff;  */

void FUN_100969bbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100969c00; end: 100969c77;  */

void FUN_100969c00(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100969c78; end: 100969c9b;  */

void FUN_100969c78(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100969c9c; end: 10096a1fb; -[SCTIVRequestPresenter initWithUserId:username:systemScope:grapheneRegistry:shakeToReportScopeExposer:shakeToReportScopeServices:shakeToReportInfoProviderRegistry:configProvider:cofStore:avatarProvider:selfieProvider:performerProvider:grcpServiceFactory:valdiRuntimeProvider:notificationPool:deepLinkHandling:pageLauncher:deckHierarchyFactory:composerDeckConverter:nativeSessionManager:webBrowsingScopeExposer:blizzardLogger:] */

undefined8 *
FUN_100969c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  puStack_70 = PTR_PTR_1126f3418;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[8];
    puVar1[8] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10096a1fc; end: 10096a20b; -[SCUserUnifiedGRPCServices authContextDelegate] */

undefined8 FUN_10096a1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10096a20c; end: 10096a2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096a20c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = &lStack_60;
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_10096b2b8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112db0f00) = uStack_48;
  *(undefined8 *)(lVar1 + _DAT_112db0f08) = uStack_50;
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c615f0(uStack_50);
  func_0x000107c52a20();
  lStack_60 = lVar1;
  lStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(uVar2);
  *param_1 = plVar3;
  return;
}



/* Entry: 10096a2d4; end: 10096a2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096a2d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lStack_38;
  
  FUN_100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11307e0b8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_38);
  lVar2 = lStack_38;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126b8288;
  func_0x000107c610f8();
  func_0x000107c487f0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10096a2dc; end: 10096a377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096a2dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11307e0b8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_38);
  lVar2 = lStack_38;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126b8288;
  func_0x000107c610f8();
  func_0x000107c487f0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10096a378; end: 10096b0b7; -[SCActiveUserStartupCompleteEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096a378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c3c);
  *(undefined **)(param_1 + _DAT_112752c3c) = puVar1;
  func_0x000107c61170(uVar10);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947778);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ceb20;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c8c);
  func_0x000107c61174(uVar10);
  func_0x000107c5d0cc(puVar3);
  func_0x000107c61180();
  func_0x000107c4d01c(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar2,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1109477b8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b6eb8;
  puVar3 = PTR_PTR_1126b6eb0;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c58);
  func_0x000107c61174(uVar10);
  func_0x000107c4d708(puVar2);
  func_0x000107c61180();
  func_0x000107c3e700(puVar3,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c3fbc8(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar4,uVar10,puVar1,puVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  lVar6 = param_1 + _DAT_112752c4c;
  func_0x000107c61148();
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1068bb0a0;
  puStack_88 = &UNK_1109477d8;
  lStack_80 = lVar6;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar1,param_2,&puStack_a0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c82e8;
  puVar3 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c5c);
  func_0x000107c61174(uVar10);
  func_0x000107c4bff8(puVar2);
  func_0x000107c61180();
  func_0x000107c3f044(puVar3,param_2,puVar2);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b648(param_1,param_2,puVar1,uVar10,puVar3,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947828);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b2990;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c60);
  func_0x000107c61174(uVar10);
  func_0x000107c3f898(puVar3);
  func_0x000107c61180();
  func_0x000107c4074c(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar2,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947868);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b7498;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c64);
  func_0x000107c61174(uVar10);
  func_0x000107c408e0(puVar3);
  func_0x000107c61180();
  func_0x000107c3ddd0(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar2,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  lVar7 = param_1 + _DAT_112752c48;
  func_0x000107c61148();
  puVar1 = PTR_PTR_1126ae720;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_1068bb0e0;
  puStack_b0 = &UNK_110947888;
  lStack_a8 = lVar7;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar1,param_2,&puStack_c8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c82e8;
  puVar3 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c68);
  func_0x000107c61174(uVar10);
  func_0x000107c4b958(puVar2);
  func_0x000107c61180();
  func_0x000107c3f044(puVar3,param_2,puVar2);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b648(param_1,param_2,puVar1,uVar10,puVar3,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1109478d8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b6bc0;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c6c);
  func_0x000107c61174(uVar10);
  func_0x000107c3e59c();
  func_0x000107c61180();
  func_0x000107c5e8c4(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar4,uVar10,puVar1,puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947918);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bf9b8;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c70);
  func_0x000107c61174(uVar10);
  func_0x000107c4c090(puVar3);
  func_0x000107c61180();
  func_0x000107c4cb0c(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar2,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947958);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ceb20;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c74);
  func_0x000107c61174(uVar10);
  func_0x000107c51990();
  func_0x000107c61180();
  func_0x000107c4d01c(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar2,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  lVar8 = param_1 + _DAT_112752c54;
  func_0x000107c61148();
  puVar1 = PTR_PTR_1126ae720;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_1068bb13c;
  puStack_d8 = &UNK_110947978;
  lStack_d0 = lVar8;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar1,param_2,&puStack_f0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bd748;
  puVar3 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c78);
  func_0x000107c61174(uVar10);
  func_0x000107c5b140(puVar2);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar3,param_2,puVar2);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90();
  func_0x000107c61180();
  func_0x000107c3b648(param_1,param_2,puVar1,uVar10,puVar3,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1109479c8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ceb60;
  puVar3 = PTR_PTR_1126bd748;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c7c);
  func_0x000107c61174(uVar10);
  func_0x000107c413c8();
  func_0x000107c61180();
  func_0x000107c5b4a0(puVar3,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar5,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947a08);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ceb60;
  puVar3 = PTR_PTR_1126bd748;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c80);
  func_0x000107c61174(uVar10);
  func_0x000107c42a40();
  func_0x000107c61180();
  func_0x000107c5b4a0(puVar3,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar5,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  lVar9 = param_1 + _DAT_112752c50;
  func_0x000107c61148();
  puVar1 = PTR_PTR_1126ae720;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  puStack_108 = &UNK_1068bb17c;
  puStack_100 = &UNK_110947a28;
  lStack_f8 = lVar9;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar1,param_2,&puStack_118);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bd748;
  puVar3 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c84);
  func_0x000107c61174(uVar10);
  func_0x000107c5b51c(puVar2);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar3,param_2,puVar2);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90();
  func_0x000107c61180();
  func_0x000107c3b648(param_1,param_2,puVar1,uVar10,puVar3,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947a78);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c14e8;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c88);
  func_0x000107c61174(uVar10);
  func_0x000107c418c8(puVar3);
  func_0x000107c61180();
  func_0x000107c5b6e0(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar2,uVar10,puVar1,puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947ab8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bf9b8;
  puVar1 = PTR_PTR_1126ae960;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112752c90);
  func_0x000107c61174(uVar10);
  func_0x000107c5e2cc(puVar3);
  func_0x000107c61180();
  func_0x000107c4cb0c(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1,param_2,puVar4,uVar10,puVar1,puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lStack_f8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lStack_d0);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lStack_a8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 10096b0b8; end: 10096b0bf; +[SCAttributedMobileCodeHealthTask tweakUsageReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b0b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096b0c0; end: 10096b10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b0c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096b110; end: 10096b147; +[SCAttributedTask mobileCodeHealth:] */

void FUN_10096b110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1000ad2ec();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10096b148; end: 10096b2b3; -[SCActiveUserStartupCompleteEntryPoint _exposeStartupCompleteScope:exposer:attributedTask:priority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_4;
  func_0x000107c49cd8();
  if ((int)uVar1 != 0) {
    func_0x000107c61144(auStack_58,param_4);
    puVar2 = PTR_PTR_1126aeec0;
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c61174(param_3);
    func_0x000107c3e2d8(puVar2);
    func_0x000107c61180();
    func_0x000107c3d798(*(undefined8 *)(param_1 + _DAT_112752c3c));
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10096b2b4; end: 10096b2b7;  */

void FUN_10096b2b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096b2b8; end: 10096b2d7;  */

void FUN_10096b2b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127e0498);
  return;
}



/* Entry: 10096b2d8; end: 10096b2e3; -[SCComposerAuthContextDelegateProxy setAuthContextDelegate:] */

void FUN_10096b2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10096b2e4; end: 10096b2eb; +[SCAttributedBatterySubtask nonFatalReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b2e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309afd0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096b2ec; end: 10096b613; +[SCNTivClient create:presentationDelegate:presentationDelegateV2:duplex:blizzardLoggerDelegate:authContextDelegate:userAgentPrefix:routeTag:] */

void FUN_10096b2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined **appuStack_150 [4];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  long lStack_c0;
  long lStack_78;
  long lStack_70;
  
  pppuVar1 = appuStack_150;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  FUN_10096b614(&lStack_c8,param_3);
  FUN_10096b930(auStack_d8,param_4);
  func_0x000107c61174(param_5);
  if (param_5 == 0) {
    uStack_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    FUN_10096bb18(&uStack_e8,param_5);
  }
  func_0x00010096bd5c();
  FUN_10049e82c(auStack_f8,param_6);
  FUN_10096bd64(auStack_108,param_7);
  FUN_100459fd0(auStack_118,param_8);
  FUN_1000fbca4(auStack_130,param_9);
  FUN_100114864(appuStack_150,param_10);
  FUN_10096bf4c(&lStack_78,&lStack_c8,auStack_d8,&uStack_e8,auStack_f8,auStack_108,auStack_118,
                auStack_130,appuStack_150);
  FUN_1001148fc(appuStack_150);
  func_0x000107c60ca0(auStack_130);
  func_0x00010048b850(auStack_118);
  FUN_100bbbb4c(auStack_108);
  FUN_10048d450(auStack_f8);
  FUN_100bbbb78(&uStack_e8);
  func_0x000100bbbb9c(auStack_d8);
  func_0x000100bbbbc0(&lStack_c8);
  if (lStack_78 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_150[0] = &PTR_DAT_11093e128;
    lStack_c8 = lStack_78;
    lStack_c0 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x000100bbbbf8();
      } while (extraout_w10 != 0);
    }
    FUN_10015c218(appuStack_150,&lStack_c8,FUN_100bbbc08);
    func_0x000107c61180();
    FUN_1000df524(&lStack_c8);
  }
  func_0x000100bbbd30(&lStack_78);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x00010096bd5c();
  func_0x000107c61170(param_4);
  func_0x000100bbbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10096b614; end: 10096b79f;  */

void FUN_10096b614(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c5d984(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_58);
  uVar2 = param_2;
  func_0x000107c4342c(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_70);
  uVar3 = param_2;
  func_0x000107c43430(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_88);
  uVar4 = param_2;
  func_0x000107c50160();
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[5] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[8] = uStack_78;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  *(char *)(param_1 + 9) = (char)uVar4;
  func_0x000107c60ca0(&uStack_88);
  func_0x000107c61170(uVar3);
  func_0x000107c60ca0(&uStack_70);
  func_0x000107c61170(uVar2);
  func_0x000107c60ca0(&uStack_58);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10096b7a0; end: 10096b7a7; -[SCNTivClientParameters userId] */

undefined8 FUN_10096b7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10096b7a8; end: 10096b7af; +[SCAttributedCameraTask logging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b7a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096b7b0; end: 10096b7b7; -[SCNTivClientParameters fileLocation] */

undefined8 FUN_10096b7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10096b7b8; end: 10096b917; -[SCActiveUserStartupCompleteEntryPoint _exposeStartupCompleteScope:requiredExposer:attributedTask:priority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b7b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61144(auStack_58,param_4);
  puVar1 = PTR_PTR_1126aeec0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c61174(param_3);
  func_0x000107c3e2d8(puVar1);
  func_0x000107c61180();
  func_0x000107c3d798(*(undefined8 *)(param_1 + _DAT_112752c3c));
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10096b918; end: 10096b91f; +[SCAttributedConvoTask chatLastInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b918(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b1f0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096b920; end: 10096b927; -[SCNTivClientParameters fileLocationV2] */

undefined8 FUN_10096b920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10096b928; end: 10096b92f; -[SCNTivClientParameters replaceCurrentlyPresented] */

undefined1 FUN_10096b928(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10096b930; end: 10096b9db;  */

void FUN_10096b930(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_11093e190;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10096b9dc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10096bad4(&uStack_50);
  }
  func_0x00010096bb04();
  return;
}



/* Entry: 10096b9dc; end: 10096bad3;  */

void FUN_10096b9dc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_11093e1d0;
  puVar4[3] = &PTR_DAT_11093e248;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_11093e220;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10096bad4(&uStack_50);
  return;
}



/* Entry: 10096bad4; end: 10096bafb;  */

long FUN_10096bad4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10096bafc; end: 10096bb17;  */

void FUN_10096bafc(void)

{
  return;
}



/* Entry: 10096bb18; end: 10096bbbf;  */

void FUN_10096bb18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010096bb0c();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x000107c61174();
    ppuStack_38 = &PTR_DAT_11093e3a0;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&stack0xffffffffffffffc0,FUN_10096bbc0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(unaff_x19);
    unaff_x20[1] = uVar2;
    *unaff_x20 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10096bcbc(&uStack_50);
  }
  func_0x00010096bd54();
  return;
}



/* Entry: 10096bbc0; end: 10096bcb3;  */

void FUN_10096bbc0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_11093e3e0;
  puVar4[3] = &PTR_DAT_11093e458;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  FUN_10096bcb4();
  puVar4[3] = &PTR_DAT_11093e430;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10096bcbc(&uStack_50);
  return;
}



/* Entry: 10096bcb4; end: 10096bcbb;  */

void FUN_10096bcb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10096bcbc; end: 10096bce7;  */

long FUN_10096bcbc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}


