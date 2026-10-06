/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023d6470; end: 1023d64ab;  */

void FUN_1023d6470(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined1 **)(unaff_x20 + 0x18);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = 1;
  return;
}



/* Entry: 1023d64ac; end: 1023d6503;  */

void FUN_1023d64ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined1 **)(unaff_x20 + 0x18);
  puVar4 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = param_4;
  *puVar4 = param_5;
  return;
}



/* Entry: 1023d6504; end: 1023d6523;  */

void FUN_1023d6504(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1023d6524; end: 1023d652f;  */

void FUN_1023d6524(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  puVar2 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar3 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  uVar3 = *puVar1;
  *puVar1 = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *puVar2 = 1;
  return;
}



/* Entry: 1023d6530; end: 1023d657b;  */

void FUN_1023d6530(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1023d657c; end: 1023d65c3;  */

void FUN_1023d657c(undefined8 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x18);
  uVar2 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  func_0x000107c4a08c();
  *puVar1 = param_2;
  return;
}



/* Entry: 1023d65c4; end: 1023d65ef;  */

void FUN_1023d65c4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1023d65f0; end: 1023d6643;  */

void FUN_1023d65f0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = *(long **)(unaff_x20 + 0x18);
  uVar4 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  lVar5 = param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  func_0x000107c3ee5c();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar3 = 0;
    lVar5 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  lVar2 = plVar1[1];
  *plVar1 = lVar3;
  plVar1[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1023d6644; end: 1023d7077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d6644(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar2 = param_1;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c4456c();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d6a70);
    (*pcVar1)();
  }
  func_0x0001000285a8(0x112e93980,&UNK_10da9f490);
  lVar4 = lVar3;
  func_0x0001000bda74();
  func_0x000107c61170(lVar3);
  func_0x0001000285a8(0x112d64528,&UNK_10d929a70);
  uVar5 = param_4;
  func_0x000107c4213c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar3 = param_5;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d6a74);
    (*pcVar1)();
  }
  func_0x0001000285a8(0x112d5cc88,&UNK_10d923740);
  lVar7 = lVar3;
  func_0x0001000bda74();
  func_0x000107c61170(lVar3);
  func_0x0001000285a8(0x112e93988,&UNK_10daea040);
  uVar8 = *(undefined8 *)(param_6 + _DAT_112ff2c78);
  func_0x000107c61174();
  uVar5 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  lVar3 = param_7;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d6a78);
    (*pcVar1)();
  }
  func_0x0001000285a8(0x112d56780,&UNK_10da9f4a0);
  lVar9 = lVar3;
  func_0x0001000bda74();
  func_0x000107c61170(lVar3);
  func_0x0001000285a8(0x112e93990,&UNK_10daea050);
  uVar8 = param_8;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  uVar10 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  lVar3 = param_5;
  func_0x000107c5b4dc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001000285a8(0x112e93998,&UNK_10da9f4b0);
    lVar11 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
    uVar8 = param_9;
    func_0x000107c3fa04();
    func_0x000107c61180();
    puVar12 = &UNK_1104fec30;
    func_0x000107c613fc(&UNK_1104fec30,0x60,7);
    *(undefined8 *)(puVar12 + 0x10) = param_2;
    *(undefined8 *)(puVar12 + 0x18) = uVar2;
    *(long *)(puVar12 + 0x20) = lVar4;
    *(undefined8 *)(puVar12 + 0x28) = uVar6;
    *(long *)(puVar12 + 0x30) = lVar7;
    *(undefined8 *)(puVar12 + 0x38) = uVar5;
    *(long *)(puVar12 + 0x40) = lVar9;
    *(undefined8 *)(puVar12 + 0x48) = uVar10;
    *(long *)(puVar12 + 0x50) = lVar11;
    *(undefined8 *)(puVar12 + 0x58) = uVar8;
    func_0x0001000285a8(0x112e939a0,&UNK_10da9f4b8);
    func_0x000107c613fc();
    func_0x000107c61174(param_2);
    func_0x000107c615f0(uVar2);
    func_0x000107c6157c(lVar4);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(lVar7);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(lVar9);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(lVar11);
    func_0x000107c615f0(uVar8);
    pcVar1 = FUN_1023d7078;
    func_0x0001000bdd8c(FUN_1023d7078,puVar12);
    uVar13 = 0;
    func_0x000103b0a894(0);
    func_0x000107c610f8();
    func_0x000103b0a858(pcVar1,uVar13);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c615e8(uVar8);
    func_0x000107c61574(lVar11);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(lVar9);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(lVar7);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(lVar4);
    func_0x000107c615e8(uVar2);
    *(code **)(unaff_x20 + 0x10) = pcVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d6a7c);
  (*pcVar1)();
}



/* Entry: 1023d7078; end: 1023d707b;  */

void FUN_1023d7078(void)

{
  long unaff_x20;
  
  func_0x0001023d6e9c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1023d707c; end: 1023d711b;  */

void FUN_1023d707c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023d711c; end: 1023d712b;  */

void FUN_1023d711c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023d712c; end: 1023d71cb;  */

void FUN_1023d712c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023d71cc; end: 1023d71db;  */

void FUN_1023d71cc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1023d71dc; end: 1023d7227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d71dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e93a78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023d7228; end: 1023d723f; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportGetPromptMediaWithSuccess:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7228(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  long *plStack_130;
  undefined1 **ppuStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 **appuStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_112e93a78);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_4;
  puVar7 = param_3;
  _objc_retain(param_4);
  puVar9 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_78,pcVar2);
    pcVar2 = "true";
    if ((int)param_3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    plVar6 = (long *)&UNK_1108e5b08;
    param_3 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e5b08,puVar7,1);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    puVar9 = (undefined8 *)auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar8 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  plVar3 = plVar8;
  __Unwind_Resume();
  puStack_a8 = &LAB_105d12a38;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined1 **)0x0;
  puStack_d0 = param_3;
  puStack_c8 = (undefined1 *)puVar9;
  plStack_c0 = plVar8;
  plStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (plVar3 != (long *)0x0) {
    plVar8 = (long *)plVar3[1];
    pcVar2 = "true";
    if ((int)plVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_f0,pcVar2);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    func_0x00010007e1e8(&uStack_110,appuStack_f0,&lStack_d8,1);
    plVar6 = (long *)&UNK_1108e5b58;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e5b58,&uStack_110,puVar7);
    ppuVar4 = &puStack_f8;
    puStack_f8 = (undefined1 *)&uStack_110;
    func_0x00010007e5dc();
    puVar9 = &uStack_110;
    if (cStack_d9 < '\0') {
      ppuVar4 = appuStack_f0[0];
      __ZdlPv();
      puVar9 = &uStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  puStack_f8 = (undefined1 *)puVar9;
  func_0x00010007e5dc(&puStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appuStack_f0[0]);
  }
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  puStack_138 = (undefined1 *)&uStack_150;
  puStack_118 = &LAB_105d12b50;
  if (ppuVar5 != (undefined1 **)0x0) {
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    plStack_130 = plVar8;
    ppuStack_128 = ppuVar4;
    ppuStack_120 = &puStack_b0;
    (**(code **)(*(long *)ppuVar5[1] + 0x18))(ppuVar5[1],&UNK_1108e5ba8,&uStack_150,plVar6);
    func_0x00010007e5dc(&puStack_138);
  }
  return;
}



/* Entry: 1023d7240; end: 1023d7257; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportCreatePromptWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7240(long param_1,undefined8 param_2,undefined *param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (*(long *)(param_1 + _DAT_112e93a78) != 0) {
    unaff_x20 = *(long **)(*(long *)(param_1 + _DAT_112e93a78) + 8);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_3 = &UNK_1108e5b58;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108e5b58,&uStack_70,1);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  puStack_78 = &LAB_105d12b50;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_1108e5ba8,&uStack_b0,param_3);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 1023d7258; end: 1023d726b; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportCreatorStoryNotFound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7258(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112e93a78) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + _DAT_112e93a78) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e5ba8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1023d726c; end: 1023d727f; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportStoryMediaFetchFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d726c(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112e93a78) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + _DAT_112e93a78) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e5bf8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1023d7280; end: 1023d7297; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportStoryContentFileMissingWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7280(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_112e93a78);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108e5c48,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  puStack_88 = &LAB_105d12db4;
  if (pcVar4 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar3;
    pcStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
              (*(long **)(pcVar4 + 8),&UNK_1108e5c98,&uStack_c0,pcVar2);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1023d7298; end: 1023d72ab; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportDirectMessageOverlayDataFetchFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7298(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112e93a78) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + _DAT_112e93a78) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e5c98,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1023d72ac; end: 1023d72bf; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportGetPromptMediaFailedTranscoding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d72ac(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112e93a78) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + _DAT_112e93a78) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e5ce8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1023d72c0; end: 1023d72d7; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger reportTurnBasedAssociatedDataSizeWithSuccess:dataSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 **
FUN_1023d72c0(long param_1,undefined8 param_2,int param_3,undefined1 *param_4,undefined1 *param_5,
             undefined1 *param_6)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar6 = param_4;
  if (*(long *)(param_1 + _DAT_112e93a78) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + _DAT_112e93a78) + 8);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108e5d38);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)puVar5;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar6 = (undefined1 *)puVar5;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pppuVar3 = &ppuStack_c0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_b8 = PTR_PTR_1126ecea0;
  ppuStack_c0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_c0,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined1 ***)0x0) {
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)pppuVar3[1];
    pppuVar3[1] = (undefined1 **)puVar6;
    _objc_release(puVar4);
    _objc_retain(param_4);
    puVar4 = (undefined1 *)pppuVar3[2];
    pppuVar3[2] = (undefined1 **)param_4;
    _objc_release(puVar4);
    _objc_retain(param_5);
    puVar4 = (undefined1 *)pppuVar3[3];
    pppuVar3[3] = (undefined1 **)param_5;
    _objc_release(puVar4);
    _objc_retain(param_6);
    puVar4 = (undefined1 *)pppuVar3[4];
    pppuVar3[4] = (undefined1 **)param_6;
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return (undefined1 **)pppuVar3;
}



/* Entry: 1023d72d8; end: 1023d7337; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger init] */

void FUN_1023d72d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPromptLoggingImpl.LensPromptGrapheneLogger",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d7304);
  (*pcVar1)();
}



/* Entry: 1023d7338; end: 1023d7347; -[_TtC23SCLensPromptLoggingImpl24LensPromptGrapheneLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e93a78));
  return;
}



/* Entry: 1023d7348; end: 1023d7367;  */

void FUN_1023d7348(void)

{
  func_0x000107c61168(&PTR_PTR_11283af08);
  return;
}



/* Entry: 1023d7368; end: 1023d73fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7368(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e93aa8;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e93ab0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e93ab8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e93ac0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023d73fc; end: 1023d756b;  */

/* WARNING: Possible PIC construction at 0x0001023d74b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d74dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d7500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d74e0) */
/* WARNING: Removing unreachable block (ram,0x0001023d74bc) */
/* WARNING: Removing unreachable block (ram,0x0001023d7504) */
/* WARNING: Removing unreachable block (ram,0x0001023d7538) */
/* WARNING: Removing unreachable block (ram,0x0001023d754c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d73fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e93ab0);
  uVar2 = puVar1[1];
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e93ab8);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_6);
  func_0x000107c6142c(uVar2);
  puVar3 = PTR_PTR_1126aa708;
  func_0x000107c610f8(PTR_PTR_1126aa708);
  func_0x000107c61434(param_2);
  func_0x000107c453e4(puVar3);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c57968(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d756c; end: 1023d7577; -[_TtC23SCLensPromptLoggingImpl16LensPromptLogger logImagePromptUpload:lensId:lensSessionId:latencyMs:success:] */

/* WARNING: Possible PIC construction at 0x0001023d774c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7750) */

void FUN_1023d756c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1023d73fc(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023d7578; end: 1023d769b;  */

/* WARNING: Possible PIC construction at 0x0001023d75e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d760c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d7630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7610) */
/* WARNING: Removing unreachable block (ram,0x0001023d75ec) */
/* WARNING: Removing unreachable block (ram,0x0001023d7634) */
/* WARNING: Removing unreachable block (ram,0x0001023d7668) */
/* WARNING: Removing unreachable block (ram,0x0001023d767c) */

void FUN_1023d7578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa710;
  func_0x000107c610f8(PTR_PTR_1126aa710);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c57968(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d769c; end: 1023d76a7; -[_TtC23SCLensPromptLoggingImpl16LensPromptLogger logImageResponseSend:lensId:lensSessionId:latencyMs:success:] */

/* WARNING: Possible PIC construction at 0x0001023d774c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7750) */

void FUN_1023d769c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1023d7578(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023d76a8; end: 1023d7777;  */

/* WARNING: Possible PIC construction at 0x0001023d774c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7750) */

void FUN_1023d76a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  (*param_8)(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023d7778; end: 1023d7873;  */

/* WARNING: Possible PIC construction at 0x0001023d77dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d7800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d7824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7804) */
/* WARNING: Removing unreachable block (ram,0x0001023d77e0) */
/* WARNING: Removing unreachable block (ram,0x0001023d7828) */
/* WARNING: Removing unreachable block (ram,0x0001023d7844) */
/* WARNING: Removing unreachable block (ram,0x0001023d7858) */

void FUN_1023d7778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa718;
  func_0x000107c610f8(PTR_PTR_1126aa718);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c57968(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d7874; end: 1023d787f; -[_TtC23SCLensPromptLoggingImpl16LensPromptLogger logImageResponseAbandonWithPromptId:lensId:lensSessionId:] */

/* WARNING: Possible PIC construction at 0x0001023d7a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7a1c) */

void FUN_1023d7874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1023d7778(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023d7880; end: 1023d797b;  */

/* WARNING: Possible PIC construction at 0x0001023d78e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d7908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d792c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d790c) */
/* WARNING: Removing unreachable block (ram,0x0001023d78e8) */
/* WARNING: Removing unreachable block (ram,0x0001023d7930) */
/* WARNING: Removing unreachable block (ram,0x0001023d794c) */
/* WARNING: Removing unreachable block (ram,0x0001023d7960) */

void FUN_1023d7880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa720;
  func_0x000107c610f8(PTR_PTR_1126aa720);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c57e68(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d797c; end: 1023d7987; -[_TtC23SCLensPromptLoggingImpl16LensPromptLogger logImageResponseViewWithResponseId:promptId:lensId:] */

/* WARNING: Possible PIC construction at 0x0001023d7a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7a1c) */

void FUN_1023d797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1023d7880(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023d7988; end: 1023d7a3f;  */

/* WARNING: Possible PIC construction at 0x0001023d7a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7a1c) */

void FUN_1023d7988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  (*param_6)(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023d7a40; end: 1023d7b53;  */

void FUN_1023d7a40(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104fed70;
  func_0x000107c613fc(&UNK_1104fed70,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1023d7fec;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_1023d7ff4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1023d7e64;
  puStack_58 = &UNK_1104fed88;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c70c(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x5c,0x59,0x20,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d7b54);
  (*pcVar1)();
}



/* Entry: 1023d7b54; end: 1023d7d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7b54(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  puVar5 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  uVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  if (param_1 == 0) goto LAB_1023d7c50;
  lVar7 = ((undefined8 *)(uVar2 + _DAT_112e93ab8))[1];
  if (lVar7 == 0) goto LAB_1023d7c50;
  puVar8 = (undefined1 *)((ulong *)(uVar2 + _DAT_112e93ab0))[1];
  if (puVar8 == (undefined1 *)0x0) goto LAB_1023d7c50;
  uVar10 = *(undefined8 *)(uVar2 + _DAT_112e93ab8);
  uVar9 = *(ulong *)(uVar2 + _DAT_112e93ab0);
  func_0x000107c61174();
  func_0x000107c61434(lVar7);
  func_0x000107c61434(puVar8);
  uVar3 = param_1;
  func_0x000107c4f0e4();
  if ((uVar3 | 4) != 5) {
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar7);
    goto LAB_1023d7d3c;
  }
  uVar3 = param_1;
  func_0x000107c4b3f8();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(uVar3);
    if ((uVar9 == uVar4) && (puVar8 == puVar5)) {
      func_0x000107c6142c(puVar5);
    }
    else {
      uVar3 = uVar9;
      puVar6 = puVar8;
      func_0x000107c605b8(uVar9,puVar8,uVar4,puVar5,0);
      func_0x000107c6142c(puVar5);
      if ((uVar3 & 1) == 0) {
        func_0x000107c61170(uVar2);
        func_0x000107c6142c(puVar8);
        goto LAB_1023d7d54;
      }
    }
    uVar3 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d7d68);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    FUN_1023d7d68(uVar4,puVar6,uVar10,lVar7,uVar9,puVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(puVar8);
    puVar8 = puVar6;
LAB_1023d7d3c:
    func_0x000107c6142c(puVar8);
    return;
  }
  func_0x000107c6142c(puVar8);
  func_0x000107c61170(uVar2);
LAB_1023d7d54:
  func_0x000107c6142c(lVar7);
  uVar2 = param_1;
LAB_1023d7c50:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1023d7d68; end: 1023d7e63;  */

/* WARNING: Possible PIC construction at 0x0001023d7dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d7df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d7e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7df4) */
/* WARNING: Removing unreachable block (ram,0x0001023d7dd0) */
/* WARNING: Removing unreachable block (ram,0x0001023d7e18) */
/* WARNING: Removing unreachable block (ram,0x0001023d7e34) */
/* WARNING: Removing unreachable block (ram,0x0001023d7e48) */

void FUN_1023d7d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa728;
  func_0x000107c610f8(PTR_PTR_1126aa728);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c55d70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d7e64; end: 1023d7eef;  */

void FUN_1023d7e64(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1023d7ef0; end: 1023d7f0b;  */

void FUN_1023d7ef0(long param_1,long param_2)

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



/* Entry: 1023d7f0c; end: 1023d7f6b; -[_TtC23SCLensPromptLoggingImpl16LensPromptLogger init] */

void FUN_1023d7f0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPromptLoggingImpl.LensPromptLogger",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d7f38);
  (*pcVar1)();
}



/* Entry: 1023d7f6c; end: 1023d7fcb; -[_TtC23SCLensPromptLoggingImpl16LensPromptLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023d7fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d7fb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7f6c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e93ac0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e93aa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e93ab0 + 8))
  ;
  return;
}



/* Entry: 1023d7fcc; end: 1023d7feb;  */

void FUN_1023d7fcc(void)

{
  func_0x000107c61168(&PTR_PTR_11283afc8);
  return;
}



/* Entry: 1023d7fec; end: 1023d7ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d7fec(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  uVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  if (param_1 == 0) goto LAB_1023d7c50;
  lVar7 = ((undefined8 *)(uVar2 + _DAT_112e93ab8))[1];
  if (lVar7 == 0) goto LAB_1023d7c50;
  puVar8 = (undefined1 *)((ulong *)(uVar2 + _DAT_112e93ab0))[1];
  if (puVar8 == (undefined1 *)0x0) goto LAB_1023d7c50;
  uVar10 = *(undefined8 *)(uVar2 + _DAT_112e93ab8);
  uVar9 = *(ulong *)(uVar2 + _DAT_112e93ab0);
  func_0x000107c61174();
  func_0x000107c61434(lVar7);
  func_0x000107c61434(puVar8);
  uVar3 = param_1;
  func_0x000107c4f0e4();
  if ((uVar3 | 4) != 5) {
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar7);
    goto LAB_1023d7d3c;
  }
  uVar3 = param_1;
  func_0x000107c4b3f8();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(uVar3);
    if ((uVar9 == uVar4) && (puVar8 == puVar5)) {
      func_0x000107c6142c(puVar5);
    }
    else {
      uVar3 = uVar9;
      puVar6 = puVar8;
      func_0x000107c605b8(uVar9,puVar8,uVar4,puVar5,0);
      func_0x000107c6142c(puVar5);
      if ((uVar3 & 1) == 0) {
        func_0x000107c61170(uVar2);
        func_0x000107c6142c(puVar8);
        goto LAB_1023d7d54;
      }
    }
    uVar3 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d7d68);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    FUN_1023d7d68(uVar4,puVar6,uVar10,lVar7,uVar9,puVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(puVar8);
    puVar8 = puVar6;
LAB_1023d7d3c:
    func_0x000107c6142c(puVar8);
    return;
  }
  func_0x000107c6142c(puVar8);
  func_0x000107c61170(uVar2);
LAB_1023d7d54:
  func_0x000107c6142c(lVar7);
  uVar2 = param_1;
LAB_1023d7c50:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1023d7ff4; end: 1023d8013;  */

void FUN_1023d7ff4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1023d8014; end: 1023d801b;  */

void FUN_1023d8014(long param_1,long param_2)

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



/* Entry: 1023d801c; end: 1023d806f;  */

undefined8 FUN_1023d801c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1023d8070(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1023d8070; end: 1023d824f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d8070(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  lVar2 = param_3;
  func_0x000107c4f4b8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    uVar4 = 0;
    FUN_1023d7fcc(0);
    lVar2 = lVar3;
    func_0x000107c61480(lVar3,uVar4);
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(lVar3);
      return;
    }
    lVar5 = param_2;
    func_0x000107c3eabc();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c4f0b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d8250);
      (*pcVar1)();
    }
    puVar7 = &UNK_1104fedc0;
    func_0x000107c613fc(&UNK_1104fedc0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar2);
    pcStack_70 = FUN_1023d8250;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1023d7ea4;
    puStack_78 = &UNK_1104fedd8;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar2 = lVar6;
    func_0x000107c5c320(lVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c3e924(lVar2);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    param_3 = lVar2;
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1023d8250; end: 1023d828f;  */

void FUN_1023d8250(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104fed70;
  func_0x000107c613fc(&UNK_1104fed70,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1023d7fec;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_1023d7ff4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1023d7e64;
  puStack_58 = &UNK_1104fed88;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c70c(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x5c,0x59,0x20,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d7b54);
  (*pcVar1)();
}



/* Entry: 1023d8290; end: 1023d82af;  */

void FUN_1023d8290(void)

{
  func_0x000107c61168(&PTR_PTR_112e93b30);
  return;
}



/* Entry: 1023d82b0; end: 1023d82e3;  */

void FUN_1023d82b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1023d82e4; end: 1023d839b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d82e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar3 = 0;
  FUN_1023d7fcc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e93aa8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e93ab0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e93ab8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112e93ac0) = param_2;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar6;
  return;
}



/* Entry: 1023d839c; end: 1023d83a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d839c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar6 = &lStack_50;
  lVar3 = 0;
  FUN_1023d7fcc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e93aa8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e93ab0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e93ab8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112e93ac0) = uVar7;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar6;
  return;
}



/* Entry: 1023d83a4; end: 1023d8417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d83a4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  puVar1 = PTR_PTR_1126aa738;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_1023d7348();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined **)(lVar3 + _DAT_112e93a78) = puVar1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1023d8418; end: 1023d841f;  */

void FUN_1023d8418(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023d8420; end: 1023d8443;  */

void FUN_1023d8420(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023d8444; end: 1023d8467;  */

void FUN_1023d8444(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100679d30();
  *param_1 = param_2;
  return;
}



/* Entry: 1023d8468; end: 1023d8487;  */

void FUN_1023d8468(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1023d8488; end: 1023d853f;  */

undefined * FUN_1023d8488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_30 = FUN_1023d8540;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_1023d855c;
  puStack_38 = &UNK_1104fef38;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126aa740;
  func_0x000107c610f8(PTR_PTR_1126aa740);
  func_0x000107c49550();
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 1023d8540; end: 1023d855b;  */

void FUN_1023d8540(void)

{
  FUN_1023d87c0(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1023d855c; end: 1023d8593;  */

void FUN_1023d855c(long param_1)

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



/* Entry: 1023d8594; end: 1023d85bf;  */

void FUN_1023d8594(long param_1,long param_2)

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



/* Entry: 1023d85c0; end: 1023d862b;  */

void FUN_1023d85c0(undefined8 param_1)

{
  if (lRam0000000112e93c88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d3e7c);
  return;
}



/* Entry: 1023d862c; end: 1023d86ef;  */

void FUN_1023d862c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_1023d8540;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1023d855c;
  puStack_48 = &UNK_1104fef60;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc(puVar1,param_3,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126aa740;
  func_0x000107c610f8();
  func_0x000107c49550();
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1023d86f0; end: 1023d86f7;  */

void FUN_1023d86f0(long param_1,long param_2)

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



/* Entry: 1023d86f8; end: 1023d8707; -[_TtC23UcoVisualSignalDataImpl27UcoVisualSignalDataProvider visualSignalsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d86f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e93d28));
  return;
}



/* Entry: 1023d8708; end: 1023d8717; -[_TtC23UcoVisualSignalDataImpl27UcoVisualSignalDataProvider didDetectVisualSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d8708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e93d28),PTR_s_next__112614028);
  return;
}



/* Entry: 1023d8718; end: 1023d877b; -[_TtC23UcoVisualSignalDataImpl27UcoVisualSignalDataProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d8718(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e93d28;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023d877c; end: 1023d87af;  */

void FUN_1023d877c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023d87b0; end: 1023d87bf; -[_TtC23UcoVisualSignalDataImpl27UcoVisualSignalDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d87b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e93d28));
  return;
}



/* Entry: 1023d87c0; end: 1023d87df;  */

void FUN_1023d87c0(void)

{
  func_0x000107c61168(&PTR_PTR_11283b0a0);
  return;
}



/* Entry: 1023d87e0; end: 1023d8fa7;  */

undefined * FUN_1023d87e0(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lStack_e8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar12 = PTR_PTR_1126ae558;
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
    puVar12 = PTR_PTR_1126ae558;
  }
  PTR_PTR_1126ae558 = puVar12;
  if (uVar3 != 0) {
    uVar3 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar3 = param_4 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      uVar17 = 0x112e93d58;
      func_0x0001000285a8(0x112e93d58,&UNK_10da9f650);
      func_0x000107c613fc();
      lVar4 = 0;
      func_0x00010095c380();
      puVar12 = &UNK_1104ff088;
      puVar14 = puVar12;
      func_0x000107c613fc(&UNK_1104ff088,0x11,7);
      puVar14[0x10] = 0;
      puVar15 = puVar12;
      func_0x000107c613fc(&UNK_1104ff088,0x11,7);
      puVar15[0x10] = 1;
      func_0x000107c613fc(&UNK_1104ff088,0x11,7);
      puVar12[0x10] = 1;
      uVar3 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar16 = *(ulong *)(uVar3 + 0x10);
      }
      else {
        uVar16 = uVar3;
        if ((param_1 & 0x8000000000000000) != 0) {
          uVar16 = param_1;
        }
        func_0x000107c60480();
      }
      if (uVar16 == 0) {
        lStack_e8 = 0;
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        lStack_e8 = 0;
        uVar20 = 0;
        do {
          while( true ) {
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar3 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1023d8ea8);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(param_1 + uVar20 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar5 = uVar20;
              func_0x0001002ec9a0(uVar20,param_1);
            }
            uVar1 = uVar20 + 1;
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1023d8ea4);
              (*pcVar2)();
            }
            uVar6 = uVar5;
            func_0x000107c5d388();
            if (uVar6 != 1) break;
            puVar12[0x10] = 0;
            func_0x000107c613fc(uVar17,0x18,7);
            lVar7 = 0;
            func_0x00010095c380();
            lVar19 = *(long *)(unaff_x20 + 0x50);
            if (lVar19 == 0) {
              func_0x000107c61170(uVar5);
              func_0x000107c61574(lVar21);
            }
            else {
              puVar18 = &UNK_1104ff0b0;
              func_0x000107c613fc(&UNK_1104ff0b0,0x18,7);
              func_0x000107c61644(puVar18 + 0x10,unaff_x20);
              puVar9 = &UNK_1104ff128;
              func_0x000107c613fc(&UNK_1104ff128,0x28,7);
              *(undefined **)(puVar9 + 0x10) = puVar18;
              *(long *)(puVar9 + 0x18) = lVar7;
              *(undefined8 *)(puVar9 + 0x20) = param_2;
              pcStack_88 = (code *)0x1023da0f4;
              puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a0 = 0x42000000;
              puStack_98 = &UNK_1000f6b44;
              puStack_90 = &UNK_1104ff140;
              ppuVar8 = &puStack_a8;
              puStack_80 = puVar9;
              func_0x000107c60bc4(ppuVar8);
              puVar18 = puStack_80;
              func_0x000107c615f0(lVar19);
              func_0x000107c6157c(lVar7);
              func_0x000107c61174(param_2);
              func_0x000107c61574(puVar18);
              func_0x000107c4e524(lVar19);
              func_0x000107c61170(uVar5);
              func_0x000107c61574(lVar21);
              func_0x000107c60bd0(ppuVar8);
              func_0x000107c615e8(lVar19);
            }
            lVar21 = *(long *)(lVar7 + 0x10);
            func_0x000107c6157c(lVar21);
            func_0x000107c61574(lVar7);
            uVar20 = uVar20 + 1;
            if (uVar1 == uVar16) goto joined_r0x0001023d8e98;
          }
          if (uVar6 != 2) {
            puVar9 = PTR_PTR_1126ae558;
            func_0x000107c61168(PTR_PTR_1126ae558);
            puVar10 = (undefined8 *)0xd000000000000023;
            uVar17 = 0x800000010f096dd0;
            func_0x0001048db000(0xd000000000000023,0x800000010f096dd0,0xd00000000000005c,
                                0x800000010f096d70,0x10f);
            puVar13 = puVar10;
            func_0x0001018e0ad8();
            puVar18 = &UNK_1107b6098;
            func_0x000107c613f8(&UNK_1107b6098,puVar13,0,0);
            *puVar13 = puVar10;
            puVar13[1] = uVar17;
            puVar11 = puVar18;
            func_0x000107c5ed2c();
            func_0x000107c614ac(puVar18);
            puVar18 = puVar11;
            func_0x000107c5ed2c(puVar11);
            func_0x000107c61170(puVar11);
            func_0x000107c451ac(puVar9);
            func_0x000107c61180();
            func_0x000107c61574(puVar14);
            func_0x000107c61574(puVar15);
            func_0x000107c61574(puVar12);
            func_0x000107c61574(lVar4);
            func_0x000107c61170(puVar18);
            func_0x000107c61170(uVar5);
            goto LAB_1023d8e80;
          }
          puVar15[0x10] = 0;
          func_0x000107c613fc(uVar17,0x18,7);
          lVar7 = 0;
          func_0x00010095c380();
          lVar19 = *(long *)(unaff_x20 + 0x50);
          if (lVar19 == 0) {
            func_0x000107c61170(uVar5);
            func_0x000107c61574(lStack_e8);
          }
          else {
            puVar18 = &UNK_1104ff0b0;
            func_0x000107c613fc(&UNK_1104ff0b0,0x18,7);
            func_0x000107c61644(puVar18 + 0x10,unaff_x20);
            puVar9 = &UNK_1104ff0d8;
            func_0x000107c613fc(&UNK_1104ff0d8,0x38,7);
            *(undefined **)(puVar9 + 0x10) = puVar18;
            *(long *)(puVar9 + 0x18) = lVar7;
            *(undefined8 *)(puVar9 + 0x20) = param_2;
            *(ulong *)(puVar9 + 0x28) = param_3;
            *(ulong *)(puVar9 + 0x30) = param_4;
            pcStack_88 = FUN_1023da0c8;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000f6b44;
            puStack_90 = &UNK_1104ff0f0;
            ppuVar8 = &puStack_a8;
            puStack_80 = puVar9;
            func_0x000107c60bc4(ppuVar8);
            puVar18 = puStack_80;
            func_0x000107c61174(param_2);
            func_0x000107c615f0(lVar19);
            func_0x000107c6157c(lVar7);
            func_0x000107c61434(param_4);
            func_0x000107c61574(puVar18);
            func_0x000107c4e524(lVar19);
            func_0x000107c61170(uVar5);
            func_0x000107c61574(lStack_e8);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c615e8(lVar19);
          }
          lStack_e8 = *(long *)(lVar7 + 0x10);
          func_0x000107c6157c();
          func_0x000107c61574(lVar7);
          uVar20 = uVar1;
        } while (uVar1 != uVar16);
      }
joined_r0x0001023d8e98:
      if (lVar21 != 0) {
        uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
        puVar18 = &UNK_1104ff178;
        func_0x000107c613fc(&UNK_1104ff178,0x38,7);
        *(undefined **)(puVar18 + 0x10) = puVar14;
        *(undefined **)(puVar18 + 0x18) = puVar12;
        *(long *)(puVar18 + 0x20) = lVar4;
        *(undefined **)(puVar18 + 0x28) = puVar15;
        *(long *)(puVar18 + 0x30) = unaff_x20;
        func_0x000107c615f0(uVar17);
        func_0x000107c6157c(puVar14);
        func_0x000107c6157c(puVar12);
        func_0x000107c6157c(lVar4);
        func_0x000107c6157c(puVar15);
        func_0x000107c6157c(unaff_x20);
        func_0x00010075a04c(uVar17,1,0x1023da530,puVar18);
        func_0x000107c615e8(uVar17);
        func_0x000107c61574(puVar18);
      }
      if (lStack_e8 != 0) {
        uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
        puVar18 = &UNK_1104ff1a0;
        func_0x000107c613fc(&UNK_1104ff1a0,0x38,7);
        *(undefined **)(puVar18 + 0x10) = puVar14;
        *(undefined **)(puVar18 + 0x18) = puVar15;
        *(long *)(puVar18 + 0x20) = lVar4;
        *(undefined **)(puVar18 + 0x28) = puVar12;
        *(long *)(puVar18 + 0x30) = unaff_x20;
        func_0x000107c6157c(puVar14);
        func_0x000107c6157c(puVar12);
        func_0x000107c6157c(lVar4);
        func_0x000107c6157c(puVar15);
        func_0x000107c6157c(unaff_x20);
        func_0x000107c615f0(uVar17);
        func_0x00010075a04c();
        func_0x000107c615e8(uVar17);
        func_0x000107c61574(puVar18);
      }
      puVar18 = *(undefined **)(lVar4 + 0x10);
      puVar9 = puVar18;
      func_0x000107c6157c(puVar18);
      func_0x00010488b12c();
      func_0x000107c61574(puVar14);
      func_0x000107c61574(puVar15);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(lStack_e8);
      func_0x000107c61574(puVar18);
      lStack_e8 = lVar4;
LAB_1023d8e80:
      func_0x000107c61574(lStack_e8);
      func_0x000107c61574(lVar21);
      return puVar9;
    }
  }
  func_0x000107c61168(puVar12);
  puVar10 = (undefined8 *)0x6c75736552206f4e;
  uVar17 = 0xea00000000007374;
  func_0x0001048db000(0x6c75736552206f4e,0xea00000000007374,0xd00000000000005c,0x800000010f096d70,
                      0x10b);
  puVar13 = puVar10;
  func_0x0001018e0ad8();
  puVar14 = &UNK_1107b6098;
  func_0x000107c613f8(&UNK_1107b6098,puVar13,0,0);
  *puVar13 = puVar10;
  puVar13[1] = uVar17;
  puVar15 = puVar14;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar14);
  puVar14 = puVar15;
  func_0x000107c5ed2c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c451ac(puVar12);
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  return puVar12;
}



/* Entry: 1023d8fa8; end: 1023d910b;  */

void FUN_1023d8fa8(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 auStack_b0 [3];
  undefined8 auStack_98 [3];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_b0;
  uVar7 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_80,1,0);
    *(undefined1 *)(param_3 + 0x10) = 1;
    if (cVar1 == '\x01') {
      func_0x000107c61428(param_5 + 0x10,auStack_98,0,0);
      if (*(char *)(param_5 + 0x10) != '\x01') {
        return;
      }
      puVar2 = (undefined8 *)0x6c75736552206f4e;
      uVar7 = 0xea00000000007374;
      func_0x0001048db000(0x6c75736552206f4e,0xea00000000007374,0xd00000000000005c,
                          0x800000010f096d70,0x10b);
      puVar3 = puVar2;
      func_0x0001018e0ad8();
      puVar4 = &UNK_1107b6098;
      func_0x000107c613f8(&UNK_1107b6098,puVar3,0,0);
      *puVar3 = puVar2;
      puVar3[1] = uVar7;
      puVar5 = puVar4;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar4);
      func_0x00010488ade0(puVar5);
      func_0x000107c61170(puVar5);
    }
    else {
      auStack_98[0] = uVar7;
      func_0x000100b60084(auStack_98);
      puVar6 = auStack_98;
    }
    func_0x000107c61428(param_2 + 0x10,puVar6,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
  }
  return;
}



/* Entry: 1023d910c; end: 1023d93ff; -[_TtC17SCScanCodeDecoder19ScanCodeDecoderImpl decodeForCodeTypes:fromImage:withId:] */

void FUN_1023d910c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_1023da4c8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar2 = param_3;
  FUN_1023d87e0(param_3,param_4,param_5,uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023d9400; end: 1023d9827;  */

void FUN_1023d9400(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c6071c();
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c615e8(lVar2);
    return;
  }
  lVar4 = lVar2;
  func_0x000107c4d08c();
  func_0x000107c61180();
  uVar9 = param_3;
  if (lVar4 == 0) {
    func_0x000107c5faec();
    uVar9 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  lVar5 = lVar2;
  func_0x000107c3fce4();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  puVar6 = puVar3;
  func_0x000107c4d09c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  puVar7 = puVar6;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x000107c3dd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar8;
    func_0x000107c4505c();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar7 != (undefined *)0x0) {
      puVar8 = puVar7;
      func_0x000107c50648();
      if (((ulong)puVar8 & 1) != 0) {
        puVar8 = PTR_PTR_1126b30e0;
        func_0x000107c610f8();
        dVar15 = 0.0;
        func_0x000107c45760();
        puVar13 = puVar7;
        func_0x000107c61150(puVar7,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_runDeepScanWithBatchImages_image_11262e408);
        if (((ulong)puVar13 & 1) == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          lVar4 = 0x112d36850;
          FUN_1023d9d70(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0)
          ;
          func_0x000107c613fc();
          dVar15 = 4.94065645841247e-324;
          *(undefined8 *)(lVar4 + 0x18) = 3;
          *(undefined8 *)(lVar4 + 0x10) = 1;
          *(undefined8 *)(lVar4 + 0x20) = param_2;
          uVar9 = 0;
          FUN_1023da4c8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
          func_0x000107c615f0(puVar7);
          func_0x000107c61174(param_2);
          lVar5 = lVar4;
          func_0x000107c5fc48(lVar4,uVar9);
          puVar13 = puVar7;
          func_0x000107c50978();
          func_0x000107c61180();
          func_0x000107c615e8(puVar7);
          func_0x000107c61574(lVar4);
          func_0x000107c61170(lVar5);
        }
        func_0x000107c6071c();
        *(double *)(unaff_x20 + 0x60) = (dVar15 - param_1) * 1000.0;
        if (puVar13 != (undefined *)0x0) {
          puVar10 = &UNK_1104ff1c8;
          func_0x000107c613fc(&UNK_1104ff1c8,0x18,7);
          puVar14 = (undefined8 *)(puVar10 + 0x10);
          *puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_80 = FUN_1023d9adc;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_100b61264;
          puStack_88 = &UNK_1104ff1e0;
          ppuVar11 = &puStack_a0;
          func_0x000107c60bc4(ppuVar11);
          puStack_a0 = puVar1;
          pcStack_80 = FUN_1023da188;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_101218f4c;
          puStack_88 = &UNK_1104ff208;
          ppuVar12 = &puStack_a0;
          puStack_78 = puVar10;
          func_0x000107c60bc4(ppuVar12);
          puVar1 = puStack_78;
          func_0x000107c6157c(puVar10);
          func_0x000107c61574(puVar1);
          func_0x000107c4c6bc(puVar13);
          func_0x000107c615e8(puVar3);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(puVar7);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar6);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c61428(puVar14,&puStack_a0,0,0);
          func_0x000107c61434(*puVar14);
          func_0x000107c61574(puVar10);
          return;
        }
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(puVar7);
        puVar6 = puVar8;
        goto LAB_1023d967c;
      }
      func_0x000107c615e8(puVar7);
    }
  }
  func_0x000107c615e8(puVar3);
  func_0x000107c615e8(lVar2);
LAB_1023d967c:
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1023d9828; end: 1023d99ff;  */

void FUN_1023d9828(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  plVar2 = (long *)(param_1 + 0x10);
  func_0x000107c61648();
  if (plVar2 == (long *)0x0) {
    lVar7 = 0;
    func_0x0001048db000();
    plVar3 = plVar2;
    func_0x0001018e0ad8();
    puVar4 = &UNK_1107b6098;
    func_0x000107c613f8(&UNK_1107b6098,plVar3,0,0);
    *plVar3 = (long)plVar2;
    plVar3[1] = lVar7;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar4);
    return;
  }
  lVar7 = plVar2[3];
  lVar1 = plVar2[4];
  func_0x000107c61434(lVar1);
  FUN_1023da190(param_3,lVar7,lVar1);
  func_0x000107c6142c(lVar1);
  if (param_3 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x000107c5c524();
    if (puVar4 == (undefined *)0x10) {
      puVar4 = PTR_PTR_1126b3140;
      func_0x000107c61168();
      func_0x000107c3e668();
      func_0x000107c61180();
      puStack_60 = puVar4;
      func_0x000100b60084(&puStack_60);
      func_0x000107c61170(puVar4);
      goto LAB_1023d99d8;
    }
    func_0x000107c61170(param_3);
  }
  puVar5 = (undefined8 *)0x6c75736552206f4e;
  uVar8 = 0xea00000000007374;
  func_0x0001048db000(0x6c75736552206f4e,0xea00000000007374,0xd00000000000005c,0x800000010f096d70,
                      0x10b);
  puVar6 = puVar5;
  func_0x0001018e0ad8();
  puVar4 = &UNK_1107b6098;
  func_0x000107c613f8(&UNK_1107b6098,puVar6,0,0);
  *puVar6 = puVar5;
  puVar6[1] = uVar8;
  param_3 = puVar4;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar4);
  func_0x00010488ade0(param_3);
LAB_1023d99d8:
  func_0x000107c61574(plVar2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1023d9a00; end: 1023d9a03;  */

void FUN_1023d9a00(void)

{
  return;
}



/* Entry: 1023d9a04; end: 1023d9adb;  */

void FUN_1023d9a04(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c43638();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60);
    func_0x000107c615e8(param_1);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1023da4c8(0,0x112e93e58,&PTR_PTR_1126bcb00);
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_68;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x000107c61428(param_2 + 0x10,&uStack_40,1,0);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1023d9adc; end: 1023d9adf;  */

void FUN_1023d9adc(void)

{
  return;
}



/* Entry: 1023d9ae0; end: 1023d9d03;  */

void FUN_1023d9ae0(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c40808();
  if (0 < param_1) {
    lStack_d8 = lVar10;
    lStack_d0 = param_2;
    func_0x000107c600f4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_80,lVar3,param_1);
    puVar2 = PTR___sypN_11034f1a8;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_68 != 0) {
      func_0x000100102924(auStack_80,auStack_a0);
      func_0x000100102924(auStack_a0,auStack_c8);
      uVar6 = 0;
      FUN_1023da4c8(0,0x112e93e48,&PTR_PTR_1126b3238);
      plVar7 = &lStack_a8;
      func_0x000107c6147c(plVar7,auStack_c8,puVar2 + 8,uVar6,6);
      lVar10 = lStack_a8;
      if ((((ulong)plVar7 & 1) != 0) && (lStack_a8 != 0)) {
        puVar5 = puVar8;
        func_0x000107c61550();
        if (((int)puVar5 == 0) ||
           (((long)puVar8 < 0 || (puVar5 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar4 = puVar8;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_1023d9de8(0,puVar4 + 1,1,puVar8);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar9 + 0x10);
        puVar8 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1023d9de8(puVar8,uVar1 + 1,1,puVar5);
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
        *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar10;
      }
      func_0x000107c601c0(auStack_80,lVar3,param_1);
    }
    (**(code **)(lStack_d8 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    lVar3 = lStack_d0;
    func_0x000107c61428(lStack_d0 + 0x10,auStack_80,1,0);
    uVar6 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined **)(lVar3 + 0x10) = puVar8;
    func_0x000107c6142c(uVar6);
  }
  return;
}



/* Entry: 1023d9d04; end: 1023d9d6f;  */

void FUN_1023d9d04(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1023d9d70; end: 1023d9de7;  */

void FUN_1023d9d70(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1023da4c8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1023d9de8; end: 1023d9f0f;  */

ulong FUN_1023d9de8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d9f10);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1023d9f10(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d9f0c);
      (*pcVar1)();
    }
    FUN_1023d9fb0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1023d9f10; end: 1023d9faf;  */

undefined * FUN_1023d9f10(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e93e48;
    FUN_1023d9d70(0x112e93e48,&PTR_PTR_1126b3238,0x112e93e50,&UNK_10da9f6e8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1023d9fb0; end: 1023da0c7;  */

long FUN_1023d9fb0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023da0c4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1023da0c8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1023da4c8(0,0x112e93e48,&PTR_PTR_1126b3238);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1023da4c8(0,0x112e93e48,&PTR_PTR_1126b3238);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023da0c0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1023da0c8; end: 1023da0ff;  */

void FUN_1023da0c8(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar8 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x30));
  plVar2 = (long *)(lVar8 + 0x10);
  func_0x000107c61648();
  if (plVar2 == (long *)0x0) {
    lVar8 = 0;
    func_0x0001048db000();
    plVar4 = plVar2;
    func_0x0001018e0ad8();
    puVar5 = &UNK_1107b6098;
    func_0x000107c613f8(&UNK_1107b6098,plVar4,0,0);
    *plVar4 = (long)plVar2;
    plVar4[1] = lVar8;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar5);
    return;
  }
  lVar8 = plVar2[3];
  lVar1 = plVar2[4];
  func_0x000107c61434(lVar1);
  FUN_1023da190(puVar5,lVar8,lVar1);
  func_0x000107c6142c(lVar1);
  if (puVar5 != (undefined *)0x0) {
    puVar3 = puVar5;
    func_0x000107c5c524();
    if (puVar3 == (undefined *)0x10) {
      puVar3 = PTR_PTR_1126b3140;
      func_0x000107c61168();
      func_0x000107c3e668();
      func_0x000107c61180();
      puStack_60 = puVar3;
      func_0x000100b60084(&puStack_60);
      func_0x000107c61170(puVar3);
      goto LAB_1023d99d8;
    }
    func_0x000107c61170(puVar5);
  }
  puVar6 = (undefined8 *)0x6c75736552206f4e;
  uVar9 = 0xea00000000007374;
  func_0x0001048db000(0x6c75736552206f4e,0xea00000000007374,0xd00000000000005c,0x800000010f096d70,
                      0x10b);
  puVar7 = puVar6;
  func_0x0001018e0ad8();
  puVar3 = &UNK_1107b6098;
  func_0x000107c613f8(&UNK_1107b6098,puVar7,0,0);
  *puVar7 = puVar6;
  puVar7[1] = uVar9;
  puVar5 = puVar3;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar3);
  func_0x00010488ade0(puVar5);
LAB_1023d99d8:
  func_0x000107c61574(plVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1023da100; end: 1023da143;  */

void FUN_1023da100(void)

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



/* Entry: 1023da144; end: 1023da147;  */

void FUN_1023da144(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1023d8fa8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1023da148; end: 1023da187;  */

void FUN_1023da148(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1023d8fa8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1023da188; end: 1023da18f;  */

void FUN_1023da188(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c40808();
  if (0 < param_1) {
    lStack_d8 = lVar10;
    func_0x000107c600f4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_80,lVar3,param_1);
    puVar2 = PTR___sypN_11034f1a8;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_68 != 0) {
      func_0x000100102924(auStack_80,auStack_a0);
      func_0x000100102924(auStack_a0,auStack_c8);
      uVar6 = 0;
      FUN_1023da4c8(0,0x112e93e48,&PTR_PTR_1126b3238);
      plVar7 = &lStack_a8;
      func_0x000107c6147c(plVar7,auStack_c8,puVar2 + 8,uVar6,6);
      lVar10 = lStack_a8;
      if ((((ulong)plVar7 & 1) != 0) && (lStack_a8 != 0)) {
        puVar5 = puVar8;
        func_0x000107c61550();
        if (((int)puVar5 == 0) ||
           (((long)puVar8 < 0 || (puVar5 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar4 = puVar8;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_1023d9de8(0,puVar4 + 1,1,puVar8);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar9 + 0x10);
        puVar8 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1023d9de8(puVar8,uVar1 + 1,1,puVar5);
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
        *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar10;
      }
      func_0x000107c601c0(auStack_80,lVar3,param_1);
    }
    (**(code **)(lStack_d8 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_80,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar8;
    func_0x000107c6142c(uVar6);
  }
  return;
}



/* Entry: 1023da190; end: 1023da4bf;  */

void FUN_1023da190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long *plVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c5fadc(uVar5,*(undefined8 *)(unaff_x20 + 0x30));
    lVar3 = lVar2;
    func_0x000107c4d09c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar5);
    lVar4 = lVar3;
    func_0x000107c4dfe8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c3dd58();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar4 = lVar3;
      func_0x000107c3e664();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = 0x112d36850;
        FUN_1023d9d70(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 3;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined8 *)(lVar3 + 0x20) = param_1;
        uVar5 = 0;
        FUN_1023da4c8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c61174(param_1);
        func_0x000107c615f0(lVar4);
        lVar9 = lVar3;
        func_0x000107c5fc48(lVar3,uVar5);
        func_0x000107c61574(lVar3);
        lVar3 = lVar4;
        func_0x000107c41894(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar9);
        puVar6 = &UNK_1104ff240;
        func_0x000107c613fc(&UNK_1104ff240,0x18,7);
        plVar11 = (long *)(puVar6 + 0x10);
        *plVar11 = 0;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_70 = FUN_1023d9a00;
        puStack_68 = (undefined *)0x0;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100b61264;
        puStack_78 = &UNK_1104ff258;
        func_0x000107c60bc4(&puStack_90);
        pcStack_70 = FUN_1023da4c0;
        puStack_90 = puVar1;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_101218f4c;
        puStack_78 = &UNK_1104ff280;
        puStack_68 = puVar6;
        func_0x000107c60bc4(&puStack_90);
        puVar1 = puStack_68;
        func_0x000107c6157c(puVar6);
        func_0x000107c61574(puVar1);
        func_0x000107c4c6bc(lVar3);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61428(plVar11,&puStack_90,0,0);
        lVar9 = *plVar11;
        if (lVar9 == 0) {
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar3);
        }
        else {
          func_0x000107c61174();
          lVar10 = lVar9;
          func_0x000107c5c524();
          func_0x000107c61170(lVar9);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
            func_0x000107c61574(puVar6);
            return;
          }
        }
        func_0x000107c61174(*(undefined8 *)(puVar6 + 0x10));
        func_0x000107c61574(puVar6);
        return;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1023da4c0; end: 1023da4c7;  */

void FUN_1023da4c0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c43638();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60);
    func_0x000107c615e8(param_1);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1023da4c8(0,0x112e93e58,&PTR_PTR_1126bcb00);
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_68;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,&uStack_40,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1023da4c8; end: 1023da507;  */

void FUN_1023da4c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023da508; end: 1023da533;  */

void FUN_1023da508(long param_1,long param_2)

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



/* Entry: 1023da534; end: 1023da58b;  */

void FUN_1023da534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1023da58c; end: 1023da59f;  */

void FUN_1023da58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1023da5a0; end: 1023da7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023da5a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c44fe4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4d090();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4151c();
  func_0x000107c61180();
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_113093a98);
  lVar4 = 0;
  func_0x0001023da168();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = 0x408f400000000000;
  *(undefined8 *)(lVar4 + 0x18) = 0x6372715f6e616373;
  *(undefined8 *)(lVar4 + 0x20) = 0xeb0000000065646f;
  *(undefined8 *)(lVar4 + 0x28) = 0xd00000000000002f;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(long *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0x800000010f096d40;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  *(undefined8 *)(lVar4 + 0x40) = uVar2;
  *(undefined8 *)(lVar4 + 0x48) = uVar3;
  func_0x000107c61174();
  lVar5 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f096e00);
    lVar8 = lVar5;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar1);
  }
  *(long *)(lVar4 + 0x50) = lVar8;
  lVar5 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c61170(lVar7);
    lVar8 = 0;
  }
  else {
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f096e00);
    lVar8 = lVar5;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar7);
  }
  *(long *)(lVar4 + 0x58) = lVar8;
  puVar6 = PTR_PTR_1126aa748;
  func_0x000107c610f8(PTR_PTR_1126aa748);
  func_0x000107c45e84();
  func_0x000107c61574(lVar4);
  return puVar6;
}



/* Entry: 1023da7bc; end: 1023da7ef;  */

/* WARNING: Possible PIC construction at 0x0001023da7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023da7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023da7cc) */
/* WARNING: Removing unreachable block (ram,0x0001023da7dc) */

void FUN_1023da7bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


