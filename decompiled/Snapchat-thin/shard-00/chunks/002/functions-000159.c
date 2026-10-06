/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003b3a30; end: 1003b3a73;  */

void FUN_1003b3a30(void)

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



/* Entry: 1003b3a74; end: 1003b3a77;  */

void FUN_1003b3a74(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003b3a78; end: 1003b3aab;  */

void FUN_1003b3a78(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003b3aac; end: 1003b3ac3;  */

void FUN_1003b3aac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b3ac4; end: 1003b3aff;  */

void FUN_1003b3ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b3b00; end: 1003b3b17;  */

void FUN_1003b3b00(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003b3b18; end: 1003b3b7f;  */

void FUN_1003b3b18(long param_1)

{
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = &UNK_10dd381c0;
  puStack_20 = &UNK_10dd381d8;
  puStack_18 = PTR___sBbWV_11034d660 + 0x40;
  puStack_30 = puStack_38;
  func_0x000107c61524(param_1,0,5,&puStack_38,param_1 + 0x58);
  return;
}



/* Entry: 1003b3b80; end: 1003b3d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1003b3b80(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  
  lVar2 = _DAT_113092490;
  puVar5 = &stack0xffffffffffffffb0;
  uVar7 = *unaff_x20;
  uVar8 = *(ulong *)PTR__swift_isaMask_11034f488;
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_113092498);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)unaff_x20 + _DAT_1130924a0) = 0;
  lVar2 = _DAT_1130924a8;
  uVar9 = *(undefined8 *)((uVar8 & uVar7) + 0x50);
  puVar4 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar9);
  uVar3 = uVar9;
  func_0x000107c5f9d8(uVar9,puVar4);
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  *(long **)((long)unaff_x20 + _DAT_1130924b0) = param_1;
  func_0x0001003b3b08(0,uVar9);
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar4);
  puVar4 = &UNK_1107a38a8;
  func_0x000107c613fc(&UNK_1107a38a8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar5);
  puVar6 = &UNK_1107a38d0;
  func_0x000107c613fc(&UNK_1107a38d0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  pcVar10 = *(code **)(*param_1 + 0x60);
  func_0x000107c61174();
  uVar3 = 0x100a99bcc;
  puVar4 = puVar6;
  (*pcVar10)();
  func_0x000107c61574(puVar6);
  func_0x000107c61574(param_1);
  puVar1 = (undefined8 *)(puVar5 + _DAT_113092498);
  uVar9 = *puVar1;
  *puVar1 = uVar3;
  puVar1[1] = puVar4;
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(uVar9);
  return puVar5;
}



/* Entry: 1003b3d1c; end: 1003b3d63;  */

void FUN_1003b3d1c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003b3d64; end: 1003b3de7; -[SCMultiScopeExposerProxy initWithUnderlyingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1003b3d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112703830;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112787cdc;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003b3de8; end: 1003b3e07;  */

void FUN_1003b3de8(void)

{
  func_0x000107c61168(&PTR_PTR_1128afa48);
  return;
}



/* Entry: 1003b3e08; end: 1003b3eeb; -[SCHeaderButtonServiceProvider provide] */

void FUN_1003b3e08(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ce910;
  func_0x000107c610f4(PTR_PTR_1126ce910);
  func_0x000107c46ca4();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003b3eec; end: 1003b3f43; -[_TtC14SCHeaderButton22SCHeaderButtonServices initWithHeaderButtonProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b3eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113083040) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003b3f44; end: 1003b3fa7;  */

void FUN_1003b3f44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003b3fa8; end: 1003b3faf;  */

void FUN_1003b3fa8(long *param_1)

{
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_100083b20(auStack_68);
  FUN_1003b4038();
  func_0x000107c613fc();
  FUN_1000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x10))(uStack_50,lStack_48);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_50;
  func_0x0001000834e4(auStack_68);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003b3fb0; end: 1003b4037;  */

void FUN_1003b3fb0(long *param_1,long param_2)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_100083b20(auStack_68);
  FUN_1003b4038();
  func_0x000107c613fc();
  FUN_1000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x10))(uStack_50,lStack_48);
  *(undefined8 *)(param_2 + 0x10) = uStack_50;
  func_0x0001000834e4(auStack_68);
  *param_1 = param_2;
  return;
}



/* Entry: 1003b4038; end: 1003b4057;  */

void FUN_1003b4038(void)

{
  func_0x000107c61168(&PTR_PTR_112ecb170);
  return;
}



/* Entry: 1003b4058; end: 1003b40b3;  */

long FUN_1003b4058(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x20;
  lVar1 = *(long *)(lVar4 + 0x10);
  lVar2 = lVar1;
  lVar3 = lVar1;
  if (lVar1 == 0) {
    FUN_1000ebcd8();
    lVar1 = 0;
    lVar2 = *(long *)(lVar4 + 0x10);
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar4 + 0x10) = 0;
  func_0x000107c61174(lVar1);
  func_0x000107c61170(lVar2);
  return lVar3;
}



/* Entry: 1003b40b4; end: 1003b40bb;  */

void FUN_1003b40b4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1003b40bc();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1003b40bc; end: 1003b40db;  */

void FUN_1003b40bc(void)

{
  func_0x000107c61168(&PTR_PTR_112ecad98);
  return;
}



/* Entry: 1003b40dc; end: 1003b4117;  */

void FUN_1003b40dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1003b40bc();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1003b4118; end: 1003b411f;  */

void FUN_1003b4118(long *param_1)

{
  ulong uVar1;
  long unaff_x20;
  ulong uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001003b4284();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x000107c5d10c();
  func_0x000107c615e8(uStack_38);
  *(ulong *)(unaff_x20 + 0x10) = uVar1 & 0xffffffff;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003b4120; end: 1003b418f;  */

void FUN_1003b4120(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001003b4284();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x000107c5d10c();
  func_0x000107c615e8(uStack_38);
  *(ulong *)(param_2 + 0x10) = uVar1 & 0xffffffff;
  *param_1 = param_2;
  return;
}



/* Entry: 1003b4190; end: 1003b4243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b4190(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1003b4244();
  lVar2 = param_2;
  func_0x000107c610f8();
  lVar3 = lVar2;
  func_0x0001003b4264();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ffab50) = uStack_48;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c615f0(uStack_48);
  plVar5 = &lStack_58;
  func_0x000107c61154(plVar5,puVar1);
  *(long **)(lVar2 + _DAT_112ffab58) = plVar5;
  plVar5 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = param_2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c615e8(uStack_48);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1003b4244; end: 1003b42a3;  */

void FUN_1003b4244(void)

{
  func_0x000107c61168(&PTR_PTR_1129481a8);
  return;
}



/* Entry: 1003b42a4; end: 1003b432b; -[_TtC32PlatformUIExperimentsServiceImpl32PlatformUIExperimentsServiceImpl u16ExperienceEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003b42a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ffab58);
  func_0x000107c61174();
  uVar1 = 0x455058455f363155;
  func_0x000107c5fadc(0x455058455f363155,0xee0045434e454952);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1003b432c; end: 1003b4343; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b432c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ffab50),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8);
  return;
}



/* Entry: 1003b4344; end: 1003b43d7;  */

void FUN_1003b4344(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_10034e57c(0);
  func_0x000107c610f8();
  func_0x0001003b438c(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1003b43d8; end: 1003b43df;  */

void FUN_1003b43d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b43e0; end: 1003b4433;  */

void FUN_1003b43e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b4434; end: 1003b4f9b;  */

void FUN_1003b4434(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
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
  FUN_1002c6ea0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c61174();
  uVar19 = uStack_f8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a99c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar21 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar23);
  uVar21 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar23);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar23);
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar23);
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar23);
  uVar21 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  lVar22 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01ad50);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c3e740(uVar21);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar22 != 0) {
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    *(long *)(param_2 + 0xa8) = lVar22;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b4f9c);
  (*pcVar1)();
}



/* Entry: 1003b4f9c; end: 1003b4fdf;  */

void FUN_1003b4f9c(void)

{
  long unaff_x20;
  
  FUN_1003b4434(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 1003b4fe0; end: 1003b51df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b4fe0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 in_x4;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_100083b20(&puStack_98);
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_68);
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_113092298);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_68);
  FUN_1003b5214(puStack_98,param_2,uVar1,uVar8);
  func_0x000107c615e8(puStack_98);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar8);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_78 = &UNK_101477b50;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_101477b74;
  puStack_80 = &UNK_1103c3578;
  ppuVar3 = &puStack_98;
  uStack_70 = in_x4;
  func_0x000107c60bc4(ppuVar3);
  uVar1 = uStack_70;
  func_0x000107c6157c(in_x4);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000ad7c4();
  ppuVar4 = ppuVar3;
  func_0x0001000ad7c4();
  ppuVar5 = ppuVar4;
  func_0x0001000ad7c4();
  ppuVar6 = ppuVar5;
  func_0x0001000ad7c4();
  puVar7 = PTR_PTR_1126a7128;
  func_0x000107c610f8();
  func_0x000107c460b4();
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar6);
  *param_1 = puVar7;
  return;
}



/* Entry: 1003b51e0; end: 1003b5213;  */

void FUN_1003b51e0(void)

{
  long unaff_x20;
  
  FUN_1003b4fe0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1003b5214; end: 1003b52db;  */

/* WARNING: Possible PIC construction at 0x0001003b5290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b52a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b52c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b52a4) */
/* WARNING: Removing unreachable block (ram,0x0001003b5294) */
/* WARNING: Removing unreachable block (ram,0x0001003b52c4) */

void FUN_1003b5214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f08;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c610fc(puVar1);
  FUN_1003b52dc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1003b52dc; end: 1003b548b;  */

void FUN_1003b52dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7ef8;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c610fc(puVar1);
  puVar2 = PTR_PTR_1126b7f00;
  func_0x000107c610f4(PTR_PTR_1126b7f00);
  puVar3 = PTR_PTR_1126b7f68;
  func_0x000107c5a9bc(PTR_PTR_1126b7f68);
  func_0x000107c61180();
  func_0x000107c48394(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126b7f10;
  func_0x000107c610f4(PTR_PTR_1126b7f10);
  uVar4 = param_2;
  FUN_1003b5640(param_2,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c5ac58();
  puVar5 = PTR_PTR_1126b7f20;
  func_0x000107c610f4();
  func_0x000107c475bc();
  func_0x000107c61170(param_4);
  func_0x000107c47dd0(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1003b548c; end: 1003b563f; -[SCNNetworkManagerRequestManagerWrapper initWithRequestManager:grapheneRegistry:useStreamingRequestTypeForProgRequest:useStreamingRequestTypeForProgRequestForRecommendedUserStorySnap:circumstanceEngine:] */

undefined1 *
FUN_1003b548c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_112705ec8;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    *(undefined1 *)((long)puVar1 + 0x30) = param_5;
    *(undefined1 *)((long)puVar1 + 0x31) = param_6;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003b5640; end: 1003b5777;  */

void FUN_1003b5640(undefined **param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c3ebd4();
  if ((int)uVar1 == 0) {
    ppuVar2 = param_1;
    func_0x000107c5c1e0();
    func_0x000107c61180();
    ppuVar3 = ppuVar2;
    func_0x000107c4adac();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd5cf8;
    }
    else {
      func_0x000107c61174(ppuVar2);
      ppuVar3 = ppuVar2;
    }
    func_0x000107c61170(ppuVar2);
  }
  else {
    uVar1 = param_2;
    func_0x000107c4980c();
    if ((int)uVar1 < 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd5cf8;
    }
    else {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61180();
    }
  }
  puVar4 = PTR_PTR_1126b7f60;
  func_0x000107c44418(PTR_PTR_1126b7f60);
  func_0x000107c61180();
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003b5778; end: 1003b57cf; +[SCNContentResolutionBlizzardProtoLoggerInterface shouldLogContentResolve] */

undefined * FUN_1003b5778(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8030;
  func_0x000107c61160(PTR_PTR_1126b8030);
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c441cc();
  func_0x000107c5accc(param_1 * 100.0,puVar2);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1003b57d0; end: 1003b57db; -[SCAContentResolve getPerUserSamplingRate] */

undefined8 FUN_1003b57d0(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 1003b57dc; end: 1003b584f; -[StreamingManifestParser initWithManifestRewriter:] */

undefined1 * FUN_1003b57dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8ac8;
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



/* Entry: 1003b5850; end: 1003b5a43; -[SCNContentManagerContentManagerSupportInterfaces initWithPayloadProcessor:withNetworkManager:withDbLocation:withFeatureSettingsService:withUserId:cacheScope:shouldResolverEmitContentResolve:networkMappingProvider:circumstanceEngine:userUnifiedGRPCServices:manifestParser:] */

undefined8 *
FUN_1003b5850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_1126e7d28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    puVar1[8] = param_8;
    *(undefined1 *)(puVar1 + 9) = param_9;
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1003b5a44; end: 1003b5af3; +[SCNContentManagerContentManagerDependencyInjection init:] */

void FUN_1003b5a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c61174(param_3);
  FUN_1003b5af4(auStack_40,param_3);
  FUN_1003b5d74(auStack_40);
  FUN_1003ba384(auStack_40);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1003b5af4; end: 1003b5bf7;  */

void FUN_1003b5af4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  if (param_2 != 0) {
    func_0x000107c61174(param_2);
    ppuStack_48 = &PTR_DAT_110cba098;
    lStack_50 = param_2;
    FUN_1000de59c(&uStack_40,&ppuStack_48,&lStack_50,FUN_1003b5bf8);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_1000df524(&uStack_40);
    func_0x000107c61170(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_1003b5cf4(&uStack_60);
    func_0x000107c61170(param_2);
    return;
  }
  uVar3 = 0x10;
  func_0x000107c60e30(0x10);
  func_0x00010527a174();
  func_0x000107c60e54(uVar3,PTR___ZTISt16invalid_argument_110352248,
                      PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003b5bc4);
  (*pcVar2)();
}



/* Entry: 1003b5bf8; end: 1003b5cf3;  */

void FUN_1003b5bf8(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_DAT_110cba0d8;
  puVar4[3] = &PTR_DAT_110cba1b0;
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
  puVar4[3] = &PTR_DAT_110cba128;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1003b5cf4(&uStack_50);
  return;
}



/* Entry: 1003b5cf4; end: 1003b5d1f;  */

long FUN_1003b5cf4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1003b5d20; end: 1003b5d2b;  */

void FUN_1003b5d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 1003b5d2c; end: 1003b5d73;  */

void FUN_1003b5d2c(void)

{
  FUN_1003b5d20();
  FUN_1003b6358();
  func_0x000107c4437c();
  func_0x000107c61180();
  FUN_1000fbca4();
  FUN_1003b638c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 1003b5d74; end: 1003b6357;  */

void FUN_1003b5d74(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  int extraout_w10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [40];
  char cStack_130;
  undefined8 **ppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  long *plStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char cStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*(long *)*param_1 + 0x38))(&ppuStack_128);
  auStack_d8[0] = 0;
  cStack_b0 = '\0';
  if (-1 < (char)bStack_111) {
    uStack_120 = (ulong)bStack_111;
    ppuStack_128 = &ppuStack_128;
  }
  FUN_1003b63a0(&plStack_110,ppuStack_128,uStack_120);
  lVar5 = lStack_100;
  FUN_1000e107c(lStack_100,&ppuStack_128);
  if ((int)lVar5 == 0) {
    if ((*(byte *)(lStack_100 + 0x50) & 1) == 0) {
      if (cStack_b0 == '\x01') {
        puVar6 = *(undefined8 **)(lStack_100 + 0x28);
        uVar8 = *(undefined8 *)(lStack_100 + 0x20);
        uVar11 = *(undefined8 *)(lStack_100 + 0x38);
        uVar13 = *(undefined8 *)(lStack_100 + 0x30);
        *(undefined8 **)(lStack_100 + 0x28) = puStack_c8;
        *(undefined8 *)(lStack_100 + 0x20) = uStack_d0;
        *(undefined8 *)(lStack_100 + 0x38) = uStack_b8;
        *(undefined8 *)(lStack_100 + 0x30) = uStack_c0;
        uStack_d0 = uVar8;
        puStack_c8 = puVar6;
        uStack_c0 = uVar13;
        uStack_b8 = uVar11;
      }
      else {
        func_0x000107c2be60(auStack_d8,lStack_100 + 0x18);
      }
    }
LAB_1003b5e40:
    func_0x000107c60c94(&puStack_a8,&ppuStack_128);
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_1003b655c(&uStack_90);
    FUN_1003b6620(&puStack_f0,uStack_78,uStack_70);
    FUN_1003b668c(&uStack_68,&puStack_f0);
    FUN_1003b6664(&puStack_f0);
    lVar5 = lStack_100;
    uStack_58 = 0;
    FUN_100066230(lStack_100,&puStack_a8);
    uVar13 = uStack_60;
    uVar8 = uStack_68;
    uVar12 = *(undefined8 *)(lVar5 + 0x28);
    uVar11 = *(undefined8 *)(lVar5 + 0x20);
    uVar15 = *(undefined8 *)(lVar5 + 0x38);
    uVar14 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar5 + 0x28) = uStack_80;
    *(undefined8 *)(lVar5 + 0x20) = uStack_88;
    *(undefined8 *)(lVar5 + 0x38) = uStack_70;
    *(undefined8 *)(lVar5 + 0x30) = uStack_78;
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_e8 = *(undefined8 **)(lVar5 + 0x48);
    puStack_f0 = *(undefined8 **)(lVar5 + 0x40);
    *(undefined8 *)(lVar5 + 0x48) = uVar13;
    *(undefined8 *)(lVar5 + 0x40) = uVar8;
    uStack_88 = uVar11;
    uStack_80 = uVar12;
    uStack_78 = uVar14;
    uStack_70 = uVar15;
    FUN_1003b6d48(&puStack_f0);
    *(undefined1 *)(lVar5 + 0x50) = uStack_58;
    func_0x0001003b6e18(&puStack_a8);
  }
  else if ((*(byte *)(lStack_100 + 0x50) & 1) != 0) goto LAB_1003b5e40;
  uStack_170 = *(undefined8 *)(lStack_100 + 0x28);
  uStack_178 = *(undefined8 *)(lStack_100 + 0x20);
  uStack_160 = *(undefined8 *)(lStack_100 + 0x38);
  uStack_168 = *(undefined8 *)(lStack_100 + 0x30);
  *(undefined1 *)(lStack_100 + 0x50) = 1;
  *(undefined8 *)(lStack_100 + 0x20) = 0;
  *(undefined8 *)(lStack_100 + 0x28) = 0;
  *(undefined8 *)(lStack_100 + 0x30) = 0;
  *(undefined8 *)(lStack_100 + 0x38) = 0;
  ppuStack_180 = &PTR_DAT_110cc66b8;
  auStack_158[0] = 0;
  cStack_130 = '\0';
  if (cStack_b0 == '\x01') {
    func_0x000107c2be60(auStack_158,auStack_d8);
  }
  FUN_1000df5a0(&plStack_110);
  FUN_1003b6fb0(auStack_d8);
  if (cStack_130 == '\x01') {
    puStack_a8 = (undefined *)0x0;
    ppuStack_a0 = (undefined **)0x0;
    FUN_1003b7da8(auStack_158,&puStack_a8);
    FUN_1003b8204(&puStack_a8);
  }
  puVar6 = (undefined8 *)0x40;
  func_0x000107c60e20();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110cc6828;
  puVar6[3] = &PTR_DAT_110cc6640;
  plVar7 = (long *)*param_1;
  lVar5 = param_1[1];
  puVar6[4] = plVar7;
  puVar6[5] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001003b6610();
    } while (extraout_w10 != 0);
    plVar7 = (long *)*param_1;
  }
  (**(code **)(*plVar7 + 0x50))();
  FUN_1003b7058(auStack_d8,1);
  puStack_c8[1] = 0;
  puStack_c8[2] = 0;
  *puStack_c8 = &PTR_DAT_110cc6890;
  puStack_a8 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff00);
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  FUN_1003b7108(puStack_c8 + 3,&puStack_a8,plVar7);
  FUN_1001148fc(&puStack_a8);
  puVar1 = puStack_c8;
  puStack_c8 = (undefined8 *)0x0;
  func_0x0001003b7c74(&plStack_110,puVar1 + 3);
  FUN_1003b7d98(auStack_d8);
  puVar6[7] = uStack_108;
  puVar6[6] = plStack_110;
  plStack_110 = (long *)0x0;
  uStack_108 = 0;
  func_0x0001003b7d70(&plStack_110);
  puStack_f0 = puVar6 + 3;
  puStack_e8 = puVar6;
  FUN_1003b7da8(&ppuStack_180,&puStack_f0);
  FUN_1003b8204(&puStack_f0);
  if ((bRam00000001137f41d8 & 1) == 0) {
    iVar4 = 0x137f41d8;
    func_0x000107c60e48();
    if (iVar4 != 0) {
      uVar2 = 0x10cc6800;
      FUN_1003ba188();
      uRam00000001137f41d0 = uVar2;
      func_0x000107c60e4c(0x1137f41d8);
    }
  }
  if (uRam00000001137f41d0 != 0) {
    func_0x000107c60c94(auStack_d8,&ppuStack_128);
    if ((uRam00000001137f41d0 & 0xfffffffe) == 4) {
      func_0x000107c2be58(&plStack_110);
      plVar7 = plStack_110;
      puStack_a8 = &UNK_10b2072d0;
      ppuStack_a0 = &PTR_DAT_110cc6868;
      uVar8 = 0x18;
      func_0x000107c60e20();
      func_0x000107c60c94();
      uStack_98 = uVar8;
      (**(code **)(*plVar7 + 0x10))(plVar7,&puStack_a8);
      func_0x000107c35128();
      func_0x000106e50c54(&plStack_110);
    }
    else {
      puVar9 = (undefined *)0x8;
      func_0x000107c60e20();
      func_0x000107c60d14();
      plVar7 = (long *)0x20;
      puStack_a8 = puVar9;
      func_0x000107c60e20();
      puStack_a8 = (undefined *)0x0;
      *plVar7 = (long)puVar9;
      func_0x000107c60c94(plVar7 + 1,auStack_d8);
      ppuVar10 = &puStack_f0;
      plStack_110 = plVar7;
      func_0x000100489040(ppuVar10,&UNK_10b2073c0,plVar7);
      if ((int)ppuVar10 != 0) goto LAB_1003b61e0;
      plStack_110 = (long *)0x0;
      func_0x000107c2be74(&plStack_110);
      FUN_1004895c8(&puStack_a8);
      func_0x000107c60dbc(&puStack_f0);
      func_0x000107c60dc0(&puStack_f0);
    }
    func_0x000107c60ca0(auStack_d8);
  }
  FUN_1003ba2ec(&ppuStack_180);
  func_0x000107c60ca0(&ppuStack_128);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
LAB_1003b61e0:
  func_0x000107c60d78();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003b61f0);
  (*pcVar3)();
}



/* Entry: 1003b6358; end: 1003b6363;  */

undefined8 FUN_1003b6358(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x18);
}



/* Entry: 1003b6364; end: 1003b638b; -[SCNContentManagerContentManagerSupportInterfaces getUserId] */

void FUN_1003b6364(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003b638c; end: 1003b639f;  */

void FUN_1003b638c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1003b63a0; end: 1003b6547;  */

void FUN_1003b63a0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = param_2;
  lStack_38 = param_3;
  if (param_3 == 0) {
    plVar3 = (long *)0x1137f41e0;
    iVar1 = 0x137f41e8;
    if (((bRam00000001137f41e8 & 1) != 0) || (func_0x000107c60e48(), iVar1 == 0))
    goto LAB_1003b643c;
    lVar2 = 0x98;
    func_0x000107c60e20();
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_1003b655c(&uStack_88);
    func_0x0001003b6604();
    FUN_1003b668c(auStack_60,auStack_b0);
    plVar3 = (long *)0x1137f41e0;
  }
  else {
    plVar3 = (long *)0x1137f41f0;
    iVar1 = 0x137f41f8;
    if (((bRam00000001137f41f8 & 1) != 0) || (func_0x000107c60e48(), iVar1 == 0))
    goto LAB_1003b643c;
    lVar2 = 0x98;
    func_0x000107c60e20();
    FUN_100060b18(&uStack_a0,&uStack_40);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    FUN_1003b655c(&uStack_88);
    func_0x0001003b6604();
    FUN_1003b668c(auStack_60,auStack_b0);
  }
  FUN_1003b665c();
  uStack_50 = 0;
  FUN_1003b6da4(lVar2,&uStack_a0);
  func_0x0001003b6e18(&uStack_a0);
  *plVar3 = lVar2;
  func_0x000107c60e4c(plVar3 + 1);
LAB_1003b643c:
  lVar2 = *plVar3;
  FUN_1003b6f78(param_1);
  *(long *)(param_1 + 0x10) = lVar2 + 0x40;
  return;
}



/* Entry: 1003b6548; end: 1003b655b;  */

void FUN_1003b6548(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc6700;
  return;
}



/* Entry: 1003b655c; end: 1003b65fb;  */

void FUN_1003b655c(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  
  FUN_1003b6548();
  puVar3 = (undefined8 *)0xb0;
  func_0x000107c60e20();
  puVar5 = puVar3 + 3;
  *puVar5 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110cc6720;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0x3cb0b1bb;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0x32aaaba7;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  puVar3[0x15] = 0;
  unaff_x19[1] = puVar5;
  unaff_x19[2] = puVar3;
  unaff_x19[3] = puVar5;
  unaff_x19[4] = puVar3;
  plVar4 = puVar3 + 1;
  *plVar4 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *unaff_x19 = &PTR_DAT_110cc66b8;
  return;
}



/* Entry: 1003b65fc; end: 1003b661f;  */

void FUN_1003b65fc(void)

{
  return;
}



/* Entry: 1003b6620; end: 1003b665b;  */

void FUN_1003b6620(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x0001003b6610();
    } while (extraout_w10 != 0);
    do {
      func_0x0001003b6610();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_1003b665c();
  return;
}



/* Entry: 1003b665c; end: 1003b6663;  */

void FUN_1003b665c(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1003b6664; end: 1003b668b;  */

long FUN_1003b6664(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1003b668c; end: 1003b691f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1003b668c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  int extraout_w10;
  long lVar7;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_58 [5];
  
  puVar3 = (undefined8 *)0x90;
  func_0x000107c60e20();
  plVar6 = puVar3 + 1;
  *plVar6 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110cc6770;
  puVar4 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar4 = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x11] = 0;
  func_0x000107c60d30();
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *param_1 = puVar4;
  param_1[1] = puVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  puStack_d0 = puVar4;
  puStack_c8 = puVar3;
  FUN_1003b6920(&puStack_90,param_2,alStack_58 + 1);
  FUN_1003b6980(alStack_58 + 3,&puStack_90);
  FUN_1003b6664(&puStack_90);
  func_0x0001003b69c4();
  FUN_1003b69cc(alStack_58);
  FUN_1003b6c18(&uStack_70,alStack_58[0]);
  lVar7 = alStack_58[3];
  lStack_80 = alStack_58[0];
  puStack_88 = puStack_c8;
  puStack_90 = puStack_d0;
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  alStack_58[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = alStack_58[3] + 0x48;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  func_0x000107c60d88();
  lVar5 = lVar7;
  func_0x0001003b6c8c();
  if ((int)lVar5 == 0) {
    puVar3 = (undefined8 *)0x20;
    func_0x000107c60e20();
    lVar5 = lStack_80;
    *puVar3 = &PTR_DAT_110cc67c0;
    puVar3[2] = puStack_88;
    puVar3[1] = puStack_90;
    puStack_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    lStack_80 = 0;
    puVar3[3] = lVar5;
    plVar6 = *(long **)(lVar7 + 0x90);
    *(undefined8 **)(lVar7 + 0x90) = puVar3;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    lVar7 = 0;
  }
  else {
    FUN_1003b6980(&lStack_a0,alStack_58 + 3);
    lVar7 = lStack_a0;
  }
  FUN_1000df5a0(&lStack_b0);
  if (lVar7 != 0) {
    lStack_a8 = lStack_98;
    lStack_b0 = lVar7;
    if (lStack_98 != 0) {
      do {
        func_0x0001003b6610();
      } while (extraout_w10 != 0);
    }
    FUN_1003b7ef8(&puStack_90,lVar7);
    func_0x0001003b8278();
  }
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_1003b6cd8();
  func_0x0001003b6d14(&puStack_90);
  func_0x0001003b6c64(&uStack_70);
  lVar7 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar7 != 0) {
    func_0x000107c35118();
  }
  func_0x0001003b6d74();
  func_0x0001003b6c64(&uStack_c0);
  FUN_1003b6d48(&puStack_d0);
  return param_1;
}



/* Entry: 1003b6920; end: 1003b697f;  */

void FUN_1003b6920(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  func_0x000107c60dc8(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1003b6980; end: 1003b69b7;  */

undefined8 * FUN_1003b6980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1003b665c();
  return param_1;
}



/* Entry: 1003b69b8; end: 1003b69cb;  */

void FUN_1003b69b8(void)

{
  return;
}



/* Entry: 1003b69cc; end: 1003b6a17;  */

void FUN_1003b69cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  FUN_1003b6a70();
  *param_1 = puVar1;
  return;
}



/* Entry: 1003b6a18; end: 1003b6a2f;  */

void FUN_1003b6a18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e89a0;
  return;
}



/* Entry: 1003b6a30; end: 1003b6a6f;  */

void FUN_1003b6a30(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  FUN_1003b6a18();
  FUN_1003b6b50(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1003b6a70; end: 1003b6a93;  */

void FUN_1003b6a70(undefined8 *param_1)

{
  FUN_1003b6a30();
  *param_1 = &PTR_DAT_1107e8958;
  return;
}



/* Entry: 1003b6a94; end: 1003b6aa7;  */

void FUN_1003b6a94(void)

{
  return;
}



/* Entry: 1003b6aa8; end: 1003b6b4f;  */

void FUN_1003b6aa8(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_1003b6a94();
  uStack_28 = extraout_x8;
  FUN_1003b6b98(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1107e89c0;
  puStack_30[1] = 0;
  puStack_30[4] = 0x3cb0b1bb;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[9] = 0;
  puStack_30[10] = 0x32aaaba7;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x13] = 0;
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  func_0x0001003b6bc8(auStack_40);
  func_0x0001003b6bd8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_1003b6b50;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1003b6aa8(&uStack_51);
  return;
}



/* Entry: 1003b6b50; end: 1003b6b97;  */

void FUN_1003b6b50(void)

{
  undefined1 uStack_11;
  
  FUN_1003b6aa8(&uStack_11);
  return;
}



/* Entry: 1003b6b98; end: 1003b6bbf;  */

long FUN_1003b6b98(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001003b6b6c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1003b6bc0; end: 1003b6c17;  */

void FUN_1003b6bc0(void)

{
  return;
}



/* Entry: 1003b6c18; end: 1003b6c63;  */

void FUN_1003b6c18(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x0001003b6c10();
  return;
}



/* Entry: 1003b6c64; end: 1003b6cd7;  */

long FUN_1003b6c64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1003b6cd8; end: 1003b6ceb;  */

undefined1 * FUN_1003b6cd8(void)

{
  long in_stack_00000038;
  
  if (in_stack_00000038 != 0) {
    func_0x0001000df548();
  }
  return &stack0x00000030;
}



/* Entry: 1003b6cec; end: 1003b6d3b;  */

void FUN_1003b6cec(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001003b6ce0();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    FUN_1003b84d0();
  }
  return;
}



/* Entry: 1003b6d3c; end: 1003b6d47;  */

undefined8 FUN_1003b6d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003b6d48; end: 1003b6d6b;  */

void FUN_1003b6d48(long param_1)

{
  FUN_1003b6d3c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1003b6d6c; end: 1003b6da3;  */

void FUN_1003b6d6c(void)

{
  return;
}



/* Entry: 1003b6da4; end: 1003b6e47;  */

undefined8 * FUN_1003b6da4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[10] = param_2[2];
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001003b6d7c(param_1 + 0xb,param_2 + 3);
  uVar1 = param_2[8];
  param_1[0x11] = param_2[9];
  param_1[0x10] = uVar1;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Entry: 1003b6e48; end: 1003b6f77;  */

void FUN_1003b6e48(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long *plVar3;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  FUN_1003b6548();
  plVar2 = (long *)(param_1 + 8);
  if (*plVar2 != 0) {
    ppuStack_78 = &PTR_DAT_1107e6938;
    ppuStack_70 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_68,&ppuStack_70);
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_1003b6920(auStack_50,plVar2,&uStack_60);
    FUN_1003b6980(alStack_40,auStack_50);
    FUN_1003b6cd8();
    func_0x0001003b8278();
    lVar1 = alStack_40[0];
    func_0x000107c60d88(alStack_40[0] + 0x48);
    func_0x000107c60c1c(lVar1 + 0x88,auStack_68);
    plVar3 = *(long **)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    func_0x000107c60d8c(lVar1 + 0x48);
    if (plVar3 == (long *)0x0) {
      func_0x000107c60d48(lVar1 + 0x18);
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,alStack_40);
      func_0x000107c35124();
    }
    func_0x0001003b6d74();
    func_0x000107c35120();
    func_0x000107c60dfc(&ppuStack_70);
    func_0x000107c60dfc(&ppuStack_78);
  }
  FUN_1003b6664(unaff_x19 + 0x18);
  FUN_1003b6664(plVar2);
  return;
}



/* Entry: 1003b6f78; end: 1003b6fa7;  */

undefined8 * FUN_1003b6f78(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000107c60d88(param_2);
  return param_1;
}



/* Entry: 1003b6fa8; end: 1003b6faf;  */

void FUN_1003b6fa8(void)

{
  return;
}



/* Entry: 1003b6fb0; end: 1003b6fcf;  */

void FUN_1003b6fb0(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1003b6e48();
  }
  return;
}



/* Entry: 1003b6fd0; end: 1003b6fd7;  */

void FUN_1003b6fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 1003b6fd8; end: 1003b6fff;  */

void FUN_1003b6fd8(void)

{
  FUN_1003b6fd0();
  FUN_1003b7000();
  func_0x000107c442c4();
  func_0x0001003b7014();
  return;
}



/* Entry: 1003b7000; end: 1003b700b;  */

undefined8 FUN_1003b7000(void)

{
  long unaff_x19;
  
  return *(undefined8 *)(unaff_x19 + 0x18);
}



/* Entry: 1003b700c; end: 1003b7027; -[SCNContentManagerContentManagerSupportInterfaces getShouldResolverEmitContentResolve] */

undefined1 FUN_1003b700c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 1003b7028; end: 1003b7057;  */

long FUN_1003b7028(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xa72f05397829cc) {
    lVar1 = param_2 * 0x188;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1003b7028();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1003b7058; end: 1003b707f;  */

long FUN_1003b7058(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1003b7028();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1003b7080; end: 1003b7093;  */

void FUN_1003b7080(void)

{
  return;
}



/* Entry: 1003b7094; end: 1003b70eb;  */

void FUN_1003b7094(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_1003b7080();
  uStack_28 = extraout_x8;
  FUN_1003b7208();
  FUN_1003b7220();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_110cc9f88;
  func_0x0001003b7270();
  func_0x0001003b7288();
  func_0x0001003b7298(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_1003b70ec;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1003b7094(&uStack_51);
  return;
}



/* Entry: 1003b70ec; end: 1003b7107;  */

void FUN_1003b70ec(void)

{
  undefined1 uStack_11;
  
  FUN_1003b7094(&uStack_11);
  return;
}



/* Entry: 1003b7108; end: 1003b7207;  */

undefined8 * FUN_1003b7108(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cc9980;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1003b70ec(param_1 + 5);
  FUN_1003b7324(param_1 + 7,param_1 + 5);
  FUN_1003b7454(param_1 + 9,param_1 + 5);
  FUN_10028af84(param_1 + 0xb,param_2);
  *(undefined1 *)(param_1 + 0xf) = param_3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  func_0x000107c60d64(param_1 + 0x13);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return param_1;
}



/* Entry: 1003b7208; end: 1003b721f;  */

void FUN_1003b7208(void)

{
  return;
}



/* Entry: 1003b7220; end: 1003b723f;  */

void FUN_1003b7220(void)

{
  func_0x0001003b7214();
  FUN_1003b7240();
  FUN_1003b725c();
  return;
}



/* Entry: 1003b7240; end: 1003b725b;  */

void FUN_1003b7240(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1003b725c; end: 1003b72bf;  */

void FUN_1003b725c(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1003b72c0; end: 1003b7323;  */

void FUN_1003b72c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1003b7080();
  uStack_28 = extraout_x8;
  FUN_1003b7208();
  FUN_1003b7344();
  func_0x0001003b73a4(uStack_30,param_2);
  func_0x0001003b7270();
  func_0x0001003b73e0();
  func_0x0001003b7298(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c351f4();
  func_0x0001003b73e0();
  func_0x000107c351e8();
  pcStack_48 = FUN_1003b7324;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1003b72c0(&uStack_51,uStack_30);
  return;
}



/* Entry: 1003b7324; end: 1003b7343;  */

void FUN_1003b7324(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1003b72c0(&uStack_11,param_1);
  return;
}


