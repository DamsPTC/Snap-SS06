/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029d9078; end: 1029d90ab;  */

void FUN_1029d9078(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029d90ac; end: 1029d90e3; -[ProfileAndUserDataSourceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029d90c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d90cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d90ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5140));
  return;
}



/* Entry: 1029d90e4; end: 1029d90f3;  */

undefined1  [16] FUN_1029d90e4(void)

{
  return ZEXT816(0x11057f4f0);
}



/* Entry: 1029d90f4; end: 1029d9113;  */

void FUN_1029d90f4(void)

{
  func_0x000107c61168(&PTR_PTR_11287aa78);
  return;
}



/* Entry: 1029d9114; end: 1029d9207;  */

void FUN_1029d9114(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000bb420(param_1,auStack_60);
  uVar2 = 0;
  FUN_1029d9210(0);
  plVar3 = &lStack_68;
  puVar6 = auStack_60;
  func_0x000107c6147c(plVar3,puVar6,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)plVar3 & 1) != 0) {
    lVar4 = lStack_68;
    func_0x000107c3ee50();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029d9208);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c5ee30(lVar5);
      func_0x000107c61170(lVar5);
      lVar5 = lVar4;
      func_0x000107c5ee20(lVar4,puVar6);
      func_0x000107c4d664(uVar7);
      func_0x000107c61170(lVar5);
      func_0x00010006c090(lVar4,puVar6);
    }
    func_0x000107c61170(lStack_68);
  }
  return;
}



/* Entry: 1029d9208; end: 1029d920f;  */

void FUN_1029d9208(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = 0x112ed51a0;
  func_0x0001000285a8(0x112ed51a0,&UNK_10dafe828,*(undefined8 *)(unaff_x20 + 0x18));
  auStack_50[0] = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  (*pcVar1)(auStack_50);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029d9210; end: 1029d9253;  */

void FUN_1029d9210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed51a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b0f68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ed51a8 = puVar1;
  return;
}



/* Entry: 1029d9254; end: 1029d9267;  */

void FUN_1029d9254(long param_1,long param_2)

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



/* Entry: 1029d9268; end: 1029d9623;  */

void FUN_1029d9268(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000100083b20(&puStack_a0);
  puVar7 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar6 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar10 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar1 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar8 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar2 = puStack_a0;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_11057f678;
  func_0x000107c613fc(&UNK_11057f678,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar6;
  *(undefined **)(puVar4 + 0x18) = puVar7;
  *(undefined **)(puVar4 + 0x20) = puVar8;
  pcStack_80 = FUN_1029d9634;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1029d96f8;
  puStack_88 = &UNK_11057f690;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  puVar9 = puVar3;
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar4 = &UNK_11057f6c8;
  func_0x000107c613fc(&UNK_11057f6c8,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar6;
  *(undefined **)(puVar4 + 0x18) = puVar7;
  *(undefined **)(puVar4 + 0x20) = puVar10;
  *(undefined **)(puVar4 + 0x28) = puVar8;
  pcStack_80 = FUN_1029d974c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1029d96f8;
  puStack_88 = &UNK_11057f6e0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615f0(puVar2);
  puVar4 = puVar1;
  func_0x000107c5dbd4(puVar1);
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126cbcf0;
  func_0x000107c610f8();
  func_0x000107c45e98();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(puVar2);
  func_0x000107c615f0(puVar2);
  puVar4 = puVar1;
  func_0x000107c5dbd4(puVar1);
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126cbcf0;
  func_0x000107c610f8(PTR_PTR_1126cbcf0);
  func_0x000107c45e98();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(puVar2);
  func_0x000107c615f0(puVar2);
  puVar4 = puVar1;
  func_0x000107c5dbd4(puVar1);
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126abc88;
  func_0x000107c610f8(PTR_PTR_1126abc88);
  func_0x000107c45e94();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(puVar2);
  func_0x000100333288(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  func_0x000107c61174(puVar13);
  puVar4 = puVar11;
  func_0x00010329d1dc(puVar11,puVar12,puVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar10);
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar1);
  *param_1 = puVar4;
  return;
}



/* Entry: 1029d9624; end: 1029d9633;  */

undefined1  [16] FUN_1029d9624(void)

{
  return ZEXT816(0x11057f658);
}



/* Entry: 1029d9634; end: 1029d96f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029d9634(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5bf64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d96f4);
    (*pcVar2)();
  }
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11307a4a0);
  func_0x000107c61174(uVar4);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar5 = 0;
    FUN_1029d9840(0,0x112ed51c0,&PTR_PTR_1126cbd10);
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c4764c();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d96f8);
  (*pcVar2)();
}



/* Entry: 1029d96f8; end: 1029d972f;  */

void FUN_1029d96f8(long param_1)

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



/* Entry: 1029d9730; end: 1029d974b;  */

void FUN_1029d9730(long param_1,long param_2)

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



/* Entry: 1029d974c; end: 1029d983f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029d974c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5bf64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029d983c);
    (*pcVar3)();
  }
  uVar5 = *(undefined8 *)(lVar2 + _DAT_11307a4a0);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_11302e640);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar7 = 0;
    FUN_1029d9840(0,0x112ed51b8,&PTR_PTR_1126cbd18);
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c47650();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar4);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1029d9840);
  (*pcVar3)();
}



/* Entry: 1029d9840; end: 1029d987f;  */

void FUN_1029d9840(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1029d9880; end: 1029d9887;  */

void FUN_1029d9880(long param_1,long param_2)

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



/* Entry: 1029d9888; end: 1029d98f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d9888(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029d9c7c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed51d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029d98f4; end: 1029d995f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d98f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed51d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029d9960; end: 1029d99bf; -[_TtC43ThirdPartyLoginScopedFactoryServiceProvider29ThirdPartyLoginScopedServices init] */

void FUN_1029d9960(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ThirdPartyLoginScopedFactoryServiceProvider.ThirdPartyLoginScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029d998c);
  (*pcVar1)();
}



/* Entry: 1029d99c0; end: 1029d99cf; -[_TtC43ThirdPartyLoginScopedFactoryServiceProvider29ThirdPartyLoginScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d99c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed51d0));
  return;
}



/* Entry: 1029d99d0; end: 1029d9a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d99d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11057f8d0;
  func_0x000107c613fc(&UNK_11057f8d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029d9d14,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029d9a3c; end: 1029d9ad7;  */

void FUN_1029d9a3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11057f7e0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11057f7e0;
  return;
}



/* Entry: 1029d9ad8; end: 1029d9b0f;  */

void FUN_1029d9ad8(long *param_1)

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



/* Entry: 1029d9b10; end: 1029d9b17;  */

undefined8 FUN_1029d9b10(void)

{
  return 0x1b;
}



/* Entry: 1029d9b18; end: 1029d9c4b;  */

void FUN_1029d9b18(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11057f8f8;
  func_0x000107c613fc(&UNK_11057f8f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029d9cec;
  func_0x00010058fa64(FUN_1029d9cec,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029d9c4c; end: 1029d9c7b;  */

undefined ** FUN_1029d9c4c(void)

{
  return &PTR_DAT_112ed56e0;
}



/* Entry: 1029d9c7c; end: 1029d9c9b;  */

void FUN_1029d9c7c(void)

{
  func_0x000107c61168(&PTR_PTR_11287ac08);
  return;
}



/* Entry: 1029d9c9c; end: 1029d9ceb;  */

undefined1  [16] FUN_1029d9c9c(void)

{
  return ZEXT816(0x11057f830);
}



/* Entry: 1029d9cec; end: 1029d9d13;  */

void FUN_1029d9cec(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029d9d14; end: 1029d9d17;  */

void FUN_1029d9d14(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029d9d18; end: 1029d9e07;  */

/* WARNING: Possible PIC construction at 0x0001029d9dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d9dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d9de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d9ddc) */
/* WARNING: Removing unreachable block (ram,0x0001029d9dcc) */
/* WARNING: Removing unreachable block (ram,0x0001029d9dec) */

void FUN_1029d9d18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11057f980;
  func_0x000107c613fc(&UNK_11057f980,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112ed5240;
  func_0x0001000285a8(0x112ed5240,&UNK_10dafeb00);
  func_0x000107c613fc();
  pcVar3 = FUN_1029da1bc;
  func_0x0001000841fc(FUN_1029da1bc,puVar1,uVar2);
  func_0x000100084214(&UNK_10dafead0,0x2b,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029d9e08; end: 1029d9e27;  */

/* WARNING: Possible PIC construction at 0x0001029d9dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d9dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d9de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d9ddc) */
/* WARNING: Removing unreachable block (ram,0x0001029d9dcc) */
/* WARNING: Removing unreachable block (ram,0x0001029d9dec) */

void FUN_1029d9e08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_11057f980;
  func_0x000107c613fc(&UNK_11057f980,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112ed5240;
  func_0x0001000285a8(0x112ed5240,&UNK_10dafeb00);
  func_0x000107c613fc();
  pcVar8 = FUN_1029da1bc;
  func_0x0001000841fc(FUN_1029da1bc,puVar6,uVar7);
  func_0x000100084214(&UNK_10dafead0,0x2b,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029d9e28; end: 1029da16f;  */

void FUN_1029d9e28(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ed5248,&UNK_10dafeb08);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1029d9ad8;
  func_0x0001000823a8(FUN_1029d9ad8,0);
  func_0x000100082720("ThirdPartyLoginScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed5250,&UNK_10dafeb20);
  puVar3 = &UNK_11057f9a8;
  func_0x000107c613fc(&UNK_11057f9a8,0x48,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar8 = 0x1029da1cc;
  func_0x0001000823a8(0x1029da1cc,puVar3);
  pcVar4 = "ThirdPartyLoginEntryPointWrapperServiceProvider";
  func_0x000100082720("ThirdPartyLoginEntryPointWrapperServiceProvider",0x2f,2);
  FUN_1029db018();
  func_0x000100082720("ThirdPartyLoginScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ed5258,&UNK_10dafeb10);
  puVar3 = &UNK_11057f9d0;
  func_0x000107c613fc(&UNK_11057f9d0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar4;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar2);
  uVar5 = 0x1029da1e0;
  func_0x0001000823a8(0x1029da1e0,puVar3);
  func_0x000100082720("ThirdPartyLoginScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ed51d8,&UNK_10dafe8d0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1029da1ec;
  func_0x0001000823a8(0x1029da1ec,uVar5);
  func_0x000100082720("ThirdPartyLoginScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ed51c8,&UNK_10dafe8c0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1029da1f4;
  func_0x0001000823a8(0x1029da1f4,uVar6);
  func_0x000100082720("ThirdPartyLoginScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11057f9f8;
  func_0x000107c613fc(&UNK_11057f9f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar7 = 0x1029da1fc;
  func_0x0001000823a8(0x1029da1fc,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("ThirdPartyLoginScopeEntryPointProvider",0x26,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1029da170; end: 1029da1bb;  */

void FUN_1029da170(void)

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



/* Entry: 1029da1bc; end: 1029da203;  */

void FUN_1029da1bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112ed5248,&UNK_10dafeb08);
  puVar3 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029d9ad8;
  func_0x0001000823a8(FUN_1029d9ad8,0);
  func_0x000100082720("ThirdPartyLoginScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed5250,&UNK_10dafeb20);
  puVar5 = &UNK_11057f9a8;
  func_0x000107c613fc(&UNK_11057f9a8,0x48,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  uVar6 = 0x1029da1cc;
  func_0x0001000823a8(0x1029da1cc,puVar5);
  pcVar7 = "ThirdPartyLoginEntryPointWrapperServiceProvider";
  func_0x000100082720("ThirdPartyLoginEntryPointWrapperServiceProvider",0x2f,2);
  FUN_1029db018();
  func_0x000100082720("ThirdPartyLoginScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ed5258,&UNK_10dafeb10);
  puVar5 = &UNK_11057f9d0;
  func_0x000107c613fc(&UNK_11057f9d0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 **)(puVar5 + 0x18) = puVar3;
  *(char **)(puVar5 + 0x20) = pcVar7;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x1029da1e0;
  func_0x0001000823a8(0x1029da1e0,puVar5);
  func_0x000100082720("ThirdPartyLoginScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ed51d8,&UNK_10dafe8d0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029da1ec;
  func_0x0001000823a8(0x1029da1ec,uVar8);
  func_0x000100082720("ThirdPartyLoginScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ed51c8,&UNK_10dafe8c0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1029da1f4;
  func_0x0001000823a8(0x1029da1f4,uVar9);
  func_0x000100082720("ThirdPartyLoginScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11057f9f8;
  func_0x000107c613fc(&UNK_11057f9f8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x1029da1fc;
  func_0x0001000823a8(0x1029da1fc,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("ThirdPartyLoginScopeEntryPointProvider",0x26,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1029da204; end: 1029da5b3;  */

void FUN_1029da204(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1029da724();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  func_0x0001029dc748(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x0001029dc42c();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  func_0x000107c6157c();
  FUN_1029dc66c();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 1029da5b4; end: 1029da61f;  */

void FUN_1029da5b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1029da620; end: 1029da627;  */

undefined8 FUN_1029da620(void)

{
  return 0x1b;
}



/* Entry: 1029da628; end: 1029da6ab;  */

void FUN_1029da628(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029da764,param_2,FUN_1029da768,param_2,FUN_1029da790,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029da6ac; end: 1029da6f3;  */

undefined8 FUN_1029da6ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1029dc688();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1029da6f4; end: 1029da723;  */

undefined ** FUN_1029da6f4(void)

{
  return &PTR_DAT_112ed56e0;
}



/* Entry: 1029da724; end: 1029da743;  */

void FUN_1029da724(void)

{
  func_0x000107c61168(&PTR_PTR_112ed52c8);
  return;
}



/* Entry: 1029da744; end: 1029da767;  */

undefined1  [16] FUN_1029da744(void)

{
  return ZEXT816(0x11057fa50);
}



/* Entry: 1029da768; end: 1029da78f;  */

void FUN_1029da768(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029da790; end: 1029da797;  */

undefined8 FUN_1029da790(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1029dc688();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1029da798; end: 1029da7d3;  */

void FUN_1029da798(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029da7d4();
  func_0x0001000a7f38("ThirdPartyLoginScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029da7d4; end: 1029da9bf;  */

void FUN_1029da7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11057fe70;
  ppuVar4 = &PTR_DAT_112ed56e0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed5358;
  func_0x0001000285a8(0x112ed5358,&UNK_10dafec78);
  func_0x0001000a6ee8(&UNK_11057fa50,"ThirdPartyLoginEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,FUN_1029daa34,param_1,uVar2,&UNK_11057fa50,&PTR_DAT_112ed5260);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11057faa0;
  func_0x000107c613fc(&UNK_11057faa0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11057fc58,"ThirdPartyLoginScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_1029daa3c,puVar3,uVar2,&UNK_11057fc58,&PTR_DAT_112ed53e8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11057fac8;
  func_0x000107c613fc(&UNK_11057fac8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11057f870,"ThirdPartyLoginScopedServicesScopeInitializationPluginKey",
                      0x39,2,FUN_1029dab24,puVar3,uVar2,&UNK_11057f870,&PTR_DAT_112ed51e0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed5360;
  func_0x0001000285a8(0x112ed5360,&UNK_10dafec80);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029da9c0; end: 1029daa33;  */

void FUN_1029da9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029dab60;
  func_0x0001000823a8(0x1029dab60,param_3);
  func_0x000100082720("ThirdPartyLoginEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029daa34; end: 1029daa3b;  */

void FUN_1029daa34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029dab60;
  func_0x0001000823a8();
  func_0x000100082720("ThirdPartyLoginEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029daa3c; end: 1029daa7b;  */

void FUN_1029daa3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029db0fc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ThirdPartyLoginScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029daa7c; end: 1029dab23;  */

void FUN_1029daa7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057faf0;
  func_0x000107c613fc(&UNK_11057faf0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029dab58;
  func_0x0001000823a8(FUN_1029dab58,puVar1);
  func_0x000100082720("ThirdPartyLoginScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029dab24; end: 1029dab2b;  */

void FUN_1029dab24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11057faf0;
  func_0x000107c613fc(&UNK_11057faf0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029dab58;
  func_0x0001000823a8(FUN_1029dab58,puVar3);
  func_0x000100082720("ThirdPartyLoginScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029dab2c; end: 1029dab57;  */

void FUN_1029dab2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029dab58; end: 1029dab67;  */

void FUN_1029dab58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11057f8f8;
  func_0x000107c613fc(&UNK_11057f8f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029d9cec;
  func_0x00010058fa64(FUN_1029d9cec,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029dab68; end: 1029dabef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029dab68(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029daf28();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ed5368) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed5370) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dabf0);
  (*pcVar1)();
}



/* Entry: 1029dabf0; end: 1029dac4f; -[_TtC31ThirdPartyLoginScopeGraphBridge46ThirdPartyLoginScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029dabf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ThirdPartyLoginScopeGraphBridge.ThirdPartyLoginScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dac1c);
  (*pcVar1)();
}



/* Entry: 1029dac50; end: 1029dac87; -[_TtC31ThirdPartyLoginScopeGraphBridge46ThirdPartyLoginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029dac6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029dac70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dac50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5368));
  return;
}



/* Entry: 1029dac88; end: 1029dacaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dac88(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed5370),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed5368));
  return;
}



/* Entry: 1029dacb0; end: 1029daccf;  */

void FUN_1029dacb0(void)

{
  func_0x000107c61168(&PTR_PTR_11287acc8);
  return;
}



/* Entry: 1029dacd0; end: 1029dad57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029dacd0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed53a0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed53a8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029dad58);
  (*pcVar2)();
}



/* Entry: 1029dad58; end: 1029dae3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029dad58(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed53a0);
  *(undefined **)(unaff_x20 + _DAT_112ed53a0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed53a8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed53a8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11057fbb8;
  func_0x000107c613fc(&UNK_11057fbb8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029dae44,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029dae40; end: 1029dae4b;  */

void FUN_1029dae40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029dae4c; end: 1029daeab; -[_TtC31ThirdPartyLoginScopeGraphBridge44ThirdPartyLoginScopedServicesSaberEntryPoint init] */

void FUN_1029dae4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ThirdPartyLoginScopeGraphBridge.ThirdPartyLoginScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dae78);
  (*pcVar1)();
}



/* Entry: 1029daeac; end: 1029daee3; -[_TtC31ThirdPartyLoginScopeGraphBridge44ThirdPartyLoginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029daeac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed53a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed53a0));
  return;
}



/* Entry: 1029daee4; end: 1029daee7;  */

void FUN_1029daee4(void)

{
  return;
}



/* Entry: 1029daee8; end: 1029daf07;  */

void FUN_1029daee8(void)

{
  FUN_1029dad58();
  return;
}



/* Entry: 1029daf08; end: 1029daf27;  */

void FUN_1029daf08(void)

{
  func_0x000107c61168(&PTR_PTR_11287ad90);
  return;
}



/* Entry: 1029daf28; end: 1029daff7;  */

undefined8 FUN_1029daf28(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ed53d8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1029daff8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029daff8; end: 1029db017;  */

void FUN_1029daff8(void)

{
  func_0x000107c61168(&PTR_PTR_11287ae58);
  return;
}



/* Entry: 1029db018; end: 1029db083;  */

void FUN_1029db018(void)

{
  func_0x0001000285a8(0x112ed53e0,&UNK_10dafed38);
  func_0x0001000823a8(0x1029db058,0);
  return;
}



/* Entry: 1029db084; end: 1029db0bf; -[_TtC31ThirdPartyLoginScopeGraphBridge39ThirdPartyLoginScopeGraphBridgeServices init] */

void FUN_1029db084(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029db0c0; end: 1029db0f3;  */

void FUN_1029db0c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029db0f4; end: 1029db0fb;  */

undefined8 FUN_1029db0f4(void)

{
  return 0x1b;
}



/* Entry: 1029db0fc; end: 1029db273;  */

void FUN_1029db0fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057fc00;
  func_0x000107c613fc(&UNK_11057fc00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029db274,puVar1);
  return;
}



/* Entry: 1029db274; end: 1029db27b;  */

void FUN_1029db274(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ed53d8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed53d8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11057fc98;
  func_0x000107c613fc(&UNK_11057fc98,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029db328;
  func_0x00010058fa64(0x1029db328,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029db27c; end: 1029db2d7;  */

void FUN_1029db27c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed53d8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed53d8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029db2d8; end: 1029db32f;  */

undefined ** FUN_1029db2d8(void)

{
  return &PTR_DAT_112ed56e0;
}



/* Entry: 1029db330; end: 1029db377; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db330(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5438;
  func_0x000107c61428(param_1 + _DAT_112ed5438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029db378; end: 1029db3cf; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5438;
  func_0x000107c61428(param_1 + _DAT_112ed5438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029db3d0; end: 1029db417; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint thirdPartyLoginScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db3d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5440;
  func_0x000107c61428(param_1 + _DAT_112ed5440,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029db418; end: 1029db47b; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint setThirdPartyLoginScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db418(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5440;
  func_0x000107c61428(param_1 + _DAT_112ed5440,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029db47c; end: 1029db5af;  */

/* WARNING: Possible PIC construction at 0x0001029db534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029db550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029db56c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029db538) */
/* WARNING: Removing unreachable block (ram,0x0001029db554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db47c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5c8ec();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1029dacb0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1029daf28();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029db5b0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ed5368) = lVar5;
    *(long *)(lVar4 + _DAT_112ed5370) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1029db5b0; end: 1029db5d7; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029db5b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029db47c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029db5d8; end: 1029db61b; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029db5d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029db61c; end: 1029db7b3;  */

void FUN_1029db61c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0f29990)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f0d6670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ThirdPartyLoginScopeGraphBridge/SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029db7b4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59cc8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029db7b4; end: 1029db85f; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029db7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029db61c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029db860; end: 1029db8cb; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db860(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed5438,0);
  *(undefined8 *)(param_1 + _DAT_112ed5440) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed5448) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029db8cc; end: 1029db8ff;  */

void FUN_1029db8cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029db900; end: 1029db947; -[SCThirdPartyLoginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029db92c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029db930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db900(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed5438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5440));
  return;
}



/* Entry: 1029db948; end: 1029db967;  */

void FUN_1029db948(void)

{
  func_0x000107c61168(&PTR_PTR_11287af08);
  return;
}



/* Entry: 1029db968; end: 1029db9af; -[SCThirdPartyLoginScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db968(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5478;
  func_0x000107c61428(param_1 + _DAT_112ed5478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029db9b0; end: 1029dba07; -[SCThirdPartyLoginScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029db9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5478;
  func_0x000107c61428(param_1 + _DAT_112ed5478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029dba08; end: 1029dbadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dba08(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1029daf08();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed53a0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029dbae0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed53a8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed5480);
    *(long **)(unaff_x20 + _DAT_112ed5480) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029dbae0; end: 1029dbb07; -[SCThirdPartyLoginScopedServicesSaberEntryPoint begin] */

void FUN_1029dbae0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029dba08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029dbb08; end: 1029dbc7f;  */

/* WARNING: Possible PIC construction at 0x0001029dbb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029dbc08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029dbb74) */
/* WARNING: Removing unreachable block (ram,0x0001029dbc0c) */
/* WARNING: Removing unreachable block (ram,0x0001029dbc24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dbb08(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed5480);
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



/* Entry: 1029dbc80; end: 1029dbc87;  */

void FUN_1029dbc80(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029dbc88; end: 1029dbcbb; -[SCThirdPartyLoginScopedServicesSaberEntryPoint end] */

void FUN_1029dbc88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029dbb08();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029dbcbc; end: 1029dbddb;  */

void FUN_1029dbcbc(long param_1,long param_2,long param_3)

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
                        "ThirdPartyLoginScopeGraphBridge/SCThirdPartyLoginScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dbddc);
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



/* Entry: 1029dbddc; end: 1029dbe87; -[SCThirdPartyLoginScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029dbddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029dbcbc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029dbe88; end: 1029dbee7; -[SCThirdPartyLoginScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dbe88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed5478,0);
  *(undefined8 *)(param_1 + _DAT_112ed5480) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


