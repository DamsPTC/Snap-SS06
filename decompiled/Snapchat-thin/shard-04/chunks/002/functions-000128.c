/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031ac0a4; end: 1031ac0ab;  */

undefined8 FUN_1031ac0a4(void)

{
  return 1;
}



/* Entry: 1031ac0ac; end: 1031ac14b;  */

void FUN_1031ac0ac(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031ac14c; end: 1031ac15f;  */

void FUN_1031ac14c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1031ac160; end: 1031ac19f;  */

void FUN_1031ac160(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f48948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db959a0;
  func_0x000107c61520(&UNK_10db959a0,&UNK_11061aad0);
  puRam0000000112f48948 = puVar1;
  return;
}



/* Entry: 1031ac1a0; end: 1031ac1d3;  */

undefined8 FUN_1031ac1a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1031abc80(param_2,param_1,&UNK_11061a920);
  return param_2;
}



/* Entry: 1031ac1d4; end: 1031ac1e3;  */

void FUN_1031ac1d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_11061aa10;
  func_0x000107c613fc(&UNK_11061aa10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  pcStack_50 = FUN_1031ac1e4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100ab47f8;
  puStack_58 = &UNK_11061aa28;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c3eb04(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1031ac1e4; end: 1031ac217;  */

void FUN_1031ac1e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fca0();
  func_0x000107c43b74(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031ac218; end: 1031ac307;  */

uint FUN_1031ac218(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1031ac308; end: 1031ac347;  */

void FUN_1031ac308(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f48950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db95978;
  func_0x000107c61520(&UNK_10db95978,&UNK_11061aad0);
  puRam0000000112f48950 = puVar1;
  return;
}



/* Entry: 1031ac348; end: 1031ac357;  */

void FUN_1031ac348(long param_1,long param_2)

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



/* Entry: 1031ac358; end: 1031ac3bb; -[_TtC24ConvoSafetyPromptFeature17CSPViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ac358(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f48990) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ConvoSafetyPromptFeature/CSPViewController.swift",0x30,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ac3bc);
  (*pcVar1)();
}



/* Entry: 1031ac3bc; end: 1031ac5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ac3bc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_loadView_112604be0);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f48990);
  if (lVar4 != 0) {
    func_0x000107c41408();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f48970);
    func_0x000107c4c1e4(uVar5);
    func_0x000107c61180();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f48958);
    uVar7 = *puVar1;
    uVar2 = puVar1[1];
    uVar10 = puVar1[2];
    uVar3 = puVar1[3];
    lVar11 = puVar1[5];
    lVar12 = puVar1[7];
    puVar6 = PTR_PTR_1126acd50;
    func_0x000107c610f8(PTR_PTR_1126acd50);
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c5fadc(uVar10,uVar3);
    func_0x000107c48ed4((double)lVar11,(double)lVar12,puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar10);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f48960);
    uVar7 = uVar10;
    func_0x000107c5d984(uVar10);
    func_0x000107c61180();
    func_0x000107c57234(puVar6);
    func_0x000107c61170(uVar7);
    func_0x00010795e2c8(uVar10);
    func_0x000107c311a0();
    func_0x000107c61180();
    func_0x000107c54cac(puVar6);
    func_0x000107c61170(uVar10);
    puVar8 = PTR_PTR_1126acd58;
    func_0x000107c610f8(PTR_PTR_1126acd58);
    func_0x000107c46404();
    puVar9 = PTR_PTR_1126acd60;
    func_0x000107c610f8(PTR_PTR_1126acd60);
    func_0x000107c49520();
    func_0x000107c5a568();
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 1031ac5e4; end: 1031ac60b; -[_TtC24ConvoSafetyPromptFeature17CSPViewController loadView] */

void FUN_1031ac5e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031ac3bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031ac60c; end: 1031ac66b; -[_TtC24ConvoSafetyPromptFeature17CSPViewController initWithNibName:bundle:] */

void FUN_1031ac60c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConvoSafetyPromptFeature.CSPViewController",0x2a,"init(nibName:bundle:)",0x15
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ac638);
  (*pcVar1)();
}



/* Entry: 1031ac66c; end: 1031ac72b; -[_TtC24ConvoSafetyPromptFeature17CSPViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031ac6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ac6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ac70c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ac6f0) */
/* WARNING: Removing unreachable block (ram,0x0001031ac6d0) */
/* WARNING: Removing unreachable block (ram,0x0001031ac710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ac66c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + _DAT_112f48958;
  uVar4 = *(undefined8 *)(lVar1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c6142c(uVar4);
  func_0x00010006c090(uVar2,uVar3);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48960));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f48968));
  return;
}



/* Entry: 1031ac72c; end: 1031ac74b;  */

void FUN_1031ac72c(void)

{
  func_0x000107c61168(&PTR_PTR_1128bec50);
  return;
}



/* Entry: 1031ac74c; end: 1031ac847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ac74c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f48990) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f48958);
  uVar3 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar3;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = param_1[8];
  puVar1[9] = param_1[9];
  puVar1[8] = uVar3;
  puVar1[10] = param_1[10];
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(undefined8 *)(lVar2 + _DAT_112f48960) = param_2;
  *(undefined8 *)(lVar2 + _DAT_112f48968) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112f48970) = param_4;
  *(undefined8 *)(lVar2 + _DAT_112f48978) = param_5;
  *(undefined8 *)(lVar2 + _DAT_112f48980) = param_6;
  *(undefined8 *)(lVar2 + _DAT_112f48988) = param_7;
  lStack_60 = lVar2;
  lStack_58 = param_8;
  func_0x000107c61154(&lStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 1031ac848; end: 1031ac8e7;  */

undefined *
FUN_1031ac848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c03b0;
  func_0x000107c61168(PTR_PTR_1126c03b0);
  func_0x000107c614e8(param_5);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c3cac8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1031ac8e8; end: 1031acb2f;  */

void FUN_1031ac8e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar3 = 0x112d393f0;
  uStack_98 = param_1;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0;
  func_0x000107c606cc(0,param_8,uVar3,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR_PTR_1126e0328;
  func_0x000107c610f8(PTR_PTR_1126e0328);
  func_0x000107c453e4();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2);
  }
  func_0x000107c30734(puVar5,param_2);
  func_0x000107c61170(param_2);
  puVar6 = &UNK_11061abd0;
  func_0x000107c613fc(&UNK_11061abd0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_7;
  *(undefined8 *)(puVar6 + 0x18) = param_8;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  puVar7 = &UNK_11061abf8;
  func_0x000107c613fc(&UNK_11061abf8,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = param_7;
  *(undefined8 *)(puVar7 + 0x18) = param_8;
  *(code **)(puVar7 + 0x20) = FUN_1031acb30;
  *(undefined **)(puVar7 + 0x28) = puVar6;
  pcStack_70 = FUN_1031acb3c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1031acb5c;
  puStack_78 = &UNK_11061ac10;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000100589538(param_6,puVar5,ppuVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar5);
  puVar5 = puVar7;
  func_0x000107c61544(puVar7,"",0x39,0x5d,0x1a,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_1031acbec(auStack_a0 + -extraout_x8,param_6,param_8);
    func_0x000107c61170(param_6);
    FUN_1031acf04(uStack_98,lVar4,&puStack_90);
    func_0x000107c61574(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031acb30);
  (*pcVar2)();
}



/* Entry: 1031acb30; end: 1031acb3b;  */

void FUN_1031acb30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0x112d393f0;
  uStack_50 = param_2;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  uVar3 = 0;
  func_0x000107c606cc(0,uVar4,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x0001000a9d90(param_1);
  func_0x000100b6089c(param_1,0x1031ae318,auStack_80,uVar4,uVar2,puVar1);
  return;
}



/* Entry: 1031acb3c; end: 1031acb5b;  */

void FUN_1031acb3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Entry: 1031acb5c; end: 1031acbcf;  */

void FUN_1031acb5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_50,param_2);
  func_0x000107c615e8(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1031acbd0; end: 1031acbeb;  */

void FUN_1031acbd0(long param_1,long param_2)

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



/* Entry: 1031acbec; end: 1031acf03;  */

void FUN_1031acbec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar5 = 0x112d393f0;
  uStack_c8 = param_1;
  uStack_a8 = param_2;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar6 = 0xff;
  func_0x000107c606cc(0xff,param_3,uVar5,PTR___ss5ErrorWS_11034ee10);
  lVar7 = 0;
  func_0x000107c60188(0,lVar6);
  lStack_b8 = *(long *)(lVar7 + -8);
  lStack_b0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  puVar15 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)puVar15 - extraout_x12;
  lStack_c0 = *(long *)(lVar6 + -8);
  (**(code **)(lStack_c0 + 0x38))(lVar16,1,1,lVar6);
  puVar8 = &UNK_11061afd0;
  func_0x000107c613fc(&UNK_11061afd0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_3;
  *(long *)(puVar8 + 0x18) = lVar16;
  puVar9 = &UNK_11061aff8;
  func_0x000107c613fc(&UNK_11061aff8,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_1031ae234;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1031ae32c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1019d0744;
  puStack_88 = &UNK_11061b010;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar11 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_11061b048;
  func_0x000107c613fc(&UNK_11061b048,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = param_3;
  *(long *)(puVar11 + 0x18) = lVar16;
  puVar12 = &UNK_11061b070;
  func_0x000107c613fc(&UNK_11061b070,0x20,7);
  *(code **)(puVar12 + 0x10) = FUN_1031ae23c;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  pcStack_80 = FUN_1031ae32c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11061b088;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar12);
  lVar2 = lStack_b8;
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uStack_a8);
  lVar7 = lStack_c0;
  func_0x000107c60bd0(ppuVar13);
  lVar3 = lStack_b0;
  func_0x000107c60bd0(ppuVar10);
  (**(code **)(lVar2 + 0x10))(puVar15,lVar16,lVar3);
  puVar14 = puVar15;
  (**(code **)(lVar7 + 0x30))(puVar15,1,lVar6);
  if ((int)puVar14 == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1031acf04);
    (*pcVar4)();
  }
  (**(code **)(lVar7 + 0x20))(uStack_c8,puVar15,lVar6);
  (**(code **)(lVar2 + 8))(lVar16,lVar3);
  func_0x000107c61574(puVar8);
  puVar8 = puVar9;
  func_0x000107c61544(puVar9,"",0x39,0xe5,0x19,1);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = puVar12;
    func_0x000107c61544(puVar12,"",0x39,0xec,0x10,1);
    func_0x000107c61574(puVar12);
    if (((ulong)puVar8 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1031acf00);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1031acefc);
  (*pcVar4)();
}



/* Entry: 1031acf04; end: 1031acfe3;  */

void FUN_1031acf04(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  undefined1 *puVar3;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x20))(puVar3);
  puVar1 = puVar3;
  func_0x000107c614c4(puVar3,param_2);
  if ((int)puVar1 == 1) {
    lVar2 = *(long *)(param_2 + 0x18);
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_3,puVar3,lVar2);
    FUN_1031ade78(param_3,lVar2,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x20))(param_1,puVar3);
  }
  return;
}



/* Entry: 1031acfe4; end: 1031ad22b;  */

void FUN_1031acfe4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar3 = 0x112d393f0;
  uStack_98 = param_1;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0;
  func_0x000107c606cc(0,param_8,uVar3,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR_PTR_1126e0328;
  func_0x000107c610f8(PTR_PTR_1126e0328);
  func_0x000107c453e4();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2);
  }
  func_0x000107c30734(puVar5,param_2);
  func_0x000107c61170(param_2);
  puVar6 = &UNK_11061ac48;
  func_0x000107c613fc(&UNK_11061ac48,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_7;
  *(undefined8 *)(puVar6 + 0x18) = param_8;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  puVar7 = &UNK_11061ac70;
  func_0x000107c613fc(&UNK_11061ac70,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = param_7;
  *(undefined8 *)(puVar7 + 0x18) = param_8;
  *(code **)(puVar7 + 0x20) = FUN_1031ad22c;
  *(undefined **)(puVar7 + 0x28) = puVar6;
  uStack_70 = 0x1031ae2e8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1031acb5c;
  puStack_78 = &UNK_11061ac88;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c3074c(param_6,puVar5,ppuVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar5);
  puVar5 = puVar7;
  func_0x000107c61544(puVar7,"",0x39,0x71,0x1a,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_1031acbec(auStack_a0 + -extraout_x8,param_6,param_8);
    func_0x000107c61170(param_6);
    FUN_1031acf04(uStack_98,lVar4,&puStack_90);
    func_0x000107c61574(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031ad22c);
  (*pcVar2)();
}



/* Entry: 1031ad22c; end: 1031ad237;  */

void FUN_1031ad22c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0x112d393f0;
  uStack_50 = param_2;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  uVar3 = 0;
  func_0x000107c606cc(0,uVar4,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x0001000a9d90(param_1);
  func_0x000100b6089c(param_1,0x1031ae304,auStack_80,uVar4,uVar2,puVar1);
  return;
}



/* Entry: 1031ad238; end: 1031ad2db;  */

void FUN_1031ad238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0x112d393f0;
  uStack_50 = param_2;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  uVar3 = 0;
  func_0x000107c606cc(0,uVar4,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x0001000a9d90(param_1);
  func_0x000100b6089c(param_1,param_3,auStack_80,uVar4,uVar2,puVar1);
  return;
}



/* Entry: 1031ad2dc; end: 1031ad35b;  */

void FUN_1031ad2dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1031ad35c; end: 1031ad377;  */

void FUN_1031ad35c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSQLiteSwift.SQLAsyncResult",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031adef8);
  (*pcVar1)();
}



/* Entry: 1031ad378; end: 1031ad3ab;  */

void FUN_1031ad378(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031ad3ac; end: 1031ad423;  */

void FUN_1031ad3ac(ulong *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x50);
  lVar2 = *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x58);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0;
  func_0x000107c606cc(0,uVar1,uVar3,PTR___ss5ErrorWS_11034ee10);
                    /* WARNING: Could not recover jumptable at 0x0001031ad420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 8))((long)param_1 + lVar2,lVar4);
  return;
}



/* Entry: 1031ad424; end: 1031ad6df;  */

void FUN_1031ad424(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined auStack_e0 [16];
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126e0328;
  func_0x000107c610f8(PTR_PTR_1126e0328);
  func_0x000107c453e4();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  func_0x000107c30734(puVar2,param_1);
  func_0x000107c61170(param_1);
  puVar7 = &UNK_11061acc0;
  func_0x000107c613fc(&UNK_11061acc0,0x30,7);
  *(code **)(puVar7 + 0x10) = param_8;
  *(undefined **)(puVar7 + 0x18) = param_9;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  *(undefined8 *)(puVar7 + 0x28) = param_4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1031adef8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1031ad2dc;
  puStack_88 = &UNK_11061acd8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar3);
  puVar7 = puStack_78;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar7);
  if (param_5 == 0) {
    uVar8 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &UNK_11061ad60;
    func_0x000107c613fc(&UNK_11061ad60,0x30,7);
    *(code **)(puVar7 + 0x10) = param_8;
    *(undefined **)(puVar7 + 0x18) = param_9;
    *(long *)(puVar7 + 0x20) = param_5;
    *(undefined8 *)(puVar7 + 0x28) = param_6;
    uVar8 = 0x1031adfd8;
  }
  puStack_c8 = param_9;
  puStack_88 = param_9;
  puStack_78 = auStack_e0;
  pcStack_80 = FUN_1031adf04;
  pcStack_d0 = param_8;
  uStack_c0 = uVar8;
  puStack_b8 = puVar7;
  pcStack_90 = param_8;
  FUN_1031adf88(param_5,param_6);
  uVar5 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar4 = 0xff;
  func_0x000107c606cc(0xff,param_9,uVar5,PTR___ss5ErrorWS_11034ee10);
  uVar5 = 0x44000001;
  func_0x000107c614d8(0x44000001,uVar4,PTR___sytN_11034f1b0 + 8);
  uVar4 = 0;
  func_0x000107c60188(0,uVar5);
  uVar5 = 0x112f489c0;
  func_0x0001000285a8(0x112f489c0,&UNK_10db959f8);
  func_0x000101889bb8(&lStack_b0,FUN_1031adf68,&puStack_a0,uVar4,PTR___ss5NeverON_11034ee88,uVar5,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x0001031adf98(uVar8,puVar7);
  ppuVar6 = (undefined **)0x0;
  if (lStack_b0 != 0) {
    puVar7 = &UNK_11061ad10;
    func_0x000107c613fc(&UNK_11061ad10,0x20,7);
    *(long *)(puVar7 + 0x10) = lStack_b0;
    *(undefined8 *)(puVar7 + 0x18) = uStack_a8;
    pcStack_80 = FUN_1031adfa8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1031ad7a4;
    puStack_88 = &UNK_11061ad28;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
  }
  func_0x000107c30750(param_7,puVar2,ppuVar3,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1031ad6e0; end: 1031ad7a3;  */

void FUN_1031ad6e0(undefined8 *param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11061af58;
  func_0x000107c613fc(&UNK_11061af58,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  uVar2 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  func_0x000107c6157c(uVar2);
  pcVar3 = FUN_1031ae120;
  puVar4 = puVar1;
  (*param_3)();
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11061af80;
  func_0x000107c613fc(&UNK_11061af80,0x20,7);
  *(code **)(puVar1 + 0x10) = pcVar3;
  *(undefined **)(puVar1 + 0x18) = puVar4;
  *param_1 = 0x1031ae140;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1031ad7a4; end: 1031ad7ef;  */

void FUN_1031ad7a4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1031ad7f0; end: 1031adaab;  */

void FUN_1031ad7f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined auStack_e0 [16];
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126e0328;
  func_0x000107c610f8(PTR_PTR_1126e0328);
  func_0x000107c453e4();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  func_0x000107c30734(puVar2,param_1);
  func_0x000107c61170(param_1);
  puVar7 = &UNK_11061ad88;
  func_0x000107c613fc(&UNK_11061ad88,0x30,7);
  *(code **)(puVar7 + 0x10) = param_8;
  *(undefined **)(puVar7 + 0x18) = param_9;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  *(undefined8 *)(puVar7 + 0x28) = param_4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1031adff8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1031ad2dc;
  puStack_88 = &UNK_11061ada0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar3);
  puVar7 = puStack_78;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar7);
  if (param_5 == 0) {
    uVar8 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &UNK_11061ae28;
    func_0x000107c613fc(&UNK_11061ae28,0x30,7);
    *(code **)(puVar7 + 0x10) = param_8;
    *(undefined **)(puVar7 + 0x18) = param_9;
    *(long *)(puVar7 + 0x20) = param_5;
    *(undefined8 *)(puVar7 + 0x28) = param_6;
    uVar8 = 0x1031ae2ec;
  }
  puStack_c8 = param_9;
  puStack_88 = param_9;
  puStack_78 = auStack_e0;
  pcStack_80 = FUN_1031ae004;
  pcStack_d0 = param_8;
  uStack_c0 = uVar8;
  puStack_b8 = puVar7;
  pcStack_90 = param_8;
  FUN_1031adf88(param_5,param_6);
  uVar5 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar4 = 0xff;
  func_0x000107c606cc(0xff,param_9,uVar5,PTR___ss5ErrorWS_11034ee10);
  uVar5 = 0x44000001;
  func_0x000107c614d8(0x44000001,uVar4,PTR___sytN_11034f1b0 + 8);
  uVar4 = 0;
  func_0x000107c60188(0,uVar5);
  uVar5 = 0x112f489c0;
  func_0x0001000285a8(0x112f489c0,&UNK_10db959f8);
  func_0x000101889bb8(&lStack_b0,FUN_1031ae334,&puStack_a0,uVar4,PTR___ss5NeverON_11034ee88,uVar5,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x0001031adf98(uVar8,puVar7);
  ppuVar6 = (undefined **)0x0;
  if (lStack_b0 != 0) {
    puVar7 = &UNK_11061add8;
    func_0x000107c613fc(&UNK_11061add8,0x20,7);
    *(long *)(puVar7 + 0x10) = lStack_b0;
    *(undefined8 *)(puVar7 + 0x18) = uStack_a8;
    pcStack_80 = (code *)0x1031ae2c8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1031ad7a4;
    puStack_88 = &UNK_11061adf0;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
  }
  func_0x000107c30754(param_7,puVar2,ppuVar3,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1031adaac; end: 1031adb6f;  */

void FUN_1031adaac(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c606cc(0,param_4,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  FUN_1031acbec(puVar3,param_1,param_4);
  (*param_2)(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 1031adb70; end: 1031adb7f;  */

void FUN_1031adb70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1031adb80; end: 1031add63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1031adb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_60 [2];
  
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0xff;
  func_0x000107c606cc(0xff,param_3,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)alStack_60 - extraout_x8);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  if (param_1 != 0) {
    alStack_60[1] = param_1;
    func_0x000107c615f0();
    lVar4 = lVar9;
    func_0x000107c6147c(lVar9,alStack_60 + 1,PTR___syXlN_11034f1a0 + 8,lVar2,0);
    if ((int)lVar4 != 0) {
      pcVar7 = *(code **)(lVar11 + 0x20);
      (*pcVar7)(lVar8,lVar9,lVar2);
      (**(code **)(lVar10 + 8))(param_2,lVar3);
      (*pcVar7)(param_2,lVar8,lVar2);
      (**(code **)(lVar11 + 0x38))(param_2,0,1,lVar2);
      func_0x000107c615e8(alStack_60[1]);
      return;
    }
    param_1 = alStack_60[1];
    func_0x000107c615e8(alStack_60[1]);
  }
  func_0x0001031ae1f4();
  puVar5 = &UNK_11061b0c0;
  func_0x000107c613f8(&UNK_11061b0c0,param_1,0,0);
  *puVar6 = puVar5;
  func_0x000107c6159c(puVar6,lVar2,1);
  (**(code **)(lVar11 + 0x38))(puVar6,0,1,lVar2);
  (**(code **)(lVar10 + 0x28))(param_2,puVar6,lVar3);
  return;
}



/* Entry: 1031add64; end: 1031ade77;  */

void FUN_1031add64(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0xff;
  func_0x000107c606cc(0xff,param_3,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar7 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  puVar5 = param_1;
  if (param_1 == (undefined *)0x0) {
    FUN_1031ae1b4();
    puVar5 = &UNK_11061b0e0;
    func_0x000107c613f8(&UNK_11061b0e0,lVar4,0,0);
  }
  *puVar6 = puVar5;
  func_0x000107c6159c(puVar6,lVar2,1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,0,1,lVar2);
  func_0x000107c614b0(param_1);
  (**(code **)(lVar7 + 0x28))(param_2,puVar6,lVar3);
  return;
}



/* Entry: 1031ade78; end: 1031adecb;  */

void FUN_1031ade78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    func_0x000107c61658(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 1031adecc; end: 1031adef7;  */

void FUN_1031adecc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSQLiteSwift.SQLAsyncResult",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031adef8);
  (*pcVar1)();
}



/* Entry: 1031adef8; end: 1031adf03;  */

void FUN_1031adef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0x112d393f0;
  uStack_50 = param_2;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  uVar3 = 0;
  func_0x000107c606cc(0,uVar4,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x0001000a9d90(param_1);
  func_0x000100b6089c(param_1,0x1031ae180,auStack_80,uVar4,uVar2,puVar1);
  return;
}



/* Entry: 1031adf04; end: 1031adf67;  */

undefined1  [16] FUN_1031adf04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = &UNK_11061afa8;
  func_0x000107c613fc(&UNK_11061afa8,0x30,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_2);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = FUN_1031ae164;
  return auVar3;
}



/* Entry: 1031adf68; end: 1031adf87;  */

void FUN_1031adf68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1031ad6e0(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2);
  return;
}



/* Entry: 1031adf88; end: 1031adfa7;  */

void FUN_1031adf88(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1031adfa8; end: 1031adff7;  */

void FUN_1031adfa8(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return;
}



/* Entry: 1031adff8; end: 1031ae003;  */

void FUN_1031adff8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0x112d393f0;
  uStack_50 = param_2;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  uVar3 = 0;
  func_0x000107c606cc(0,uVar4,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x0001000a9d90(param_1);
  func_0x000100b6089c(param_1,FUN_1031ae2f0,auStack_80,uVar4,uVar2,puVar1);
  return;
}



/* Entry: 1031ae004; end: 1031ae067;  */

undefined1  [16] FUN_1031ae004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = &UNK_11061af30;
  func_0x000107c613fc(&UNK_11061af30,0x30,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_2);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = 0x1031ae358;
  return auVar3;
}



/* Entry: 1031ae068; end: 1031ae07f;  */

void FUN_1031ae068(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1031ae080; end: 1031ae113;  */

void FUN_1031ae080(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0x13f;
  func_0x000107c606cc(0x13f,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  if (uVar3 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x58);
  }
  return;
}



/* Entry: 1031ae114; end: 1031ae11f;  */

void FUN_1031ae114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e74daec);
  return;
}



/* Entry: 1031ae120; end: 1031ae163;  */

void FUN_1031ae120(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Entry: 1031ae164; end: 1031ae193;  */

void FUN_1031ae164(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031adaac(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1031ae194; end: 1031ae1b3;  */

void FUN_1031ae194(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031ae1b4; end: 1031ae233;  */

void FUN_1031ae1b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011350f2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db95ad4;
  func_0x000107c61520(&UNK_10db95ad4,&UNK_11061b0e0);
  puRam000000011350f2e0 = puVar1;
  return;
}



/* Entry: 1031ae234; end: 1031ae23b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1031ae234(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_60 [2];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0xff;
  func_0x000107c606cc(0xff,uVar1,uVar3,PTR___ss5ErrorWS_11034ee10);
  lVar5 = 0;
  func_0x000107c60188(0,lVar4);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)alStack_60 - extraout_x8);
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  if (param_1 != 0) {
    alStack_60[1] = param_1;
    func_0x000107c615f0();
    lVar6 = lVar11;
    func_0x000107c6147c(lVar11,alStack_60 + 1,PTR___syXlN_11034f1a0 + 8,lVar4,0);
    if ((int)lVar6 != 0) {
      pcVar9 = *(code **)(lVar13 + 0x20);
      (*pcVar9)(lVar10,lVar11,lVar4);
      (**(code **)(lVar12 + 8))(uVar2,lVar5);
      (*pcVar9)(uVar2,lVar10,lVar4);
      (**(code **)(lVar13 + 0x38))(uVar2,0,1,lVar4);
      func_0x000107c615e8(alStack_60[1]);
      return;
    }
    param_1 = alStack_60[1];
    func_0x000107c615e8(alStack_60[1]);
  }
  func_0x0001031ae1f4();
  puVar7 = &UNK_11061b0c0;
  func_0x000107c613f8(&UNK_11061b0c0,param_1,0,0);
  *puVar8 = puVar7;
  func_0x000107c6159c(puVar8,lVar4,1);
  (**(code **)(lVar13 + 0x38))(puVar8,0,1,lVar4);
  (**(code **)(lVar12 + 0x28))(uVar2,puVar8,lVar5);
  return;
}



/* Entry: 1031ae23c; end: 1031ae253;  */

void FUN_1031ae23c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031add64(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1031ae254; end: 1031ae28b;  */

void FUN_1031ae254(long *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x30));
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Entry: 1031ae28c; end: 1031ae2ef;  */

undefined1  [16] FUN_1031ae28c(void)

{
  return ZEXT816(0x11061b0c0);
}



/* Entry: 1031ae2f0; end: 1031ae32b;  */

void FUN_1031ae2f0(void)

{
  func_0x0001031ae180();
  return;
}



/* Entry: 1031ae32c; end: 1031ae333;  */

void FUN_1031ae32c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031ae334; end: 1031ae347;  */

void FUN_1031ae334(void)

{
  FUN_1031adf68();
  return;
}



/* Entry: 1031ae348; end: 1031ae35f;  */

void FUN_1031ae348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1031ae360; end: 1031ae403;  */

void FUN_1031ae360(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1031b0afc();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1031ae404; end: 1031ae41b;  */

void FUN_1031ae404(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1031ae41c; end: 1031ae45b;  */

void FUN_1031ae41c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f48aa0;
  func_0x0001000285a8(0x112f48aa0,&UNK_10db95b28);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ae45c; end: 1031ae477;  */

void FUN_1031ae45c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1031ae478; end: 1031ae4fb;  */

void FUN_1031ae478(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031ae4fc; end: 1031ae51f;  */

void FUN_1031ae4fc(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 1031ae520; end: 1031ae567;  */

void FUN_1031ae520(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db96780,0x37,2);
  uRam0000000113806f30 = uStack_38;
  uRam0000000113806f28 = uStack_40;
  uRam0000000113806f40 = uStack_28;
  uRam0000000113806f38 = uStack_30;
  uRam0000000113806f50 = uStack_18;
  uRam0000000113806f48 = uStack_20;
  return;
}



/* Entry: 1031ae568; end: 1031ae607;  */

/* WARNING: Possible PIC construction at 0x0001031ae5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ae5c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ae5b8) */
/* WARNING: Removing unreachable block (ram,0x0001031ae5c8) */

void FUN_1031ae568(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f48aa8 != -1) {
    func_0x000107c61568(0x112f48aa8,FUN_1031ae520);
  }
  uVar5 = uRam0000000113806f50;
  uVar4 = uRam0000000113806f48;
  uVar3 = uRam0000000113806f40;
  uVar2 = uRam0000000113806f38;
  uVar1 = uRam0000000113806f30;
  *param_1 = uRam0000000113806f28;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1031ae608; end: 1031ae64f;  */

void FUN_1031ae608(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db96750,0x25,2);
  uRam0000000113806f60 = uStack_38;
  uRam0000000113806f58 = uStack_40;
  uRam0000000113806f70 = uStack_28;
  uRam0000000113806f68 = uStack_30;
  uRam0000000113806f80 = uStack_18;
  uRam0000000113806f78 = uStack_20;
  return;
}



/* Entry: 1031ae650; end: 1031ae723;  */

/* WARNING: Removing unreachable block (ram,0x0001031ae720) */

void FUN_1031ae650(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x178))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_1031b0b08();
        (*pcVar4)(unaff_x20 + 8,&UNK_11061b760,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1031ae724; end: 1031ae7e3;  */

void FUN_1031ae724(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar1 = *unaff_x20;
  if ((*(long *)(lVar1 + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x108))(lVar1,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[1] != 0) {
      uStack_48 = (undefined1)unaff_x20[2];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[1];
      FUN_1031b0b08();
      (*pcVar2)(&lStack_50,2,&UNK_11061b760,lVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 1031ae7e4; end: 1031ae83f;  */

void FUN_1031ae7e4(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 1031ae840; end: 1031ae867;  */

void FUN_1031ae840(void)

{
  FUN_1031ae650();
  return;
}



/* Entry: 1031ae868; end: 1031ae89f;  */

uint FUN_1031ae868(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001031b2798();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1031ae8a0; end: 1031ae8e7;  */

uint FUN_1031ae8a0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  func_0x0001031b0cc0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1031ae8e8; end: 1031ae987;  */

/* WARNING: Possible PIC construction at 0x0001031ae934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ae944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ae938) */
/* WARNING: Removing unreachable block (ram,0x0001031ae948) */

void FUN_1031ae8e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f48ab0 != -1) {
    func_0x000107c61568(0x112f48ab0,FUN_1031ae608);
  }
  uVar5 = uRam0000000113806f80;
  uVar4 = uRam0000000113806f78;
  uVar3 = uRam0000000113806f70;
  uVar2 = uRam0000000113806f68;
  uVar1 = uRam0000000113806f60;
  *param_1 = uRam0000000113806f58;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1031ae988; end: 1031ae99b;  */

void FUN_1031ae988(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f48c90;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f48c90,&UNK_10db965f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1031ae99c; end: 1031aeaaf;  */

void FUN_1031ae99c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = unaff_x20[1];
  uStack_48 = *(undefined1 *)(unaff_x20 + 2);
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031aeab0; end: 1031aeb3f;  */

uint FUN_1031aeab0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  func_0x0001031b0cc0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1031aeb40; end: 1031aebdf;  */

/* WARNING: Possible PIC construction at 0x0001031aeb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aeb9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031aeb90) */
/* WARNING: Removing unreachable block (ram,0x0001031aeba0) */

void FUN_1031aeb40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f48ac8 != -1) {
    func_0x000107c61568(0x112f48ac8,0x1031aeaf8);
  }
  uVar5 = uRam0000000113806fb0;
  uVar4 = uRam0000000113806fa8;
  uVar3 = uRam0000000113806fa0;
  uVar2 = uRam0000000113806f98;
  uVar1 = uRam0000000113806f90;
  *param_1 = uRam0000000113806f88;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1031aebe0; end: 1031aec27;  */

void FUN_1031aebe0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db966f0,0x2c,2);
  uRam0000000113806fc0 = uStack_38;
  uRam0000000113806fb8 = uStack_40;
  uRam0000000113806fd0 = uStack_28;
  uRam0000000113806fc8 = uStack_30;
  uRam0000000113806fe0 = uStack_18;
  uRam0000000113806fd8 = uStack_20;
  return;
}



/* Entry: 1031aec28; end: 1031aecbf;  */

void FUN_1031aec28(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1031aec7c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001031aec98;
  pcVar3 = *(code **)(param_3 + 0x138);
  goto LAB_1031aec64;
code_r0x0001031aec98:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x60);
LAB_1031aec64:
    (*pcVar3)();
  }
  goto LAB_1031aec7c;
}



/* Entry: 1031aecc0; end: 1031aed57;  */

void FUN_1031aecc0(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((((param_2 & 1) == 0) || ((**(code **)(param_7 + 0x68))(1,1,param_6,param_7), unaff_x21 == 0))
     && ((param_3 == 0 || ((**(code **)(param_7 + 0x20))(param_3,2,param_6,param_7), unaff_x21 == 0)
         ))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 1031aed58; end: 1031aed8f;  */

void FUN_1031aed58(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xc000000000000000;
  return;
}



/* Entry: 1031aed90; end: 1031aedbf;  */

undefined1  [16] FUN_1031aed90(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1031aedc0; end: 1031aedf3;  */

void FUN_1031aedc0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1031aedf4; end: 1031aee07;  */

undefined1  [16] FUN_1031aedf4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1031aee04;
  return auVar1;
}



/* Entry: 1031aee08; end: 1031aee43;  */

void FUN_1031aee08(void)

{
  FUN_1031aec28();
  return;
}



/* Entry: 1031aee44; end: 1031aee47;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1031aee44(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1031aee48; end: 1031aee7f;  */

uint FUN_1031aee48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001031b2758();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1031aee80; end: 1031aeeb3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1031aee80(char *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  char *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 != *unaff_x20 || *(long *)(unaff_x20 + 8) != *(long *)(param_1 + 8)) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(unaff_x20 + 0x10);
  pbVar25 = *(byte **)(unaff_x20 + 0x18);
  lVar24 = *(long *)(param_1 + 0x10);
  uVar16 = *(ulong *)(param_1 + 0x18);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(char **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (char *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(char **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(char **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1031aeeb4; end: 1031aef53;  */

/* WARNING: Possible PIC construction at 0x0001031aef00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aef10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031aef04) */
/* WARNING: Removing unreachable block (ram,0x0001031aef14) */

void FUN_1031aeeb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f48ad0 != -1) {
    func_0x000107c61568(0x112f48ad0,FUN_1031aebe0);
  }
  uVar5 = uRam0000000113806fe0;
  uVar4 = uRam0000000113806fd8;
  uVar3 = uRam0000000113806fd0;
  uVar2 = uRam0000000113806fc8;
  uVar1 = uRam0000000113806fc0;
  *param_1 = uRam0000000113806fb8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1031aef54; end: 1031aef8f;  */

void FUN_1031aef54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f48c80;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f48c80,&UNK_10db965e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1031aef90; end: 1031af0a3;  */

void FUN_1031aef90(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 8);
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031af0a4; end: 1031af0d3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1031af0a4(char *param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 != *param_2 || *(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return (byte *)0x0;
  }
  lVar24 = *(long *)(param_2 + 0x10);
  uVar16 = *(ulong *)(param_2 + 0x18);
  pbVar10 = *(byte **)(param_1 + 0x10);
  pbVar25 = *(byte **)(param_1 + 0x18);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1031af0d4; end: 1031af11b;  */

void FUN_1031af0d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db966c0,0x22,2);
  uRam0000000113806ff0 = uStack_38;
  uRam0000000113806fe8 = uStack_40;
  uRam0000000113807000 = uStack_28;
  uRam0000000113806ff8 = uStack_30;
  uRam0000000113807010 = uStack_18;
  uRam0000000113807008 = uStack_20;
  return;
}


