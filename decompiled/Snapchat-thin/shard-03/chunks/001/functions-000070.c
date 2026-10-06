/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10246d424; end: 10246d45b;  */

void FUN_10246d424(long param_1)

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



/* Entry: 10246d45c; end: 10246d4bb;  */

void FUN_10246d45c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10246d4bc; end: 10246d5eb;  */

undefined8
FUN_10246d4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_c0;
  func_0x000107c614e8(param_8);
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10246d424;
  puStack_78 = &UNK_11050c9d0;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_10246d45c;
  puStack_a8 = &UNK_11050c9f8;
  uStack_a0 = param_6;
  uStack_98 = param_7;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c46b40(param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return param_8;
}



/* Entry: 10246d5ec; end: 10246d60f;  */

void FUN_10246d5ec(long param_1,long param_2)

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



/* Entry: 10246d610; end: 10246d747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246d610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112e9c428) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c430) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c438) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9c440);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9c448);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_1134bad10;
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  func_0x000107c61614(unaff_x20 + _DAT_1134bad18,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9c450) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c458) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c460) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c468) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c470) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10246d748; end: 10246d78b; -[_TtC43ContentPostSendUpsellServicesImplementation40ContentPostSendUpsellWorkflowServiceImpl hasActiveWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10246d748(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9c428;
  func_0x000107c61428(param_1 + _DAT_112e9c428,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10246d78c; end: 10246d847; -[_TtC43ContentPostSendUpsellServicesImplementation40ContentPostSendUpsellWorkflowServiceImpl setHasActiveWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246d78c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9c428;
  func_0x000107c61428(param_1 + _DAT_112e9c428,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10246d848; end: 10246dab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246d848(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = _DAT_112e9c428;
  puVar6 = auStack_90 + -extraout_x8;
  if (*(char *)(*(long *)(unaff_x20 + _DAT_112e9c450) + _DAT_11307ce50) != '\x02') {
    lVar2 = unaff_x20 + _DAT_112e9c428;
    puVar8 = auStack_78;
    func_0x000107c61428(lVar2,puVar8,1,0);
    if ((*(byte *)(unaff_x20 + lVar5) & 1) == 0) {
      lVar7 = 0x6e776f6e6b6e75;
      func_0x00010246d7dc();
      lVar3 = param_1;
      func_0x000103913d10();
      if (lVar3 == 0) {
        puVar8 = (undefined1 *)0xe700000000000000;
        lVar4 = lVar7;
      }
      else {
        lVar4 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
      }
      puVar9 = puVar8;
      func_0x000107c5fadc(lVar4,puVar8);
      func_0x000107c6142c(puVar8);
      lVar3 = param_2;
      func_0x000103914138();
      if (lVar3 == 0) {
        puVar9 = (undefined1 *)0xe700000000000000;
      }
      else {
        lVar7 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
      }
      func_0x000107c5fadc(lVar7,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000105e8e2ec(lVar2,lVar4,lVar7,1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar7);
      *(undefined1 *)(unaff_x20 + lVar5) = 1;
      func_0x000107c5eea0(puVar6);
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar6,0,1,lVar5);
      lVar5 = _DAT_1134bad10;
      func_0x000107c61428(unaff_x20 + _DAT_1134bad10,auStack_90,0x21,0);
      func_0x000100ed9cbc(puVar6,unaff_x20 + lVar5);
      func_0x000107c614a8(auStack_90);
      lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112e9c468) + _DAT_112ff2c78);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 == 0) {
        FUN_10246dab8();
      }
      else {
        plVar1 = (long *)(unaff_x20 + _DAT_112e9c440);
        *plVar1 = param_1;
        *(undefined1 *)(plVar1 + 1) = 0;
        plVar1 = (long *)(unaff_x20 + _DAT_112e9c448);
        *plVar1 = param_2;
        *(undefined1 *)(plVar1 + 1) = 0;
        func_0x000107c3d740();
        func_0x000107c615e8(lVar5);
      }
    }
  }
  return;
}



/* Entry: 10246dab8; end: 10246dba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246dab8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112e9c468) + _DAT_112ff2c78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar2);
  }
  lVar2 = _DAT_112e9c428;
  func_0x000107c61428(unaff_x20 + _DAT_112e9c428,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e9c438);
  *(undefined8 *)(unaff_x20 + _DAT_112e9c438) = 0;
  func_0x000107c6142c(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9c440);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9c448);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = unaff_x20 + _DAT_1134bad18;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c404ac();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10246dba4; end: 10246dbe7; -[_TtC43ContentPostSendUpsellServicesImplementation40ContentPostSendUpsellWorkflowServiceImpl startUpsellFlowWithContentType:source:] */

void FUN_10246dba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10246d848(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10246dbe8; end: 10246dbfb; -[_TtC43ContentPostSendUpsellServicesImplementation40ContentPostSendUpsellWorkflowServiceImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246dbe8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_1134bad18,param_3);
  return;
}



/* Entry: 10246dbfc; end: 10246dc2f;  */

void FUN_10246dbfc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10246dc30; end: 10246dcd7; -[_TtC43ContentPostSendUpsellServicesImplementation40ContentPostSendUpsellWorkflowServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10246dc30(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9c460));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c458));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c468));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c470));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c450));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c430));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e9c438));
  func_0x0001000d1dcc(param_1 + _DAT_1134bad10);
  param_1 = param_1 + _DAT_1134bad18;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10246dcd8; end: 10246de1b;  */

void FUN_10246dcd8(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar3 = &UNK_11050cb00;
  func_0x000107c613fc(&UNK_11050cb00,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_11050cb28;
  func_0x000107c613fc(&UNK_11050cb28,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10246de1c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_10246e36c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10246e38c;
  puStack_58 = &UNK_11050cb40;
  ppuVar5 = &puStack_70;
  puStack_48 = puVar4;
  func_0x000107c60bc4();
  puVar1 = puStack_48;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c650(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x8a,0x5b,0x2b,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10246de1c);
  (*pcVar2)();
}



/* Entry: 10246de1c; end: 10246df93;  */

/* WARNING: Possible PIC construction at 0x00010246df04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246df08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246de1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lStack_58;
  
  if (param_7 == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  lVar3 = param_7;
  func_0x000107c49820();
  plVar1 = (long *)(lVar4 + _DAT_112e9c440);
  lStack_58 = *plVar1;
  if ((char)plVar1[1] != '\x01' && lStack_58 != 2) {
    if (lStack_58 == 1) {
      if (lVar3 != 3) goto code_r0x000107c61170;
    }
    else {
      if (lStack_58 != 0) {
        func_0x000107c60614(&UNK_1106abf80,&lStack_58,&UNK_1106abf80,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10246df94);
        (*pcVar2)();
      }
      if (lVar3 != 4) goto code_r0x000107c61170;
    }
    if (param_8 != 0) {
      func_0x000107c61174();
      lVar3 = param_8;
      func_0x000107c49820();
      if (lVar3 == 1) {
        FUN_10246dab8();
        goto code_r0x000107c61170;
      }
      func_0x000107c61170(param_8);
    }
    lVar3 = *(long *)(*(long *)(lVar4 + _DAT_112e9c468) + _DAT_112ff2c78);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4ff64();
      func_0x000107c615e8(lVar3);
    }
    FUN_10246df94(param_3,param_4,param_5,param_6);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10246df94; end: 10246e36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246df94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d373d8;
  uStack_c0 = param_2;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_e0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = _DAT_1134bad10;
  lVar12 = lVar13 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_1134bad10,auStack_88,0,0);
  func_0x0001009f0578(unaff_x20 + lVar1,puVar7);
  puVar8 = puVar7;
  (**(code **)(lVar10 + 0x30))(puVar7,1,lVar2);
  if ((int)puVar8 == 1) {
    func_0x0001000d1dcc(puVar7);
    goto LAB_10246e250;
  }
  lVar11 = 0x6e776f6e6b6e75;
  lVar1 = lVar12;
  uStack_d0 = param_5;
  uStack_c8 = param_3;
  (**(code **)(lVar10 + 0x20))(lVar12,puVar7,lVar2);
  func_0x00010246d7dc();
  uStack_d8 = param_4;
  if ((char)((long *)(unaff_x20 + _DAT_112e9c440))[1] == '\x01') {
LAB_10246e128:
    puVar7 = (undefined1 *)0xe700000000000000;
    lVar4 = lVar11;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112e9c440);
    func_0x000103913d10();
    if (lVar3 == 0) goto LAB_10246e128;
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  puVar8 = puVar7;
  func_0x000107c5fadc(lVar4,puVar7);
  func_0x000107c6142c(puVar7);
  if ((char)((long *)(unaff_x20 + _DAT_112e9c448))[1] == '\x01') {
LAB_10246e184:
    puVar8 = (undefined1 *)0xe700000000000000;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112e9c448);
    func_0x000103914138();
    if (lVar3 == 0) goto LAB_10246e184;
    lVar11 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c5fadc(lVar11,puVar8);
  func_0x000107c6142c(puVar8);
  func_0x000107c5eea0(lVar13);
  func_0x000107c5ee68(lVar12);
  pcVar9 = *(code **)(lVar10 + 8);
  (*pcVar9)(lVar13,lVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10246e364);
    (*pcVar9)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10246e368);
    (*pcVar9)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10246e36c);
    (*pcVar9)();
  }
  func_0x000105e8e0bc(lVar1,lVar4,lVar11,(long)param_1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar11);
  (*pcVar9)(lVar12,lVar2);
  param_4 = uStack_d8;
  param_3 = uStack_c8;
  param_5 = uStack_d0;
LAB_10246e250:
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9c458);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    FUN_10246dab8();
  }
  else {
    puVar5 = &UNK_11050cb98;
    func_0x000107c613fc(&UNK_11050cb98,0x38,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x18) = uStack_c0;
    *(undefined8 *)(puVar5 + 0x20) = param_3;
    *(undefined8 *)(puVar5 + 0x28) = param_4;
    *(undefined8 *)(puVar5 + 0x30) = param_5;
    pcStack_98 = FUN_10246e52c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100f1c768;
    puStack_a0 = &UNK_11050cbb0;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c61434(param_5);
    func_0x000107c61174();
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c440d8(lVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10246e36c; end: 10246e38b;  */

void FUN_10246e36c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10246e38c; end: 10246e483;  */

/* WARNING: Possible PIC construction at 0x00010246e444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246e448) */

void FUN_10246e38c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4,uVar4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10246e484; end: 10246e4b7;  */

void FUN_10246e484(long param_1,long param_2)

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



/* Entry: 10246e4b8; end: 10246e507; -[_TtC43ContentPostSendUpsellServicesImplementation40ContentPostSendUpsellWorkflowServiceImpl didUpdateMyStoriesDataRequest:] */

/* WARNING: Possible PIC construction at 0x00010246e4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246e4f4) */

void FUN_10246e4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10246dcd8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10246e508; end: 10246e52b;  */

undefined8 FUN_10246e508(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10246e52c; end: 10246e9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246e52c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar15 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    FUN_10246dab8();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar14 = *(long *)(unaff_x20 + 0x20);
  lVar12 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar3 = param_1;
  func_0x000107c615f0();
  alStack_88[0] = lVar3;
  func_0x000107c615f0();
  func_0x00010008a7c8(&puStack_b8,alStack_88);
  puVar4 = puStack_b8;
  func_0x000100083b20(alStack_88);
  func_0x000107c61574(puVar4);
  func_0x0001000a8868(alStack_88,uStack_70);
  uVar2 = uStack_70;
  (**(code **)(lStack_68 + 8))(uStack_70,lStack_68);
  uVar16 = *(undefined8 *)(lVar15 + _DAT_112e9c438);
  *(undefined8 *)(lVar15 + _DAT_112e9c438) = uVar2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar16);
  if ((char)((long *)(lVar15 + _DAT_112e9c448))[1] == '\x01') {
LAB_10246e7c0:
    func_0x000107c6142c(uVar2);
  }
  else {
    lVar3 = *(long *)(lVar15 + _DAT_112e9c448);
    func_0x000103914138();
    if (lVar3 == 0) goto LAB_10246e7c0;
    if (*(char *)((undefined8 *)(lVar15 + _DAT_112e9c440) + 1) != '\x01') {
      puVar4 = *(undefined **)(lVar15 + _DAT_112e9c440);
      func_0x000103913d10();
      if (puVar4 != (undefined *)0x0) {
        lVar5 = *(long *)(lVar15 + _DAT_112e9c470);
        func_0x000107c5da30();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 == 0) {
          func_0x000107c61170(lVar3);
          func_0x000107c61170(puVar4);
          goto LAB_10246e7c0;
        }
        puVar7 = &UNK_11050cbe8;
        func_0x000107c613fc(&UNK_11050cbe8,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,lVar15);
        puVar8 = PTR_PTR_1126aa890;
        func_0x000107c610f8();
        func_0x000107c6157c(puVar7);
        func_0x000107c61174();
        puVar9 = puVar4;
        func_0x000107c61174();
        func_0x000107c5fadc(uVar10);
        pcStack_98 = FUN_10246e9c8;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_11050cc00;
        ppuVar11 = &puStack_b8;
        puStack_90 = puVar7;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c4889c();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar9);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(uVar10);
        puVar13 = puStack_90;
        func_0x000107c61574(puVar7);
        func_0x000107c61574(puVar13);
        if (lVar1 == 0) {
          func_0x000107c578cc(puVar8);
          puVar7 = PTR_PTR_113187358;
          func_0x000107c5faec();
          lVar15 = lVar14;
          func_0x000107c5faec();
          if ((puVar4 == puVar7) && (lVar14 == lVar15)) {
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar15);
LAB_10246e89c:
            lVar12 = lVar6;
            func_0x000107c4f38c(lVar6);
            func_0x000107c61180();
            goto LAB_10246e8b0;
          }
          func_0x000107c605b8(puVar4,lVar14,puVar7,lVar15,0);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar15);
          if (((ulong)puVar4 & 1) != 0) goto LAB_10246e89c;
        }
        else {
          func_0x000107c5fadc(lVar12,lVar1);
LAB_10246e8b0:
          func_0x000107c578cc(puVar8);
          func_0x000107c61170(lVar12);
        }
        puVar4 = PTR_PTR_1126aa898;
        func_0x000107c610f8(PTR_PTR_1126aa898);
        func_0x000107c61174(puVar8);
        uVar10 = 0x112e9c388;
        func_0x0001000285a8(0x112e9c388,&UNK_10daaa280);
        uVar16 = uVar2;
        func_0x000107c5fc48(uVar2,uVar10);
        func_0x000107c6142c(uVar2);
        func_0x000107c49128(puVar4);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(uVar16);
        func_0x00010246d7dc();
        func_0x000105e8e51c();
        func_0x000107c61170(uVar16);
        puVar7 = PTR_PTR_1126c7680;
        func_0x000107c61168(PTR_PTR_1126c7680);
        func_0x000107c43be4();
        func_0x000107c61180();
        puVar13 = puVar7;
        func_0x000107c5baac();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar13);
        goto LAB_10246e7d0;
      }
    }
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(lVar3);
  }
  FUN_10246dab8();
LAB_10246e7d0:
  func_0x000107c615e8(param_1);
  func_0x0001000834e4(alStack_88);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10246e9c8; end: 10246ea17;  */

void FUN_10246e9c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10246dab8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10246ea18; end: 10246ea27;  */

void FUN_10246ea18(long param_1,long param_2)

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



/* Entry: 10246ea28; end: 10246eb17;  */

void FUN_10246ea28(long *param_1,long param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_10246f938();
  func_0x000107c613fc();
  *(undefined1 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  *(undefined8 *)(param_2 + 0x28) = uStack_50;
  *(undefined8 *)(param_2 + 0x10) = uStack_60;
  *(undefined8 *)(param_2 + 0x18) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10246eb18; end: 10246eb9f;  */

long FUN_10246eb18(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_10246f640();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c3ee50();
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c3ee54();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10246eba0);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c3f468(lVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar3);
  }
  return lVar4;
}



/* Entry: 10246eba0; end: 10246ebd3; -[_TtC32PromoteSnapServiceImplementation32PromoteSnapServiceImplementation getShouldShowPromoteSnapButton] */

uint FUN_10246eba0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_10246eb18();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 10246ebd4; end: 10246ece7;  */

/* WARNING: Possible PIC construction at 0x00010246ec90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246eca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246ec94) */
/* WARNING: Removing unreachable block (ram,0x00010246eca4) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10246ebd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_10246f640();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c3ee4c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c44fd8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5faec(lVar3);
    uVar6 = param_2;
    func_0x000107c61170(lVar3);
    puVar4 = PTR_PTR_1126c97e0;
    func_0x000107c610f8(PTR_PTR_1126c97e0);
    func_0x000107c48eac();
    func_0x000107c565cc();
    puVar5 = PTR_PTR_1133e0b88;
    func_0x000107c5faec(PTR_PTR_1133e0b88);
    FUN_10246ece8(lVar2,param_2,puVar4,puVar5,uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10246ece8; end: 10246ee9f;  */

void FUN_10246ece8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x30,auStack_78,1,0);
  if ((*(byte *)(unaff_x20 + 0x30) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    lVar1 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c4e26c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_11050ce48;
      func_0x000107c613fc(&UNK_11050ce48,0x28,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      puVar4 = PTR_PTR_1126c97d8;
      func_0x000107c610f8();
      func_0x000107c6157c();
      func_0x000107c61434(param_2);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5fadc(param_4,param_5);
      pcStack_88 = FUN_10246f958;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100f3283c;
      puStack_90 = &UNK_11050ce60;
      ppuVar5 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c48158();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61574(puStack_80);
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        func_0x000107c4ab9c(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar4);
      }
    }
  }
  return;
}



/* Entry: 10246eea0; end: 10246eeab; -[_TtC32PromoteSnapServiceImplementation32PromoteSnapServiceImplementation launchAdCreationPageWithMemoriesSnap:] */

void FUN_10246eea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_10246ebd4(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10246eeac; end: 10246efbf;  */

/* WARNING: Possible PIC construction at 0x00010246ef68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246ef78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010246ef7c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10246eeac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_10246f640();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c3ee4c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c44fd8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5faec(lVar3);
    uVar6 = param_2;
    func_0x000107c61170(lVar3);
    puVar4 = PTR_PTR_1126c97e0;
    func_0x000107c610f8(PTR_PTR_1126c97e0);
    func_0x000107c48eac();
    func_0x000107c56434();
    puVar5 = PTR_PTR_1133e0b88;
    func_0x000107c5faec(PTR_PTR_1133e0b88);
    FUN_10246ece8(lVar2,param_2,puVar4,puVar5,uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10246efc0; end: 10246efcb; -[_TtC32PromoteSnapServiceImplementation32PromoteSnapServiceImplementation launchAdCreationPageWithMediaLibraryItem:] */

void FUN_10246efc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_10246eeac(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10246efcc; end: 10246f01b;  */

void FUN_10246efcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  (*param_4)(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10246f01c; end: 10246f123;  */

/* WARNING: Possible PIC construction at 0x00010246f0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246f0dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246f0d0) */
/* WARNING: Removing unreachable block (ram,0x00010246f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10246f01c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_10246f640();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c3ee4c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c44fd8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5faec(lVar3);
    uVar6 = param_2;
    func_0x000107c61170(lVar3);
    puVar4 = PTR_PTR_1126c97e0;
    func_0x000107c610f8(PTR_PTR_1126c97e0);
    func_0x000107c48eac();
    puVar5 = PTR_PTR_1133e0b80;
    func_0x000107c5faec(PTR_PTR_1133e0b80);
    FUN_10246ece8(lVar2,param_2,puVar4,puVar5,uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10246f124; end: 10246f14b; -[_TtC32PromoteSnapServiceImplementation32PromoteSnapServiceImplementation launchAdCreationPageWithMediaPicker] */

void FUN_10246f124(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10246f01c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10246f14c; end: 10246f217; -[_TtC32PromoteSnapServiceImplementation32PromoteSnapServiceImplementation launchAdCreationPageWith:snapId:] */

/* WARNING: Possible PIC construction at 0x00010246f1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246f1f8) */

void FUN_10246f14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_3);
  puVar1 = PTR_PTR_1126c97e0;
  uVar3 = param_2;
  func_0x000107c610f8(PTR_PTR_1126c97e0);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c48eac(puVar1);
  func_0x000107c593e4();
  func_0x000107c61170(param_4);
  puVar2 = PTR_PTR_1133e0b80;
  func_0x000107c5faec(PTR_PTR_1133e0b80);
  FUN_10246ece8(param_3,param_2,puVar1,puVar2,uVar3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10246f218; end: 10246f4af;  */

/* WARNING: Possible PIC construction at 0x00010246f448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246f44c) */

void FUN_10246f218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar9 = param_2;
  FUN_10246f640();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c3ee4c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c44fd8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    puVar5 = PTR_PTR_1126aa8a8;
    func_0x000107c610f8(PTR_PTR_1126aa8a8);
    uVar6 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c46fac((double)param_6,(double)param_8,(double)param_7,puVar5);
    func_0x000107c61170(uVar6);
    puVar7 = &UNK_11050cd88;
    func_0x000107c613fc(&UNK_11050cd88,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = param_2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = (code *)0x10246fc80;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10246f5c8;
    puStack_98 = &UNK_11050cda0;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_88;
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c54ebc(puVar5);
    func_0x000107c60bd0(ppuVar8);
    puVar7 = &UNK_11050cdd8;
    func_0x000107c613fc(&UNK_11050cdd8,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = param_4;
    pcStack_90 = FUN_10246f8bc;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10246f5c8;
    puStack_98 = &UNK_11050cdf0;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_88;
    func_0x00010006c00c(param_3,param_4);
    func_0x000107c61574(puVar7);
    func_0x000107c54ee0(puVar5);
    func_0x000107c60bd0(ppuVar8);
    puVar7 = PTR_PTR_1126c97e0;
    func_0x000107c610f8(PTR_PTR_1126c97e0);
    func_0x000107c48eac();
    func_0x000107c530ac();
    func_0x000107c61170(puVar5);
    FUN_10246ece8(lVar3,uVar9,puVar7,param_9,param_10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10246f4b0; end: 10246f5c7; -[_TtC32PromoteSnapServiceImplementation32PromoteSnapServiceImplementation launchAdCreationPageWithCapturedMediaData:thumbnailData:isVideo:durationMs:width:height:source:] */

void FUN_10246f4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c5ee30(param_3);
  uVar3 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c5ee30(param_4);
  uVar4 = uVar3;
  func_0x000107c61170(param_4);
  uVar2 = param_9;
  func_0x000107c5faec();
  func_0x000107c61170(param_9);
  FUN_10246f218(param_3,param_2,uVar1,uVar3,param_5,param_6,param_7,param_8,uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x00010006c090(uVar1,uVar3);
  func_0x00010006c090(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10246f5c8; end: 10246f5ff;  */

void FUN_10246f5c8(long param_1)

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



/* Entry: 10246f600; end: 10246f603;  */

void FUN_10246f600(void)

{
  return;
}



/* Entry: 10246f604; end: 10246f63f;  */

void FUN_10246f604(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10246f640; end: 10246f87b;  */

ulong FUN_10246f640(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000107c4f3e4();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c4f378();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    uVar2 = 0x112d4bd28;
    func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
    uVar3 = uVar7;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar7);
    if (uVar3 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar7 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10246f830);
            (*pcVar1)();
          }
          uVar6 = *(ulong *)(uVar3 + uVar8 * 8 + 0x20);
          func_0x000107c615f0(uVar6);
        }
        else {
          uVar6 = uVar8;
          uVar2 = uVar3;
          func_0x000100f1cdf4();
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10246f794);
          (*pcVar1)();
        }
        uVar9 = uVar8 + 1;
        uVar4 = uVar6;
        func_0x000107c3ee50();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5d918();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10246f878);
          (*pcVar1)();
        }
        uVar4 = uVar5;
        func_0x000107c49ec8();
        func_0x000107c61170(uVar5);
        if ((uVar4 & 1) != 0) {
          func_0x000107c6142c(uVar3);
          uVar7 = uVar6;
          func_0x000107c3ee50();
          func_0x000107c61180();
          uVar3 = uVar7;
          func_0x000107c3ee4c();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10246f87c);
            (*pcVar1)();
          }
          uVar7 = uVar3;
          func_0x000107c4e07c();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar7 != 0) {
            uVar3 = uVar7;
            func_0x000107c5faec();
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(uVar2);
            uVar7 = uVar3 & 0xffffffffffff;
            if ((uVar2 & 0x2000000000000000) != 0) {
              uVar7 = uVar2 >> 0x38 & 0xf;
            }
            if (uVar7 != 0) {
              return uVar6;
            }
          }
          func_0x000107c615e8(uVar6);
          return 0;
        }
        func_0x000107c615e8(uVar6);
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar7);
    }
    func_0x000107c6142c(uVar3);
  }
  return 0;
}



/* Entry: 10246f87c; end: 10246f897;  */

void FUN_10246f87c(long param_1,long param_2)

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



/* Entry: 10246f898; end: 10246f8bb;  */

void FUN_10246f898(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10246f8bc; end: 10246f8bf;  */

undefined * FUN_10246f8bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126b3540;
  func_0x000107c61168(PTR_PTR_1126b3540);
  func_0x000107c5ee20(uVar3,uVar1);
  func_0x000107c5061c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  return puVar2;
}



/* Entry: 10246f8c0; end: 10246f927;  */

undefined * FUN_10246f8c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126b3540;
  func_0x000107c61168(PTR_PTR_1126b3540);
  func_0x000107c5ee20(uVar3,uVar1);
  func_0x000107c5061c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  return puVar2;
}



/* Entry: 10246f928; end: 10246f937;  */

undefined1  [16] FUN_10246f928(void)

{
  return ZEXT816(0x11050ce28);
}



/* Entry: 10246f938; end: 10246f957;  */

void FUN_10246f938(void)

{
  func_0x000107c61168(&PTR_PTR_112e9c4e8);
  return;
}



/* Entry: 10246f958; end: 10246fc67;  */

void FUN_10246f958(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x30,auStack_68,1,0);
  *(undefined1 *)(lVar1 + 0x30) = 0;
  func_0x000107c5c3b4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c3ebcc();
    func_0x000107c61170(param_1);
    if ((int)lVar3 != 0) {
      uVar4 = *(ulong *)(lVar1 + 0x20);
      func_0x000107c4e26c();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (uVar5 != 0) {
        func_0x00010451338c();
        uVar6 = uVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar6 != 0) {
          uVar4 = uVar6;
          func_0x000107c61150(uVar6,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_topmostViewController_11267b0f0);
          uVar12 = uVar5;
          if ((uVar4 & 1) != 0) {
            uVar4 = uVar6;
            func_0x000107c5cc6c(uVar6);
            func_0x000107c61180();
            puVar7 = PTR_PTR_1126aead8;
            func_0x000107c610f8(PTR_PTR_1126aead8);
            func_0x000107c4807c();
            puVar8 = PTR_PTR_1126b0ea8;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c548e4();
            puVar9 = PTR_PTR_1126b0eb0;
            func_0x000107c610f8(PTR_PTR_1126b0eb0);
            func_0x000107c453e4();
            func_0x000107c578f8(puVar8);
            func_0x000107c61170(puVar9);
            puVar9 = puVar8;
            func_0x000107c4f3c4();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10246fc58);
              (*pcVar2)();
            }
            func_0x000107c54864();
            func_0x000107c61170(puVar9);
            puVar9 = puVar8;
            func_0x000107c4f3c4();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10246fc5c);
              (*pcVar2)();
            }
            func_0x000107c553e4();
            func_0x000107c61170(puVar9);
            puVar9 = puVar8;
            func_0x000107c4f3c4();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10246fc60);
              (*pcVar2)();
            }
            func_0x000107c53f9c();
            func_0x000107c61170(puVar9);
            puVar9 = puVar8;
            func_0x000107c4f3c4();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10246fc64);
              (*pcVar2)();
            }
            func_0x000107c53f34();
            func_0x000107c61170(puVar9);
            puVar9 = puVar8;
            func_0x000107c4f3c4();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10246fc68);
              (*pcVar2)();
            }
            func_0x000107c5fadc(uVar10,uVar13);
            func_0x000107c578cc(puVar9);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(uVar10);
            pcStack_78 = FUN_10246f600;
            uStack_70 = 0;
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0x42000000;
            puStack_88 = &UNK_100ff4e10;
            puStack_80 = &UNK_11050ce88;
            ppuVar11 = &puStack_98;
            func_0x000107c60bc4(ppuVar11);
            func_0x000107c61174(puVar7);
            func_0x000107c4ab94(uVar5);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar7);
            uVar12 = uVar6;
            uVar6 = uVar5;
          }
          func_0x000107c615e8(uVar12);
          uVar5 = uVar6;
        }
        func_0x000107c615e8(uVar5);
      }
    }
  }
  return;
}



/* Entry: 10246fc68; end: 10246fc83;  */

void FUN_10246fc68(long param_1,long param_2)

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



/* Entry: 10246fc84; end: 10246fc9b; -[_TtC22CaaSCameraPageLauncher27CaaSCameraPageLaunchHandler payloadClass] */

void FUN_10246fc84(void)

{
  func_0x000102fe3d58(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10246fc9c; end: 10246fc9f; -[_TtC22CaaSCameraPageLauncher27CaaSCameraPageLaunchHandler setPayloadClass:] */

void FUN_10246fc9c(void)

{
  return;
}



/* Entry: 10246fca0; end: 10247013f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246fca0(undefined8 param_1,code *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_108 [24];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000100672b50(param_1,&puStack_c0);
  if (puStack_a8 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_c0);
  }
  else {
    uVar3 = 0;
    func_0x000102fe3d58(0);
    ppuVar4 = &puStack_f0;
    func_0x000107c6147c(ppuVar4,&puStack_c0,PTR___sypN_11034f1a8 + 8,uVar3,6);
    puVar2 = puStack_f0;
    lVar1 = _DAT_112f30810;
    if (((ulong)ppuVar4 & 1) != 0) {
      func_0x000107c61428(puStack_f0 + _DAT_112f30810,auStack_90,0,0);
      puVar5 = puStack_f0 + lVar1;
      func_0x000107c61618();
      if (puVar5 != (undefined *)0x0) {
        uVar13 = *(undefined8 *)(puStack_f0 + _DAT_112f307e0);
        uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e9c568);
        puVar6 = &UNK_11050cf90;
        func_0x000107c613fc(&UNK_11050cf90,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,0);
        puVar7 = &UNK_11050cfb8;
        func_0x000107c613fc(&UNK_11050cfb8,0x18,7);
        *(undefined8 *)(puVar7 + 0x10) = uVar13;
        puVar8 = &UNK_11050cfe0;
        func_0x000107c613fc(&UNK_11050cfe0,0x28,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar13;
        *(undefined8 *)(puVar8 + 0x18) = uVar3;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        puVar9 = PTR_PTR_1126aeaf8;
        func_0x000107c610f8();
        puVar11 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x10247048c;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100e1779c;
        puStack_a8 = &UNK_11050cff8;
        ppuVar4 = &puStack_c0;
        puStack_98 = puVar7;
        func_0x000107c60bc4(ppuVar4);
        uStack_d0 = 0x102470498;
        puStack_f0 = puVar11;
        uStack_e8 = 0x42000000;
        puStack_e0 = &UNK_100e17304;
        puStack_d8 = &UNK_11050d020;
        ppuVar10 = &puStack_f0;
        puStack_c8 = puVar8;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c615f4(uVar13,3);
        func_0x000107c6157c(uVar3);
        func_0x000107c6157c(puVar6);
        func_0x000107c47be0();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61574(puStack_c8);
        func_0x000107c61574(puStack_98);
        func_0x000100083b20(&puStack_c0);
        puVar8 = puStack_c0;
        lVar1 = _DAT_112f30808;
        uVar14 = *(undefined8 *)(puVar2 + _DAT_112f307d8);
        uVar12 = *(undefined8 *)(puVar2 + _DAT_112f307f0);
        uVar3 = *(undefined8 *)(puVar2 + _DAT_112f30800);
        func_0x000107c61428(puVar2 + _DAT_112f30808,&puStack_f0,0,0);
        puVar7 = puVar2 + lVar1;
        func_0x000107c61618();
        func_0x000107c61174(uVar3);
        func_0x000107c61174(uVar14);
        func_0x000107c61174(puVar9);
        func_0x000107c615f0(uVar12);
        puVar11 = puVar8;
        func_0x000107c3ed80(puVar8);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(uVar12);
        func_0x000107c61170(uVar3);
        func_0x000107c615e8(puVar7);
        func_0x000107c61428(puVar6 + 0x10,auStack_108,1,0);
        func_0x000107c61604(puVar6 + 0x10,puVar11);
        func_0x000100083b20(&puStack_c0);
        puVar7 = puStack_c0;
        puVar8 = puStack_c0;
        func_0x000107c3eedc(puStack_c0);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c4ab34(puVar8);
        func_0x000107c61170(puVar8);
        if (param_2 != (code *)0x0) {
          uStack_b8 = 0;
          puStack_c0 = (undefined *)0x0;
          puStack_a8 = (undefined *)0x0;
          puStack_b0 = (undefined *)0x0;
          (*param_2)(0,&puStack_c0);
          func_0x000107c615e8(uVar13);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar2);
          func_0x000107c615e8(puVar5);
          func_0x00010006e7f4(&puStack_c0);
          func_0x000107c61574(puVar6);
          return;
        }
        func_0x000107c61574(puVar6);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(uVar13);
        return;
      }
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(puStack_f0);
        return;
      }
      uStack_b8 = 0;
      puStack_c0 = (undefined *)0x0;
      puStack_a8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
      (*param_2)(0,&puStack_c0);
      func_0x000107c61170(puStack_f0);
      goto LAB_1024700ac;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  uStack_b8 = 0;
  puStack_c0 = (undefined *)0x0;
  puStack_a8 = (undefined *)0x0;
  puStack_b0 = (undefined *)0x0;
  (*param_2)(0,&puStack_c0);
LAB_1024700ac:
  func_0x00010006e7f4(&puStack_c0);
  return;
}



/* Entry: 102470140; end: 102470227;  */

void FUN_102470140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_11050d058;
  func_0x000107c613fc(&UNK_11050d058,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  uStack_60 = 0x1024704c0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000b0c7c;
  puStack_68 = &UNK_11050d070;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102470228; end: 1024702fb;  */

void FUN_102470228(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long alStack_58 [3];
  
  func_0x000100083b20(alStack_58);
  lVar1 = alStack_58[0];
  func_0x000107c3eedc();
  func_0x000107c61180();
  func_0x000107c61170(alStack_58[0]);
  func_0x000107c61428(param_2 + 0x10,alStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    if ((lVar2 != 0) && (func_0x000107c615e8(), lVar2 == param_2)) {
      func_0x000107c4283c(lVar1);
    }
    func_0x000107c61170(param_2);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1024702fc; end: 1024703cb; -[_TtC22CaaSCameraPageLauncher27CaaSCameraPageLaunchHandler launchWithPayload:completion:] */

void FUN_1024702fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11050cf68;
    func_0x000107c613fc(&UNK_11050cf68,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_102470484;
  }
  FUN_10246fca0(&uStack_50,pcVar1,puVar2);
  func_0x000100cf3280(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1024703cc; end: 10247042b; -[_TtC22CaaSCameraPageLauncher27CaaSCameraPageLaunchHandler init] */

void FUN_1024703cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraPageLauncher.CaaSCameraPageLaunchHandler",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024703f8);
  (*pcVar1)();
}



/* Entry: 10247042c; end: 102470463; -[_TtC22CaaSCameraPageLauncher27CaaSCameraPageLaunchHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102470448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247044c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247042c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9c568));
  return;
}



/* Entry: 102470464; end: 102470483;  */

void FUN_102470464(void)

{
  func_0x000107c61168(&PTR_PTR_112843350);
  return;
}



/* Entry: 102470484; end: 1024704db;  */

void FUN_102470484(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1024704dc; end: 102470537; -[_TtC22CaaSCameraPageLauncher26CaaSCameraPageLaunchPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024704dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e9c5a0);
  func_0x000107c61434(uVar3);
  uVar1 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  uVar2 = uVar3;
  func_0x000107c5fc48(uVar3,uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102470538; end: 10247058b; -[_TtC22CaaSCameraPageLauncher26CaaSCameraPageLaunchPlugin setNativePayloadHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102470538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e9c5a0);
  *(undefined8 *)(param_1 + _DAT_112e9c5a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10247058c; end: 1024705eb; -[_TtC22CaaSCameraPageLauncher26CaaSCameraPageLaunchPlugin init] */

void FUN_10247058c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraPageLauncher.CaaSCameraPageLaunchPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024705b8);
  (*pcVar1)();
}



/* Entry: 1024705ec; end: 1024705fb; -[_TtC22CaaSCameraPageLauncher26CaaSCameraPageLaunchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024705ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e9c5a0));
  return;
}



/* Entry: 1024705fc; end: 10247067b;  */

void FUN_1024705fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_11050d0a8;
  func_0x000107c613fc(&UNK_11050d0a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10247076c,puVar1);
  return;
}



/* Entry: 10247067c; end: 10247076b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247067c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  pplVar8 = &plStack_60;
  lVar2 = 0;
  FUN_102470464();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e9c568) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e9c570) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  plVar5 = plVar4;
  FUN_102470774();
  plVar6 = plVar5;
  func_0x000107c610f8();
  plVar7 = plVar6;
  func_0x000100f1b134();
  func_0x000107c613fc();
  plVar7[3] = 3;
  plVar7[2] = 1;
  plVar7[4] = (long)plVar4;
  *(long **)((long)plVar6 + _DAT_112e9c5a0) = plVar7;
  plStack_60 = plVar6;
  plStack_58 = plVar5;
  func_0x000107c61154(&plStack_60,PTR_s_init_1125d9248);
  *param_1 = pplVar8;
  return;
}



/* Entry: 10247076c; end: 102470773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247076c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  long unaff_x20;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pplVar10 = &plStack_60;
  lVar4 = 0;
  FUN_102470464();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e9c568) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e9c570) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  plVar6 = &lStack_50;
  func_0x000107c61154(plVar6,puVar3);
  plVar7 = plVar6;
  FUN_102470774();
  plVar8 = plVar7;
  func_0x000107c610f8();
  plVar9 = plVar8;
  func_0x000100f1b134();
  func_0x000107c613fc();
  plVar9[3] = 3;
  plVar9[2] = 1;
  plVar9[4] = (long)plVar6;
  *(long **)((long)plVar8 + _DAT_112e9c5a0) = plVar9;
  plStack_60 = plVar8;
  plStack_58 = plVar7;
  func_0x000107c61154(&plStack_60,PTR_s_init_1125d9248);
  *param_1 = pplVar10;
  return;
}



/* Entry: 102470774; end: 102470793;  */

void FUN_102470774(void)

{
  func_0x000107c61168(&PTR_PTR_112843418);
  return;
}



/* Entry: 102470794; end: 1024707a3;  */

undefined1  [16] FUN_102470794(void)

{
  return ZEXT816(0x11050d0d0);
}



/* Entry: 1024707a4; end: 1024707d3;  */

void FUN_1024707a4(undefined8 *param_1,undefined8 param_2)

{
  FUN_102470820();
  func_0x000107c613fc();
  *param_1 = param_2;
  return;
}



/* Entry: 1024707d4; end: 1024707e3;  */

void FUN_1024707d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1024707e4; end: 1024707ff; -[_TtC35SCCameraFeatureCategoryServicesImpl31SCCameraFeatureCategoryProvider replyCameraFeatureCollection] */

void FUN_1024707e4(void)

{
  func_0x0001091f3d04();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102470800; end: 10247081f;  */

void FUN_102470800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102470820; end: 10247083f;  */

void FUN_102470820(void)

{
  func_0x000107c61168(&PTR_PTR_112e9c618);
  return;
}



/* Entry: 102470840; end: 102470857; -[_TtC22ChatCameraPageLauncher27ChatCameraPageLaunchHandler payloadClass] */

void FUN_102470840(void)

{
  func_0x0001030d0ba4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102470858; end: 10247085b; -[_TtC22ChatCameraPageLauncher27ChatCameraPageLaunchHandler setPayloadClass:] */

void FUN_102470858(void)

{
  return;
}



/* Entry: 10247085c; end: 102470c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247085c(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  ulong auStack_a8 [3];
  ulong auStack_90 [6];
  
  func_0x000100672b50(param_1,auStack_90);
  if (auStack_90[3] == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    uVar1 = 0;
    func_0x0001030d0ba4(0);
    puVar2 = auStack_a8;
    func_0x000107c6147c(puVar2,auStack_90,PTR___sypN_11034f1a8 + 8,uVar1,6);
    lVar4 = _DAT_112f3a7d0;
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000107c61428(auStack_a8[0] + _DAT_112f3a7d0,auStack_a8,0,0);
      uVar3 = auStack_a8[0] + lVar4;
      func_0x000107c61618();
      lVar4 = _DAT_112f3a818;
      if (uVar3 == 0) {
LAB_102470c20:
        if (param_2 == (code *)0x0) {
          func_0x000107c61170(auStack_a8[0]);
          return;
        }
        auStack_90[1] = 0;
        auStack_90[0] = 0;
        auStack_90[3] = 0;
        auStack_90[2] = 0;
        (*param_2)(0,auStack_90);
      }
      else {
        func_0x000107c61428(auStack_a8[0] + _DAT_112f3a818,auStack_c0,0,0);
        lVar4 = auStack_a8[0] + lVar4;
        func_0x000107c61618();
        lVar8 = _DAT_112e9c680;
        if (lVar4 == 0) {
          func_0x000107c61170(uVar3);
          goto LAB_102470c20;
        }
        func_0x000107c61604(unaff_x20 + _DAT_112e9c680,0);
        func_0x000100083b20(auStack_90);
        uVar6 = auStack_90[0];
        uVar5 = auStack_90[0];
        func_0x000107c3f83c();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        uVar6 = uVar5;
        func_0x000107c49f74();
        func_0x000107c61170(uVar5);
        if ((uVar6 & 1) != 0) {
          func_0x000100083b20(auStack_90);
          uVar6 = auStack_90[0];
          uVar5 = auStack_90[0];
          func_0x000107c3f83c(auStack_90[0]);
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          func_0x000107c4283c(uVar5);
          func_0x000107c61170(uVar5);
        }
        lVar7 = _DAT_112f3a810;
        func_0x000107c61428(auStack_a8[0] + _DAT_112f3a810,auStack_d8,0,0);
        lVar7 = auStack_a8[0] + lVar7;
        func_0x000107c61618(lVar7);
        func_0x000107c61604(unaff_x20 + lVar8,lVar7);
        func_0x000107c615e8(lVar7);
        func_0x000100083b20(auStack_90);
        uVar6 = auStack_90[0];
        lVar8 = _DAT_112f3a800;
        uVar12 = *(undefined8 *)(auStack_a8[0] + _DAT_112f3a7d8);
        uVar11 = *(undefined8 *)(auStack_a8[0] + _DAT_112f3a7e8);
        uVar10 = *(undefined8 *)(auStack_a8[0] + _DAT_112f3a7f0);
        uVar9 = *(undefined8 *)(auStack_a8[0] + _DAT_112f3a7f8);
        func_0x000107c61428(auStack_a8[0] + _DAT_112f3a800,auStack_f0,0,0);
        lVar8 = auStack_a8[0] + lVar8;
        func_0x000107c61618();
        uVar1 = *(undefined8 *)(auStack_a8[0] + _DAT_112f3a808);
        func_0x000107c61174();
        func_0x000107c61174(uVar12);
        func_0x000107c615f0(uVar11);
        func_0x000107c61174();
        func_0x000107c61174(uVar9);
        uVar5 = uVar3;
        func_0x000104314d44(uVar3,uVar12);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar12);
        func_0x000107c615e8(uVar11);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar9);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar1);
        func_0x000100083b20(auStack_90);
        uVar6 = auStack_90[0];
        func_0x000107c3f83c(auStack_90[0]);
        func_0x000107c61180();
        func_0x000107c61170(auStack_90[0]);
        func_0x000107c4ab34(uVar6);
        func_0x000107c61170(uVar6);
        if (param_2 == (code *)0x0) {
          func_0x000107c61170(auStack_a8[0]);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar3);
          return;
        }
        uVar1 = 0;
        func_0x000100370ac0();
        auStack_90[0] = uVar5;
        auStack_90[3] = uVar1;
        func_0x000107c61174(uVar5);
        (*param_2)(0,auStack_90);
        func_0x000107c61170(auStack_a8[0]);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar5);
        auStack_a8[0] = uVar3;
      }
      func_0x000107c61170(auStack_a8[0]);
      goto LAB_102470c44;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  auStack_90[1] = 0;
  auStack_90[0] = 0;
  auStack_90[3] = 0;
  auStack_90[2] = 0;
  (*param_2)(0,auStack_90);
LAB_102470c44:
  func_0x00010006e7f4(auStack_90);
  return;
}



/* Entry: 102470c9c; end: 102470d6b; -[_TtC22ChatCameraPageLauncher27ChatCameraPageLaunchHandler launchWithPayload:completion:] */

void FUN_102470c9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11050d260;
    func_0x000107c613fc(&UNK_11050d260,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_102470fd4;
  }
  FUN_10247085c(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 102470d6c; end: 102470dcb; -[_TtC22ChatCameraPageLauncher27ChatCameraPageLaunchHandler init] */

void FUN_102470d6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraPageLauncher.ChatCameraPageLaunchHandler",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102470d98);
  (*pcVar1)();
}



/* Entry: 102470dcc; end: 102470e13; -[_TtC22ChatCameraPageLauncher27ChatCameraPageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102470dcc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9c670));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9c678));
  param_1 = param_1 + _DAT_112e9c680;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102470e14; end: 102470e33;  */

void FUN_102470e14(void)

{
  func_0x000107c61168(&PTR_PTR_1128434d8);
  return;
}



/* Entry: 102470e34; end: 102470f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102470e34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar3 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c3f83c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar2 = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar3 = _DAT_112e9c680;
  if (lVar2 != 0) {
    if ((param_1 != 0) && (lVar2 == param_1)) {
      lVar1 = unaff_x20 + _DAT_112e9c680;
      func_0x000107c61618();
      if (lVar1 != 0) {
        func_0x000107c42030();
        func_0x000107c615e8(lVar1);
      }
      func_0x000107c61604(unaff_x20 + lVar3,0);
      func_0x000100083b20(&lStack_48);
      lVar3 = lStack_48;
      lVar1 = lStack_48;
      func_0x000107c3f83c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar1;
      func_0x000107c49f74();
      func_0x000107c61170(lVar1);
      if ((int)lVar3 != 0) {
        func_0x000100083b20(&lStack_48);
        lVar3 = lStack_48;
        func_0x000107c3f83c(lStack_48);
        func_0x000107c61180();
        func_0x000107c61170(lStack_48);
        func_0x000107c4283c(lVar3);
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102470f80; end: 102470fd3; -[_TtC22ChatCameraPageLauncher27ChatCameraPageLaunchHandler dismissCameraScope:] */

/* WARNING: Possible PIC construction at 0x000102470fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102470fc0) */

void FUN_102470f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102470e34(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102470fd4; end: 102470fdb;  */

void FUN_102470fd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 102470fdc; end: 102470fff;  */

undefined8 FUN_102470fdc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102471000; end: 10247105f; -[_TtC22ChatCameraPageLauncher26ChatCameraPageLaunchPlugin init] */

void FUN_102471000(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraPageLauncher.ChatCameraPageLaunchPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10247102c);
  (*pcVar1)();
}



/* Entry: 102471060; end: 10247106f; -[_TtC22ChatCameraPageLauncher26ChatCameraPageLaunchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9c6b0));
  return;
}



/* Entry: 102471070; end: 1024710ff; -[_TtC22ChatCameraPageLauncher26ChatCameraPageLaunchPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112e9c6b0);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102471100; end: 102471103; -[_TtC22ChatCameraPageLauncher26ChatCameraPageLaunchPlugin setNativePayloadHandlers:] */

void FUN_102471100(void)

{
  return;
}



/* Entry: 102471104; end: 102471183;  */

void FUN_102471104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_11050d288;
  func_0x000107c613fc(&UNK_11050d288,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102471258,puVar1);
  return;
}



/* Entry: 102471184; end: 102471257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471184(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  pplVar7 = &plStack_60;
  lVar2 = 0;
  FUN_102470e14();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112e9c680,0);
  *(undefined8 *)(lVar3 + _DAT_112e9c670) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e9c678) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  plVar5 = plVar4;
  FUN_102471260();
  plVar6 = plVar5;
  func_0x000107c610f8();
  *(long **)((long)plVar6 + _DAT_112e9c6b0) = plVar4;
  plStack_60 = plVar6;
  plStack_58 = plVar5;
  func_0x000107c61154(&plStack_60,PTR_s_init_1125d9248);
  *param_1 = pplVar7;
  return;
}



/* Entry: 102471258; end: 10247125f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471258(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  long unaff_x20;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pplVar9 = &plStack_60;
  lVar4 = 0;
  FUN_102470e14();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112e9c680,0);
  *(undefined8 *)(lVar5 + _DAT_112e9c670) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e9c678) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  plVar6 = &lStack_50;
  func_0x000107c61154(plVar6,puVar3);
  plVar7 = plVar6;
  FUN_102471260();
  plVar8 = plVar7;
  func_0x000107c610f8();
  *(long **)((long)plVar8 + _DAT_112e9c6b0) = plVar6;
  plStack_60 = plVar8;
  plStack_58 = plVar7;
  func_0x000107c61154(&plStack_60,PTR_s_init_1125d9248);
  *param_1 = pplVar9;
  return;
}



/* Entry: 102471260; end: 10247127f;  */

void FUN_102471260(void)

{
  func_0x000107c61168(&PTR_PTR_1128435a8);
  return;
}



/* Entry: 102471280; end: 10247128f;  */

undefined1  [16] FUN_102471280(void)

{
  return ZEXT816(0x11050d2b0);
}



/* Entry: 102471290; end: 1024712a7; -[SCLegacyLiveLensPreviewPageLauncherHandler payloadClass] */

void FUN_102471290(void)

{
  FUN_102cf4070(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024712a8; end: 1024712ab; -[SCLegacyLiveLensPreviewPageLauncherHandler setPayloadClass:] */

void FUN_1024712a8(void)

{
  return;
}



/* Entry: 1024712ac; end: 102471327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024712ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112e9c6e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9c6e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c6f0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102471328; end: 10247166b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471328(undefined8 param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000bb420(param_1,&puStack_80);
  uVar3 = 0;
  FUN_102cf4070(0);
  ppuVar4 = apuStack_98;
  func_0x000107c6147c(ppuVar4,&puStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
  lVar1 = _DAT_112f0d288;
  if ((int)ppuVar4 == 0) {
    if (param_2 == (code *)0x0) {
      return;
    }
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    (*param_2)(0,&puStack_80);
    goto LAB_102471614;
  }
  func_0x000107c61428(apuStack_98[0] + _DAT_112f0d288,apuStack_98,0,0);
  puVar5 = apuStack_98[0] + lVar1;
  func_0x000107c61618();
  lVar1 = _DAT_112f0d2b0;
  if (puVar5 == (undefined *)0x0) {
LAB_1024715c8:
    if (param_2 == (code *)0x0) {
      func_0x000107c61170(apuStack_98[0]);
      return;
    }
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c466bc();
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    (*param_2)();
  }
  else {
    func_0x000107c61428(apuStack_98[0] + _DAT_112f0d2b0,auStack_b0,0,0);
    puVar6 = apuStack_98[0] + lVar1;
    func_0x000107c61618();
    lVar1 = _DAT_112e9c6e0;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170(puVar5);
      goto LAB_1024715c8;
    }
    func_0x000107c61604(unaff_x20 + _DAT_112e9c6e0,0);
    uVar11 = *(ulong *)(unaff_x20 + _DAT_112e9c6f0);
    uVar7 = uVar11;
    func_0x000107c4b6dc();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c49f74();
    func_0x000107c61170(uVar7);
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar11;
      func_0x000107c4b6dc(uVar11);
      func_0x000107c61180();
      func_0x000107c4283c();
      func_0x000107c61170(uVar7);
    }
    lVar2 = _DAT_112f0d2b8;
    func_0x000107c61428(apuStack_98[0] + _DAT_112f0d2b8,auStack_c8,0,0);
    puVar9 = apuStack_98[0] + lVar2;
    func_0x000107c61618(puVar9);
    func_0x000107c61604(unaff_x20 + lVar1,puVar9);
    func_0x000107c615e8(puVar9);
    uVar3 = *(undefined8 *)(apuStack_98[0] + _DAT_112f0d290);
    uVar13 = *(undefined8 *)(apuStack_98[0] + _DAT_112f0d298);
    uVar10 = *(undefined8 *)(apuStack_98[0] + _DAT_112f0d2a0);
    uVar12 = *(undefined8 *)(apuStack_98[0] + _DAT_112f0d2a8);
    func_0x000107c615f0(uVar13);
    func_0x000107c61174(uVar3);
    puVar9 = puVar5;
    func_0x0001043157f4(puVar5,uVar3,uVar13,uVar10,uVar12,puVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar13);
    func_0x000107c4b6dc(uVar11);
    func_0x000107c61180();
    func_0x000107c4ab34();
    func_0x000107c61170(uVar11);
    if (param_2 == (code *)0x0) {
      func_0x000107c61170(apuStack_98[0]);
      func_0x000107c615e8(puVar6);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar5);
      return;
    }
    uVar3 = 0;
    func_0x000100370c0c();
    puStack_80 = puVar9;
    uStack_68 = uVar3;
    func_0x000107c61174(puVar9);
    (*param_2)(0,&puStack_80);
    func_0x000107c61170(apuStack_98[0]);
    func_0x000107c615e8(puVar6);
    apuStack_98[0] = puVar9;
  }
  func_0x000107c61170(apuStack_98[0]);
  func_0x000107c61170(puVar5);
LAB_102471614:
  func_0x00010006e7f4(&puStack_80);
  return;
}



/* Entry: 10247166c; end: 10247172b; -[SCLegacyLiveLensPreviewPageLauncherHandler launchWithPayload:completion:] */

void FUN_10247166c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11050d378;
    func_0x000107c613fc(&UNK_11050d378,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_102471950;
  }
  FUN_102471328(auStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10247172c; end: 10247178b; -[SCLegacyLiveLensPreviewPageLauncherHandler init] */

void FUN_10247172c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLegacyLiveLensPreviewPageLauncher.LegacyLiveLensPreviewPageLauncherHandler"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102471758);
  (*pcVar1)();
}


