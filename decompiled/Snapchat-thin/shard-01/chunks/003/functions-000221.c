/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ec1538; end: 100ec158b;  */

void FUN_100ec1538(undefined8 param_1,undefined8 param_2,undefined1 *param_3,code *param_4)

{
  undefined *puVar1;
  
  *param_3 = 1;
  puVar1 = PTR_PTR_1126d0ba8;
  func_0x000107c61168(PTR_PTR_1126d0ba8);
  func_0x000107c4fb08();
  func_0x000107c61180();
  (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100ec158c; end: 100ec16db;  */

/* WARNING: Possible PIC construction at 0x000100ec1630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec15e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec1634) */

void FUN_100ec158c(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_2 == 0) {
    func_0x000108b9aaec();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec1658);
      (*pcVar1)();
    }
    func_0x000107c5faec();
  }
  else {
    puVar2 = PTR_PTR_1126d0ba0;
    func_0x000107c61168(PTR_PTR_1126d0ba0);
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c50838(puVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ec16dc; end: 100ec17cf;  */

void FUN_100ec16dc(void)

{
  undefined *puVar1;
  code *in_x3;
  
  puVar1 = PTR_PTR_1126d0ba8;
  func_0x000107c61168(PTR_PTR_1126d0ba8);
  func_0x000107c4fb04();
  func_0x000107c61180();
  (*in_x3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100ec17d0; end: 100ec18db;  */

/* WARNING: Possible PIC construction at 0x000100ec1834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec1838) */

void FUN_100ec17d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0ba0;
  func_0x000107c61168(PTR_PTR_1126d0ba0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5d370(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ec18dc; end: 100ec19bf; -[_TtC27PhoneEmailFirstLogInFeature37PhoneEmailFirstLogInEmailEntryService submitEmail:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x000100ec19a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec19a8) */

void FUN_100ec18dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103636f8;
  func_0x000107c613fc(&UNK_1103636f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_110363720;
  func_0x000107c613fc(&UNK_110363720,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_100ec015c(param_3,param_2,0x100ec1c7c,puVar1,0x100ec1bb4,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100ec19c0; end: 100ec1a1b; -[_TtC27PhoneEmailFirstLogInFeature37PhoneEmailFirstLogInEmailEntryService init] */

void FUN_100ec19c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInFeature.PhoneEmailFirstLogInEmailEntryService",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec19ec);
  (*pcVar1)();
}



/* Entry: 100ec1a1c; end: 100ec1a53; -[_TtC27PhoneEmailFirstLogInFeature37PhoneEmailFirstLogInEmailEntryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec1a1c(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d47fe0));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112d47fe8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d47fe8));
  return;
}



/* Entry: 100ec1a54; end: 100ec1a73;  */

void FUN_100ec1a54(void)

{
  func_0x000107c61168(&PTR_PTR_11279d958);
  return;
}



/* Entry: 100ec1a74; end: 100ec1a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec1a74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long *plVar15;
  long lVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  byte bStack_89;
  undefined1 auStack_88 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    bStack_89 = 0;
    uVar5 = param_1;
    func_0x000107c506c8();
    func_0x000107c61180();
    puVar17 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a0 = (code *)0x100ec0158;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)&UNK_10006eb60;
    puStack_a8 = &UNK_110363580;
    ppuVar6 = &puStack_c0;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = FUN_100ec08f4;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar17;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100eb70e8;
    puStack_a8 = &UNK_1103635a8;
    ppuVar7 = &puStack_c0;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec08f8;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar17;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100eb70ec;
    puStack_a8 = &UNK_1103635d0;
    ppuVar8 = &puStack_c0;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec08fc;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar17;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_100eb57dc;
    puStack_a8 = &UNK_1103635f8;
    ppuVar9 = &puStack_c0;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec0900;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar17;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100eb70f0;
    puStack_a8 = &UNK_110363620;
    ppuVar10 = &puStack_c0;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec0904;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar17;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100e27a2c;
    puStack_a8 = &UNK_110363648;
    ppuVar11 = &puStack_c0;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_98);
    puVar12 = &UNK_110363680;
    func_0x000107c613fc(&UNK_110363680,0x28,7);
    *(byte **)(puVar12 + 0x10) = &bStack_89;
    *(undefined8 *)(puVar12 + 0x18) = uVar2;
    *(undefined8 *)(puVar12 + 0x20) = uVar1;
    puVar13 = &UNK_1103636a8;
    func_0x000107c613fc(&UNK_1103636a8,0x20,7);
    *(code **)(puVar13 + 0x10) = FUN_100ec1ba0;
    *(undefined **)(puVar13 + 0x18) = puVar12;
    pcStack_a0 = (code *)0x100ec1bac;
    puStack_c0 = puVar17;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_100ec4088;
    puStack_a8 = &UNK_1103636c0;
    ppuVar14 = &puStack_c0;
    puStack_98 = puVar13;
    func_0x000107c60bc4();
    puVar13 = puStack_98;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar13);
    func_0x000107c4c74c(uVar5);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar5);
    plVar15 = (long *)(lVar4 + _DAT_112d47fe8);
    func_0x0001000a8868(plVar15,plVar15[3]);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar16 = *(long *)(*plVar15 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar16 != 0) {
      func_0x000107c4ba30();
      func_0x000107c615e8(lVar16);
    }
    if ((bStack_89 & 1) == 0) {
      puVar13 = PTR_PTR_1126d0ba0;
      func_0x000107c61168(PTR_PTR_1126d0ba0);
      puVar17 = puVar13;
      func_0x000108b9aaec();
      func_0x000107c61180();
      func_0x000107c5d370(puVar13);
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      (*pcVar3)(puVar13);
      func_0x000107c61574(puVar12);
      func_0x000107c61170(puVar13);
    }
    else {
      func_0x000107c61574(puVar12);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100ec1a9c; end: 100ec1acf;  */

void FUN_100ec1a9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ec1ad0; end: 100ec1b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec1ad0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  undefined *puVar29;
  long unaff_x20;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_91;
  undefined1 auStack_90 [32];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar28 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_90,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uStack_118 = 0;
    pcStack_110 = (code *)0x0;
    puVar30 = (undefined *)0x0;
    uStack_108 = 0;
    uStack_100 = 0;
    puVar35 = (undefined *)0x0;
    puVar37 = (undefined *)0x0;
    uStack_f8 = 0;
    puVar33 = (undefined *)0x0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    puVar34 = (undefined *)0x0;
    puVar32 = (undefined *)0x0;
    pcStack_e0 = (code *)0x0;
    uStack_d8 = 0;
    puVar29 = (undefined *)0x0;
    puVar36 = (undefined *)0x0;
    pcStack_d0 = (code *)0x0;
    puVar31 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else {
    uStack_91 = 0;
    uVar6 = param_1;
    func_0x000107c4c034();
    func_0x000107c61180();
    puVar7 = &UNK_110362f00;
    func_0x000107c613fc(&UNK_110362f00,0x28,7);
    *(undefined1 **)(puVar7 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar7 + 0x18) = uVar2;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    puVar8 = &UNK_110362f28;
    func_0x000107c613fc(&UNK_110362f28,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x100ec1ca8;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x100ec1af0;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110362f40;
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar8;
    func_0x000107c60bc4();
    puVar8 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar8);
    puVar10 = &UNK_110362f78;
    func_0x000107c613fc(&UNK_110362f78,0x28,7);
    *(undefined1 **)(puVar10 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar10 + 0x18) = uVar2;
    *(undefined8 *)(puVar10 + 0x20) = uVar1;
    puVar8 = &UNK_110362fa0;
    func_0x000107c613fc(&UNK_110362fa0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x100ec1af8;
    *(undefined **)(puVar8 + 0x18) = puVar10;
    uStack_a8 = 0x100ec1b04;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100eb5768;
    puStack_b0 = &UNK_110362fb8;
    ppuVar11 = &puStack_c8;
    puStack_a0 = puVar8;
    func_0x000107c60bc4();
    puVar8 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar8);
    puVar12 = &UNK_110362ff0;
    func_0x000107c613fc(&UNK_110362ff0,0x28,7);
    *(undefined1 **)(puVar12 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar12 + 0x18) = uVar2;
    *(undefined8 *)(puVar12 + 0x20) = uVar1;
    puVar8 = &UNK_110363018;
    func_0x000107c613fc(&UNK_110363018,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x100ec1b0c;
    *(undefined **)(puVar8 + 0x18) = puVar12;
    uStack_a8 = 0x100ec1b18;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110363030;
    ppuVar13 = &puStack_c8;
    puStack_a0 = puVar8;
    func_0x000107c60bc4();
    puVar8 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_110363068;
    func_0x000107c613fc(&UNK_110363068,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar3;
    *(undefined8 *)(puVar8 + 0x18) = uVar28;
    puVar30 = &UNK_110363090;
    func_0x000107c613fc(&UNK_110363090,0x20,7);
    *(undefined8 *)(puVar30 + 0x10) = 0x100ec1b20;
    *(undefined **)(puVar30 + 0x18) = puVar8;
    uStack_a8 = 0x100ec1b28;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100de58f0;
    puStack_b0 = &UNK_1103630a8;
    ppuVar14 = &puStack_c8;
    puStack_a0 = puVar30;
    func_0x000107c60bc4();
    puVar8 = puStack_a0;
    func_0x000107c6157c(uVar28);
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_1103630e0;
    func_0x000107c613fc(&UNK_1103630e0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar3;
    *(undefined8 *)(puVar8 + 0x18) = uVar28;
    puVar30 = &UNK_110363108;
    func_0x000107c613fc(&UNK_110363108,0x20,7);
    *(undefined8 *)(puVar30 + 0x10) = 0x100ec1b30;
    *(undefined **)(puVar30 + 0x18) = puVar8;
    uStack_a8 = 0x100ec1c74;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110363120;
    ppuVar15 = &puStack_c8;
    puStack_a0 = puVar30;
    func_0x000107c60bc4();
    puVar30 = puStack_a0;
    func_0x000107c6157c(uVar28);
    func_0x000107c61574(puVar30);
    puVar30 = &UNK_110363158;
    func_0x000107c613fc(&UNK_110363158,0x20,7);
    *(undefined8 *)(puVar30 + 0x10) = uVar2;
    *(undefined8 *)(puVar30 + 0x18) = uVar1;
    puVar35 = &UNK_110363180;
    func_0x000107c613fc(&UNK_110363180,0x20,7);
    *(code **)(puVar35 + 0x10) = FUN_100ec1b38;
    *(undefined **)(puVar35 + 0x18) = puVar30;
    uStack_a8 = 0x100ec1c80;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363198;
    ppuVar16 = &puStack_c8;
    puStack_a0 = puVar35;
    func_0x000107c60bc4();
    puVar35 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar35);
    puVar35 = &UNK_1103631d0;
    func_0x000107c613fc(&UNK_1103631d0,0x20,7);
    *(undefined8 *)(puVar35 + 0x10) = uVar2;
    *(undefined8 *)(puVar35 + 0x18) = uVar1;
    puVar37 = &UNK_1103631f8;
    func_0x000107c613fc(&UNK_1103631f8,0x20,7);
    *(undefined8 *)(puVar37 + 0x10) = 0x100ec1c84;
    *(undefined **)(puVar37 + 0x18) = puVar35;
    uStack_a8 = 0x100ec1c88;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363210;
    ppuVar17 = &puStack_c8;
    puStack_a0 = puVar37;
    func_0x000107c60bc4();
    puVar37 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar37);
    puVar37 = &UNK_110363248;
    func_0x000107c613fc(&UNK_110363248,0x20,7);
    *(undefined8 *)(puVar37 + 0x10) = uVar3;
    *(undefined8 *)(puVar37 + 0x18) = uVar28;
    puVar33 = &UNK_110363270;
    func_0x000107c613fc(&UNK_110363270,0x20,7);
    *(undefined8 *)(puVar33 + 0x10) = 0x100ec1ca0;
    *(undefined **)(puVar33 + 0x18) = puVar37;
    uStack_a8 = 0x100ec1c8c;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363288;
    ppuVar18 = &puStack_c8;
    puStack_a0 = puVar33;
    func_0x000107c60bc4();
    puVar33 = puStack_a0;
    func_0x000107c6157c(uVar28);
    func_0x000107c61574(puVar33);
    puVar33 = &UNK_1103632c0;
    func_0x000107c613fc(&UNK_1103632c0,0x20,7);
    *(undefined8 *)(puVar33 + 0x10) = uVar2;
    *(undefined8 *)(puVar33 + 0x18) = uVar1;
    puVar34 = &UNK_1103632e8;
    func_0x000107c613fc(&UNK_1103632e8,0x20,7);
    *(undefined8 *)(puVar34 + 0x10) = 0x100ec1c90;
    *(undefined **)(puVar34 + 0x18) = puVar33;
    uStack_a8 = 0x100ec1c94;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363300;
    ppuVar19 = &puStack_c8;
    puStack_a0 = puVar34;
    func_0x000107c60bc4();
    puVar34 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar34);
    puVar34 = &UNK_110363338;
    func_0x000107c613fc(&UNK_110363338,0x28,7);
    *(undefined1 **)(puVar34 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar34 + 0x18) = uVar2;
    *(undefined8 *)(puVar34 + 0x20) = uVar1;
    puVar32 = &UNK_110363360;
    func_0x000107c613fc(&UNK_110363360,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = 0x100ec1b50;
    *(undefined **)(puVar32 + 0x18) = puVar34;
    uStack_a8 = 0x100ec1c98;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363378;
    ppuVar20 = &puStack_c8;
    puStack_a0 = puVar32;
    func_0x000107c60bc4();
    puVar32 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar32);
    puVar32 = &UNK_1103633b0;
    func_0x000107c613fc(&UNK_1103633b0,0x28,7);
    *(undefined1 **)(puVar32 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar32 + 0x18) = uVar2;
    *(undefined8 *)(puVar32 + 0x20) = uVar1;
    puVar29 = &UNK_1103633d8;
    func_0x000107c613fc(&UNK_1103633d8,0x20,7);
    *(undefined8 *)(puVar29 + 0x10) = 0x100ec1cac;
    *(undefined **)(puVar29 + 0x18) = puVar32;
    uStack_a8 = 0x100ec1c9c;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_1103633f0;
    ppuVar21 = &puStack_c8;
    puStack_a0 = puVar29;
    func_0x000107c60bc4();
    puVar29 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar29);
    puVar29 = &UNK_110363428;
    func_0x000107c613fc(&UNK_110363428,0x28,7);
    *(undefined1 **)(puVar29 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar29 + 0x18) = uVar2;
    *(undefined8 *)(puVar29 + 0x20) = uVar1;
    puVar36 = &UNK_110363450;
    func_0x000107c613fc(&UNK_110363450,0x20,7);
    *(code **)(puVar36 + 0x10) = FUN_100ec1b6c;
    *(undefined **)(puVar36 + 0x18) = puVar29;
    uStack_a8 = 0x100ec1b78;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6b64;
    puStack_b0 = &UNK_110363468;
    ppuVar22 = &puStack_c8;
    puStack_a0 = puVar36;
    func_0x000107c60bc4();
    puVar36 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar36);
    puVar36 = &UNK_1103634a0;
    func_0x000107c613fc(&UNK_1103634a0,0x20,7);
    *(undefined8 *)(puVar36 + 0x10) = uVar3;
    *(undefined8 *)(puVar36 + 0x18) = uVar28;
    puVar31 = &UNK_1103634c8;
    func_0x000107c613fc(&UNK_1103634c8,0x20,7);
    *(undefined8 *)(puVar31 + 0x10) = 0x100ec1b80;
    *(undefined **)(puVar31 + 0x18) = puVar36;
    uStack_a8 = 0x100ec1c78;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_1103634e0;
    ppuVar23 = &puStack_c8;
    puStack_a0 = puVar31;
    func_0x000107c60bc4();
    puVar31 = puStack_a0;
    func_0x000107c6157c(uVar28);
    func_0x000107c61574(puVar31);
    puVar31 = &UNK_110363518;
    func_0x000107c613fc(&UNK_110363518,0x20,7);
    *(undefined8 *)(puVar31 + 0x10) = uVar3;
    *(undefined8 *)(puVar31 + 0x18) = uVar28;
    puVar24 = &UNK_110363540;
    func_0x000107c613fc(&UNK_110363540,0x20,7);
    *(code **)(puVar24 + 0x10) = FUN_100ec1b88;
    *(undefined **)(puVar24 + 0x18) = puVar31;
    uStack_a8 = 0x100ec1ca4;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363558;
    ppuVar25 = &puStack_c8;
    puStack_a0 = puVar24;
    func_0x000107c60bc4();
    puVar24 = puStack_a0;
    func_0x000107c6157c(uVar28);
    func_0x000107c61574(puVar24);
    func_0x000107c4c5c0(uVar6);
    func_0x000107c60bd0(ppuVar25);
    func_0x000107c60bd0(ppuVar23);
    func_0x000107c60bd0(ppuVar22);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar6);
    plVar26 = (long *)(lVar5 + _DAT_112d47fe8);
    func_0x0001000a8868(plVar26,plVar26[3]);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar27 = *(long *)(*plVar26 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar27 == 0) {
      func_0x000107c61574(puVar12);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(lVar5);
    }
    else {
      func_0x000107c4ba30();
      func_0x000107c61574(puVar12);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(lVar27);
    }
    uStack_d8 = 0x100ec1b80;
    pcStack_d0 = FUN_100ec1b88;
    uStack_e8 = 0x100ec1cac;
    pcStack_e0 = FUN_100ec1b6c;
    uStack_f0 = 0x100ec1b50;
    uStack_100 = 0x100ec1ca0;
    uStack_f8 = 0x100ec1c90;
    pcStack_110 = FUN_100ec1b38;
    uStack_108 = 0x100ec1c84;
    uStack_118 = 0x100ec1b30;
  }
  FUN_100c9a198();
  func_0x000100c9a19c(uStack_118,puVar8);
  func_0x000100c9a19c(pcStack_110,puVar30);
  func_0x000100c9a19c(uStack_108,puVar35);
  func_0x000100c9a19c(uStack_100,puVar37);
  func_0x000100c9a19c(uStack_f8,puVar33);
  func_0x000100c9a19c(uStack_f0,puVar34);
  func_0x000100c9a19c(uStack_e8,puVar32);
  func_0x000100c9a19c(pcStack_e0,puVar29);
  func_0x000100c9a19c(uStack_d8,puVar36);
  func_0x000100c9a19c(pcStack_d0,puVar31);
  return;
}



/* Entry: 100ec1b38; end: 100ec1b6b;  */

void FUN_100ec1b38(void)

{
  FUN_100ec16dc();
  return;
}



/* Entry: 100ec1b6c; end: 100ec1b87;  */

void FUN_100ec1b6c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  puVar2 = PTR_PTR_1126d0ba8;
  func_0x000107c61168(PTR_PTR_1126d0ba8);
  func_0x000107c4fb08();
  func_0x000107c61180();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100ec1b88; end: 100ec1b9f;  */

void FUN_100ec1b88(void)

{
  func_0x000100ec1858();
  return;
}



/* Entry: 100ec1ba0; end: 100ec1caf;  */

/* WARNING: Possible PIC construction at 0x000100ec0998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec099c) */

void FUN_100ec1ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  puVar1 = PTR_PTR_1126d0ba8;
  func_0x000107c61168(PTR_PTR_1126d0ba8);
  func_0x000107c5ee20(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c407ec(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100ec1cb0; end: 100ec1fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec1cb0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d48028);
  puVar3 = &UNK_110363fe0;
  func_0x000107c613fc(&UNK_110363fe0,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110364008;
  func_0x000107c613fc(&UNK_110364008,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100ec3f10;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x100ec4038;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6bdc;
  puStack_88 = &UNK_110364020;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110364058;
  func_0x000107c613fc(&UNK_110364058,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_110364080;
  func_0x000107c613fc(&UNK_110364080,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x100ec3f1c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x100ec403c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6bdc;
  puStack_88 = &UNK_110364098;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1103640d0;
  func_0x000107c613fc(&UNK_1103640d0,0x18,7);
  *(long *)(puVar9 + 0x10) = unaff_x20;
  puVar10 = &UNK_1103640f8;
  func_0x000107c613fc(&UNK_1103640f8,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x100ec4064;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_80 = 0x100ec4040;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6bdc;
  puStack_88 = &UNK_110364110;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c60c(uVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x83,0x26,0x1c,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ec1f9c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x83,0x2a,0x12,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar10;
    func_0x000107c61544(puVar10,"",0x83,0x2e,0x15,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ec1fa4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ec1fa0);
  (*pcVar2)();
}



/* Entry: 100ec1fa4; end: 100ec1fff; -[_TtC27PhoneEmailFirstLogInFeature36PhoneEmailFirstLogInMagicCodeService init] */

void FUN_100ec1fa4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInFeature.PhoneEmailFirstLogInMagicCodeService",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec1fd0);
  (*pcVar1)();
}



/* Entry: 100ec2000; end: 100ec207b; -[_TtC27PhoneEmailFirstLogInFeature36PhoneEmailFirstLogInMagicCodeService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ec204c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec2050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec2000(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48018));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48020));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48028));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112d48030))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d48030));
  return;
}



/* Entry: 100ec207c; end: 100ec209b;  */

void FUN_100ec207c(void)

{
  func_0x000107c61168(&PTR_PTR_11279da28);
  return;
}



/* Entry: 100ec209c; end: 100ec23e7;  */

/* WARNING: Possible PIC construction at 0x000100ec2120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec21bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec2344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec23b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec2348) */
/* WARNING: Removing unreachable block (ram,0x000100ec21c0) */
/* WARNING: Removing unreachable block (ram,0x000100ec2124) */
/* WARNING: Removing unreachable block (ram,0x000100ec2140) */
/* WARNING: Removing unreachable block (ram,0x000100ec2374) */
/* WARNING: Removing unreachable block (ram,0x000100ec2148) */
/* WARNING: Removing unreachable block (ram,0x000100ec2350) */
/* WARNING: Removing unreachable block (ram,0x000100ec2164) */
/* WARNING: Removing unreachable block (ram,0x000100ec23b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec209c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d48040);
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d48048);
  uVar3 = *(undefined8 *)(*plVar1 + 0x10);
  func_0x000107c311b4(uVar2);
  func_0x000107c61180();
  func_0x000104d0746c(uVar3,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100ec23e8; end: 100ec24af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec23e8(undefined8 param_1,long param_2,code *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + _DAT_112d48040);
    func_0x0001000a8868(plVar1,plVar1[3]);
    uVar2 = *(undefined8 *)(param_2 + _DAT_112d48048);
    uVar3 = *(undefined8 *)(*plVar1 + 0x10);
    func_0x000107c311b4(uVar2);
    func_0x000107c61180();
    func_0x000104d075e0(uVar3,uVar2,1,1);
    func_0x000107c61170(uVar2);
    (*param_3)();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100ec24b0; end: 100ec24ff;  */

void FUN_100ec24b0(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100ec2500; end: 100ec262f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec2500(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,code *param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    plVar1 = (long *)(param_4 + _DAT_112d48040);
    func_0x0001000a8868(plVar1,plVar1[3]);
    uVar3 = *(undefined8 *)(param_4 + _DAT_112d48048);
    uVar4 = *(undefined8 *)(*plVar1 + 0x10);
    func_0x000107c311b4(uVar3);
    func_0x000107c61180();
    func_0x000104d075e0(uVar4,uVar3,0,1);
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126af128;
    func_0x000107c61168(PTR_PTR_1126af128);
    func_0x000107c5fadc(param_1,param_2);
    if ((param_3 & 1) == 0) {
      func_0x000107c5d36c(puVar2);
    }
    else {
      func_0x000107c50838();
    }
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    (*param_5)(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 100ec2630; end: 100ec2693;  */

void FUN_100ec2630(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 100ec2694; end: 100ec2747; -[_TtC27PhoneEmailFirstLogInFeature36PhoneEmailFirstLogInMagicCodeService requestCodeResendWithSuccessBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x000100ec2730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec2734) */

void FUN_100ec2694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110363ef0;
  func_0x000107c613fc(&UNK_110363ef0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_110363f18;
  func_0x000107c613fc(&UNK_110363f18,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_100ec209c(FUN_100ec3eb0,puVar1,0x100ec3ebc,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100ec2748; end: 100ec2bab;  */

/* WARNING: Possible PIC construction at 0x000100ec2800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec2880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec295c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec2af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec2b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec2b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec2b04) */
/* WARNING: Removing unreachable block (ram,0x000100ec2af4) */
/* WARNING: Removing unreachable block (ram,0x000100ec2960) */
/* WARNING: Removing unreachable block (ram,0x000100ec2884) */
/* WARNING: Removing unreachable block (ram,0x000100ec2804) */
/* WARNING: Removing unreachable block (ram,0x000100ec288c) */
/* WARNING: Removing unreachable block (ram,0x000100ec28a4) */
/* WARNING: Removing unreachable block (ram,0x000100ec2b30) */
/* WARNING: Removing unreachable block (ram,0x000100ec28ac) */
/* WARNING: Removing unreachable block (ram,0x000100ec28c0) */
/* WARNING: Removing unreachable block (ram,0x000100ec28d8) */
/* WARNING: Removing unreachable block (ram,0x000100ec2b84) */
/* WARNING: Removing unreachable block (ram,0x000100ec28f4) */
/* WARNING: Removing unreachable block (ram,0x000100ec2824) */
/* WARNING: Removing unreachable block (ram,0x000100ec2b70) */
/* WARNING: Removing unreachable block (ram,0x000100ec2b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec2748(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    func_0x0001000a8868(unaff_x20 + _DAT_112d48040,
                        *(undefined8 *)(unaff_x20 + _DAT_112d48040 + 0x18));
    FUN_100eba534(0xe1,4);
  }
  func_0x0001000a8868(unaff_x20 + _DAT_112d48040,*(undefined8 *)(unaff_x20 + _DAT_112d48040 + 0x18))
  ;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d48038 + 8);
  func_0x000107c61434(uVar1);
  func_0x00010011df08();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ec2bac; end: 100ec2d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec2bac(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    plVar3 = (long *)(param_2 + _DAT_112d48040);
    func_0x0001000a8868(plVar3,plVar3[3]);
    uVar5 = *(undefined8 *)(param_2 + _DAT_112d48038);
    uVar1 = ((undefined8 *)(param_2 + _DAT_112d48038))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar8 = *plVar3;
    lVar4 = *(long *)(lVar8 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c5fadc(uVar5,uVar1);
      uVar6 = *(undefined8 *)(lVar8 + 0x28);
      uVar2 = *(undefined8 *)(lVar8 + 0x30);
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar6,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c4bc84(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c6142c(uVar1);
    puVar7 = PTR_PTR_1126af130;
    func_0x000107c610f8(PTR_PTR_1126af130);
    func_0x000107c483d0();
    (*param_3)();
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 100ec2d3c; end: 100ec38f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec2d3c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  long lVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uStack_128 = 0;
    pcStack_120 = (code *)0x0;
    puVar29 = (undefined *)0x0;
    puVar30 = (undefined *)0x0;
    uStack_118 = 0;
    uStack_110 = 0;
    puVar31 = (undefined *)0x0;
    uStack_108 = 0;
    uStack_100 = 0;
    puVar37 = (undefined *)0x0;
    puVar38 = (undefined *)0x0;
    uStack_f8 = 0;
    pcStack_f0 = (code *)0x0;
    puVar33 = (undefined *)0x0;
    puVar35 = (undefined *)0x0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puVar32 = (undefined *)0x0;
    puVar34 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    uStack_a8 = 0xffffffffffffffff;
    uVar5 = param_1;
    func_0x000107c4c034();
    func_0x000107c61180();
    puVar6 = &UNK_110363860;
    func_0x000107c613fc(&UNK_110363860,0x20,7);
    *(undefined8 **)(puVar6 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar6 + 0x18) = &uStack_a8;
    puVar29 = &UNK_110363888;
    func_0x000107c613fc(&UNK_110363888,0x20,7);
    *(undefined8 *)(puVar29 + 0x10) = 0x100ec3d20;
    *(undefined **)(puVar29 + 0x18) = puVar6;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_b8 = (code *)0x100ec3d28;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_1103638a0;
    ppuVar7 = &puStack_d8;
    puStack_b0 = puVar29;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar8 = &UNK_1103638d8;
    func_0x000107c613fc(&UNK_1103638d8,0x20,7);
    *(undefined8 **)(puVar8 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar8 + 0x18) = &uStack_a8;
    puVar29 = &UNK_110363900;
    func_0x000107c613fc(&UNK_110363900,0x20,7);
    *(code **)(puVar29 + 0x10) = FUN_100ec3d30;
    *(undefined **)(puVar29 + 0x18) = puVar8;
    pcStack_b8 = FUN_100ec3d6c;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_100eb5768;
    puStack_c0 = &UNK_110363918;
    ppuVar9 = &puStack_d8;
    puStack_b0 = puVar29;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar10 = &UNK_110363950;
    func_0x000107c613fc(&UNK_110363950,0x20,7);
    *(undefined8 **)(puVar10 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar10 + 0x18) = &uStack_a8;
    puVar29 = &UNK_110363978;
    func_0x000107c613fc(&UNK_110363978,0x20,7);
    *(undefined8 *)(puVar29 + 0x10) = 0x100ec3d74;
    *(undefined **)(puVar29 + 0x18) = puVar10;
    pcStack_b8 = (code *)0x100ec3d7c;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_100de6bdc;
    puStack_c0 = &UNK_110363990;
    ppuVar11 = &puStack_d8;
    puStack_b0 = puVar29;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar29 = &UNK_1103639c8;
    func_0x000107c613fc(&UNK_1103639c8,0x20,7);
    *(undefined8 **)(puVar29 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar29 + 0x18) = &uStack_a8;
    puVar30 = &UNK_1103639f0;
    func_0x000107c613fc(&UNK_1103639f0,0x20,7);
    *(undefined8 *)(puVar30 + 0x10) = 0x100ec3d84;
    *(undefined **)(puVar30 + 0x18) = puVar29;
    pcStack_b8 = (code *)0x100ec3d8c;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100de58f0;
    puStack_c0 = &UNK_110363a08;
    ppuVar12 = &puStack_d8;
    puStack_b0 = puVar30;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar29 = &UNK_110363a40;
    func_0x000107c613fc(&UNK_110363a40,0x20,7);
    *(undefined8 **)(puVar29 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar29 + 0x18) = &uStack_a8;
    puVar30 = &UNK_110363a68;
    func_0x000107c613fc(&UNK_110363a68,0x20,7);
    *(undefined8 *)(puVar30 + 0x10) = 0x100ec3d94;
    *(undefined **)(puVar30 + 0x18) = puVar29;
    pcStack_b8 = (code *)0x100ec4030;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_100de6bdc;
    puStack_c0 = &UNK_110363a80;
    ppuVar13 = &puStack_d8;
    puStack_b0 = puVar30;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar30 = &UNK_110363ab8;
    func_0x000107c613fc(&UNK_110363ab8,0x20,7);
    *(undefined8 **)(puVar30 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar30 + 0x18) = &uStack_a8;
    puVar31 = &UNK_110363ae0;
    func_0x000107c613fc(&UNK_110363ae0,0x20,7);
    *(code **)(puVar31 + 0x10) = FUN_100ec3de0;
    *(undefined **)(puVar31 + 0x18) = puVar30;
    pcStack_b8 = (code *)0x100ec4048;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_110363af8;
    ppuVar14 = &puStack_d8;
    puStack_b0 = puVar31;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar31 = &UNK_110363b30;
    func_0x000107c613fc(&UNK_110363b30,0x20,7);
    *(undefined8 **)(puVar31 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar31 + 0x18) = &uStack_a8;
    puVar15 = &UNK_110363b58;
    func_0x000107c613fc(&UNK_110363b58,0x20,7);
    *(undefined8 *)(puVar15 + 0x10) = 0x100ec3de8;
    *(undefined **)(puVar15 + 0x18) = puVar31;
    pcStack_b8 = (code *)0x100ec404c;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_110363b70;
    ppuVar16 = &puStack_d8;
    puStack_b0 = puVar15;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar15 = &UNK_110363ba8;
    func_0x000107c613fc(&UNK_110363ba8,0x20,7);
    *(undefined8 **)(puVar15 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar15 + 0x18) = &uStack_a8;
    puVar37 = &UNK_110363bd0;
    func_0x000107c613fc(&UNK_110363bd0,0x20,7);
    *(undefined8 *)(puVar37 + 0x10) = 0x100ec3df0;
    *(undefined **)(puVar37 + 0x18) = puVar15;
    pcStack_b8 = (code *)0x100ec4050;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_110363be8;
    ppuVar17 = &puStack_d8;
    puStack_b0 = puVar37;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar37 = &UNK_110363c20;
    func_0x000107c613fc(&UNK_110363c20,0x20,7);
    *(undefined8 **)(puVar37 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar37 + 0x18) = &uStack_a8;
    puVar38 = &UNK_110363c48;
    func_0x000107c613fc(&UNK_110363c48,0x20,7);
    *(undefined8 *)(puVar38 + 0x10) = 0x100ec3df8;
    *(undefined **)(puVar38 + 0x18) = puVar37;
    pcStack_b8 = (code *)0x100ec4054;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_110363c60;
    ppuVar18 = &puStack_d8;
    puStack_b0 = puVar38;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar38 = &UNK_110363c98;
    func_0x000107c613fc(&UNK_110363c98,0x20,7);
    *(undefined8 **)(puVar38 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar38 + 0x18) = &uStack_a8;
    puVar33 = &UNK_110363cc0;
    func_0x000107c613fc(&UNK_110363cc0,0x20,7);
    *(undefined8 *)(puVar33 + 0x10) = 0x100ec3e00;
    *(undefined **)(puVar33 + 0x18) = puVar38;
    pcStack_b8 = (code *)0x100ec4058;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_110363cd8;
    ppuVar19 = &puStack_d8;
    puStack_b0 = puVar33;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar33 = &UNK_110363d10;
    func_0x000107c613fc(&UNK_110363d10,0x20,7);
    *(undefined8 **)(puVar33 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar33 + 0x18) = &uStack_a8;
    puVar35 = &UNK_110363d38;
    func_0x000107c613fc(&UNK_110363d38,0x20,7);
    *(undefined8 *)(puVar35 + 0x10) = 0x100ec3e08;
    *(undefined **)(puVar35 + 0x18) = puVar33;
    pcStack_b8 = (code *)0x100ec405c;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_110363d50;
    ppuVar20 = &puStack_d8;
    puStack_b0 = puVar35;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar35 = &UNK_110363d88;
    func_0x000107c613fc(&UNK_110363d88,0x20,7);
    *(undefined8 **)(puVar35 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar35 + 0x18) = &uStack_a8;
    puVar32 = &UNK_110363db0;
    func_0x000107c613fc(&UNK_110363db0,0x20,7);
    *(code **)(puVar32 + 0x10) = FUN_100ec3e10;
    *(undefined **)(puVar32 + 0x18) = puVar35;
    pcStack_b8 = FUN_100ec3e4c;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_100de6b64;
    puStack_c0 = &UNK_110363dc8;
    ppuVar21 = &puStack_d8;
    puStack_b0 = puVar32;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    puVar32 = &UNK_110363e00;
    func_0x000107c613fc(&UNK_110363e00,0x40,7);
    *(undefined8 **)(puVar32 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar32 + 0x18) = &uStack_a8;
    *(long *)(puVar32 + 0x20) = param_2;
    *(undefined8 *)(puVar32 + 0x28) = param_1;
    *(code **)(puVar32 + 0x30) = param_3;
    *(undefined8 *)(puVar32 + 0x38) = param_4;
    puVar34 = &UNK_110363e28;
    func_0x000107c613fc(&UNK_110363e28,0x20,7);
    *(undefined8 *)(puVar34 + 0x10) = 0x100ec3e54;
    *(undefined **)(puVar34 + 0x18) = puVar32;
    pcStack_b8 = (code *)0x100ec4034;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_100de6bdc;
    puStack_c0 = &UNK_110363e40;
    ppuVar22 = &puStack_d8;
    puStack_b0 = puVar34;
    func_0x000107c60bc4();
    puVar34 = puStack_b0;
    func_0x000107c61174();
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar34);
    puVar34 = &UNK_110363e78;
    func_0x000107c613fc(&UNK_110363e78,0x20,7);
    *(undefined8 **)(puVar34 + 0x10) = &uStack_a0;
    *(undefined8 **)(puVar34 + 0x18) = &uStack_a8;
    puVar23 = &UNK_110363ea0;
    func_0x000107c613fc(&UNK_110363ea0,0x20,7);
    *(undefined8 *)(puVar23 + 0x10) = 0x100ec3e64;
    *(undefined **)(puVar23 + 0x18) = puVar34;
    pcStack_b8 = (code *)0x100ec4060;
    puStack_d8 = puVar4;
    uStack_d0 = 0x42000000;
    pcStack_c8 = (code *)0x100eb5728;
    puStack_c0 = &UNK_110363eb8;
    ppuVar24 = &puStack_d8;
    puStack_b0 = puVar23;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    func_0x000107c4c5c0(uVar5);
    func_0x000107c60bd0(ppuVar24);
    func_0x000107c60bd0(ppuVar22);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar5);
    plVar27 = (long *)(param_2 + _DAT_112d48040);
    plVar25 = plVar27;
    func_0x0001000a8868(plVar27,plVar27[3]);
    puVar1 = (undefined8 *)(param_2 + _DAT_112d48038);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar26 = *(long *)(*plVar25 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar26 != 0) {
      func_0x000107c5fadc(uVar5,uVar2);
      func_0x000107c4bc8c(lVar26);
      func_0x000107c615e8(lVar26);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c6142c(uVar2);
    func_0x0001000a8868(plVar27,plVar27[3]);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar36 = *plVar27;
    lVar26 = *(long *)(lVar36 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar26 != 0) {
      func_0x000107c5fadc(uVar5,uVar2);
      uVar28 = *(undefined8 *)(lVar36 + 0x28);
      uVar3 = *(undefined8 *)(lVar36 + 0x30);
      func_0x000107c61434(uVar3);
      func_0x000107c5fadc(uVar28,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c4bc84(lVar26);
      func_0x000107c615e8(lVar26);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar28);
    }
    func_0x000107c6142c(uVar2);
    puVar23 = PTR_PTR_1126af138;
    func_0x000107c61168(PTR_PTR_1126af138);
    uVar2 = uStack_98;
    uVar5 = uStack_a0;
    func_0x000107c61434(uStack_98);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c50838(puVar23);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    (*param_3)(puVar23);
    func_0x000107c61170(puVar23);
    func_0x000107c61170(param_2);
    uVar5 = uStack_98;
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar6);
    func_0x000107c6142c(uVar5);
    uStack_e8 = 0x100ec3e54;
    uStack_e0 = 0x100ec3e64;
    uStack_f8 = 0x100ec3e08;
    pcStack_f0 = FUN_100ec3e10;
    uStack_108 = 0x100ec3df8;
    uStack_100 = 0x100ec3e00;
    uStack_118 = 0x100ec3de8;
    uStack_110 = 0x100ec3df0;
    uStack_128 = 0x100ec3d94;
    pcStack_120 = FUN_100ec3de0;
  }
  FUN_100c9a2e4();
  func_0x000100c9a2e8(uStack_128,puVar29);
  func_0x000100c9a2e8(pcStack_120,puVar30);
  func_0x000100c9a2e8(uStack_118,puVar31);
  func_0x000100c9a2e8(uStack_110,puVar15);
  func_0x000100c9a2e8(uStack_108,puVar37);
  func_0x000100c9a2e8(uStack_100,puVar38);
  func_0x000100c9a2e8(uStack_f8,puVar33);
  func_0x000100c9a2e8(pcStack_f0,puVar35);
  func_0x000100c9a2e8(uStack_e8,puVar32);
  func_0x000100c9a2e8(uStack_e0,puVar34);
  return;
}



/* Entry: 100ec38f4; end: 100ec398b;  */

void FUN_100ec38f4(long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  if (param_2 == 0) {
    func_0x000108b9aaec();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec398c);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    param_1 = lVar3;
  }
  lVar3 = param_3[1];
  *param_3 = param_1;
  param_3[1] = lVar2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(lVar3);
  *param_4 = 5;
  return;
}



/* Entry: 100ec398c; end: 100ec3be7;  */

/* WARNING: Possible PIC construction at 0x000100ec3a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec3b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec3bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec3b54) */
/* WARNING: Removing unreachable block (ram,0x000100ec3bb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec398c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar8 = param_3[1];
  *param_3 = param_1;
  param_3[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar8);
  *param_4 = 2;
  plVar6 = (long *)(param_5 + _DAT_112d48040);
  plVar4 = plVar6;
  func_0x0001000a8868(plVar6,plVar6[3]);
  puVar1 = (undefined8 *)(param_5 + _DAT_112d48038);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c4458c();
  func_0x000107c4f544(param_6);
  lVar5 = *(long *)(*plVar4 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c6142c(uVar2);
    func_0x0001000a8868(plVar6,plVar6[3]);
    uVar8 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c4458c(param_6);
    func_0x000107c4f544(param_6);
    lVar9 = *plVar6;
    lVar5 = *(long *)(lVar9 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c6142c(uVar2);
      puVar7 = PTR_PTR_1126af138;
      func_0x000107c61168(PTR_PTR_1126af138);
      uVar8 = *param_3;
      uVar2 = param_3[1];
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar8,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c5d36c(puVar7);
      func_0x000107c61180();
    }
    else {
      func_0x000107c5fadc(uVar8,uVar2);
      uVar2 = *(undefined8 *)(lVar9 + 0x28);
      uVar3 = *(undefined8 *)(lVar9 + 0x30);
      func_0x000107c61434(uVar3);
      func_0x000107c5fadc(uVar2,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c4bc84(lVar5);
      func_0x000107c615e8(lVar5);
    }
  }
  else {
    func_0x000107c5fadc(uVar8,uVar2);
    func_0x000107c4bc8c(lVar5);
    func_0x000107c615e8(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 100ec3be8; end: 100ec3cdb; -[_TtC27PhoneEmailFirstLogInFeature36PhoneEmailFirstLogInMagicCodeService verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x000100ec3cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec3cc0) */

void FUN_100ec3be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110363748;
  func_0x000107c613fc(&UNK_110363748,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_110363770;
  func_0x000107c613fc(&UNK_110363770,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c61174(param_1);
  FUN_100ec2748(param_3,param_2,param_4,0x100ec4044,puVar1,FUN_100ec3cdc,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100ec3cdc; end: 100ec3d2f;  */

void FUN_100ec3cdc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ec3ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 100ec3d30; end: 100ec3d6b;  */

void FUN_100ec3d30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = 1;
  return;
}



/* Entry: 100ec3d6c; end: 100ec3d9b;  */

void FUN_100ec3d6c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec3d9c; end: 100ec3ddf;  */

void FUN_100ec3d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = param_3;
  return;
}



/* Entry: 100ec3de0; end: 100ec3e0f;  */

void FUN_100ec3de0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = 0;
  return;
}



/* Entry: 100ec3e10; end: 100ec3e4b;  */

void FUN_100ec3e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = 2;
  return;
}



/* Entry: 100ec3e4c; end: 100ec3e6b;  */

void FUN_100ec3e4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec3e6c; end: 100ec3eaf;  */

void FUN_100ec3e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = param_4;
  return;
}



/* Entry: 100ec3eb0; end: 100ec3ed7;  */

void FUN_100ec3eb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ec3eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100ec3ed8; end: 100ec3f03;  */

void FUN_100ec3ed8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ec3f04; end: 100ec3f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec3f04(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + _DAT_112d48040);
    func_0x0001000a8868(plVar3,plVar3[3]);
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112d48048);
    uVar6 = *(undefined8 *)(*plVar3 + 0x10);
    func_0x000107c311b4(uVar5);
    func_0x000107c61180();
    func_0x000104d075e0(uVar6,uVar5,0,1);
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126af128;
    func_0x000107c61168(PTR_PTR_1126af128);
    func_0x000107c5fadc(param_1,param_2);
    if ((param_3 & 1) == 0) {
      func_0x000107c5d36c(puVar4);
    }
    else {
      func_0x000107c50838();
    }
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    (*pcVar1)(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100ec3f28; end: 100ec3f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec3f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d48038);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(lVar3 + _DAT_112d48048) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112d48050) = param_4;
  return;
}



/* Entry: 100ec3f90; end: 100ec4067;  */

void FUN_100ec3f90(long param_1,long param_2)

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



/* Entry: 100ec4068; end: 100ec4087;  */

void FUN_100ec4068(void)

{
  code *in_x5;
  
  (*in_x5)();
  return;
}



/* Entry: 100ec4088; end: 100ec412f;  */

/* WARNING: Possible PIC construction at 0x000100ec40d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec40dc) */

void FUN_100ec4088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ec4130; end: 100ec4147;  */

void FUN_100ec4130(void)

{
  return;
}



/* Entry: 100ec4148; end: 100ec41a7;  */

void FUN_100ec4148(void)

{
  code *in_x3;
  
  (*in_x3)();
  return;
}



/* Entry: 100ec41a8; end: 100ec4953;  */

/* WARNING: Possible PIC construction at 0x000100ec444c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec445c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec4500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec4460) */
/* WARNING: Removing unreachable block (ram,0x000100ec4450) */
/* WARNING: Removing unreachable block (ram,0x000100ec4504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec41a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  plVar10 = (long *)(unaff_x20 + _DAT_112d48090);
  plVar3 = plVar10;
  func_0x0001000a8868(plVar10,plVar10[3]);
  lVar4 = *(long *)(*plVar3 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c4ba2c();
    func_0x000107c615e8(lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112d48088 + 0x18);
  func_0x0001000a8868();
  FUN_100ec5fa0();
  if (lVar4 == 0) {
    func_0x0001000a8868(plVar10,plVar10[3]);
    lVar11 = *(long *)(*plVar10 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      func_0x000107c4ba30();
      func_0x000107c615e8();
    }
    func_0x000108b9aaec();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ec454c);
      (*pcVar2)();
    }
    func_0x000107c61168(PTR_PTR_1126afb48);
    func_0x000107c50838();
    func_0x000107c61180();
  }
  else {
    lVar11 = param_1;
    lVar5 = lVar4;
    func_0x00010011df08();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112d48080);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c6142c(lVar4);
    }
    else {
      func_0x000107c5fadc(param_1,lVar4);
      func_0x000107c6142c(lVar4);
      func_0x000107c61168();
      func_0x000107c4e6b8();
      func_0x000107c61180();
      puVar6 = &UNK_110364148;
      func_0x000107c613fc(&UNK_110364148,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_110364170;
      func_0x000107c613fc(&UNK_110364170,0x38,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = param_2;
      *(undefined8 *)(puVar7 + 0x20) = param_3;
      *(undefined8 *)(puVar7 + 0x28) = param_4;
      *(undefined8 *)(puVar7 + 0x30) = param_5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_100ec5aa8;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x100eb7280;
      puStack_88 = &UNK_110364188;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar6 = puStack_78;
      func_0x000107c6157c(param_3);
      func_0x000107c6157c(param_5);
      func_0x000107c61574(puVar6);
      puVar6 = &UNK_110364148;
      func_0x000107c613fc(&UNK_110364148,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_1103641c0;
      func_0x000107c613fc(&UNK_1103641c0,0x38,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = param_2;
      *(undefined8 *)(puVar7 + 0x20) = param_3;
      *(undefined8 *)(puVar7 + 0x28) = param_4;
      *(undefined8 *)(puVar7 + 0x30) = param_5;
      pcStack_80 = FUN_100ec5b04;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      uStack_90 = 0x100eb7284;
      puStack_88 = &UNK_1103641d8;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4(ppuVar9);
      puVar6 = puStack_78;
      func_0x000107c6157c(param_3);
      func_0x000107c6157c(param_5);
      func_0x000107c61574(puVar6);
      func_0x000107c4bc18(lVar5);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar5);
      lVar11 = param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 100ec4954; end: 100ec4a37;  */

/* WARNING: Possible PIC construction at 0x000100ec49e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec4a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec49e8) */
/* WARNING: Removing unreachable block (ram,0x000100ec4a1c) */

void FUN_100ec4954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined *puVar1;
  
  *param_6 = 1;
  puVar1 = PTR_PTR_1126afb38;
  func_0x000107c61168(PTR_PTR_1126afb38);
  func_0x000107c5ee20(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c407ec(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100ec4a38; end: 100ec55d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec4a38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  long *plVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_91;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    pcStack_118 = (code *)0x0;
    uStack_110 = 0;
    puVar27 = (undefined *)0x0;
    uStack_108 = 0;
    puVar31 = (undefined *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    puVar32 = (undefined *)0x0;
    puVar28 = (undefined *)0x0;
    pcStack_f0 = (code *)0x0;
    uStack_e8 = 0;
    puVar33 = (undefined *)0x0;
    puVar26 = (undefined *)0x0;
    pcStack_e0 = (code *)0x0;
    pcStack_d8 = (code *)0x0;
    puVar30 = (undefined *)0x0;
    puVar29 = (undefined *)0x0;
    pcStack_d0 = (code *)0x0;
    puVar34 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    uStack_91 = 0;
    puVar2 = PTR_PTR_1126afb38;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x000107c4fb08();
    func_0x000107c61180();
    func_0x000107c4fb04();
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c4c034();
    func_0x000107c61180();
    puVar5 = &UNK_110364210;
    func_0x000107c613fc(&UNK_110364210,0x30,7);
    *(undefined1 **)(puVar5 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    *(undefined8 *)(puVar5 + 0x20) = param_4;
    *(undefined **)(puVar5 + 0x28) = puVar3;
    puVar27 = &UNK_110364238;
    func_0x000107c613fc(&UNK_110364238,0x20,7);
    *(undefined8 *)(puVar27 + 0x10) = 0x100ec5eac;
    *(undefined **)(puVar27 + 0x18) = puVar5;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a8 = FUN_100ec5b24;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364250;
    ppuVar6 = &puStack_c8;
    puStack_a0 = puVar27;
    func_0x000107c60bc4();
    puVar27 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar27);
    puVar7 = &UNK_110364288;
    func_0x000107c613fc(&UNK_110364288,0x30,7);
    *(undefined1 **)(puVar7 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    *(undefined8 *)(puVar7 + 0x20) = param_4;
    *(undefined **)(puVar7 + 0x28) = puVar3;
    puVar27 = &UNK_1103642b0;
    func_0x000107c613fc(&UNK_1103642b0,0x20,7);
    *(code **)(puVar27 + 0x10) = FUN_100ec5b44;
    *(undefined **)(puVar27 + 0x18) = puVar7;
    pcStack_a8 = FUN_100ec5b50;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100eb5768;
    puStack_b0 = &UNK_1103642c8;
    ppuVar8 = &puStack_c8;
    puStack_a0 = puVar27;
    func_0x000107c60bc4();
    puVar27 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar27);
    puVar9 = &UNK_110364300;
    func_0x000107c613fc(&UNK_110364300,0x30,7);
    *(undefined1 **)(puVar9 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar9 + 0x18) = param_3;
    *(undefined8 *)(puVar9 + 0x20) = param_4;
    *(undefined **)(puVar9 + 0x28) = puVar3;
    puVar27 = &UNK_110364328;
    func_0x000107c613fc(&UNK_110364328,0x20,7);
    *(code **)(puVar27 + 0x10) = FUN_100ec5b70;
    *(undefined **)(puVar27 + 0x18) = puVar9;
    pcStack_a8 = FUN_100ec5bcc;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110364340;
    ppuVar10 = &puStack_c8;
    puStack_a0 = puVar27;
    func_0x000107c60bc4();
    puVar27 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar27);
    puVar27 = &UNK_110364378;
    func_0x000107c613fc(&UNK_110364378,0x20,7);
    *(undefined8 *)(puVar27 + 0x10) = param_5;
    *(undefined8 *)(puVar27 + 0x18) = param_6;
    puVar11 = &UNK_1103643a0;
    func_0x000107c613fc(&UNK_1103643a0,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = 0x100ec5bd4;
    *(undefined **)(puVar11 + 0x18) = puVar27;
    pcStack_a8 = FUN_100ec5bdc;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100de58f0;
    puStack_b0 = &UNK_1103643b8;
    ppuVar12 = &puStack_c8;
    puStack_a0 = puVar11;
    func_0x000107c60bc4();
    puVar27 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar27);
    puVar27 = &UNK_1103643f0;
    func_0x000107c613fc(&UNK_1103643f0,0x20,7);
    *(undefined8 *)(puVar27 + 0x10) = param_5;
    *(undefined8 *)(puVar27 + 0x18) = param_6;
    puVar11 = &UNK_110364418;
    func_0x000107c613fc(&UNK_110364418,0x20,7);
    *(code **)(puVar11 + 0x10) = FUN_100ec5bfc;
    *(undefined **)(puVar11 + 0x18) = puVar27;
    pcStack_a8 = (code *)0x100ec5e9c;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110364430;
    ppuVar13 = &puStack_c8;
    puStack_a0 = puVar11;
    func_0x000107c60bc4();
    puVar11 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar11);
    puVar11 = &UNK_110364468;
    func_0x000107c613fc(&UNK_110364468,0x28,7);
    *(undefined8 *)(puVar11 + 0x10) = param_3;
    *(undefined8 *)(puVar11 + 0x18) = param_4;
    *(undefined **)(puVar11 + 0x20) = puVar2;
    puVar31 = &UNK_110364490;
    func_0x000107c613fc(&UNK_110364490,0x20,7);
    *(undefined8 *)(puVar31 + 0x10) = 0x100ec5c04;
    *(undefined **)(puVar31 + 0x18) = puVar11;
    pcStack_a8 = (code *)0x100ec5eb8;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_1103644a8;
    ppuVar14 = &puStack_c8;
    puStack_a0 = puVar31;
    func_0x000107c60bc4();
    puVar31 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar31);
    puVar31 = &UNK_1103644e0;
    func_0x000107c613fc(&UNK_1103644e0,0x28,7);
    *(undefined8 *)(puVar31 + 0x10) = param_3;
    *(undefined8 *)(puVar31 + 0x18) = param_4;
    *(undefined **)(puVar31 + 0x20) = puVar2;
    puVar32 = &UNK_110364508;
    func_0x000107c613fc(&UNK_110364508,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = 0x100ec5ea4;
    *(undefined **)(puVar32 + 0x18) = puVar31;
    pcStack_a8 = (code *)0x100ec5ebc;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364520;
    ppuVar15 = &puStack_c8;
    puStack_a0 = puVar32;
    func_0x000107c60bc4();
    puVar32 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar32);
    puVar32 = &UNK_110364558;
    func_0x000107c613fc(&UNK_110364558,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = param_5;
    *(undefined8 *)(puVar32 + 0x18) = param_6;
    puVar28 = &UNK_110364580;
    func_0x000107c613fc(&UNK_110364580,0x20,7);
    *(undefined8 *)(puVar28 + 0x10) = 0x100ec5ed0;
    *(undefined **)(puVar28 + 0x18) = puVar32;
    pcStack_a8 = (code *)0x100ec5ec0;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364598;
    ppuVar16 = &puStack_c8;
    puStack_a0 = puVar28;
    func_0x000107c60bc4();
    puVar28 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar28);
    puVar28 = &UNK_1103645d0;
    func_0x000107c613fc(&UNK_1103645d0,0x28,7);
    *(undefined8 *)(puVar28 + 0x10) = param_3;
    *(undefined8 *)(puVar28 + 0x18) = param_4;
    *(undefined **)(puVar28 + 0x20) = puVar2;
    puVar33 = &UNK_1103645f8;
    func_0x000107c613fc(&UNK_1103645f8,0x20,7);
    *(undefined8 *)(puVar33 + 0x10) = 0x100ec5ea8;
    *(undefined **)(puVar33 + 0x18) = puVar28;
    pcStack_a8 = (code *)0x100ec5ec4;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364610;
    ppuVar17 = &puStack_c8;
    puStack_a0 = puVar33;
    func_0x000107c60bc4();
    puVar33 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar33);
    puVar33 = &UNK_110364648;
    func_0x000107c613fc(&UNK_110364648,0x30,7);
    *(undefined1 **)(puVar33 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar33 + 0x18) = param_3;
    *(undefined8 *)(puVar33 + 0x20) = param_4;
    *(undefined **)(puVar33 + 0x28) = puVar3;
    puVar26 = &UNK_110364670;
    func_0x000107c613fc(&UNK_110364670,0x20,7);
    *(code **)(puVar26 + 0x10) = FUN_100ec5c88;
    *(undefined **)(puVar26 + 0x18) = puVar33;
    pcStack_a8 = (code *)0x100ec5ec8;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364688;
    ppuVar18 = &puStack_c8;
    puStack_a0 = puVar26;
    func_0x000107c60bc4();
    puVar26 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar26);
    puVar26 = &UNK_1103646c0;
    func_0x000107c613fc(&UNK_1103646c0,0x30,7);
    *(undefined1 **)(puVar26 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar26 + 0x18) = param_3;
    *(undefined8 *)(puVar26 + 0x20) = param_4;
    *(undefined **)(puVar26 + 0x28) = puVar3;
    puVar30 = &UNK_1103646e8;
    func_0x000107c613fc(&UNK_1103646e8,0x20,7);
    *(undefined8 *)(puVar30 + 0x10) = 0x100ec5eb0;
    *(undefined **)(puVar30 + 0x18) = puVar26;
    pcStack_a8 = (code *)0x100ec5ecc;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364700;
    ppuVar19 = &puStack_c8;
    puStack_a0 = puVar30;
    func_0x000107c60bc4();
    puVar30 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar30);
    puVar30 = &UNK_110364738;
    func_0x000107c613fc(&UNK_110364738,0x30,7);
    *(undefined1 **)(puVar30 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar30 + 0x18) = param_3;
    *(undefined8 *)(puVar30 + 0x20) = param_4;
    *(undefined **)(puVar30 + 0x28) = puVar3;
    puVar29 = &UNK_110364760;
    func_0x000107c613fc(&UNK_110364760,0x20,7);
    *(code **)(puVar29 + 0x10) = FUN_100ec5d14;
    *(undefined **)(puVar29 + 0x18) = puVar30;
    pcStack_a8 = FUN_100ec5d70;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6b64;
    puStack_b0 = &UNK_110364778;
    ppuVar20 = &puStack_c8;
    puStack_a0 = puVar29;
    func_0x000107c60bc4();
    puVar29 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61174();
    func_0x000107c61574(puVar29);
    puVar29 = &UNK_1103647b0;
    func_0x000107c613fc(&UNK_1103647b0,0x20,7);
    *(undefined8 *)(puVar29 + 0x10) = param_5;
    *(undefined8 *)(puVar29 + 0x18) = param_6;
    puVar34 = &UNK_1103647d8;
    func_0x000107c613fc(&UNK_1103647d8,0x20,7);
    *(code **)(puVar34 + 0x10) = FUN_100ec5d90;
    *(undefined **)(puVar34 + 0x18) = puVar29;
    pcStack_a8 = (code *)0x100ec5ea0;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_1103647f0;
    ppuVar21 = &puStack_c8;
    puStack_a0 = puVar34;
    func_0x000107c60bc4();
    puVar34 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar34);
    puVar34 = &UNK_110364828;
    func_0x000107c613fc(&UNK_110364828,0x20,7);
    *(undefined8 *)(puVar34 + 0x10) = param_5;
    *(undefined8 *)(puVar34 + 0x18) = param_6;
    puVar22 = &UNK_110364850;
    func_0x000107c613fc(&UNK_110364850,0x20,7);
    *(code **)(puVar22 + 0x10) = FUN_100ec5d98;
    *(undefined **)(puVar22 + 0x18) = puVar34;
    pcStack_a8 = (code *)0x100ec5ed4;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364868;
    ppuVar23 = &puStack_c8;
    puStack_a0 = puVar22;
    func_0x000107c60bc4();
    puVar22 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar22);
    func_0x000107c4c5c0(uVar4);
    func_0x000107c60bd0(ppuVar23);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar4);
    plVar24 = (long *)(param_2 + _DAT_112d48090);
    func_0x0001000a8868(plVar24,plVar24[3]);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar25 = *(long *)(*plVar24 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar25 == 0) {
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c4ba30();
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar25);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    pcStack_d8 = FUN_100ec5d90;
    pcStack_d0 = FUN_100ec5d98;
    uStack_e8 = 0x100ec5eb0;
    pcStack_e0 = FUN_100ec5d14;
    uStack_f8 = 0x100ec5ea8;
    pcStack_f0 = FUN_100ec5c88;
    uStack_100 = 0x100ec5ed0;
    uStack_110 = 0x100ec5c04;
    uStack_108 = 0x100ec5ea4;
    pcStack_118 = FUN_100ec5bfc;
  }
  FUN_100c9a418();
  func_0x000100c9a41c(pcStack_118,puVar27);
  func_0x000100c9a41c(uStack_110,puVar11);
  func_0x000100c9a41c(uStack_108,puVar31);
  func_0x000100c9a41c(uStack_100,puVar32);
  func_0x000100c9a41c(uStack_f8,puVar28);
  func_0x000100c9a41c(pcStack_f0,puVar33);
  func_0x000100c9a41c(uStack_e8,puVar26);
  func_0x000100c9a41c(pcStack_e0,puVar30);
  func_0x000100c9a41c(pcStack_d8,puVar29);
  func_0x000100c9a41c(pcStack_d0,puVar34);
  return;
}



/* Entry: 100ec55d8; end: 100ec590b;  */

/* WARNING: Possible PIC construction at 0x000100ec5660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec5664) */

void FUN_100ec55d8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
                  code *param_5)

{
  undefined *puVar1;
  
  *param_4 = 1;
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126afb30;
    func_0x000107c610f8(PTR_PTR_1126afb30);
    func_0x000107c494a8();
    (*param_5)();
  }
  else {
    puVar1 = PTR_PTR_1126afb38;
    func_0x000107c61168(PTR_PTR_1126afb38);
    func_0x000107c61174(param_3);
    func_0x000107c4c128(puVar1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c610f8(PTR_PTR_1126afb30);
    func_0x000107c494a8();
    (*param_5)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ec590c; end: 100ec59e3; -[_TtC27PhoneEmailFirstLogInFeature37PhoneEmailFirstLogInPhoneEntryService submitPhoneNumber:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x000100ec59c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec59cc) */

void FUN_100ec590c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110364a08;
  func_0x000107c613fc(&UNK_110364a08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_110364a30;
  func_0x000107c613fc(&UNK_110364a30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100ec41a8(param_3,0x100ec5eb4,puVar1,FUN_100ec5ddc,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100ec59e4; end: 100ec5a3f; -[_TtC27PhoneEmailFirstLogInFeature37PhoneEmailFirstLogInPhoneEntryService init] */

void FUN_100ec59e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInFeature.PhoneEmailFirstLogInPhoneEntryService",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec5a10);
  (*pcVar1)();
}



/* Entry: 100ec5a40; end: 100ec5a87; -[_TtC27PhoneEmailFirstLogInFeature37PhoneEmailFirstLogInPhoneEntryService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ec5a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec5a70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec5a40(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48080));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112d48088))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d48088));
  return;
}



/* Entry: 100ec5a88; end: 100ec5aa7;  */

void FUN_100ec5a88(void)

{
  func_0x000107c61168(&PTR_PTR_11279db70);
  return;
}



/* Entry: 100ec5aa8; end: 100ec5acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec5aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long *plVar16;
  long lVar17;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  byte bStack_89;
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar4 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    bStack_89 = 0;
    uVar6 = param_1;
    func_0x000107c506c8();
    func_0x000107c61180();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a0 = FUN_100ec4130;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)&UNK_10006eb60;
    puStack_a8 = &UNK_110364890;
    ppuVar7 = &puStack_c0;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec4134;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar3;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100eb70e8;
    puStack_a8 = &UNK_1103648b8;
    ppuVar8 = &puStack_c0;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec4138;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar3;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100eb70ec;
    puStack_a8 = &UNK_1103648e0;
    ppuVar9 = &puStack_c0;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec413c;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar3;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_100eb57dc;
    puStack_a8 = &UNK_110364908;
    ppuVar10 = &puStack_c0;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec4140;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar3;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100eb70f0;
    puStack_a8 = &UNK_110364930;
    ppuVar11 = &puStack_c0;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_98);
    pcStack_a0 = (code *)0x100ec4144;
    puStack_98 = (undefined *)0x0;
    puStack_c0 = puVar3;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x100e27a2c;
    puStack_a8 = &UNK_110364958;
    ppuVar12 = &puStack_c0;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_98);
    puVar13 = &UNK_110364990;
    func_0x000107c613fc(&UNK_110364990,0x28,7);
    *(byte **)(puVar13 + 0x10) = &bStack_89;
    *(undefined8 *)(puVar13 + 0x18) = uVar2;
    *(undefined8 *)(puVar13 + 0x20) = uVar1;
    puVar14 = &UNK_1103649b8;
    func_0x000107c613fc(&UNK_1103649b8,0x20,7);
    *(code **)(puVar14 + 0x10) = FUN_100ec5db0;
    *(undefined **)(puVar14 + 0x18) = puVar13;
    pcStack_a0 = FUN_100ec5dbc;
    puStack_c0 = puVar3;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_100ec4088;
    puStack_a8 = &UNK_1103649d0;
    ppuVar15 = &puStack_c0;
    puStack_98 = puVar14;
    func_0x000107c60bc4();
    puVar14 = puStack_98;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar14);
    func_0x000107c4c74c(uVar6);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar6);
    plVar16 = (long *)(lVar5 + _DAT_112d48090);
    func_0x0001000a8868(plVar16,plVar16[3]);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar17 = *(long *)(*plVar16 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar17 != 0) {
      func_0x000107c4ba30();
      func_0x000107c615e8();
    }
    if ((bStack_89 & 1) == 0) {
      func_0x000108b9aaec();
      func_0x000107c61180();
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ec4954);
        (*pcVar4)();
      }
      puVar14 = PTR_PTR_1126afb48;
      func_0x000107c61168(PTR_PTR_1126afb48);
      func_0x000107c5d370();
      func_0x000107c61180();
      func_0x000107c61170(lVar17);
      (*pcVar4)(puVar14);
      func_0x000107c61574(puVar13);
      func_0x000107c61170(puVar14);
    }
    else {
      func_0x000107c61574(puVar13);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 100ec5ad0; end: 100ec5b03;  */

void FUN_100ec5ad0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ec5b04; end: 100ec5b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec5b04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  long *plVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  long unaff_x20;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_91;
  undefined1 auStack_90 [32];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar30 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_90,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    pcStack_118 = (code *)0x0;
    uStack_110 = 0;
    puVar32 = (undefined *)0x0;
    uStack_108 = 0;
    puVar36 = (undefined *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    puVar37 = (undefined *)0x0;
    puVar33 = (undefined *)0x0;
    pcStack_f0 = (code *)0x0;
    uStack_e8 = 0;
    puVar38 = (undefined *)0x0;
    puVar31 = (undefined *)0x0;
    pcStack_e0 = (code *)0x0;
    pcStack_d8 = (code *)0x0;
    puVar35 = (undefined *)0x0;
    puVar34 = (undefined *)0x0;
    pcStack_d0 = (code *)0x0;
    puVar39 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    uStack_91 = 0;
    puVar6 = PTR_PTR_1126afb38;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x000107c4fb08();
    func_0x000107c61180();
    func_0x000107c4fb04();
    func_0x000107c61180();
    uVar8 = param_1;
    func_0x000107c4c034();
    func_0x000107c61180();
    puVar9 = &UNK_110364210;
    func_0x000107c613fc(&UNK_110364210,0x30,7);
    *(undefined1 **)(puVar9 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar9 + 0x18) = uVar2;
    *(undefined8 *)(puVar9 + 0x20) = uVar1;
    *(undefined **)(puVar9 + 0x28) = puVar7;
    puVar32 = &UNK_110364238;
    func_0x000107c613fc(&UNK_110364238,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = 0x100ec5eac;
    *(undefined **)(puVar32 + 0x18) = puVar9;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a8 = FUN_100ec5b24;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364250;
    ppuVar10 = &puStack_c8;
    puStack_a0 = puVar32;
    func_0x000107c60bc4();
    puVar32 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar32);
    puVar11 = &UNK_110364288;
    func_0x000107c613fc(&UNK_110364288,0x30,7);
    *(undefined1 **)(puVar11 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar11 + 0x18) = uVar2;
    *(undefined8 *)(puVar11 + 0x20) = uVar1;
    *(undefined **)(puVar11 + 0x28) = puVar7;
    puVar32 = &UNK_1103642b0;
    func_0x000107c613fc(&UNK_1103642b0,0x20,7);
    *(code **)(puVar32 + 0x10) = FUN_100ec5b44;
    *(undefined **)(puVar32 + 0x18) = puVar11;
    pcStack_a8 = FUN_100ec5b50;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100eb5768;
    puStack_b0 = &UNK_1103642c8;
    ppuVar12 = &puStack_c8;
    puStack_a0 = puVar32;
    func_0x000107c60bc4();
    puVar32 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar32);
    puVar13 = &UNK_110364300;
    func_0x000107c613fc(&UNK_110364300,0x30,7);
    *(undefined1 **)(puVar13 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar13 + 0x18) = uVar2;
    *(undefined8 *)(puVar13 + 0x20) = uVar1;
    *(undefined **)(puVar13 + 0x28) = puVar7;
    puVar32 = &UNK_110364328;
    func_0x000107c613fc(&UNK_110364328,0x20,7);
    *(code **)(puVar32 + 0x10) = FUN_100ec5b70;
    *(undefined **)(puVar32 + 0x18) = puVar13;
    pcStack_a8 = FUN_100ec5bcc;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110364340;
    ppuVar14 = &puStack_c8;
    puStack_a0 = puVar32;
    func_0x000107c60bc4();
    puVar32 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar32);
    puVar32 = &UNK_110364378;
    func_0x000107c613fc(&UNK_110364378,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar3;
    *(undefined8 *)(puVar32 + 0x18) = uVar30;
    puVar15 = &UNK_1103643a0;
    func_0x000107c613fc(&UNK_1103643a0,0x20,7);
    *(undefined8 *)(puVar15 + 0x10) = 0x100ec5bd4;
    *(undefined **)(puVar15 + 0x18) = puVar32;
    pcStack_a8 = FUN_100ec5bdc;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100de58f0;
    puStack_b0 = &UNK_1103643b8;
    ppuVar16 = &puStack_c8;
    puStack_a0 = puVar15;
    func_0x000107c60bc4();
    puVar32 = puStack_a0;
    func_0x000107c6157c(uVar30);
    func_0x000107c61574(puVar32);
    puVar32 = &UNK_1103643f0;
    func_0x000107c613fc(&UNK_1103643f0,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar3;
    *(undefined8 *)(puVar32 + 0x18) = uVar30;
    puVar15 = &UNK_110364418;
    func_0x000107c613fc(&UNK_110364418,0x20,7);
    *(code **)(puVar15 + 0x10) = FUN_100ec5bfc;
    *(undefined **)(puVar15 + 0x18) = puVar32;
    pcStack_a8 = (code *)0x100ec5e9c;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110364430;
    ppuVar17 = &puStack_c8;
    puStack_a0 = puVar15;
    func_0x000107c60bc4();
    puVar15 = puStack_a0;
    func_0x000107c6157c(uVar30);
    func_0x000107c61574(puVar15);
    puVar15 = &UNK_110364468;
    func_0x000107c613fc(&UNK_110364468,0x28,7);
    *(undefined8 *)(puVar15 + 0x10) = uVar2;
    *(undefined8 *)(puVar15 + 0x18) = uVar1;
    *(undefined **)(puVar15 + 0x20) = puVar6;
    puVar36 = &UNK_110364490;
    func_0x000107c613fc(&UNK_110364490,0x20,7);
    *(undefined8 *)(puVar36 + 0x10) = 0x100ec5c04;
    *(undefined **)(puVar36 + 0x18) = puVar15;
    pcStack_a8 = (code *)0x100ec5eb8;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_1103644a8;
    ppuVar18 = &puStack_c8;
    puStack_a0 = puVar36;
    func_0x000107c60bc4();
    puVar36 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar36);
    puVar36 = &UNK_1103644e0;
    func_0x000107c613fc(&UNK_1103644e0,0x28,7);
    *(undefined8 *)(puVar36 + 0x10) = uVar2;
    *(undefined8 *)(puVar36 + 0x18) = uVar1;
    *(undefined **)(puVar36 + 0x20) = puVar6;
    puVar37 = &UNK_110364508;
    func_0x000107c613fc(&UNK_110364508,0x20,7);
    *(undefined8 *)(puVar37 + 0x10) = 0x100ec5ea4;
    *(undefined **)(puVar37 + 0x18) = puVar36;
    pcStack_a8 = (code *)0x100ec5ebc;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364520;
    ppuVar19 = &puStack_c8;
    puStack_a0 = puVar37;
    func_0x000107c60bc4();
    puVar37 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar37);
    puVar37 = &UNK_110364558;
    func_0x000107c613fc(&UNK_110364558,0x20,7);
    *(undefined8 *)(puVar37 + 0x10) = uVar3;
    *(undefined8 *)(puVar37 + 0x18) = uVar30;
    puVar33 = &UNK_110364580;
    func_0x000107c613fc(&UNK_110364580,0x20,7);
    *(undefined8 *)(puVar33 + 0x10) = 0x100ec5ed0;
    *(undefined **)(puVar33 + 0x18) = puVar37;
    pcStack_a8 = (code *)0x100ec5ec0;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364598;
    ppuVar20 = &puStack_c8;
    puStack_a0 = puVar33;
    func_0x000107c60bc4();
    puVar33 = puStack_a0;
    func_0x000107c6157c(uVar30);
    func_0x000107c61574(puVar33);
    puVar33 = &UNK_1103645d0;
    func_0x000107c613fc(&UNK_1103645d0,0x28,7);
    *(undefined8 *)(puVar33 + 0x10) = uVar2;
    *(undefined8 *)(puVar33 + 0x18) = uVar1;
    *(undefined **)(puVar33 + 0x20) = puVar6;
    puVar38 = &UNK_1103645f8;
    func_0x000107c613fc(&UNK_1103645f8,0x20,7);
    *(undefined8 *)(puVar38 + 0x10) = 0x100ec5ea8;
    *(undefined **)(puVar38 + 0x18) = puVar33;
    pcStack_a8 = (code *)0x100ec5ec4;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364610;
    ppuVar21 = &puStack_c8;
    puStack_a0 = puVar38;
    func_0x000107c60bc4();
    puVar38 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar38);
    puVar38 = &UNK_110364648;
    func_0x000107c613fc(&UNK_110364648,0x30,7);
    *(undefined1 **)(puVar38 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar38 + 0x18) = uVar2;
    *(undefined8 *)(puVar38 + 0x20) = uVar1;
    *(undefined **)(puVar38 + 0x28) = puVar7;
    puVar31 = &UNK_110364670;
    func_0x000107c613fc(&UNK_110364670,0x20,7);
    *(code **)(puVar31 + 0x10) = FUN_100ec5c88;
    *(undefined **)(puVar31 + 0x18) = puVar38;
    pcStack_a8 = (code *)0x100ec5ec8;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364688;
    ppuVar22 = &puStack_c8;
    puStack_a0 = puVar31;
    func_0x000107c60bc4();
    puVar31 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar31);
    puVar31 = &UNK_1103646c0;
    func_0x000107c613fc(&UNK_1103646c0,0x30,7);
    *(undefined1 **)(puVar31 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar31 + 0x18) = uVar2;
    *(undefined8 *)(puVar31 + 0x20) = uVar1;
    *(undefined **)(puVar31 + 0x28) = puVar7;
    puVar35 = &UNK_1103646e8;
    func_0x000107c613fc(&UNK_1103646e8,0x20,7);
    *(undefined8 *)(puVar35 + 0x10) = 0x100ec5eb0;
    *(undefined **)(puVar35 + 0x18) = puVar31;
    pcStack_a8 = (code *)0x100ec5ecc;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364700;
    ppuVar23 = &puStack_c8;
    puStack_a0 = puVar35;
    func_0x000107c60bc4();
    puVar35 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar35);
    puVar35 = &UNK_110364738;
    func_0x000107c613fc(&UNK_110364738,0x30,7);
    *(undefined1 **)(puVar35 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar35 + 0x18) = uVar2;
    *(undefined8 *)(puVar35 + 0x20) = uVar1;
    *(undefined **)(puVar35 + 0x28) = puVar7;
    puVar34 = &UNK_110364760;
    func_0x000107c613fc(&UNK_110364760,0x20,7);
    *(code **)(puVar34 + 0x10) = FUN_100ec5d14;
    *(undefined **)(puVar34 + 0x18) = puVar35;
    pcStack_a8 = FUN_100ec5d70;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6b64;
    puStack_b0 = &UNK_110364778;
    ppuVar24 = &puStack_c8;
    puStack_a0 = puVar34;
    func_0x000107c60bc4();
    puVar34 = puStack_a0;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar34);
    puVar34 = &UNK_1103647b0;
    func_0x000107c613fc(&UNK_1103647b0,0x20,7);
    *(undefined8 *)(puVar34 + 0x10) = uVar3;
    *(undefined8 *)(puVar34 + 0x18) = uVar30;
    puVar39 = &UNK_1103647d8;
    func_0x000107c613fc(&UNK_1103647d8,0x20,7);
    *(code **)(puVar39 + 0x10) = FUN_100ec5d90;
    *(undefined **)(puVar39 + 0x18) = puVar34;
    pcStack_a8 = (code *)0x100ec5ea0;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_1103647f0;
    ppuVar25 = &puStack_c8;
    puStack_a0 = puVar39;
    func_0x000107c60bc4();
    puVar39 = puStack_a0;
    func_0x000107c6157c(uVar30);
    func_0x000107c61574(puVar39);
    puVar39 = &UNK_110364828;
    func_0x000107c613fc(&UNK_110364828,0x20,7);
    *(undefined8 *)(puVar39 + 0x10) = uVar3;
    *(undefined8 *)(puVar39 + 0x18) = uVar30;
    puVar26 = &UNK_110364850;
    func_0x000107c613fc(&UNK_110364850,0x20,7);
    *(code **)(puVar26 + 0x10) = FUN_100ec5d98;
    *(undefined **)(puVar26 + 0x18) = puVar39;
    pcStack_a8 = (code *)0x100ec5ed4;
    puStack_c8 = puVar4;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110364868;
    ppuVar27 = &puStack_c8;
    puStack_a0 = puVar26;
    func_0x000107c60bc4();
    puVar26 = puStack_a0;
    func_0x000107c6157c(uVar30);
    func_0x000107c61574(puVar26);
    func_0x000107c4c5c0(uVar8);
    func_0x000107c60bd0(ppuVar27);
    func_0x000107c60bd0(ppuVar25);
    func_0x000107c60bd0(ppuVar24);
    func_0x000107c60bd0(ppuVar23);
    func_0x000107c60bd0(ppuVar22);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar8);
    plVar28 = (long *)(lVar5 + _DAT_112d48090);
    func_0x0001000a8868(plVar28,plVar28[3]);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar29 = *(long *)(*plVar28 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar29 == 0) {
      func_0x000107c61574(puVar13);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar9);
      func_0x000107c61170(lVar5);
    }
    else {
      func_0x000107c4ba30();
      func_0x000107c61574(puVar13);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar9);
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(lVar29);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    pcStack_d8 = FUN_100ec5d90;
    pcStack_d0 = FUN_100ec5d98;
    uStack_e8 = 0x100ec5eb0;
    pcStack_e0 = FUN_100ec5d14;
    uStack_f8 = 0x100ec5ea8;
    pcStack_f0 = FUN_100ec5c88;
    uStack_100 = 0x100ec5ed0;
    uStack_110 = 0x100ec5c04;
    uStack_108 = 0x100ec5ea4;
    pcStack_118 = FUN_100ec5bfc;
  }
  FUN_100c9a418();
  func_0x000100c9a41c(pcStack_118,puVar32);
  func_0x000100c9a41c(uStack_110,puVar15);
  func_0x000100c9a41c(uStack_108,puVar36);
  func_0x000100c9a41c(uStack_100,puVar37);
  func_0x000100c9a41c(uStack_f8,puVar33);
  func_0x000100c9a41c(pcStack_f0,puVar38);
  func_0x000100c9a41c(uStack_e8,puVar31);
  func_0x000100c9a41c(pcStack_e0,puVar35);
  func_0x000100c9a41c(pcStack_d8,puVar34);
  func_0x000100c9a41c(pcStack_d0,puVar39);
  return;
}



/* Entry: 100ec5b24; end: 100ec5b43;  */

void FUN_100ec5b24(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec5b44; end: 100ec5b4f;  */

/* WARNING: Possible PIC construction at 0x000100ec5660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec5664) */

void FUN_100ec5b44(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126afb30;
    func_0x000107c610f8(PTR_PTR_1126afb30);
    func_0x000107c494a8();
    (*pcVar1)();
  }
  else {
    puVar2 = PTR_PTR_1126afb38;
    func_0x000107c61168(PTR_PTR_1126afb38);
    func_0x000107c61174(param_3);
    func_0x000107c4c128(puVar2,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c610f8(PTR_PTR_1126afb30);
    func_0x000107c494a8();
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ec5b50; end: 100ec5b6f;  */

void FUN_100ec5b50(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec5b70; end: 100ec5bcb;  */

void FUN_100ec5b70(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  puVar2 = PTR_PTR_1126afb30;
  func_0x000107c610f8(PTR_PTR_1126afb30);
  func_0x000107c494a8();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100ec5bcc; end: 100ec5bdb;  */

void FUN_100ec5bcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec5bdc; end: 100ec5bfb;  */

void FUN_100ec5bdc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec5bfc; end: 100ec5c07;  */

/* WARNING: Possible PIC construction at 0x000100ec57dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec57e0) */

void FUN_100ec5bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126afb48;
  func_0x000107c61168(PTR_PTR_1126afb48,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c50838(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ec5c08; end: 100ec5c33;  */

void FUN_100ec5c08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ec5c34; end: 100ec5c87;  */

void FUN_100ec5c34(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126afb30;
  func_0x000107c610f8(PTR_PTR_1126afb30);
  func_0x000107c494a8();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100ec5c88; end: 100ec5c8b;  */

void FUN_100ec5c88(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  puVar2 = PTR_PTR_1126afb30;
  func_0x000107c610f8(PTR_PTR_1126afb30);
  func_0x000107c494a8();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100ec5c8c; end: 100ec5ce7;  */

void FUN_100ec5c8c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  puVar2 = PTR_PTR_1126afb30;
  func_0x000107c610f8(PTR_PTR_1126afb30);
  func_0x000107c494a8();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100ec5ce8; end: 100ec5d13;  */

void FUN_100ec5ce8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ec5d14; end: 100ec5d6f;  */

void FUN_100ec5d14(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  puVar2 = PTR_PTR_1126afb30;
  func_0x000107c610f8(PTR_PTR_1126afb30);
  func_0x000107c494a8();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100ec5d70; end: 100ec5d8f;  */

void FUN_100ec5d70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec5d90; end: 100ec5d97;  */

/* WARNING: Possible PIC construction at 0x000100ec5864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec5868) */

void FUN_100ec5d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126afb48;
  func_0x000107c61168(PTR_PTR_1126afb48,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5d370(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ec5d98; end: 100ec5daf;  */

void FUN_100ec5d98(void)

{
  func_0x000100ec5888();
  return;
}



/* Entry: 100ec5db0; end: 100ec5dbb;  */

/* WARNING: Possible PIC construction at 0x000100ec49e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec4a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec49e8) */
/* WARNING: Removing unreachable block (ram,0x000100ec4a1c) */

void FUN_100ec5db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  puVar1 = PTR_PTR_1126afb38;
  func_0x000107c61168(PTR_PTR_1126afb38);
  func_0x000107c5ee20(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c407ec(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100ec5dbc; end: 100ec5ddb;  */

void FUN_100ec5dbc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec5ddc; end: 100ec5ed7;  */

void FUN_100ec5ddc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ec5de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 100ec5ed8; end: 100ec5f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ec5ed8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130937e0))[1];
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d480c0);
    func_0x000107c43ff0(uVar3);
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130937e0);
    param_2 = lVar1;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d480c0);
  func_0x000107c61434(lVar1);
  func_0x000107c5fadc(uVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c441d8(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return uVar3;
}



/* Entry: 100ec5fa0; end: 100ec611f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100ec5fa0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auVar11 [16];
  
  uVar7 = ((ulong *)(param_1 + _DAT_1130937d8))[1];
  if (uVar7 == 0) {
    puVar6 = (undefined *)0x0;
    lVar9 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_1130937d8);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar1 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar10 = *(long *)(unaff_x20 + _DAT_112d480c0);
      func_0x000107c5fadc();
      lVar3 = lVar10;
      func_0x000107c5c204();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (lVar3 == 0) {
        lVar3 = 0;
        func_0x000107c5faec(0);
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar7);
      }
      lVar8 = ((undefined8 *)(param_1 + _DAT_1130937e0))[1];
      if (lVar8 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + _DAT_1130937e0);
        func_0x000107c5fadc(uVar4);
      }
      func_0x000107c43fcc();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      lVar9 = lVar8;
      if (lVar10 == 0) {
        lVar10 = 0;
        func_0x000107c5faec(0);
        lVar9 = lVar8;
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar8);
      }
      puVar5 = PTR_PTR_1126aed98;
      func_0x000107c61168();
      func_0x000107c44148();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar3);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x000107c5faec(puVar5);
        func_0x000107c61170(puVar5);
        goto LAB_100ec6110;
      }
    }
    puVar6 = (undefined *)0x0;
    lVar9 = 0;
  }
LAB_100ec6110:
  auVar11._8_8_ = lVar9;
  auVar11._0_8_ = puVar6;
  return auVar11;
}



/* Entry: 100ec6120; end: 100ec617b; -[_TtC27PhoneEmailFirstLogInFeature34PhoneEmailFirstLogInPhoneFormatter init] */

void FUN_100ec6120(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInFeature.PhoneEmailFirstLogInPhoneFormatter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec614c);
  (*pcVar1)();
}



/* Entry: 100ec617c; end: 100ec618b; -[_TtC27PhoneEmailFirstLogInFeature34PhoneEmailFirstLogInPhoneFormatter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec617c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d480c0));
  return;
}



/* Entry: 100ec618c; end: 100ec61ab;  */

void FUN_100ec618c(void)

{
  func_0x000107c61168(&PTR_PTR_11279dc48);
  return;
}



/* Entry: 100ec61ac; end: 100ec61cb;  */

void FUN_100ec61ac(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 100ec61cc; end: 100ec6203;  */

void FUN_100ec61cc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100ec6204; end: 100ec629f;  */

uint FUN_100ec6204(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_100ec76f0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100ec62a0; end: 100ec636b;  */

undefined8 FUN_100ec62a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
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
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uVar2 = param_1[6];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  lVar3 = param_2[6];
  FUN_100ec7b38(&uStack_90,&uStack_60);
  if ((uVar1 & 1) != 0) {
    if (uVar2 == 0) {
      if (lVar3 == 0) {
        return 1;
      }
    }
    else if (lVar3 != 0) {
      FUN_100ec7a8c(0,0x112d48278,&PTR_PTR_1126af238);
      func_0x000107c61174(lVar3);
      func_0x000107c61174();
      uVar1 = uVar2;
      func_0x000107c60118();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(lVar3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 100ec636c; end: 100ec6653;  */

/* WARNING: Possible PIC construction at 0x000100ec6950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec6468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec6484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec640c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec6630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec6554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec6410) */
/* WARNING: Removing unreachable block (ram,0x000100ec641c) */
/* WARNING: Removing unreachable block (ram,0x000100ec660c) */
/* WARNING: Removing unreachable block (ram,0x000100ec6424) */
/* WARNING: Removing unreachable block (ram,0x000100ec6618) */
/* WARNING: Removing unreachable block (ram,0x000100ec6488) */
/* WARNING: Removing unreachable block (ram,0x000100ec646c) */
/* WARNING: Removing unreachable block (ram,0x000100ec65b4) */
/* WARNING: Removing unreachable block (ram,0x000100ec65bc) */
/* WARNING: Removing unreachable block (ram,0x000100ec65e0) */
/* WARNING: Removing unreachable block (ram,0x000100ec6470) */
/* WARNING: Removing unreachable block (ram,0x000100ec6954) */
/* WARNING: Removing unreachable block (ram,0x000100ec6634) */

void FUN_100ec636c(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong unaff_x19;
  ulong uVar15;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar13 = &stack0xfffffffffffffff0;
  uVar15 = *param_1;
  uVar4 = param_1[5];
  bVar1 = (byte)param_1[6];
  uVar16 = (ulong)*(uint *)((long)param_1 + 9) << 8 | (ulong)*(uint3 *)((long)param_1 + 0xd) << 0x28
           | (ulong)(byte)param_1[1];
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        if (bVar1 != 1) {
          return;
        }
        func_0x0001000a8868(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
        uVar5 = 0xe0;
LAB_100ec6594:
        FUN_100eba534(uVar5,0);
        return;
      }
      puVar6 = (undefined8 *)(unaff_x20 + 0x68);
      func_0x0001000a8868(puVar6,*(undefined8 *)(unaff_x20 + 0x80));
      FUN_100eba534(*puVar6,0xe1,0);
      uVar4 = uVar16;
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      func_0x000107c5da60();
      func_0x000107c61180();
      if (uVar15 != 0) {
        func_0x000107c5d984();
        func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar15);
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100ec6654);
      (*pcVar3)();
    }
  }
  else {
    if (5 < bVar1) {
      if (bVar1 != 6) {
        if (bVar1 != 7) {
          return;
        }
        if ((uVar15 == 2) &&
           ((((param_1[4] == 0 && param_1[3] == 0) && param_1[2] == 0) && uVar4 == 0) && uVar16 == 0
           )) {
          func_0x0001000a8868(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
          uVar5 = 0xde;
        }
        else {
          if (uVar15 != 3) {
            return;
          }
          if ((((param_1[4] != 0 || param_1[3] != 0) || param_1[2] != 0) || uVar4 != 0) ||
              uVar16 != 0) {
            return;
          }
          func_0x0001000a8868(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
          uVar5 = 0xdf;
        }
        goto LAB_100ec6594;
      }
      lVar14 = *(long *)(unaff_x20 + 0xb8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar14 == 0) {
        lVar14 = unaff_x20 + 0x58;
        func_0x000107c61618();
        if (lVar14 == 0) {
          return;
        }
        func_0x000107c4e6b4();
      }
      else {
        func_0x000107c52a24();
      }
      goto code_r0x000107c615e8;
    }
    if (bVar1 == 4) {
      lVar14 = unaff_x20 + 0x58;
      func_0x000107c61618();
      if (lVar14 == 0) {
        return;
      }
      func_0x000107c4e6ac();
      goto code_r0x000107c615e8;
    }
    if (bVar1 != 5) {
      return;
    }
    unaff_x30 = 0x100ec6410;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    uVar4 = uVar15;
    unaff_x19 = uVar15;
    unaff_x21 = param_2;
    unaff_x22 = uVar16;
    unaff_x25 = (ulong)(byte)param_1[1];
    unaff_x29 = puVar13;
  }
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  if (uVar4 != 0) {
    puVar7 = &UNK_110364ce8;
    func_0x000107c613fc(&UNK_110364ce8,0x18,7);
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(undefined1 **)(puVar7 + 0x10) = puVar13;
    puVar8 = &UNK_110364d10;
    func_0x000107c613fc(&UNK_110364d10,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x100ec8458;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x100ec844c;
    *(undefined **)((long)register0x00000008 + -0x80) = puVar8;
    *(undefined **)((long)register0x00000008 + -0xa8) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x42000000;
    *(code **)((long)register0x00000008 + -0x98) = FUN_100de6bdc;
    *(undefined **)((long)register0x00000008 + -0x90) = &UNK_110364d28;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0xa8);
    func_0x000107c60bc4(puVar9);
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0x80);
    func_0x000107c61174(uVar4);
    func_0x000107c61574(uVar5);
    puVar8 = &UNK_110364d60;
    func_0x000107c613fc(&UNK_110364d60,0x18,7);
    *(undefined1 **)(puVar8 + 0x10) = puVar13;
    puVar10 = &UNK_110364d88;
    func_0x000107c613fc(&UNK_110364d88,0x20,7);
    *(code **)(puVar10 + 0x10) = FUN_100ec81f0;
    *(undefined **)(puVar10 + 0x18) = puVar8;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x100ec8450;
    *(undefined **)((long)register0x00000008 + -0x80) = puVar10;
    *(undefined **)((long)register0x00000008 + -0xa8) = puVar2;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x42000000;
    *(code **)((long)register0x00000008 + -0x98) = FUN_100de6bdc;
    *(undefined **)((long)register0x00000008 + -0x90) = &UNK_110364da0;
    puVar11 = (undefined1 *)((long)register0x00000008 + -0xa8);
    func_0x000107c60bc4(puVar11);
    func_0x000107c61574(*(undefined8 *)((long)register0x00000008 + -0x80));
    puVar10 = &UNK_110364dd8;
    func_0x000107c613fc(&UNK_110364dd8,0x18,7);
    *(undefined1 **)(puVar10 + 0x10) = puVar13;
    puVar12 = &UNK_110364e00;
    func_0x000107c613fc(&UNK_110364e00,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = 0x100ec8200;
    *(undefined **)(puVar12 + 0x18) = puVar10;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x100ec8454;
    *(undefined **)((long)register0x00000008 + -0x80) = puVar12;
    *(undefined **)((long)register0x00000008 + -0xa8) = puVar2;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x42000000;
    *(code **)((long)register0x00000008 + -0x98) = FUN_100ec61cc;
    *(undefined **)((long)register0x00000008 + -0x90) = &UNK_110364e18;
    puVar13 = (undefined1 *)((long)register0x00000008 + -0xa8);
    func_0x000107c60bc4(puVar13);
    func_0x000107c61574(*(undefined8 *)((long)register0x00000008 + -0x80));
    func_0x000107c4c7a4(uVar4);
    func_0x000107c60bd0(puVar13);
    func_0x000107c60bd0(puVar11);
    func_0x000107c60bd0(puVar9);
    lVar14 = *(long *)(unaff_x20 + 0xb8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 != 0) {
      func_0x000107c52a24();
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar7);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar14);
      return;
    }
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 100ec6654; end: 100ec6733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec6654(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x60) + _DAT_112d48320);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c4ecc8();
    func_0x000107c615e8(uVar1);
    if (((uVar2 < 7) && ((1L << (uVar2 & 0x3f) & 7U) == 0)) && ((1L << (uVar2 & 0x3f) & 0x58U) != 0)
       ) {
      func_0x0001000285a8(0x112d47fd8,&UNK_10d90eff0);
      uStack_58 = 2;
      goto LAB_100ec6704;
    }
  }
  func_0x0001000285a8(0x112d47fd8,&UNK_10d90eff0);
  uStack_58 = 3;
LAB_100ec6704:
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  func_0x000100854cb0(&uStack_58);
  return;
}



/* Entry: 100ec6734; end: 100ec6d7b;  */

void FUN_100ec6734(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0;
  if (param_1 != 0) {
    puVar2 = &UNK_110364ce8;
    func_0x000107c613fc(&UNK_110364ce8,0x18,7);
    *(undefined8 **)(puVar2 + 0x10) = &uStack_78;
    puVar3 = &UNK_110364d10;
    func_0x000107c613fc(&UNK_110364d10,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x100ec8458;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x100ec844c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_100de6bdc;
    puStack_90 = &UNK_110364d28;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110364d60;
    func_0x000107c613fc(&UNK_110364d60,0x18,7);
    *(undefined8 **)(puVar3 + 0x10) = &uStack_78;
    puVar5 = &UNK_110364d88;
    func_0x000107c613fc(&UNK_110364d88,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_100ec81f0;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    uStack_88 = 0x100ec8450;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_100de6bdc;
    puStack_90 = &UNK_110364da0;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_80);
    puVar5 = &UNK_110364dd8;
    func_0x000107c613fc(&UNK_110364dd8,0x18,7);
    *(undefined8 **)(puVar5 + 0x10) = &uStack_78;
    puVar7 = &UNK_110364e00;
    func_0x000107c613fc(&UNK_110364e00,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x100ec8200;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    uStack_88 = 0x100ec8454;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_100ec61cc;
    puStack_90 = &UNK_110364e18;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c7a4(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    lVar9 = *(long *)(unaff_x20 + 0xb8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar2);
    }
    else {
      func_0x000107c52a24();
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(lVar9);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100ec6d7c; end: 100ec6eb3;  */

void FUN_100ec6d7c(long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar2 = param_1;
  plVar5 = param_2;
  func_0x000107c4d028();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar8 = 0;
    plVar9 = (long *)0x0;
    plVar6 = plVar5;
  }
  else {
    lVar8 = lVar2;
    func_0x000107c5faec();
    plVar6 = plVar5;
    func_0x000107c61170(lVar2);
    plVar9 = plVar5;
  }
  func_0x000107c40860();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c4088c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar4 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
    uVar3 = 0;
    func_0x000104872184(0);
    func_0x000107c610f8();
    func_0x000104871870(lVar8,plVar9,lVar4,plVar6,uVar3);
    lVar7 = *(long *)(param_3 + 0xa8);
    func_0x0001000a8868();
    lVar4 = lVar8;
    FUN_100ec5fa0();
    func_0x000107c61170(lVar8);
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = lVar4;
    }
    lVar4 = param_2[1];
    lVar8 = -0x2000000000000000;
    if (lVar7 != 0) {
      lVar8 = lVar7;
    }
    *param_2 = lVar2;
    param_2[1] = lVar8;
    func_0x000107c6142c(lVar4);
    *param_4 = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec6eb4);
  (*pcVar1)();
}



/* Entry: 100ec6eb4; end: 100ec6ee7;  */

/* WARNING: Possible PIC construction at 0x000100ec6ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec6ecc) */

void FUN_100ec6eb4(void)

{
  long unaff_x20;
  
  FUN_100ec7e9c(unaff_x20 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 100ec6ee8; end: 100ec6f4b;  */

void FUN_100ec6ee8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000103dbf870();
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_100ec7e9c(lVar1 + 0x58);
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x60));
  func_0x0001000834e4(param_1 + 0x68);
  func_0x0001000834e4(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0xc0,7);
  return;
}



/* Entry: 100ec6f4c; end: 100ec700b;  */

void FUN_100ec6f4c(undefined8 param_1)

{
  if (lRam0000000112d48118 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6177a0);
  return;
}



/* Entry: 100ec700c; end: 100ec708f;  */

void FUN_100ec700c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
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
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_70 = *(undefined1 *)(param_2 + 6);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  uStack_30 = param_3[6];
  FUN_100ec7ec0(&uStack_d8,&uStack_a0,&uStack_60);
  param_1[1] = uStack_d0;
  *param_1 = uStack_d8;
  param_1[3] = uStack_c0;
  param_1[2] = uStack_c8;
  param_1[5] = uStack_b0;
  param_1[4] = uStack_b8;
  param_1[6] = uStack_a8;
  return;
}



/* Entry: 100ec7090; end: 100ec70d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100ec7090(long *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if ((char)param_1[6] != '\a') {
    return (undefined8 *)0x0;
  }
  lVar3 = param_1[5];
  lVar2 = param_1[4];
  bVar7 = *(byte *)(param_1 + 2) | (byte)lVar2;
  bVar8 = *(byte *)((long)param_1 + 0x11) | (byte)((ulong)lVar2 >> 8);
  bVar9 = *(byte *)((long)param_1 + 0x12) | (byte)((ulong)lVar2 >> 0x10);
  bVar10 = *(byte *)((long)param_1 + 0x13) | (byte)((ulong)lVar2 >> 0x18);
  bVar11 = *(byte *)((long)param_1 + 0x14) | (byte)((ulong)lVar2 >> 0x20);
  bVar12 = *(byte *)((long)param_1 + 0x15) | (byte)((ulong)lVar2 >> 0x28);
  bVar13 = *(byte *)((long)param_1 + 0x16) | (byte)((ulong)lVar2 >> 0x30);
  bVar14 = *(byte *)((long)param_1 + 0x17) | (byte)((ulong)lVar2 >> 0x38);
  bVar15 = *(byte *)(param_1 + 3) | (byte)lVar3;
  bVar16 = *(byte *)((long)param_1 + 0x19) | (byte)((ulong)lVar3 >> 8);
  bVar17 = *(byte *)((long)param_1 + 0x1a) | (byte)((ulong)lVar3 >> 0x10);
  bVar18 = *(byte *)((long)param_1 + 0x1b) | (byte)((ulong)lVar3 >> 0x18);
  bVar19 = *(byte *)((long)param_1 + 0x1c) | (byte)((ulong)lVar3 >> 0x20);
  bVar20 = *(byte *)((long)param_1 + 0x1d) | (byte)((ulong)lVar3 >> 0x28);
  bVar21 = *(byte *)((long)param_1 + 0x1e) | (byte)((ulong)lVar3 >> 0x30);
  bVar22 = *(byte *)((long)param_1 + 0x1f) | (byte)((ulong)lVar3 >> 0x38);
  auVar23[1] = bVar8;
  auVar23[0] = bVar7;
  auVar23[2] = bVar9;
  auVar23[3] = bVar10;
  auVar23[4] = bVar11;
  auVar23[5] = bVar12;
  auVar23[6] = bVar13;
  auVar23[7] = bVar14;
  auVar23[8] = bVar15;
  auVar23[9] = bVar16;
  auVar23[10] = bVar17;
  auVar23[0xb] = bVar18;
  auVar23[0xc] = bVar19;
  auVar23[0xd] = bVar20;
  auVar23[0xe] = bVar21;
  auVar23[0xf] = bVar22;
  auVar1[1] = bVar8;
  auVar1[0] = bVar7;
  auVar1[2] = bVar9;
  auVar1[3] = bVar10;
  auVar1[4] = bVar11;
  auVar1[5] = bVar12;
  auVar1[6] = bVar13;
  auVar1[7] = bVar14;
  auVar1[8] = bVar15;
  auVar1[9] = bVar16;
  auVar1[10] = bVar17;
  auVar1[0xb] = bVar18;
  auVar1[0xc] = bVar19;
  auVar1[0xd] = bVar20;
  auVar1[0xe] = bVar21;
  auVar1[0xf] = bVar22;
  auVar23 = NEON_ext(auVar23,auVar1,8,1);
  if (*param_1 != 1 ||
      (CONCAT17(bVar14 | auVar23[7],
                CONCAT16(bVar13 | auVar23[6],
                         CONCAT15(bVar12 | auVar23[5],
                                  CONCAT14(bVar11 | auVar23[4],
                                           CONCAT13(bVar10 | auVar23[3],
                                                    CONCAT12(bVar9 | auVar23[2],
                                                             CONCAT11(bVar8 | auVar23[1],
                                                                      bVar7 | auVar23[0]))))))) != 0
      || param_1[1] != 0)) {
    return (undefined8 *)0x0;
  }
  uVar4 = *(ulong *)(*(long *)(unaff_x20 + 0x60) + _DAT_112d48320);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c4ecc8();
    func_0x000107c615e8(uVar4);
    if (((uVar5 < 7) && ((1L << (uVar5 & 0x3f) & 7U) == 0)) && ((1L << (uVar5 & 0x3f) & 0x58U) != 0)
       ) {
      func_0x0001000285a8(0x112d47fd8,&UNK_10d90eff0);
      uStack_58 = 2;
      goto LAB_100ec6704;
    }
  }
  func_0x0001000285a8(0x112d47fd8,&UNK_10d90eff0);
  uStack_58 = 3;
LAB_100ec6704:
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  puVar6 = &uStack_58;
  func_0x000100854cb0(puVar6);
  return puVar6;
}



/* Entry: 100ec70d4; end: 100ec717f;  */

/* WARNING: Possible PIC construction at 0x000100ec7158: Changing call to branch */

void FUN_100ec70d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  param_7 = param_7 & 0xff;
  if (param_7 < 3) {
    if ((param_7 != 0) && (param_7 != 1)) {
      if (param_7 != 2) {
        return;
      }
      func_0x000107c61174();
      func_0x00010006c00c(param_2,param_3);
      func_0x000107c61434(param_5);
      param_1 = param_6;
    }
  }
  else if ((2 < param_7 - 4) && (param_7 != 3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 100ec7180; end: 100ec7197;  */

/* WARNING: Possible PIC construction at 0x000100ebd374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebd330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebd378) */
/* WARNING: Removing unreachable block (ram,0x000100ebd334) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_100ec7180(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[5];
  bVar4 = *(byte *)(param_1 + 6);
  if (bVar4 < 3) {
    if ((bVar4 != 0) && (bVar4 != 1)) {
      if (bVar4 != 2) {
        return;
      }
      func_0x000107c61170(uVar5,uVar2,uVar1,param_1[3],param_1[4]);
      func_0x00010006c090(uVar2,uVar1);
      uVar5 = uVar3;
    }
  }
  else if (bVar4 < 5) {
    if ((bVar4 != 3) && (bVar4 != 4)) {
      return;
    }
  }
  else if ((bVar4 != 5) && (bVar4 != 6)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 100ec7198; end: 100ec729b;  */

undefined8 * FUN_100ec7198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_100ec70d4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 100ec729c; end: 100ec72ef;  */

undefined8 * FUN_100ec729c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_100ebd2c0(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}


