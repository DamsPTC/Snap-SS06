/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c9fc18; end: 102c9fc53;  */

void FUN_102c9fc18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f09270;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f09270,&UNK_10db3c178);
  func_0x000107c5fb18(&uStack_18,uVar1);
  return;
}



/* Entry: 102c9fc54; end: 102c9fc73;  */

void FUN_102c9fc54(void)

{
  FUN_102c9f68c();
  return;
}



/* Entry: 102c9fc74; end: 102c9fc8f;  */

undefined * FUN_102c9fc74(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c9fc90; end: 102c9fd0f;  */

undefined8 FUN_102c9fc90(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c9fd10; end: 102c9fd4b;  */

void FUN_102c9fd10(void)

{
  FUN_102c9fa4c();
  return;
}



/* Entry: 102c9fd4c; end: 102c9fd83;  */

void FUN_102c9fd4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c9fd84; end: 102c9fdaf;  */

void FUN_102c9fd84(long param_1,long param_2)

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



/* Entry: 102c9fdb0; end: 102c9fdfb;  */

undefined8 FUN_102c9fdb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102c9fdfc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102c9fdfc; end: 102c9ffdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9fdfc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar12 = *(long *)(param_1 + _DAT_113068e88);
  puStack_68 = PTR_DAT_1126a2050;
  lVar6 = lVar12;
  func_0x000107c61494(lVar12,1,&puStack_68);
  if (lVar6 != 0) {
    func_0x000107c615f0(lVar12);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar3 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_112f0ded0);
  func_0x000107c615f0(lVar12);
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar13);
  pcVar7 = "init(beginIn:adPlaybackPageEventService:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar8 = 0;
  FUN_102ca0a0c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar5 = _DAT_112f09340;
  uVar10 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + lVar5) = uVar10;
  *(undefined8 *)(lVar9 + _DAT_112f09348) = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f09318);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar9 + _DAT_112f09320) = lVar12;
  *(long *)(lVar9 + _DAT_112f09328) = lVar6;
  *(undefined8 *)(lVar9 + _DAT_112f09330) = uVar13;
  *(char **)(lVar9 + _DAT_112f09338) = pcVar7;
  puVar4 = PTR_s_init_1125d9248;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c615f0(lVar12);
  func_0x000107c6157c(uVar13);
  func_0x000107c615f0(lVar6);
  func_0x000107c615f0(pcVar7);
  plVar11 = &lStack_78;
  func_0x000107c61154(plVar11,puVar4);
  func_0x000107c615e8(lVar12);
  func_0x000107c615e8(lVar6);
  func_0x000107c61574(uVar13);
  func_0x000107c615e8(pcVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(long **)(unaff_x20 + 0x10) = plVar11;
  return;
}



/* Entry: 102c9ffe0; end: 102c9ffff;  */

void FUN_102c9ffe0(void)

{
  FUN_102ca0070();
  return;
}



/* Entry: 102ca0000; end: 102ca0023;  */

void FUN_102ca0000(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca0024; end: 102ca0047;  */

void FUN_102ca0024(void)

{
  FUN_102ca0070();
  return;
}



/* Entry: 102ca0048; end: 102ca004f;  */

undefined8 FUN_102ca0048(void)

{
  return 0;
}



/* Entry: 102ca0050; end: 102ca006f;  */

void FUN_102ca0050(void)

{
  func_0x000107c61168(&PTR_PTR_112f092b8);
  return;
}



/* Entry: 102ca0070; end: 102ca016b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca0070(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105bc608;
  func_0x000107c613fc(&UNK_1105bc608,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102ca0a2c;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102ca0a2c);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f09340),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102ca016c; end: 102ca02c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca016c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,uVar3);
  FUN_102d24050(auStack_48,&UNK_1105c37f8,uVar3,&UNK_1105c37f8,uVar1,&PTR_DAT_1105c32f0,lVar2);
  if (lStack_38 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar3);
    FUN_102d24050(auStack_48,&UNK_1105c3898,uVar3,&UNK_1105c3898,uVar1,&PTR_DAT_1105c3300,param_1);
    if (lStack_38 != 0) {
      func_0x000107c6142c();
      func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      lVar2 = _DAT_112f09348;
      if (param_2 != 0) {
        lVar4 = *(long *)(param_2 + _DAT_112f09348);
        if (lVar4 == 0) {
          uVar3 = 0;
        }
        else {
          func_0x000107c6157c(lVar4);
          func_0x000107c5f848();
          func_0x000107c61574(lVar4);
          uVar3 = *(undefined8 *)(param_2 + lVar2);
        }
        *(undefined8 *)(param_2 + lVar2) = 0;
        func_0x000107c61170();
        func_0x000107c61574(uVar3);
      }
    }
  }
  else {
    func_0x000107c6142c();
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_102ca02c4();
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102ca02c4; end: 102ca07eb;  */

/* WARNING: Possible PIC construction at 0x000102ca0380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca039c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca040c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca0420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca0758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca07bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca079c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca0450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca07a0) */
/* WARNING: Removing unreachable block (ram,0x000102ca07c0) */
/* WARNING: Removing unreachable block (ram,0x000102ca075c) */
/* WARNING: Removing unreachable block (ram,0x000102ca0410) */
/* WARNING: Removing unreachable block (ram,0x000102ca047c) */
/* WARNING: Removing unreachable block (ram,0x000102ca04b8) */
/* WARNING: Removing unreachable block (ram,0x000102ca0494) */
/* WARNING: Removing unreachable block (ram,0x000102ca04c4) */
/* WARNING: Removing unreachable block (ram,0x000102ca04ac) */
/* WARNING: Removing unreachable block (ram,0x000102ca04c8) */
/* WARNING: Removing unreachable block (ram,0x000102ca050c) */
/* WARNING: Removing unreachable block (ram,0x000102ca04d8) */
/* WARNING: Removing unreachable block (ram,0x000102ca0510) */
/* WARNING: Removing unreachable block (ram,0x000102ca0774) */
/* WARNING: Removing unreachable block (ram,0x000102ca0524) */
/* WARNING: Removing unreachable block (ram,0x000102ca07b0) */
/* WARNING: Removing unreachable block (ram,0x000102ca06c0) */
/* WARNING: Removing unreachable block (ram,0x000102ca0414) */
/* WARNING: Removing unreachable block (ram,0x000102ca03a0) */
/* WARNING: Removing unreachable block (ram,0x000102ca03a4) */
/* WARNING: Removing unreachable block (ram,0x000102ca044c) */
/* WARNING: Removing unreachable block (ram,0x000102ca03bc) */
/* WARNING: Removing unreachable block (ram,0x000102ca0384) */
/* WARNING: Removing unreachable block (ram,0x000102ca0424) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102ca0388) */
/* WARNING: Removing unreachable block (ram,0x000102ca0454) */
/* WARNING: Removing unreachable block (ram,0x000102ca0458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca02c4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  if (*(long *)(unaff_x20 + _DAT_112f09328) != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f09320);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f09318);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f09318))[1];
    func_0x000107c615f0(*(long *)(unaff_x20 + _DAT_112f09328));
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c3d368(uVar4);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102ca07ec; end: 102ca091f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca07ec(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    uVar3 = *(ulong *)(param_2 + 0x10);
    if (uVar3 != 0) {
      uVar1 = uVar3;
      func_0x000107c6157c();
      func_0x000107c5f840();
      func_0x000107c61574(uVar3);
      lVar4 = _DAT_112f09328;
      if ((uVar1 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + _DAT_112f09328);
        if (uVar3 != 0) {
          func_0x000107c615f0(uVar3);
          uVar2 = param_3;
          func_0x000107c5fadc(param_3,param_4);
          uVar1 = uVar3;
          func_0x000107c44854();
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(uVar2);
          if (((uVar1 & 1) == 0) && (lVar4 = *(long *)(param_1 + lVar4), lVar4 != 0)) {
            func_0x000107c615f0(lVar4);
            func_0x000107c5fadc(param_3,param_4);
            func_0x000107c49728(lVar4);
            func_0x000107c615e8(lVar4);
            func_0x000107c61170(param_3);
          }
        }
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102ca0920; end: 102ca097f; -[_TtC40AdSpotlightVerticalEndCardImplementation34AdSpotlightVerticalEndCardWorkflow init] */

void FUN_102ca0920(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdSpotlightVerticalEndCardImplementation.AdSpotlightVerticalEndCardWorkflow",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca094c);
  (*pcVar1)();
}



/* Entry: 102ca0980; end: 102ca0a0b; -[_TtC40AdSpotlightVerticalEndCardImplementation34AdSpotlightVerticalEndCardWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ca09d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca09f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca09d4) */
/* WARNING: Removing unreachable block (ram,0x000102ca09f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca0980(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f09318 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f09320));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f09328));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f09330));
  return;
}



/* Entry: 102ca0a0c; end: 102ca0a2b;  */

void FUN_102ca0a0c(void)

{
  func_0x000107c61168(&PTR_PTR_11289c4e8);
  return;
}



/* Entry: 102ca0a2c; end: 102ca0a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca0a2c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar4);
  FUN_102d24050(auStack_48,&UNK_1105c37f8,uVar4,&UNK_1105c37f8,uVar1,&PTR_DAT_1105c32f0,lVar3);
  if (lStack_38 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar4);
    FUN_102d24050(auStack_48,&UNK_1105c3898,uVar4,&UNK_1105c3898,uVar1,&PTR_DAT_1105c3300,param_1);
    if (lStack_38 != 0) {
      func_0x000107c6142c();
      func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      lVar2 = _DAT_112f09348;
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar3 + _DAT_112f09348);
        if (lVar5 == 0) {
          uVar4 = 0;
        }
        else {
          func_0x000107c6157c(lVar5);
          func_0x000107c5f848();
          func_0x000107c61574(lVar5);
          uVar4 = *(undefined8 *)(lVar3 + lVar2);
        }
        *(undefined8 *)(lVar3 + lVar2) = 0;
        func_0x000107c61170();
        func_0x000107c61574(uVar4);
      }
    }
  }
  else {
    func_0x000107c6142c();
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_102ca02c4();
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102ca0a68; end: 102ca0b07;  */

undefined8 FUN_102ca0a68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102ca0c24(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102ca0b08; end: 102ca0bd7;  */

void FUN_102ca0b08(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar6 + 0x10) != 0) {
    plVar1 = *(long **)(lVar6 + 0x28);
    func_0x000100471e0c(plVar1,1);
    puVar2 = &UNK_1105bc778;
    func_0x000107c613fc(&UNK_1105bc778,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar6);
    pcVar3 = FUN_102ca0cf8;
    puVar5 = puVar2;
    (**(code **)(*plVar1 + 0x60))(FUN_102ca0cf8);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar2);
    pcVar4 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(puVar5 + 0x10))(*(undefined8 *)(lVar6 + 0x20),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
    return;
  }
  return;
}



/* Entry: 102ca0bd8; end: 102ca0bfb;  */

void FUN_102ca0bd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca0bfc; end: 102ca0c1b;  */

void FUN_102ca0bfc(void)

{
  FUN_102ca0b08();
  return;
}



/* Entry: 102ca0c1c; end: 102ca0c23;  */

undefined8 FUN_102ca0c1c(void)

{
  return 0;
}



/* Entry: 102ca0c24; end: 102ca0cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca0c24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar3 = param_1 + _DAT_113068e98;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar1 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  lVar3 = 0;
  func_0x000102ca0ea0();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  uVar4 = uVar6;
  func_0x000107c615f0();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  puVar5 = PTR_PTR_1126e1928;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x28) = puVar5;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = uVar6;
  *(long *)(unaff_x20 + 0x10) = lVar3;
  return;
}



/* Entry: 102ca0cf8; end: 102ca0cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca0cf8(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_58 [24];
  
  lVar9 = *param_1;
  puVar6 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar6,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar8 = *(long *)(lVar2 + 0x18);
    func_0x000107c615f0(lVar8);
    func_0x000107c61574(lVar2);
    if (lVar8 != 0) {
      iVar1 = (int)*(undefined8 *)(lVar9 + _DAT_11308c0c8);
      func_0x000107c30b20();
      lVar2 = _DAT_11308c0c0;
      if (iVar1 == 0x16) {
        uVar3 = *(ulong *)(lVar9 + _DAT_11308c0c0);
        func_0x000107c30adc();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c5faec();
        puVar7 = puVar6;
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(puVar6);
        uVar4 = uVar4 & 0xffffffffffff;
        if (((ulong)puVar6 & 0x2000000000000000) != 0) {
          uVar4 = (ulong)puVar6 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          lVar5 = *(long *)(lVar9 + lVar2);
          func_0x000107c30adc();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar7);
          }
          func_0x000107c30afc(*(undefined8 *)(lVar9 + lVar2));
          func_0x000107c4dd44(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(lVar5);
          return;
        }
      }
      func_0x000107c615e8(lVar8);
    }
  }
  return;
}



/* Entry: 102ca0d00; end: 102ca0d1f;  */

void FUN_102ca0d00(void)

{
  func_0x000107c61168(&PTR_PTR_112f093b8);
  return;
}



/* Entry: 102ca0d20; end: 102ca0e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca0d20(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_58 [24];
  
  lVar9 = *param_1;
  puVar6 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar6,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x18);
    func_0x000107c615f0(lVar8);
    func_0x000107c61574(param_2);
    if (lVar8 != 0) {
      iVar2 = (int)*(undefined8 *)(lVar9 + _DAT_11308c0c8);
      func_0x000107c30b20();
      lVar1 = _DAT_11308c0c0;
      if (iVar2 == 0x16) {
        uVar3 = *(ulong *)(lVar9 + _DAT_11308c0c0);
        func_0x000107c30adc();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c5faec();
        puVar7 = puVar6;
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(puVar6);
        uVar4 = uVar4 & 0xffffffffffff;
        if (((ulong)puVar6 & 0x2000000000000000) != 0) {
          uVar4 = (ulong)puVar6 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          lVar5 = *(long *)(lVar9 + lVar1);
          func_0x000107c30adc();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar7);
          }
          func_0x000107c30afc(*(undefined8 *)(lVar9 + lVar1));
          func_0x000107c4dd44(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(lVar5);
          return;
        }
      }
      func_0x000107c615e8(lVar8);
    }
  }
  return;
}



/* Entry: 102ca0e64; end: 102ca0ebf;  */

void FUN_102ca0e64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca0ec0; end: 102ca0efb;  */

void FUN_102ca0ec0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102ca0efc; end: 102ca0f07;  */

void FUN_102ca0efc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102ca0f08; end: 102ca0feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102ca0f08(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112f0dfa8);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068e80);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  puVar3 = &UNK_1105bc868;
  func_0x000107c613fc(&UNK_1105bc868,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  func_0x0001000285a8(0x112f094d0,&UNK_10db3c2d0);
  func_0x000107c613fc();
  func_0x000107c61580(uVar6,2);
  func_0x000107c61434(uVar2);
  pcVar4 = FUN_102ca1060;
  func_0x0001000bdd8c(FUN_102ca1060,puVar3);
  uVar5 = 0;
  FUN_102d24798(0);
  func_0x000107c610f8();
  func_0x000102d246dc(pcVar4,uVar5);
  func_0x000107c61574(uVar6);
  return pcVar4;
}



/* Entry: 102ca0fec; end: 102ca105f;  */

void FUN_102ca0fec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000102ca129c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105bc8c0;
  *param_1 = lVar2;
  func_0x000107c6157c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 102ca1060; end: 102ca106b;  */

void FUN_102ca1060(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000102ca129c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1105bc8c0;
  *param_1 = lVar4;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 102ca106c; end: 102ca1087;  */

/* WARNING: Possible PIC construction at 0x000102ca1078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca107c) */

void FUN_102ca106c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ca1088; end: 102ca10d3;  */

void FUN_102ca1088(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca10d4; end: 102ca114f;  */

void FUN_102ca10d4(undefined8 param_1)

{
  if (lRam0000000112f09500 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e726788);
  return;
}



/* Entry: 102ca1150; end: 102ca123f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca1150(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112f0dfa8);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068e80);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  puVar3 = &UNK_1105bc890;
  func_0x000107c613fc(&UNK_1105bc890,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  func_0x0001000285a8(0x112f094d0,&UNK_10db3c2d0);
  func_0x000107c613fc();
  func_0x000107c61580(uVar6,2);
  func_0x000107c61434(uVar2);
  pcVar4 = FUN_102ca126c;
  func_0x0001000bdd8c(FUN_102ca126c,puVar3);
  uVar5 = 0;
  FUN_102d24798(0);
  func_0x000107c610f8();
  func_0x000102d246dc(pcVar4,uVar5);
  func_0x000107c61574(uVar6);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102ca1240; end: 102ca126b;  */

void FUN_102ca1240(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ca126c; end: 102ca126f;  */

void FUN_102ca126c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000102ca129c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1105bc8c0;
  *param_1 = lVar4;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 102ca1270; end: 102ca12bb;  */

void FUN_102ca1270(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca12bc; end: 102ca1613;  */

void FUN_102ca12bc(long param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar3);
  lVar2 = 0;
  func_0x000107c614b8(0,lVar6,uVar3,&UNK_10e729bbc,&UNK_10e729bcc);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x18))((long)&uStack_b0 - extraout_x8,uVar3,lVar6);
  uVar3 = 0x112f09660;
  func_0x0001000285a8(0x112f09660,&UNK_10db3c3a0);
  puVar4 = &uStack_b0;
  func_0x000107c6147c(puVar4,(long)&uStack_b0 - extraout_x8,lVar2,uVar3,6);
  if (((ulong)puVar4 & 1) == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_102ca1714(&uStack_b0);
LAB_102ca140c:
    lVar6 = 0x112f09658;
    func_0x0001000285a8(0x112f09658,&UNK_10db41440);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,1,1,lVar6);
  }
  else {
    FUN_102ca175c(&uStack_b0,auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    lVar6 = lStack_68;
    (**(code **)(lStack_68 + 0x20))();
    if (uStack_70 == param_3 && lVar6 == param_4) {
      func_0x000107c6142c(lVar6);
    }
    else {
      uVar5 = uStack_70;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar6);
      if ((uVar5 & 1) == 0) {
        func_0x0001000834e4(auStack_88);
        goto LAB_102ca140c;
      }
    }
    FUN_102ca1774(auStack_88,param_1);
    lVar6 = 0x112f03b80;
    func_0x0001000285a8(0x112f03b80,&UNK_10db3c3b0);
    iVar1 = *(int *)(lVar6 + 0x1c);
    lVar6 = 0x112f09658;
    func_0x0001000285a8(0x112f09658,&UNK_10db41440);
    func_0x0001018e92e0(param_2 + iVar1,param_1 + *(int *)(lVar6 + 0x1c));
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,0,1,lVar6);
    func_0x0001000834e4(auStack_88);
  }
  return;
}



/* Entry: 102ca1614; end: 102ca16eb;  */

code * FUN_102ca1614(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar6 = *unaff_x20;
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar2 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined8 *)(lVar6 + 0x20);
  puVar3 = &UNK_1105bc8e8;
  func_0x000107c613fc(&UNK_1105bc8e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  func_0x000107c61434(uVar1);
  uVar4 = 0x112f09658;
  func_0x0001000285a8(0x112f09658,&UNK_10db41440);
  pcVar5 = FUN_102ca170c;
  func_0x0001000d5158(FUN_102ca170c,puVar3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_68);
  return pcVar5;
}



/* Entry: 102ca16ec; end: 102ca170b;  */

void FUN_102ca16ec(void)

{
  func_0x000102ca14d8();
  return;
}



/* Entry: 102ca170c; end: 102ca1713;  */

void FUN_102ca170c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar4);
  lVar3 = 0;
  func_0x000107c614b8(0,lVar7,uVar4,&UNK_10e729bbc,&UNK_10e729bcc);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x18))((long)&uStack_b0 - extraout_x8,uVar4,lVar7);
  uVar4 = 0x112f09660;
  func_0x0001000285a8(0x112f09660,&UNK_10db3c3a0);
  puVar5 = &uStack_b0;
  func_0x000107c6147c(puVar5,(long)&uStack_b0 - extraout_x8,lVar3,uVar4,6);
  if (((ulong)puVar5 & 1) == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_102ca1714(&uStack_b0);
LAB_102ca140c:
    lVar7 = 0x112f09658;
    func_0x0001000285a8(0x112f09658,&UNK_10db41440);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,1,1,lVar7);
  }
  else {
    FUN_102ca175c(&uStack_b0,auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    lVar7 = lStack_68;
    (**(code **)(lStack_68 + 0x20))();
    if (uStack_70 == uVar6 && lVar7 == lVar1) {
      func_0x000107c6142c(lVar7);
    }
    else {
      uVar6 = uStack_70;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar7);
      if ((uVar6 & 1) == 0) {
        func_0x0001000834e4(auStack_88);
        goto LAB_102ca140c;
      }
    }
    FUN_102ca1774(auStack_88,param_1);
    lVar7 = 0x112f03b80;
    func_0x0001000285a8(0x112f03b80,&UNK_10db3c3b0);
    iVar2 = *(int *)(lVar7 + 0x1c);
    lVar7 = 0x112f09658;
    func_0x0001000285a8(0x112f09658,&UNK_10db41440);
    func_0x0001018e92e0(param_2 + iVar2,param_1 + *(int *)(lVar7 + 0x1c));
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,0,1,lVar7);
    func_0x0001000834e4(auStack_88);
  }
  return;
}



/* Entry: 102ca1714; end: 102ca175b;  */

undefined8 FUN_102ca1714(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f09668;
  func_0x0001000285a8(0x112f09668,&UNK_10db3c3a8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102ca175c; end: 102ca1773;  */

undefined8 * FUN_102ca175c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102ca1774; end: 102ca17b7;  */

long FUN_102ca1774(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ca17b8; end: 102ca2007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ca17b8(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long *aplStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  uVar12 = *(undefined8 *)(param_2 + _DAT_11304a478);
  uVar14 = *(undefined8 *)(param_7 + _DAT_11308b848);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar12;
  lVar4 = _DAT_113068e88;
  puVar1 = (undefined8 *)(param_1 + _DAT_113068e80);
  uVar3 = *puVar1;
  uVar10 = puVar1[1];
  uVar15 = *(undefined8 *)(param_1 + _DAT_113068e88);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar16 = *(undefined8 *)(param_7 + _DAT_11308b850);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(uVar14);
  func_0x000107c61434(uVar10);
  func_0x000107c615f0(uVar15);
  func_0x000107c61174();
  uVar12 = uVar16;
  func_0x0001000bda74();
  func_0x000107c61170(uVar16);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = 0;
  FUN_102ca55a4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar9 = _DAT_112f09920;
  uVar16 = 0x112f09670;
  func_0x0001000285a8(0x112f09670,&UNK_10db3c3b8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar7 + lVar9) = uVar16;
  puVar2 = (undefined8 *)(lVar7 + _DAT_112f09900);
  *puVar2 = uVar3;
  puVar2[1] = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f09908) = uVar15;
  *(undefined8 *)(lVar7 + _DAT_112f09910) = uVar12;
  *(undefined **)(lVar7 + _DAT_112f09918) = puVar5;
  plVar8 = &lStack_78;
  lStack_78 = lVar7;
  lStack_70 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x18) = plVar8;
  uVar16 = *puVar1;
  uVar3 = puVar1[1];
  uVar15 = *(undefined8 *)(param_1 + lVar4);
  FUN_102ca2008(param_1 + _DAT_113068e98,alStack_e8);
  lVar9 = _DAT_113069018;
  func_0x000107c61428(param_4 + _DAT_113069018,auStack_90,0,0);
  lVar9 = param_4 + lVar9;
  func_0x000107c61618(lVar9);
  uVar17 = *(undefined8 *)(param_6 + _DAT_112f0ded0);
  func_0x0001000285a8(0x112dced30,&UNK_10d990b60);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11304a480);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(uVar15);
  func_0x000107c6157c(uVar17);
  func_0x000107c61174();
  uVar10 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_4 + _DAT_113069008);
  ppuStack_98 = &PTR_DAT_1105bca88;
  lVar11 = 0;
  aplStack_b8[0] = plVar8;
  lStack_a0 = lVar6;
  func_0x000102ca3b38();
  lVar7 = lVar11;
  func_0x000107c613fc();
  func_0x000107c61614(lVar7 + 0x78,0);
  *(undefined1 *)(lVar7 + 0x99) = 0;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined8 *)(lVar7 + 0xa8) = 0;
  *(undefined4 *)(lVar7 + 0xb0) = 1;
  uVar12 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + 0xb8) = uVar12;
  *(undefined8 *)(lVar7 + 0x10) = uVar16;
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  *(undefined8 *)(lVar7 + 0x20) = uVar15;
  func_0x000100d23048(aplStack_b8,lVar7 + 0x28);
  func_0x000100d23048(alStack_e8,lVar7 + 0x50);
  func_0x000107c61604(lVar7 + 0x78,lVar9);
  func_0x000107c615e8(lVar9);
  *(undefined8 *)(lVar7 + 0x80) = uVar17;
  *(undefined8 *)(lVar7 + 0x88) = uVar10;
  *(undefined8 *)(lVar7 + 0x90) = uVar14;
  *(undefined1 *)(lVar7 + 0x98) = 0;
  *(long *)(unaff_x20 + 0x10) = lVar7;
  lVar9 = param_5 + _DAT_113068e50;
  uVar16 = *(undefined8 *)(lVar9 + 0x18);
  lVar4 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar16);
  ppuStack_c8 = &PTR_DAT_1105bc9f8;
  ppuStack_c0 = &PTR_DAT_1105bc9d0;
  pcVar13 = *(code **)(lVar4 + 0x10);
  alStack_e8[0] = lVar7;
  lStack_d0 = lVar11;
  func_0x000107c6157c(lVar7);
  (*pcVar13)(alStack_e8,uVar16,lVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(plVar8);
  func_0x000100dd2718(alStack_e8);
  return unaff_x20;
}



/* Entry: 102ca2008; end: 102ca204b;  */

long FUN_102ca2008(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ca204c; end: 102ca210b;  */

void FUN_102ca204c(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c6142c(0x800000010f105cf0);
  FUN_102ca2190();
  FUN_102ca24f8();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102ca210c; end: 102ca2147;  */

void FUN_102ca210c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca2148; end: 102ca2167;  */

void FUN_102ca2148(void)

{
  FUN_102ca204c();
  return;
}



/* Entry: 102ca2168; end: 102ca216f;  */

undefined8 FUN_102ca2168(void)

{
  return 0;
}



/* Entry: 102ca2170; end: 102ca218f;  */

void FUN_102ca2170(void)

{
  func_0x000107c61168(&PTR_PTR_112f096b8);
  return;
}



/* Entry: 102ca2190; end: 102ca24f7;  */

/* WARNING: Possible PIC construction at 0x000102ca2218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca2248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca2290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca22ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca2334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca238c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca23a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca23f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca2448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca2490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca244c) */
/* WARNING: Removing unreachable block (ram,0x000102ca23f8) */
/* WARNING: Removing unreachable block (ram,0x000102ca23ac) */
/* WARNING: Removing unreachable block (ram,0x000102ca2390) */
/* WARNING: Removing unreachable block (ram,0x000102ca2338) */
/* WARNING: Removing unreachable block (ram,0x000102ca22f0) */
/* WARNING: Removing unreachable block (ram,0x000102ca2294) */
/* WARNING: Removing unreachable block (ram,0x000102ca224c) */
/* WARNING: Removing unreachable block (ram,0x000102ca221c) */
/* WARNING: Removing unreachable block (ram,0x000102ca2494) */

void FUN_102ca2190(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  lVar1 = *(long *)(unaff_x20 + 0x70);
  func_0x0001000a8868(unaff_x20 + 0x50,lVar2);
  (**(code **)(lVar1 + 8))(lVar2,lVar1);
  if (lVar2 != 0) {
    puVar3 = &UNK_1105bca18;
    func_0x000107c613fc(&UNK_1105bca18,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    func_0x0001000c0ebc(0x102ca4504,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102ca24f8; end: 102ca2713;  */

void FUN_102ca24f8(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105bca18;
  func_0x000107c613fc(&UNK_1105bca18,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_102ca44fc;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102ca44fc);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0xb8),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102ca2714; end: 102ca2743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca2714(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 1;
}



/* Entry: 102ca2744; end: 102ca28b3;  */

void FUN_102ca2744(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(unaff_x20 + 0xb3) = 0;
  if (*(char *)(unaff_x20 + 0xb1) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0xb1) = 0;
    pcVar1 = "onTopSnapPresent()";
    func_0x0001000c10c0("onTopSnapPresent()");
    func_0x000107c61180();
    puVar2 = &UNK_1105bca18;
    func_0x000107c613fc(&UNK_1105bca18,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    lStack_68 = 0x102ca455c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105bca30;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(pcVar1);
  }
  else if (((*(byte *)(unaff_x20 + 0x99) & 1) != 0) || (*(char *)(unaff_x20 + 0xb0) != '\x01')) {
    *(undefined1 *)(unaff_x20 + 0x99) = 0;
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    *(undefined1 *)(unaff_x20 + 0xb0) = 1;
    func_0x0001000d224c(&puStack_88);
    func_0x0001000a8868(&puStack_88,puStack_70);
    auStack_58[0] = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    (**(code **)(lStack_68 + 0x10))
              (auStack_58,&UNK_1105c3dc8,&PTR_DAT_1105c3358,puStack_70,lStack_68);
    func_0x0001000834e4(&puStack_88);
    FUN_102ca37f8();
  }
  return;
}



/* Entry: 102ca28b4; end: 102ca2903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca28b4(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = _DAT_11308c0c8;
  lVar5 = *param_1;
  iVar3 = (int)*(undefined8 *)(lVar5 + _DAT_11308c0c8);
  func_0x000107c30b1c();
  if (iVar3 == 0x13) {
    bVar2 = true;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + lVar1);
    func_0x000107c30b1c(uVar4);
    bVar2 = (int)uVar4 == 0x14;
  }
  return bVar2;
}



/* Entry: 102ca2904; end: 102ca2a97;  */

void FUN_102ca2904(undefined8 param_1,long param_2)

{
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + 0x99) & 1) != 0) || (*(char *)(param_2 + 0xb0) != '\x01')) {
      *(undefined1 *)(param_2 + 0x99) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined1 *)(param_2 + 0xb0) = 1;
      func_0x0001000d224c(auStack_70);
      func_0x0001000a8868(auStack_70,uStack_58);
      auStack_98[0] = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      (**(code **)(lStack_50 + 0x10))
                (auStack_98,&UNK_1105c3dc8,&PTR_DAT_1105c3358,uStack_58,lStack_50);
      func_0x0001000834e4(auStack_70);
      FUN_102ca37f8();
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102ca2a98; end: 102ca2ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca2a98(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 2;
}



/* Entry: 102ca2ac8; end: 102ca2b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ca2ac8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11308c0c8;
  lVar2 = *param_1;
  func_0x000107c61428(lVar2 + _DAT_11308c0c8,auStack_38,0x20,0);
  uVar3 = *(undefined8 *)(lVar2 + lVar1);
  func_0x000107c61174(lVar2);
  func_0x000107c30b30(uVar3);
  func_0x000107c614a8(auStack_38);
  func_0x000107c61170(lVar2);
  return uVar3;
}



/* Entry: 102ca2b94; end: 102ca2c4f;  */

void FUN_102ca2b94(void)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  *(undefined1 *)(unaff_x20 + 0xb3) = 0;
  if (((*(byte *)(unaff_x20 + 0x99) & 1) != 0) || (*(char *)(unaff_x20 + 0xb0) != '\x01')) {
    *(undefined1 *)(unaff_x20 + 0x99) = 0;
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    *(undefined1 *)(unaff_x20 + 0xb0) = 1;
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    auStack_80[0] = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    (**(code **)(lStack_38 + 0x10))
              (auStack_80,&UNK_1105c3dc8,&PTR_DAT_1105c3358,uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
    FUN_102ca37f8();
  }
  return;
}



/* Entry: 102ca2c50; end: 102ca2c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca2c50(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 3;
}



/* Entry: 102ca2c80; end: 102ca2cff;  */

void FUN_102ca2c80(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xb1) = 1;
    func_0x000107c61574();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000102ca29e0();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102ca2d00; end: 102ca3003;  */

void FUN_102ca2d00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_138;
  long lStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_110,&UNK_1105c43b0,uVar1,&UNK_1105c43b0,uVar2,&PTR_DAT_1105c33e0,lVar3);
    uStack_c8 = uStack_108;
    uStack_d0 = uStack_110;
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    lStack_a0 = lStack_e0;
    if (lStack_d8 != 0) {
      uStack_68 = uStack_108;
      uStack_70 = uStack_110;
      uStack_58 = uStack_f8;
      uStack_60 = uStack_100;
      uStack_48 = uStack_e8;
      uStack_50 = uStack_f0;
      FUN_102ca3004(&uStack_70);
      FUN_102c93ea4(&uStack_d0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_110,&UNK_1105c4458,uVar1,&UNK_1105c4458,uVar2,&PTR_DAT_1105c33f0,lVar3);
    if (lStack_e0 != 0) {
      func_0x000102ca31a8(&uStack_110);
      func_0x000107c6142c(lStack_e0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c3f40,uVar1,&UNK_1105c3f40,uVar2,&PTR_DAT_1105c3378,lVar3);
    if (lStack_130 != 0) {
      func_0x000107c6142c();
      func_0x000102ca29e0();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c3898,uVar1,&UNK_1105c3898,uVar2,&PTR_DAT_1105c3300,lVar3);
    if (CONCAT44(uStack_124,uStack_128) != 0) {
      func_0x000107c6142c();
      func_0x000102ca29e0();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c43e0,uVar1,&UNK_1105c43e0,uVar2,&PTR_DAT_1105c33e8,lVar3);
    if (lStack_130 != 0) {
      func_0x000107c6142c();
      func_0x000102ca29e0();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c41d8,uVar1,&UNK_1105c41d8,uVar2,&PTR_DAT_1105c33a8,lVar3);
    if (lStack_118 != 0) {
      func_0x000107c6142c();
      *(byte *)(param_2 + 0xb3) = (byte)uStack_128 & 1;
      if ((uStack_128 & 1) != 0) {
        func_0x000102ca29e0();
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c3cc8,uVar1,&UNK_1105c3cc8,uVar2,&PTR_DAT_1105c3348,param_1);
    if (lStack_120 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      FUN_102ca3310(uStack_138,lStack_130);
      func_0x000107c61574(param_2);
      func_0x000107c6142c(lStack_120);
    }
  }
  return;
}



/* Entry: 102ca3004; end: 102ca330f;  */

void FUN_102ca3004(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long *param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  long unaff_d8;
  double dVar5;
  undefined8 unaff_d9;
  double dVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  *(undefined1 *)(unaff_x20 + 0xb2) = 0;
  lStack_58 = *param_5;
  if (lStack_58 == 1) {
    if ((*(char *)(unaff_x20 + 0x99) == '\x01') && (*(char *)(unaff_x20 + 0xb0) != '\x01')) {
      dVar6 = *(double *)(unaff_x20 + 0xa0);
      dVar5 = *(double *)(unaff_x20 + 0xa8);
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c61170(puVar4);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      lVar2 = *(long *)(unaff_x20 + 0x48);
      func_0x0001000a8868(unaff_x20 + 0x28,uVar1);
      (**(code **)(lVar2 + 8))(dVar6,dVar5,dVar6 / param_3,dVar5 / param_4,3,5,uVar1,lVar2);
    }
    if (((*(byte *)(unaff_x20 + 0x99) & 1) != 0) || (*(char *)(unaff_x20 + 0xb0) != '\x01')) {
      *(undefined1 *)(unaff_x20 + 0x99) = 0;
      *(undefined8 *)(unaff_x20 + 0xa0) = 0;
      *(undefined8 *)(unaff_x20 + 0xa8) = 0;
      *(undefined1 *)(unaff_x20 + 0xb0) = 1;
      func_0x0001000d224c(&lStack_58);
      func_0x0001000a8868(&lStack_58,unaff_d9);
      auStack_80[0] = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      (**(code **)(unaff_d8 + 0x10))(auStack_80,&UNK_1105c3dc8,&PTR_DAT_1105c3358,unaff_d9,unaff_d8)
      ;
      func_0x0001000834e4(&lStack_58);
      FUN_102ca37f8();
    }
    return;
  }
  if (lStack_58 == 0) {
    dVar5 = (double)param_5[2];
    dVar6 = (double)param_5[3];
    FUN_102ca3554(dVar5,dVar6);
    if (*(char *)(unaff_x20 + 0x99) == '\x01') {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c61170(puVar4);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      lVar2 = *(long *)(unaff_x20 + 0x48);
      func_0x0001000a8868(unaff_x20 + 0x28,uVar1);
      (**(code **)(lVar2 + 8))(dVar5,dVar6,dVar5 / param_3,dVar6 / param_4,1,5,uVar1,lVar2);
    }
    return;
  }
  func_0x000107c60614(&UNK_110798ed8,&lStack_58,&UNK_110798ed8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ca31a8);
  (*pcVar3)();
}



/* Entry: 102ca3310; end: 102ca34a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca3310(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong auStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  if (auStack_68[0] != 0) {
    uVar1 = auStack_68[0];
    func_0x000107c614f0();
    FUN_102ca55ec();
    func_0x000107c615e8(auStack_68[0]);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      lVar2 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c5fadc(lVar2,*(undefined8 *)(unaff_x20 + 0x18));
      func_0x000107c3d368();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar3 != 0) {
        func_0x0001041f3970();
        func_0x000107c61170(lVar3);
        if (lVar2 != 0) {
          lVar4 = *(long *)(lVar2 + _DAT_113068f48);
          func_0x000107c61174();
          func_0x000107c61170(lVar2);
          lVar3 = lVar4;
          func_0x000107c4e8c0();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          if (lVar3 != 0) {
            func_0x000107c61170(lVar3);
            func_0x0001000d224c(auStack_68);
            func_0x0001000a8868(auStack_68,uStack_50);
            uStack_78 = 4;
            uStack_70 = CONCAT71(uStack_70._1_7_,4);
            pcVar7 = *(code **)(lStack_48 + 0x10);
            puVar5 = &UNK_1105c3600;
            ppuVar6 = &PTR_DAT_1105c32c0;
            goto LAB_102ca3474;
          }
        }
      }
    }
  }
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  pcVar7 = *(code **)(lStack_48 + 0x10);
  puVar5 = &UNK_1105c3d48;
  ppuVar6 = &PTR_DAT_1105c3350;
  uStack_78 = param_1;
  uStack_70 = param_2;
LAB_102ca3474:
  (*pcVar7)(&uStack_78,puVar5,ppuVar6,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102ca34a4; end: 102ca3553;  */

void FUN_102ca34a4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_1);
    func_0x0001000d224c(auStack_70);
    func_0x000107c61574(uVar1);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x10))();
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 102ca3554; end: 102ca366b;  */

/* WARNING: Possible PIC construction at 0x000102ca35c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca35fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca3628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca3640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca3844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca38a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca3848) */
/* WARNING: Removing unreachable block (ram,0x000102ca3888) */
/* WARNING: Removing unreachable block (ram,0x000102ca384c) */
/* WARNING: Removing unreachable block (ram,0x000102ca3858) */
/* WARNING: Removing unreachable block (ram,0x000102ca386c) */
/* WARNING: Removing unreachable block (ram,0x000102ca3644) */
/* WARNING: Removing unreachable block (ram,0x000102ca37f8) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000102ca362c) */
/* WARNING: Removing unreachable block (ram,0x000102ca3600) */
/* WARNING: Removing unreachable block (ram,0x000102ca35c8) */
/* WARNING: Removing unreachable block (ram,0x000102ca38a4) */

void FUN_102ca3554(ulong param_1)

{
  long unaff_x20;
  
  FUN_102ca366c();
  if ((((param_1 & 1) != 0) && (func_0x000102ca373c(), (param_1 & 1) != 0)) &&
     ((*(byte *)(unaff_x20 + 0xb3) & 1) == 0)) {
    func_0x000107c602fc(0x1b);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
    return;
  }
  return;
}



/* Entry: 102ca366c; end: 102ca37f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca366c(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(lVar3,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 == 0) {
    bVar2 = false;
  }
  else {
    func_0x0001041f3970();
    func_0x000107c61170(lVar4);
    bVar2 = false;
    if (lVar3 != 0) {
      iVar1 = *(int *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + _DAT_113068f48) +
                                                    _DAT_11308f298) + _DAT_11308f538) +
                                _DAT_11308f458) + _DAT_11308f830);
      func_0x000107c61170();
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}



/* Entry: 102ca37f8; end: 102ca38eb;  */

/* WARNING: Possible PIC construction at 0x000102ca3844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca38a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca3848) */
/* WARNING: Removing unreachable block (ram,0x000102ca3888) */
/* WARNING: Removing unreachable block (ram,0x000102ca384c) */
/* WARNING: Removing unreachable block (ram,0x000102ca3858) */
/* WARNING: Removing unreachable block (ram,0x000102ca386c) */
/* WARNING: Removing unreachable block (ram,0x000102ca38a4) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102ca37f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4a784(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102ca38ec; end: 102ca3ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102ca38ec(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_40);
  if (uStack_40 != 0) {
    uVar5 = uStack_40;
    func_0x000107c614f0();
    FUN_102ca55ec();
    func_0x000107c615e8(uStack_40);
    if ((uVar5 & 1) != 0) {
      lVar4 = param_1;
      func_0x000107c4e8c0();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000103bfb8b0(0);
        uVar6 = *(ulong *)(lVar4 + _DAT_113815338);
        uVar5 = ((ulong *)(lVar4 + _DAT_113815338))[1];
        func_0x000107c61434(uVar5);
        uVar1 = uVar5;
        func_0x000103bfaab8();
        func_0x000107c6142c(uVar5);
        uStack_40 = uVar6;
        uStack_38 = uVar1;
        func_0x000100e8b654();
        puVar2 = PTR___sSSN_11034da80;
        func_0x000107c601f8(PTR___sSSN_11034da80,uVar5);
        func_0x000107c6142c(uVar1);
        func_0x000107c61170(lVar4);
        goto LAB_102ca3ab0;
      }
    }
  }
  lVar4 = *(long *)(param_1 + _DAT_11308f208);
  if (lVar4 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(lVar4 + _DAT_113091068);
    uVar6 = *(ulong *)(lVar4 + _DAT_113091070);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar5);
  }
  func_0x000103bfb8b0(0);
  uVar1 = uVar5;
  uVar3 = uVar6;
  func_0x000103bfab18();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  if (uVar3 != 0) {
    uVar6 = uVar1 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar6 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      uStack_40 = uVar1;
      uStack_38 = uVar3;
      func_0x000100e8b654();
      puVar2 = PTR___sSSN_11034da80;
      func_0x000107c601f8(PTR___sSSN_11034da80,uVar5);
      func_0x000107c6142c(uVar3);
      goto LAB_102ca3ab0;
    }
    func_0x000107c6142c(uVar3);
  }
  puVar2 = (undefined *)0x0;
  uVar5 = 0;
LAB_102ca3ab0:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 102ca3ac4; end: 102ca3b93;  */

void FUN_102ca3ac4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x0001000834e4(unaff_x20 + 0x50);
  FUN_102c62b64(unaff_x20 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 102ca3b94; end: 102ca3bb3;  */

void FUN_102ca3b94(void)

{
  FUN_102ca3f4c();
  return;
}



/* Entry: 102ca3bb4; end: 102ca3bbf;  */

undefined * FUN_102ca3bb4(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ca3bc0; end: 102ca3c33;  */

undefined * FUN_102ca3bc0(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000102ca373c();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 & 1) != 0) {
    puVar1 = (undefined *)0x112f05268;
    func_0x0001000285a8(0x112f05268,&UNK_10db39870);
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    uVar2 = 0;
    func_0x000103b9a070();
    *(undefined8 *)(puVar1 + 0x20) = uVar2;
  }
  return puVar1;
}



/* Entry: 102ca3c34; end: 102ca3c37;  */

undefined * FUN_102ca3c34(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 102ca3c38; end: 102ca3f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102ca3c38(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + _DAT_11308f208) == 0) {
    return ZEXT816(0);
  }
  lVar4 = *(long *)(*(long *)(param_1 + _DAT_11308f208) + _DAT_113091070);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + _DAT_113091028);
    if ((int)lVar6 == 10) {
      if ((*(long *)(lVar4 + _DAT_113090fe0) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar4 + _DAT_113090fe0) + _DAT_11308fd30), lVar4 == 0))
      goto LAB_102ca3db0;
      lVar6 = *(long *)(lVar4 + _DAT_11308fde0);
    }
    uVar2 = 0;
    if (lVar6 < 6) {
      if (lVar6 != 1) {
        uVar3 = 0;
        if (lVar6 != 3) goto LAB_102ca3db4;
        goto LAB_102ca3d08;
      }
      func_0x000107c3dde0();
      func_0x000107c61180();
      if (param_1 != 0) {
        plVar5 = (long *)&DAT_11308fab0;
        goto LAB_102ca3d64;
      }
    }
    else {
      if (lVar6 == 6) {
        func_0x000107c414c4();
        func_0x000107c61180();
        if (param_1 == 0) goto LAB_102ca3db0;
        plVar5 = (long *)&DAT_11308fe18;
      }
      else {
        uVar3 = 0;
        if (lVar6 != 0x15) goto LAB_102ca3db4;
LAB_102ca3d08:
        func_0x000107c5e224(param_1,0);
        func_0x000107c61180();
        if (param_1 == 0) goto LAB_102ca3db0;
        plVar5 = (long *)&DAT_113091388;
      }
LAB_102ca3d64:
      uVar2 = *(ulong *)(param_1 + *plVar5);
      uVar3 = ((ulong *)(param_1 + *plVar5))[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61170(param_1);
      if (uVar3 == 0) {
        uVar2 = 0;
        goto LAB_102ca3db4;
      }
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto LAB_102ca3db4;
      func_0x000107c6142c(uVar3);
    }
  }
LAB_102ca3db0:
  uVar2 = 0;
  uVar3 = 0;
LAB_102ca3db4:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 102ca3f4c; end: 102ca44bb;  */

/* WARNING: Possible PIC construction at 0x000102ca444c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca40a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca4450) */
/* WARNING: Removing unreachable block (ram,0x000102ca40a8) */
/* WARNING: Removing unreachable block (ram,0x000102ca449c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ca3f4c(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar15;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined *unaff_x24;
  long lVar16;
  long unaff_x25;
  long lVar17;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar18;
  undefined1 auStack_110 [176];
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (0x1c < unaff_x20[0x12] - 0x49 || (1L << (unaff_x20[0x12] - 0x49 & 0x3f) & 0x12002001U) == 0)
  goto code_r0x000100214a84;
  lVar16 = unaff_x20[3];
  lVar17 = unaff_x20[4];
  lVar7 = unaff_x20[2];
  func_0x000107c5fadc();
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar17 == 0) goto code_r0x000100214a84;
  func_0x0001041f3970();
  func_0x000107c61170(lVar17);
  puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 == 0) goto code_r0x000100214a84;
  unaff_x21 = *(long *)(lVar7 + _DAT_113068f48);
  func_0x000107c61174();
  lVar17 = unaff_x21;
  FUN_102ca38ec();
  unaff_x19 = lVar7;
  unaff_x29 = puVar1;
  if (lVar16 == 0) {
    unaff_x30 = 0x102ca40a8;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    unaff_x22 = unaff_x20;
    goto code_r0x000100214a84;
  }
  unaff_x23 = (undefined8 *)PTR_PTR_1126ac1d0;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar17,lVar16);
  func_0x000107c6142c(lVar16);
  func_0x000107c4628c();
  func_0x000107c61170(lVar17);
  uVar15 = ((long *)(unaff_x21 + _DAT_11308f290))[1];
  if (uVar15 >> 0x3c < 0xf) {
    lVar17 = *(long *)(unaff_x21 + _DAT_11308f290);
    func_0x00010006c00c(lVar17,uVar15);
    lVar16 = lVar17;
    func_0x000107c5ee20(lVar17,uVar15);
    func_0x0001000b44c0(lVar17,uVar15);
  }
  else {
    lVar16 = 0;
  }
  func_0x000107c523f8(unaff_x23);
  func_0x000107c61170(lVar16);
  func_0x000107c425d8(unaff_x21);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c547e4(unaff_x23);
  func_0x000107c61170(puVar14);
  lVar16 = 0x112d38c88;
  FUN_102ca44bc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = 1;
  func_0x000107c6010c(1);
  func_0x000107c596e8(unaff_x23);
  func_0x000107c61170(uVar8);
  lVar7 = unaff_x21;
  FUN_102ca3c38(unaff_x21);
  if (lVar16 == 0) {
    lVar7 = 0;
  }
  else {
    lVar12 = lVar16;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar16);
    lVar16 = lVar12;
  }
  func_0x000107c54250(unaff_x23);
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x21;
  func_0x000102ca3dcc(unaff_x21);
  if (lVar16 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar16);
  }
  func_0x000107c55208(unaff_x23);
  func_0x000107c61170(lVar7);
  if ((((*(long *)(unaff_x21 + _DAT_11308f208) != 0) &&
       (lVar16 = *(long *)(*(long *)(unaff_x21 + _DAT_11308f208) + _DAT_113091068), lVar16 != 0)) &&
      (lVar16 = *(long *)(lVar16 + _DAT_113090618), lVar16 != 0)) &&
     (lVar16 = *(long *)(lVar16 + _DAT_113090558), lVar16 != 0)) {
    func_0x000107c61174();
    lVar7 = lVar16;
    func_0x000106434f9c();
    func_0x000107c61180();
    lVar17 = lVar7;
    func_0x000107c44d98();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c55398(unaff_x23);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar17);
  }
  lVar16 = unaff_x21;
  func_0x000107c5cc0c();
  func_0x000107c61180();
  unaff_x25 = lVar17;
  if (lVar16 == 0) {
LAB_102ca4310:
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar16 + _DAT_113090650);
    lVar17 = lVar7;
    func_0x000107c61174();
    func_0x000107c61170(lVar16);
    unaff_x25 = lVar16;
    if (lVar7 == 0) goto LAB_102ca4310;
    lVar16 = *(long *)(lVar17 + _DAT_11308f8e8);
    func_0x000107c61174();
    func_0x000107c61170(lVar17);
    uVar8 = *(undefined8 *)(lVar16 + _DAT_11308f930);
    func_0x000107c61174(uVar8);
    func_0x000107c61170(lVar16);
  }
  func_0x000107c523fc(unaff_x23);
  func_0x000107c61170(uVar8);
  if ((*(char *)((long)unaff_x20 + 0x99) == '\x01') && (*(char *)(unaff_x20 + 0x16) != '\x01')) {
    uVar18 = unaff_x20[0x14];
    uVar8 = unaff_x20[0x15];
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar18);
    func_0x000107c59bf0(unaff_x23);
    func_0x000107c61170(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar8);
    func_0x000107c59bf4(unaff_x23);
    func_0x000107c61170(puVar14);
  }
  puVar9 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar9[3] = 6;
  puVar9[2] = 3;
  puVar10 = puVar9;
  func_0x000103b999ac();
  uVar8 = puVar10[1];
  unaff_x20 = puVar9 + 4;
  *unaff_x20 = *puVar10;
  puVar9[5] = uVar8;
  uVar18 = 0;
  FUN_102ca44bc(0,0x112f09848,&PTR_PTR_1126ac1d0);
  puVar9[9] = uVar18;
  puVar9[6] = unaff_x23;
  func_0x000107c61434(uVar8);
  func_0x000107c61174();
  puVar11 = unaff_x23;
  func_0x000103b999b8();
  puVar10 = (undefined8 *)puVar11[1];
  puVar9[10] = *puVar11;
  puVar9[0xb] = puVar10;
  unaff_x24 = PTR___sSbN_11034dd40;
  puVar9[0xf] = PTR___sSbN_11034dd40;
  *(undefined1 *)(puVar9 + 0xc) = 0;
  func_0x000107c61434();
  func_0x000103b999c4();
  uVar8 = puVar10[1];
  puVar9[0x10] = *puVar10;
  puVar9[0x11] = uVar8;
  puVar9[0x15] = unaff_x24;
  *(undefined1 *)(puVar9 + 0x12) = 1;
  func_0x000107c61434();
  unaff_x30 = 0x102ca4450;
  register0x00000008 = (BADSPACEBASE *)auStack_110;
  unaff_x22 = puVar9;
code_r0x000100214a84:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar14 = (undefined *)puVar9[2];
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar14 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar14;
    func_0x000107c60498();
    puVar9 = puVar9 + 4;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar15 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar3 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar6 = uVar15;
      uVar13 = uVar3;
      func_0x000100029284();
      if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar13 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar13 + 0x40) = *(ulong *)(puVar5 + uVar13 + 0x40) | 1L << (uVar6 & 0x3f)
      ;
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar2 = uVar15;
      puVar2[1] = uVar3;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 6;
      puVar14 = puVar14 + -1;
    } while (puVar14 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ca44bc; end: 102ca44fb;  */

void FUN_102ca44bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102ca44fc; end: 102ca450b;  */

void FUN_102ca44fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_138;
  long lStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_110,&UNK_1105c43b0,uVar1,&UNK_1105c43b0,uVar2,&PTR_DAT_1105c33e0,lVar4);
    uStack_c8 = uStack_108;
    uStack_d0 = uStack_110;
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    lStack_a0 = lStack_e0;
    if (lStack_d8 != 0) {
      uStack_68 = uStack_108;
      uStack_70 = uStack_110;
      uStack_58 = uStack_f8;
      uStack_60 = uStack_100;
      uStack_48 = uStack_e8;
      uStack_50 = uStack_f0;
      FUN_102ca3004(&uStack_70);
      FUN_102c93ea4(&uStack_d0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_110,&UNK_1105c4458,uVar1,&UNK_1105c4458,uVar2,&PTR_DAT_1105c33f0,lVar4);
    if (lStack_e0 != 0) {
      func_0x000102ca31a8(&uStack_110);
      func_0x000107c6142c(lStack_e0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c3f40,uVar1,&UNK_1105c3f40,uVar2,&PTR_DAT_1105c3378,lVar4);
    if (lStack_130 != 0) {
      func_0x000107c6142c();
      func_0x000102ca29e0();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c3898,uVar1,&UNK_1105c3898,uVar2,&PTR_DAT_1105c3300,lVar4);
    if (CONCAT44(uStack_124,uStack_128) != 0) {
      func_0x000107c6142c();
      func_0x000102ca29e0();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c43e0,uVar1,&UNK_1105c43e0,uVar2,&PTR_DAT_1105c33e8,lVar4);
    if (lStack_130 != 0) {
      func_0x000107c6142c();
      func_0x000102ca29e0();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c41d8,uVar1,&UNK_1105c41d8,uVar2,&PTR_DAT_1105c33a8,lVar4);
    if (lStack_118 != 0) {
      func_0x000107c6142c();
      *(byte *)(lVar3 + 0xb3) = (byte)uStack_128 & 1;
      if ((uStack_128 & 1) != 0) {
        func_0x000102ca29e0();
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_138,&UNK_1105c3cc8,uVar1,&UNK_1105c3cc8,uVar2,&PTR_DAT_1105c3348,param_1);
    if (lStack_120 == 0) {
      func_0x000107c61574(lVar3);
    }
    else {
      FUN_102ca3310(uStack_138,lStack_130);
      func_0x000107c61574(lVar3);
      func_0x000107c6142c(lStack_120);
    }
  }
  return;
}



/* Entry: 102ca450c; end: 102ca452b;  */

void FUN_102ca450c(void)

{
  func_0x000102ca2b3c();
  return;
}



/* Entry: 102ca452c; end: 102ca4533;  */

void FUN_102ca452c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0x99) & 1) != 0) || (*(char *)(lVar1 + 0xb0) != '\x01')) {
      *(undefined1 *)(lVar1 + 0x99) = 0;
      *(undefined8 *)(lVar1 + 0xa0) = 0;
      *(undefined8 *)(lVar1 + 0xa8) = 0;
      *(undefined1 *)(lVar1 + 0xb0) = 1;
      func_0x0001000d224c(auStack_70);
      func_0x0001000a8868(auStack_70,uStack_58);
      auStack_98[0] = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      (**(code **)(lStack_50 + 0x10))
                (auStack_98,&UNK_1105c3dc8,&PTR_DAT_1105c3358,uStack_58,lStack_50);
      func_0x0001000834e4(auStack_70);
      FUN_102ca37f8();
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102ca4534; end: 102ca4553;  */

void FUN_102ca4534(void)

{
  func_0x000102ca2b3c();
  return;
}



/* Entry: 102ca4554; end: 102ca457f;  */

void FUN_102ca4554(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xb1) = 1;
    func_0x000107c61574();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000102ca29e0();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102ca4580; end: 102ca4d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ca4580(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long *aplStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  uVar12 = *(undefined8 *)(param_7 + _DAT_11308b848);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar12;
  lVar4 = _DAT_113068e88;
  puVar1 = (undefined8 *)(param_1 + _DAT_113068e80);
  uVar3 = *puVar1;
  uVar10 = puVar1[1];
  uVar15 = *(undefined8 *)(param_1 + _DAT_113068e88);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar14 = *(undefined8 *)(param_7 + _DAT_11308b850);
  func_0x000107c61174(uVar12);
  func_0x000107c61434(uVar10);
  func_0x000107c615f0(uVar15);
  func_0x000107c61174();
  uVar12 = uVar14;
  func_0x0001000bda74();
  func_0x000107c61170(uVar14);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = 0;
  FUN_102ca55a4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar9 = _DAT_112f09920;
  uVar14 = 0x112f09670;
  func_0x0001000285a8(0x112f09670,&UNK_10db3c3b8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar7 + lVar9) = uVar14;
  puVar2 = (undefined8 *)(lVar7 + _DAT_112f09900);
  *puVar2 = uVar3;
  puVar2[1] = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f09908) = uVar15;
  *(undefined8 *)(lVar7 + _DAT_112f09910) = uVar12;
  *(undefined **)(lVar7 + _DAT_112f09918) = puVar5;
  plVar8 = &lStack_78;
  lStack_78 = lVar7;
  lStack_70 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x18) = plVar8;
  uVar14 = *puVar1;
  uVar3 = puVar1[1];
  uVar15 = *(undefined8 *)(param_1 + lVar4);
  FUN_102ca2008(param_1 + _DAT_113068e98,alStack_e8);
  lVar9 = _DAT_113069018;
  func_0x000107c61428(param_4 + _DAT_113069018,auStack_90,0,0);
  lVar9 = param_4 + lVar9;
  func_0x000107c61618(lVar9);
  uVar16 = *(undefined8 *)(param_6 + _DAT_112f0ded0);
  func_0x0001000285a8(0x112dced30,&UNK_10d990b60);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11304a480);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(uVar15);
  func_0x000107c6157c(uVar16);
  func_0x000107c61174();
  uVar10 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  ppuStack_98 = &PTR_DAT_1105bca88;
  lVar11 = 0;
  aplStack_b8[0] = plVar8;
  lStack_a0 = lVar6;
  func_0x000102ca6914();
  lVar7 = lVar11;
  func_0x000107c613fc();
  func_0x000107c61614(lVar7 + 0x78,0);
  uVar12 = 0;
  func_0x0001000c6560();
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(undefined8 *)(lVar7 + 0x98) = 0;
  *(undefined4 *)(lVar7 + 0x9f) = 0;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + 0xa8) = uVar12;
  *(undefined8 *)(lVar7 + 0x10) = uVar14;
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  *(undefined8 *)(lVar7 + 0x20) = uVar15;
  func_0x000100d23084(aplStack_b8,lVar7 + 0x28);
  func_0x000100d23084(alStack_e8,lVar7 + 0x50);
  func_0x000107c61604(lVar7 + 0x78,lVar9);
  func_0x000107c615e8(lVar9);
  *(undefined8 *)(lVar7 + 0x80) = uVar16;
  *(undefined8 *)(lVar7 + 0x88) = uVar10;
  *(long *)(unaff_x20 + 0x10) = lVar7;
  lVar9 = param_5 + _DAT_113068e50;
  uVar14 = *(undefined8 *)(lVar9 + 0x18);
  lVar4 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar14);
  ppuStack_c8 = &PTR_DAT_1105bcac0;
  ppuStack_c0 = &PTR_DAT_1105bca98;
  pcVar13 = *(code **)(lVar4 + 0x10);
  alStack_e8[0] = lVar7;
  lStack_d0 = lVar11;
  func_0x000107c6157c(lVar7);
  (*pcVar13)(alStack_e8,uVar14,lVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(plVar8);
  func_0x000100dd2718(alStack_e8);
  return unaff_x20;
}



/* Entry: 102ca4d3c; end: 102ca4d8f;  */

void FUN_102ca4d3c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_102ca5640();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102ca4d90; end: 102ca4dc3;  */

void FUN_102ca4d90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca4dc4; end: 102ca4e17;  */

void FUN_102ca4dc4(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_102ca5640();
  lVar1 = *(long *)(lVar1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102ca4e18; end: 102ca4e1f;  */

undefined8 FUN_102ca4e18(void)

{
  return 0;
}



/* Entry: 102ca4e20; end: 102ca4e3f;  */

void FUN_102ca4e20(void)

{
  func_0x000107c61168(&PTR_PTR_112f09890);
  return;
}



/* Entry: 102ca4e40; end: 102ca4e67; -[_TtC24TapTooltipImplementation21TapTooltipEventStream adLifecycleEventObservableV2] */

void FUN_102ca4e40(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ca4e68; end: 102ca4e6f; -[_TtC24TapTooltipImplementation21TapTooltipEventStream streamsType] */

undefined8 FUN_102ca4e68(void)

{
  return 0;
}



/* Entry: 102ca4e70; end: 102ca4eaf; -[_TtC24TapTooltipImplementation21TapTooltipEventStream tooltipImpressionEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca4e70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ca4eb0; end: 102ca54d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca4eb0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x20;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uStack_f8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  
  lVar19 = *(long *)(unaff_x20 + _DAT_112f09908);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f09900);
  dVar28 = param_1;
  func_0x000107c5fadc(lVar3,((long *)(unaff_x20 + _DAT_112f09900))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar19 == 0) {
    return;
  }
  func_0x0001041f3970();
  func_0x000107c61170(lVar19);
  lVar19 = _DAT_113068f40;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + _DAT_113068f40);
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f09918);
  func_0x000107c61174();
  func_0x000107c3ceac(uVar20);
  dVar28 = dVar28 * 1000.0;
  uVar20 = *(undefined8 *)(lVar4 + _DAT_11308f130);
  uVar26 = ((undefined8 *)(lVar4 + _DAT_11308f130))[1];
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c61434(uVar26);
  func_0x000107c602fc(0x1e);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f105d80);
  func_0x000107c5fb78(uVar20,uVar26);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(dVar28,&puStack_a8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_a0;
  puVar14 = puStack_a8;
  func_0x0001000d224c(&puStack_a8);
  puVar8 = puStack_a8;
  if (puStack_a8 == (undefined *)0x0) {
    puStack_b0 = (undefined *)0x0;
  }
  else {
    uVar27 = uVar20;
    func_0x000107c5fadc(uVar20,uVar26);
    puStack_b0 = puVar8;
    func_0x000107c5ce1c();
    func_0x000107c615e8(puVar8);
    func_0x000107c61170(uVar27);
  }
  func_0x0001000d224c(&puStack_a8);
  puVar8 = puStack_a8;
  if (puStack_a8 == (undefined *)0x0) {
    puStack_b8 = (undefined *)0x1;
  }
  else {
    uVar27 = uVar20;
    func_0x000107c5fadc(uVar20,uVar26);
    puStack_b8 = puVar8;
    func_0x000107c5df18();
    func_0x000107c615e8(puVar8);
    func_0x000107c61170(uVar27);
  }
  func_0x0001000d224c(&puStack_a8);
  puVar8 = puStack_a8;
  if (puStack_a8 == (undefined *)0x0) {
    puStack_c0 = (undefined *)0x1;
  }
  else {
    uVar27 = uVar20;
    func_0x000107c5fadc(uVar20,uVar26);
    puStack_c0 = puVar8;
    func_0x000107c42f50();
    func_0x000107c615e8(puVar8);
    func_0x000107c61170(uVar27);
  }
  uVar21 = *(ulong *)(lVar4 + _DAT_113815208);
  if (uVar21 == 0) {
    func_0x000107c61174(lVar4);
    lVar22 = 0;
  }
  else {
    uVar24 = uVar21 & 0xffffffffffffff8;
    if (uVar21 >> 0x3e == 0) {
      uVar5 = *(ulong *)(uVar24 + 0x10);
    }
    else {
      uVar5 = uVar21;
      if (-1 < (long)uVar21) {
        uVar5 = uVar24;
      }
      func_0x000107c60480();
    }
    if (uVar5 == 0) {
      func_0x000107c61174(lVar4);
      lVar22 = 0;
    }
    else if ((uVar21 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar24 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ca54d8);
        (*pcVar2)();
      }
      lVar22 = *(long *)(uVar21 + 0x20);
      func_0x000107c61174(lVar4);
      func_0x000107c61174(lVar22);
    }
    else {
      func_0x000107c61174(lVar4);
      lVar22 = 0;
      func_0x000100e471e4(0,uVar21);
    }
  }
  lVar6 = lVar4;
  lVar16 = lVar22;
  func_0x0001084c6f7c(lVar4,lVar22);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar22);
  if ((long)((ulong)puStack_b8 | (ulong)puStack_b0 | (ulong)puStack_c0) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ca54bc);
    (*pcVar2)();
  }
  uVar27 = *(undefined8 *)(lVar4 + _DAT_11308f140);
  lVar22 = ((undefined8 *)(lVar4 + _DAT_11308f140))[1];
  uVar18 = *(undefined8 *)(lVar4 + _DAT_11308f138);
  lVar25 = ((undefined8 *)(lVar4 + _DAT_11308f138))[1];
  lVar19 = *(long *)(*(long *)(lVar3 + lVar19) + _DAT_113815208);
  if (lVar19 != 0) {
    uStack_f8 = *(undefined8 *)(lVar3 + _DAT_113068f48);
    func_0x000107c61434(lVar19);
    lVar16 = lVar19;
    FUN_102c7fa90();
    uVar15 = (uint)lVar16;
    func_0x000107c6142c(lVar19);
    if ((uVar15 & 0xff) != 1) goto LAB_102ca5258;
  }
  uStack_f8 = 0;
LAB_102ca5258:
  uVar17 = *(undefined8 *)(lVar4 + _DAT_113815200);
  uVar23 = *(undefined8 *)(lVar4 + _DAT_11308f128);
  uVar7 = uVar23;
  func_0x000104840e10();
  puVar8 = puVar14;
  func_0x000107c5fadc(puVar14,uVar1);
  func_0x000107c5fadc(uVar20,uVar26);
  func_0x000107c6142c(uVar26);
  if (lVar22 == 0) {
    uVar27 = 0;
  }
  else {
    func_0x000107c5fadc(uVar27,lVar22);
  }
  uVar26 = 0;
  if (lVar25 != 0) {
    func_0x000107c5fadc(uVar18,lVar25);
    uVar26 = uVar18;
  }
  puVar9 = PTR_PTR_1126b9150;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar7,lVar16);
  func_0x000107c6142c(lVar16);
  func_0x000107c30ad4(dVar28,puVar9,puVar8,uVar20,uVar27,uVar26,0,puStack_b0,puStack_b8,puStack_c0,0
                      ,uStack_f8,uVar17,lVar6,lVar6,uVar23,uVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar9;
  func_0x000107c5f06c(param_1);
  puVar10 = puVar8;
  func_0x000107c5f06c(param_2);
  puVar11 = puVar10;
  func_0x000107c5f06c(param_3);
  puVar12 = puVar11;
  func_0x000107c5f06c(param_4);
  puVar13 = PTR_PTR_1126b90a8;
  func_0x000107c610f8(PTR_PTR_1126b90a8);
  func_0x000107c5fadc(puVar14,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c30d24(dVar28,puVar13,puVar14,param_5,param_6,puVar8,puVar10,puVar11,puVar12);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar14);
  func_0x0001046a08a4(0);
  func_0x000107c610f8();
  puVar14 = puVar9;
  func_0x0001046a0144(puVar9,puVar13);
  puStack_a8 = puVar14;
  func_0x0001002a64a8(&puStack_a8);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar3);
  return;
}


