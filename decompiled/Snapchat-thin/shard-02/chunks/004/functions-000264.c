/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c74964; end: 101c749b7;  */

undefined8 FUN_101c74964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101c749b8(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101c749b8; end: 101c74a93;  */

void FUN_101c749b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101c87490(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c87230();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101c87240();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101c74a94; end: 101c74acf;  */

void FUN_101c74a94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c74ad0; end: 101c74b23;  */

void FUN_101c74ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c74b24; end: 101c74b6f;  */

void FUN_101c74b24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c74b70; end: 101c74bc3;  */

void FUN_101c74b70(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c74bc4; end: 101c74c23; -[_TtC36SCAdAttachmentPreloadingServicesImpl31AdAppInstallAttachmentPreloader init] */

void FUN_101c74bc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentPreloadingServicesImpl.AdAppInstallAttachmentPreloader",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c74bf0);
  (*pcVar1)();
}



/* Entry: 101c74c24; end: 101c74c8f; -[_TtC36SCAdAttachmentPreloadingServicesImpl31AdAppInstallAttachmentPreloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c74c24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0f400));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0f408));
  func_0x0001000834e4(param_1 + _DAT_112e0f410);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0f418 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0f420));
  return;
}



/* Entry: 101c74c90; end: 101c74e87; -[_TtC36SCAdAttachmentPreloadingServicesImpl31AdAppInstallAttachmentPreloader canPreloadAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101c74c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e0f408);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c3e208(uVar2);
  iVar1 = (int)uVar2;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return iVar1 == 2;
}



/* Entry: 101c74e88; end: 101c75373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101c74e88(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e0f408);
  func_0x000107c3e208(uVar15);
  puVar3 = PTR___sSiN_11034deb0;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(_DAT_113068388);
  lVar2 = _DAT_112e0f420;
  func_0x000107c61428(unaff_x20 + _DAT_112e0f420,auStack_78,0x20,0);
  lVar14 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar14 + 0x10) != 0) {
    func_0x000107c61434(lVar14);
    puVar4 = puVar3;
    puVar6 = puVar10;
    func_0x000100029284();
    if (((ulong)puVar6 & 1) != 0) {
      lVar17 = *(long *)(*(long *)(lVar14 + 0x38) + (long)puVar4 * 8);
      func_0x000107c6157c(lVar17);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar14);
      plVar5 = (long *)(lVar17 + 0x10);
      func_0x000107c61618();
      func_0x000107c61574(lVar17);
      if (plVar5 != (long *)0x0) {
        func_0x000107c6142c(puVar10);
        return plVar5;
      }
      goto LAB_101c74f88;
    }
    func_0x000107c6142c(lVar14);
  }
  func_0x000107c614a8(auStack_78);
LAB_101c74f88:
  puVar4 = &UNK_110461b48;
  func_0x000107c613fc(&UNK_110461b48,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar6 = &UNK_110461b70;
  func_0x000107c613fc(&UNK_110461b70,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar15;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  *(undefined **)(puVar6 + 0x20) = puVar3;
  *(undefined **)(puVar6 + 0x28) = puVar10;
  lVar17 = 0;
  func_0x000101c76628();
  lVar14 = lVar17;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar14 + _DAT_112e0f4e8);
  *puVar1 = FUN_101c76188;
  puVar1[1] = puVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_88 = lVar14;
  lStack_80 = lVar17;
  func_0x000107c615f0(uVar15);
  func_0x000107c61434(puVar10);
  plVar5 = &lStack_88;
  func_0x000107c61154(plVar5,puVar4);
  lVar14 = 0x112e0f4d8;
  func_0x0001000285a8(0x112e0f4d8,&UNK_10d9eaac0);
  func_0x000107c613fc();
  func_0x000107c61614(lVar14 + 0x10,0);
  func_0x000107c61604(lVar14 + 0x10,plVar5);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,0x21,0);
  func_0x000107c61434(puVar10);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61558(uVar7);
  uVar13 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
  FUN_101c78720(lVar14,puVar3,puVar10,uVar7);
  func_0x000107c6142c(puVar10);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar13;
  func_0x000107c614a8(auStack_78);
  uVar13 = param_1;
  func_0x000106987180();
  func_0x000107c61180();
  uVar8 = uVar13;
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8();
  func_0x000107c61170();
  (**(code **)(unaff_x20 + _DAT_112e0f418))();
  lVar2 = unaff_x20 + _DAT_112e0f410;
  uVar7 = *(undefined8 *)(lVar2 + 0x18);
  lVar14 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar7);
  (**(code **)(lVar14 + 0x30))(uVar7,lVar14);
  uVar9 = uVar7;
  func_0x000107c5b9b4();
  func_0x000107c615e8(uVar7);
  if ((int)uVar9 == 0) {
    uVar7 = uVar13;
    func_0x000107c614f0();
    puVar6 = &UNK_110461b48;
    func_0x000107c613fc(&UNK_110461b48,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar11 = &UNK_110461b98;
    func_0x000107c613fc(&UNK_110461b98,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,plVar5);
    puVar12 = &UNK_110461bc0;
    func_0x000107c613fc(&UNK_110461bc0,0x48,7);
    *(undefined8 *)(puVar12 + 0x10) = uVar15;
    *(undefined **)(puVar12 + 0x18) = puVar6;
    *(undefined8 *)(puVar12 + 0x20) = uVar13;
    *(undefined **)(puVar12 + 0x28) = puVar4;
    *(undefined **)(puVar12 + 0x30) = puVar3;
    *(undefined **)(puVar12 + 0x38) = puVar10;
    *(undefined **)(puVar12 + 0x40) = puVar11;
    pcVar16 = *(code **)(puVar4 + 8);
    func_0x000107c615f0(uVar15);
    func_0x000107c615f0(uVar13);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(puVar11);
    (*pcVar16)(uVar8,FUN_101c76194,puVar12,uVar7,puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar11);
    func_0x000107c6142c(uVar8);
    func_0x000107c61574(puVar12);
    func_0x000107c615e8(uVar13);
  }
  else {
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(uVar8);
    puVar3 = &UNK_110461b48;
    func_0x000107c613fc(&UNK_110461b48,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar10 = &UNK_110461b98;
    func_0x000107c613fc(&UNK_110461b98,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,plVar5);
    puVar6 = &UNK_110461be8;
    func_0x000107c613fc(&UNK_110461be8,0x38,7);
    *(undefined **)(puVar6 + 0x10) = puVar3;
    *(undefined8 *)(puVar6 + 0x18) = uVar13;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    *(undefined8 *)(puVar6 + 0x28) = param_1;
    *(undefined **)(puVar6 + 0x30) = puVar10;
    func_0x000107c615f0(uVar13);
    func_0x000107c61174(param_1);
    uVar15 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar7 = 0;
    func_0x0001001ca524(0,0,8,4,0,0,&UNK_10d9ea7b8,puVar6,uVar15);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar7);
    func_0x000107c615e8(uVar13);
  }
  return plVar5;
}



/* Entry: 101c75374; end: 101c753cf; -[_TtC36SCAdAttachmentPreloadingServicesImpl31AdAppInstallAttachmentPreloader preloadAttachment:] */

void FUN_101c75374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101c74d04(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c753d0; end: 101c7549f;  */

void FUN_101c753d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110461c60;
  func_0x000107c613fc(&UNK_110461c60,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  pcStack_50 = FUN_101c76318;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110461c78;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101c754a0; end: 101c75513;  */

void FUN_101c754a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x000107c5fcec(0);
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000100f7a598(FUN_101c76324,auStack_60,
                      "SCAdAttachmentPreloadingServicesImpl/AdAppInstallAttachmentPreloader.swift",
                      0x4a,2,0x59,uVar1);
  return;
}



/* Entry: 101c75514; end: 101c756b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c75514(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e0f420;
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61428(param_1 + _DAT_112e0f420,alStack_80,0x20,0);
  lVar3 = *(long *)(param_1 + lVar1);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    lVar4 = param_2;
    uVar2 = param_3;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + lVar4 * 8);
      func_0x000107c6157c(lVar4);
      func_0x000107c614a8(alStack_80);
      func_0x000107c6142c(lVar3);
      lVar3 = lVar4 + 0x10;
      func_0x000107c61618();
      func_0x000107c61574(lVar4);
      if (lVar3 != 0) {
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar3);
        return;
      }
      goto LAB_101c75600;
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(alStack_80);
LAB_101c75600:
  func_0x0001000d224c(alStack_80);
  if (alStack_80[0] != 0) {
    lVar3 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c50018(alStack_80[0]);
    func_0x000107c615e8(alStack_80[0]);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_1 + lVar1,alStack_80,0x21,0);
  func_0x000107c61434(param_3);
  FUN_101c78664(param_2,param_3);
  func_0x000107c614a8(alStack_80);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 101c756b8; end: 101c7576b;  */

void FUN_101c756b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  lVar1 = 0;
  func_0x000100b91790();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar1 = 0;
  func_0x000100b92084();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c7576c,uVar3,uVar4);
  return;
}



/* Entry: 101c7576c; end: 101c75887;  */

void FUN_101c7576c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x98) = lVar8;
  if (lVar8 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar6 = *(long *)(unaff_x22 + 0x68);
    func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x0001041c9838(uVar1);
    func_0x0001030bfd40(uVar3);
    FUN_101c76280(uVar1,&SUB_100b91790);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x28,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0xa0) = lVar6;
    plVar5 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101c75888;
    lVar7 = *(long *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x50);
    lVar4 = *(long *)(unaff_x22 + 0x58);
    plVar5[6] = lVar6;
    plVar5[7] = lVar8;
    plVar5[4] = lVar4;
    plVar5[5] = lVar7;
    plVar5[3] = lVar2;
    lVar6 = 0;
    func_0x000107c5fcec();
    lVar8 = lVar6;
    func_0x000107c5fce8();
    plVar5[8] = lVar8;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar5[9] = lVar6;
    plVar5[10] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c759b8,lVar6,lVar8);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  **(undefined1 **)(unaff_x22 + 0x40) = 1;
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c75884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c75888; end: 101c758fb;  */

void FUN_101c75888(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xa0);
  uVar2 = *(undefined8 *)(lVar4 + 0x98);
  uVar3 = *(undefined8 *)(lVar4 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xa8));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  FUN_101c76280(uVar3,&SUB_100b92084);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c758fc,*(undefined8 *)(lVar4 + 0x88),*(undefined8 *)(lVar4 + 0x90));
  return;
}



/* Entry: 101c758fc; end: 101c75943;  */

void FUN_101c758fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  **(undefined1 **)(unaff_x22 + 0x40) = 0;
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c75940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c75944; end: 101c759b7;  */

void FUN_101c75944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c759b8,uVar1,uVar2);
  return;
}



/* Entry: 101c759b8; end: 101c75a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c759b8(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(unaff_x22 + 0x38) + _DAT_112e0f410;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar5 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  pcVar8 = *(code **)(lVar4 + 0x10);
  *(code **)(unaff_x22 + 0x60) = pcVar8;
  (*pcVar8)();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  piVar9 = *(int **)(lVar5 + 0x20);
  iVar2 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101c75a78;
                    /* WARNING: Could not recover jumptable at 0x000101c75a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar9))(uVar6,*(undefined8 *)(unaff_x22 + 0x28),uVar3,lVar5);
  return;
}



/* Entry: 101c75a78; end: 101c75adf;  */

void FUN_101c75a78(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x70));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101c75ae0;
  }
  else {
    pcVar2 = FUN_101c764ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50));
  return;
}



/* Entry: 101c75ae0; end: 101c75bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c75ae0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  lVar5 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c3e208(*(undefined8 *)(lVar5 + _DAT_112e0f408));
  if (lVar4 == 0) {
    if (*(long *)(unaff_x22 + 0x30) != 0) {
      func_0x0001000d224c(unaff_x22 + 0x10);
      lVar5 = *(long *)(unaff_x22 + 0x10);
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
        (**(code **)(unaff_x22 + 0x60))(uVar3,*(undefined8 *)(unaff_x22 + 0x20));
        func_0x000107c5fadc(puVar1,puVar2);
        func_0x000107c598e4(lVar5);
        func_0x000107c6142c(puVar2);
        func_0x000107c614ac(0);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(uVar3);
        func_0x000107c615e8(lVar5);
        goto LAB_101c75be4;
      }
    }
    func_0x000107c6142c(puVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c6142c(puVar2);
  }
  func_0x000107c614ac(uVar3);
LAB_101c75be4:
                    /* WARNING: Could not recover jumptable at 0x000101c75bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c75c00; end: 101c75d17;  */

void FUN_101c75c00(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  puVar1 = &UNK_110461c10;
  func_0x000107c613fc(&UNK_110461c10,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar1[0x18] = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  pcStack_70 = FUN_101c762bc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110461c28;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c614b0(param_2);
  func_0x000107c615f0(param_5);
  func_0x000107c61434(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101c75d18; end: 101c75dbb;  */

void FUN_101c75d18(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  func_0x000107c5fcec(0);
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_8;
  func_0x000100f7a598(FUN_101c762f0,auStack_a0,
                      "SCAdAttachmentPreloadingServicesImpl/AdAppInstallAttachmentPreloader.swift",
                      0x4a,2,0x72,uVar1);
  return;
}



/* Entry: 101c75dbc; end: 101c75efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c75dbc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_58;
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61428(param_8 + 0x10,auStack_90,0,0);
  param_8 = param_8 + 0x10;
  func_0x000107c61618();
  func_0x000107c3e208(*(undefined8 *)(param_1 + _DAT_112e0f408));
  if ((param_2 & 1) != 0) {
    if (param_8 == 0) goto LAB_101c75ed0;
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 != 0) {
      func_0x000107c614f0(param_4);
      (**(code **)(param_5 + 0x10))();
      func_0x000107c5fadc(param_6,param_7);
      func_0x000107c598e4(lStack_58);
      func_0x000107c615e8(lStack_58);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_6);
    }
  }
  func_0x000107c61170(param_8);
LAB_101c75ed0:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101c75efc; end: 101c75f0f;  */

bool FUN_101c75efc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c75f10; end: 101c75fbb;  */

void FUN_101c75f10(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c75fbc; end: 101c75fdb;  */

void FUN_101c75fbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101c75fdc; end: 101c760ab;  */

void FUN_101c75fdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1012d20f0;
    puStack_58 = &UNK_110461ca0;
    lStack_50 = param_2;
    uStack_48 = param_3;
    func_0x000107c60bc4(&puStack_70);
    uVar1 = uStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar1);
    puVar3 = (undefined1 *)ppuVar2;
  }
  func_0x000107c4b760();
  func_0x000107c60bd0(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101c760ac; end: 101c760b3;  */

void FUN_101c760ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101c760b4; end: 101c760d3;  */

void FUN_101c760b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe560);
  return;
}



/* Entry: 101c760d4; end: 101c760d7;  */

void FUN_101c760d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101c760d8; end: 101c7613b;  */

void FUN_101c760d8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10d9ea768;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 101c7613c; end: 101c76147;  */

void FUN_101c7613c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e67e9e4);
  return;
}



/* Entry: 101c76148; end: 101c76187;  */

void FUN_101c76148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0f4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ea8a8;
  func_0x000107c61520(&UNK_10d9ea8a8,&UNK_110461d48);
  puRam0000000112e0f4d0 = puVar1;
  return;
}



/* Entry: 101c76188; end: 101c76193;  */

void FUN_101c76188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_70;
  puVar5 = &UNK_110461c60;
  func_0x000107c613fc(&UNK_110461c60,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  pcStack_50 = FUN_101c76318;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110461c78;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 101c76194; end: 101c761c3;  */

void FUN_101c76194(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101c75c00(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c761c4; end: 101c76243;  */

void FUN_101c761c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101c76244;
  plVar6[0xc] = lVar2;
  plVar6[0xd] = lVar7;
  plVar6[10] = lVar1;
  plVar6[0xb] = lVar5;
  plVar6[8] = param_1;
  plVar6[9] = lVar3;
  lVar3 = 0;
  func_0x000100b91790();
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar4;
  lVar3 = 0;
  func_0x000100b92084();
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xf] = uVar4;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar5;
  func_0x000107c5fce8();
  plVar6[0x10] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar6[0x11] = lVar5;
  plVar6[0x12] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c7576c,lVar5,lVar3);
  return;
}



/* Entry: 101c76244; end: 101c7627f;  */

void FUN_101c76244(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c7627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c76280; end: 101c762bb;  */

undefined8 FUN_101c76280(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101c762bc; end: 101c762ef;  */

void FUN_101c762bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = 0;
  func_0x000107c5fcec(0);
  uStack_90 = uVar9;
  uStack_88 = uVar7;
  uStack_80 = uVar1;
  uStack_78 = uVar4;
  uStack_70 = uVar2;
  uStack_68 = uVar5;
  uStack_60 = uVar3;
  uStack_58 = uVar6;
  func_0x000100f7a598(FUN_101c762f0,auStack_a0,
                      "SCAdAttachmentPreloadingServicesImpl/AdAppInstallAttachmentPreloader.swift",
                      0x4a,2,0x72,uVar8);
  return;
}



/* Entry: 101c762f0; end: 101c76317;  */

void FUN_101c762f0(void)

{
  long unaff_x20;
  
  FUN_101c75dbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101c76318; end: 101c76323;  */

void FUN_101c76318(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = 0;
  func_0x000107c5fcec(0);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar4;
  func_0x000100f7a598(FUN_101c76324,auStack_60,
                      "SCAdAttachmentPreloadingServicesImpl/AdAppInstallAttachmentPreloader.swift",
                      0x4a,2,0x59,uVar3);
  return;
}



/* Entry: 101c76324; end: 101c7633f;  */

void FUN_101c76324(void)

{
  long unaff_x20;
  
  FUN_101c75514(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101c76340; end: 101c764ab;  */

int FUN_101c76340(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c763bc;
        goto LAB_101c763a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c763a0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101c763bc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c764ac; end: 101c764eb;  */

void FUN_101c764ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0f4e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ea880;
  func_0x000107c61520(&UNK_10d9ea880,&UNK_110461d48);
  puRam0000000112e0f4e0 = puVar1;
  return;
}



/* Entry: 101c764ec; end: 101c764ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c764ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  lVar5 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c3e208(*(undefined8 *)(lVar5 + _DAT_112e0f408));
  if (lVar4 == 0) {
    if (*(long *)(unaff_x22 + 0x30) != 0) {
      func_0x0001000d224c(unaff_x22 + 0x10);
      lVar5 = *(long *)(unaff_x22 + 0x10);
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
        (**(code **)(unaff_x22 + 0x60))(uVar3,*(undefined8 *)(unaff_x22 + 0x20));
        func_0x000107c5fadc(puVar1,puVar2);
        func_0x000107c598e4(lVar5);
        func_0x000107c6142c(puVar2);
        func_0x000107c614ac(0);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(uVar3);
        func_0x000107c615e8(lVar5);
        goto LAB_101c75be4;
      }
    }
    func_0x000107c6142c(puVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c6142c(puVar2);
  }
  func_0x000107c614ac(uVar3);
LAB_101c75be4:
                    /* WARNING: Could not recover jumptable at 0x000101c75bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c76500; end: 101c7656f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c76500(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  pcVar1 = *(code **)(unaff_x20 + _DAT_112e0f4e8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e0f4e8))[1];
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c76570; end: 101c765e7; -[_TtC36SCAdAttachmentPreloadingServicesImpl24AdAttachmentPreloadToken dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c76570(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  pcVar1 = *(code **)(param_1 + _DAT_112e0f4e8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e0f4e8))[1];
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c765e8; end: 101c765fb; -[_TtC36SCAdAttachmentPreloadingServicesImpl24AdAttachmentPreloadToken .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c765e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0f4e8 + 8));
  return;
}



/* Entry: 101c765fc; end: 101c7666f; -[_TtC36SCAdAttachmentPreloadingServicesImpl24AdAttachmentPreloadToken init] */

void FUN_101c765fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentPreloadingServicesImpl.AdAttachmentPreloadToken",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c76628);
  (*pcVar1)();
}



/* Entry: 101c76670; end: 101c766d7;  */

undefined8 FUN_101c76670(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)param_2;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    FUN_101c785a8();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
      func_0x000107c615f0(uVar2);
    }
    func_0x000107c6142c(param_2);
  }
  return uVar2;
}



/* Entry: 101c766d8; end: 101c76737; -[_TtC36SCAdAttachmentPreloadingServicesImpl21AdAttachmentPreloader init] */

void FUN_101c766d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentPreloadingServicesImpl.AdAttachmentPreloader",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c76704);
  (*pcVar1)();
}



/* Entry: 101c76738; end: 101c7676f; -[_TtC36SCAdAttachmentPreloadingServicesImpl21AdAttachmentPreloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c76738(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e0f518));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e0f520));
  return;
}



/* Entry: 101c76770; end: 101c7678f;  */

void FUN_101c76770(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe700);
  return;
}



/* Entry: 101c76790; end: 101c7694b; -[_TtC36SCAdAttachmentPreloadingServicesImpl21AdAttachmentPreloader canPreloadAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c76790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e0f520);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c3e208();
  func_0x000104191a9c();
  FUN_101c76670();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3f40c();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 101c7694c; end: 101c769a7; -[_TtC36SCAdAttachmentPreloadingServicesImpl21AdAttachmentPreloader preloadAttachment:] */

void FUN_101c7694c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101c76830(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c769a8; end: 101c769bb;  */

bool FUN_101c769a8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c769bc; end: 101c76a67;  */

void FUN_101c769bc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c76a68; end: 101c76a77;  */

void FUN_101c76a68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101c76a78; end: 101c76ab7;  */

void FUN_101c76a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0f550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ea9d4;
  func_0x000107c61520(&UNK_10d9ea9d4,&UNK_110461e68);
  puRam0000000112e0f550 = puVar1;
  return;
}



/* Entry: 101c76ab8; end: 101c76c9f;  */

undefined * FUN_101c76ab8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e0f570,&UNK_10d9ea940);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c76bb0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c76bb4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101c76ca0; end: 101c76f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char ** FUN_101c76ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char **ppcVar14;
  char *pcStack_f8;
  char *pcStack_f0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c6157c();
  pcVar2 = "init(metadataCache:appImpressionTracker:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_101c760b4();
  lVar6 = lVar3;
  func_0x000107c610f8();
  lVar7 = _DAT_112e0f420;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c76ab8();
  *(undefined **)(lVar6 + lVar7) = puVar4;
  *(char **)(lVar6 + _DAT_112e0f408) = pcVar2;
  *(undefined8 *)(lVar6 + _DAT_112e0f400) = param_1;
  func_0x0001003ffe10(param_2,lVar6 + _DAT_112e0f410);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112e0f418);
  *puVar1 = 0x101c76648;
  puVar1[1] = 0;
  plVar5 = &lStack_78;
  lStack_78 = lVar6;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  lVar6 = 0;
  FUN_101c773d4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long **)(lVar7 + _DAT_112e0f670) = plVar5;
  puVar4 = PTR_s_init_1125d9248;
  lStack_88 = lVar7;
  lStack_80 = lVar6;
  func_0x000107c61174();
  plVar8 = &lStack_88;
  func_0x000107c61154(plVar8,puVar4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  pcVar2 = "init(metadataCache:playableWebViewFactory:mainQueuePerformer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_101c77758();
  lVar6 = lVar3;
  func_0x000107c610f8();
  lVar7 = _DAT_112e0f6b8;
  FUN_101c76ab8();
  *(undefined **)(lVar6 + lVar7) = puVar9;
  *(undefined8 *)(lVar6 + _DAT_112e0f6a0) = param_1;
  *(undefined8 *)(lVar6 + _DAT_112e0f6a8) = param_3;
  *(char **)(lVar6 + _DAT_112e0f6b0) = pcVar2;
  plVar10 = &lStack_98;
  lStack_98 = lVar6;
  lStack_90 = lVar3;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  lVar7 = 0x112e0f558;
  func_0x0001000285a8(0x112e0f558,&UNK_10d9ea928);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 6;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  *(undefined8 *)(lVar7 + 0x20) = 2;
  *(long **)(lVar7 + 0x28) = plVar5;
  *(undefined8 *)(lVar7 + 0x30) = 3;
  *(long **)(lVar7 + 0x38) = plVar8;
  *(undefined8 *)(lVar7 + 0x40) = 9;
  *(long **)(lVar7 + 0x48) = plVar10;
  func_0x000107c61174(plVar5);
  func_0x000107c61174(plVar8);
  func_0x000107c61174(plVar10);
  lVar6 = lVar7;
  func_0x000101c76bb4();
  func_0x000107c61588(lVar7);
  uVar11 = 0x112e0f560;
  func_0x0001000285a8(0x112e0f560,&UNK_10d9ea930);
  func_0x000107c61408((undefined8 *)(lVar7 + 0x20),3,uVar11);
  pcVar2 = "init(attachmentTypeToPreloader:mainQueuePerformer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  pcVar12 = pcVar2;
  FUN_101c76770();
  pcVar13 = pcVar12;
  func_0x000107c610f8();
  *(long *)(pcVar13 + _DAT_112e0f518) = lVar6;
  *(char **)(pcVar13 + _DAT_112e0f520) = pcVar2;
  ppcVar14 = &pcStack_f8;
  pcStack_f8 = pcVar13;
  pcStack_f0 = pcVar12;
  func_0x000107c61154(ppcVar14,PTR_s_init_1125d9248);
  func_0x000107c61170(plVar5);
  func_0x000107c61574(param_3);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(plVar10);
  func_0x0001000834e4(param_2);
  return ppcVar14;
}



/* Entry: 101c76f84; end: 101c770eb;  */

int FUN_101c76f84(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c77000;
        goto LAB_101c76fe4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c76fe4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101c77000:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c770ec; end: 101c7712b;  */

void FUN_101c770ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0f578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ea9ac;
  func_0x000107c61520(&UNK_10d9ea9ac,&UNK_110461e68);
  puRam0000000112e0f578 = puVar1;
  return;
}



/* Entry: 101c7712c; end: 101c771f7;  */

void FUN_101c7712c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101c771f8; end: 101c7729b;  */

void FUN_101c771f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  
  uVar1 = 0x112e0f668;
  func_0x0001000285a8(0x112e0f668,&UNK_10d9eaa70);
  func_0x0001000bda74(param_2,uVar1);
  func_0x0001003ffe10(param_3,auStack_68);
  func_0x000107c6157c(param_4);
  uVar1 = param_2;
  FUN_101c76ca0(param_2,auStack_68,param_4);
  func_0x000107c61574(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c7729c; end: 101c772bf;  */

/* WARNING: Possible PIC construction at 0x000101c772a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c772ac) */

void FUN_101c7729c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c772c0; end: 101c77337;  */

void FUN_101c772c0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c77338; end: 101c77347;  */

void FUN_101c77338(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = 0;
  func_0x000107c5fcec(0);
  pcVar2 = FUN_101c77348;
  uStack_50 = uVar3;
  lStack_48 = unaff_x20 + 0x18;
  uStack_40 = uVar4;
  func_0x000100440ab0(FUN_101c77348,auStack_60,
                      "SCAdAttachmentPreloadingServicesImpl/AdAttachmentPreloadingServiceProvider.swift"
                      ,0x50,2,0x24,&UNK_110461f38,uVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101c77348; end: 101c77363;  */

void FUN_101c77348(void)

{
  long unaff_x20;
  
  FUN_101c771f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101c77364; end: 101c773c3; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdDeeplinkAttachmentPreloader init] */

void FUN_101c77364(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentPreloadingServicesImpl.AdDeeplinkAttachmentPreloader",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c77390);
  (*pcVar1)();
}



/* Entry: 101c773c4; end: 101c773d3; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdDeeplinkAttachmentPreloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c773c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0f670));
  return;
}



/* Entry: 101c773d4; end: 101c773f3;  */

void FUN_101c773d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe7c8);
  return;
}



/* Entry: 101c773f4; end: 101c775c3; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdDeeplinkAttachmentPreloader canPreloadAttachment:] */

uint FUN_101c773f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101c77620(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101c775c4; end: 101c7761f; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdDeeplinkAttachmentPreloader preloadAttachment:] */

void FUN_101c775c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101c77450(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c77620; end: 101c7769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c77620(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000104191a9c();
  if (((int)lVar1 == 3) && (*(long *)(param_1 + _DAT_113067d38) != 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + _DAT_113067d38) + _DAT_1138131e0);
    if (lVar1 == 0) {
      return 0;
    }
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x00010419e9ec();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      return 1;
    }
  }
  return 0;
}



/* Entry: 101c776a0; end: 101c776ff; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdPlayableAttachmentPreloader init] */

void FUN_101c776a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentPreloadingServicesImpl.AdPlayableAttachmentPreloader",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c776cc);
  (*pcVar1)();
}



/* Entry: 101c77700; end: 101c77757; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdPlayableAttachmentPreloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c77700(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0f6a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0f6a8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0f6b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0f6b8));
  return;
}



/* Entry: 101c77758; end: 101c77777;  */

void FUN_101c77758(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe888);
  return;
}



/* Entry: 101c77778; end: 101c77aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101c77778(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar8 - extraout_x8_00;
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar9 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_00;
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e0f6b0);
  func_0x000107c3e208();
  func_0x000104191a9c();
  if (iVar1 == 9) {
    lVar5 = *(long *)(param_1 + _DAT_113067d68);
    if (lVar5 != 0) {
      (**(code **)(lVar13 + 0x10))(lVar10,lVar5 + _DAT_113813240,lVar2);
    }
    pcVar6 = *(code **)(lVar13 + 0x38);
    (*pcVar6)(lVar10,lVar5 == 0,1,lVar2);
    (*pcVar6)(lVar11,1,1,lVar2);
    lVar12 = (long)*(int *)(lVar12 + 0x30);
    func_0x000100029394(lVar10,lVar7);
    func_0x000100029394(lVar11,lVar7 + lVar12);
    pcVar6 = *(code **)(lVar13 + 0x30);
    lVar5 = lVar7;
    (*pcVar6)(lVar7,1,lVar2);
    if ((int)lVar5 == 1) {
      FUN_101c78e70(lVar11,0x112d36580,&UNK_10d9016d0);
      FUN_101c78e70(lVar10,0x112d36580,&UNK_10d9016d0);
      lVar12 = lVar7 + lVar12;
      (*pcVar6)(lVar12,1,lVar2);
      if ((int)lVar12 == 1) {
        FUN_101c78e70(lVar7,0x112d36580,&UNK_10d9016d0);
        goto LAB_101c779a8;
      }
    }
    else {
      func_0x000100029394(lVar7,lVar9);
      lVar5 = lVar7 + lVar12;
      (*pcVar6)(lVar5,1,lVar2);
      if ((int)lVar5 != 1) {
        puVar3 = puVar8;
        (**(code **)(lVar13 + 0x20))(puVar8,lVar7 + lVar12,lVar2);
        func_0x000101553b98();
        lVar12 = lVar9;
        func_0x000107c5fab8(lVar9,puVar8,lVar2,puVar3);
        pcVar6 = *(code **)(lVar13 + 8);
        (*pcVar6)(puVar8,lVar2);
        FUN_101c78e70(lVar11,0x112d36580,&UNK_10d9016d0);
        FUN_101c78e70(lVar10,0x112d36580,&UNK_10d9016d0);
        (*pcVar6)(lVar9,lVar2);
        FUN_101c78e70(lVar7,0x112d36580,&UNK_10d9016d0);
        uVar4 = (uint)lVar12 ^ 1;
        goto LAB_101c77ac8;
      }
      FUN_101c78e70(lVar11,0x112d36580,&UNK_10d9016d0);
      FUN_101c78e70(lVar10,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar13 + 8))(lVar9,lVar2);
    }
    FUN_101c78e70(lVar7,0x112d7e680,&UNK_10d95e350);
    uVar4 = 1;
  }
  else {
LAB_101c779a8:
    uVar4 = 0;
  }
LAB_101c77ac8:
  return uVar4 & 1;
}



/* Entry: 101c77aec; end: 101c77b47; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdPlayableAttachmentPreloader canPreloadAttachment:] */

uint FUN_101c77aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101c77778(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101c77b48; end: 101c77d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c77b48(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  long lVar9;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar5 - extraout_x12;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112e0f6b0));
  uVar2 = param_1;
  FUN_101c77778();
  puVar4 = PTR_PTR_1126af5d0;
  if ((uVar2 & 1) == 0) {
    func_0x000107c61168();
    puVar5 = puVar4;
    FUN_101c78008();
    puVar6 = &UNK_110462088;
    func_0x000107c613f8(&UNK_110462088,puVar5,0,0);
    *puVar5 = 0;
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar6);
    func_0x000107c42d78(puVar4);
  }
  else {
    if (*(long *)(param_1 + _DAT_113067d68) != 0) {
      (**(code **)(lVar9 + 0x10))(puVar5,*(long *)(param_1 + _DAT_113067d68) + _DAT_113813240,lVar1)
      ;
      (**(code **)(lVar9 + 0x20))(lVar8,puVar5,lVar1);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      lVar3 = lVar8;
      FUN_101c77d48(lVar8);
      func_0x000107c5c3c8(puVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      (**(code **)(lVar9 + 8))(lVar8,lVar1);
      return puVar4;
    }
    func_0x000107c61168();
    puVar5 = puVar4;
    FUN_101c78008();
    puVar6 = &UNK_110462088;
    func_0x000107c613f8(&UNK_110462088,puVar5,0,0);
    *puVar5 = 1;
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar6);
    func_0x000107c42d78(puVar4);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar4;
}



/* Entry: 101c77d48; end: 101c77fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c77d48(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e0f6b0);
  func_0x000107c3e208();
  func_0x000107c5ed70();
  lVar6 = _DAT_112e0f6b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e0f6b8,alStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_101c77e10:
    func_0x000107c614a8(alStack_78);
LAB_101c77e18:
    func_0x0001000d224c(alStack_78);
    lVar6 = alStack_78[0];
    if (alStack_78[0] != 0) {
      lVar7 = lVar1;
      func_0x000107c5fadc(lVar1,param_2);
      lVar2 = lVar6;
      func_0x000107c4e8d4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar7);
      if (lVar2 != 0) {
        func_0x000107c615e8(lVar2);
        FUN_101c78048(lVar1,param_2);
        lVar6 = lVar1;
        goto LAB_101c77e90;
      }
    }
    lVar6 = lVar1;
    FUN_101c78048(lVar1,param_2);
    func_0x0001000d224c(alStack_78);
    func_0x0001000a8868(alStack_78,uStack_60);
    uVar3 = uStack_60;
    lVar7 = lStack_58;
    (**(code **)(lStack_58 + 0x10))(uStack_60);
    func_0x0001000834e4(alStack_78);
    uVar4 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(lVar7 + 0x40))(param_1,uVar4,lVar7);
    func_0x0001000d224c(alStack_78);
    if (alStack_78[0] == 0) {
      func_0x000107c6142c(param_2);
      func_0x000107c615e8(uVar3);
    }
    else {
      func_0x000107c615f0(uVar3);
      func_0x000107c5fadc(lVar1,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c574b0(alStack_78[0]);
      func_0x000107c615e8(alStack_78[0]);
      func_0x000107c615ec(uVar3,2);
      func_0x000107c61170(lVar1);
    }
  }
  else {
    func_0x000107c61434(lVar6);
    lVar7 = lVar1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar6);
      goto LAB_101c77e10;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
    func_0x000107c6157c(lVar7);
    func_0x000107c614a8(alStack_78);
    func_0x000107c6142c(lVar6);
    lVar6 = lVar7 + 0x10;
    func_0x000107c61618();
    func_0x000107c61574(lVar7);
    if (lVar6 == 0) goto LAB_101c77e18;
LAB_101c77e90:
    func_0x000107c6142c(param_2);
  }
  return lVar6;
}



/* Entry: 101c77fac; end: 101c78007; -[_TtC36SCAdAttachmentPreloadingServicesImpl29AdPlayableAttachmentPreloader preloadAttachment:] */

void FUN_101c77fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101c77b48(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c78008; end: 101c78047;  */

void FUN_101c78008(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0f6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eab5c;
  func_0x000107c61520(&UNK_10d9eab5c,&UNK_110462088);
  puRam0000000112e0f6e8 = puVar1;
  return;
}



/* Entry: 101c78048; end: 101c781e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101c78048(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0f6b0);
  func_0x000107c3e208(uVar8);
  puVar2 = &UNK_110461f78;
  func_0x000107c613fc(&UNK_110461f78,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110461fa0;
  func_0x000107c613fc(&UNK_110461fa0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  lVar4 = 0;
  func_0x000101c76628();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e0f4e8);
  *puVar1 = 0x101c7859c;
  puVar1[1] = puVar3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c615f0(uVar8);
  func_0x000107c61434(param_2);
  plVar6 = &lStack_60;
  func_0x000107c61154(plVar6,puVar2);
  lVar5 = 0x112e0f4d8;
  func_0x0001000285a8(0x112e0f4d8,&UNK_10d9eaac0);
  func_0x000107c613fc();
  func_0x000107c61614(lVar5 + 0x10,0);
  func_0x000107c61604(lVar5 + 0x10,plVar6);
  lVar4 = _DAT_112e0f6b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e0f6b8,auStack_78,0x21,0);
  func_0x000107c61434(param_2);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61558(uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
  FUN_101c78720(lVar5,param_1,param_2,uVar8);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + lVar4) = uVar7;
  func_0x000107c614a8(auStack_78);
  return plVar6;
}



/* Entry: 101c781e4; end: 101c782b3;  */

void FUN_101c781e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110461fc8;
  func_0x000107c613fc(&UNK_110461fc8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  pcStack_50 = FUN_101c78c7c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110461fe0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101c782b4; end: 101c78327;  */

void FUN_101c782b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x000107c5fcec(0);
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000100f7a598(FUN_101c78ca4,auStack_60,
                      "SCAdAttachmentPreloadingServicesImpl/AdPlayableAttachmentPreloader.swift",
                      0x48,2,0x4e,uVar1);
  return;
}



/* Entry: 101c78328; end: 101c784cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c78328(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e0f6b8;
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61428(param_1 + _DAT_112e0f6b8,alStack_80,0x20,0);
  lVar3 = *(long *)(param_1 + lVar1);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    lVar4 = param_2;
    uVar2 = param_3;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + lVar4 * 8);
      func_0x000107c6157c(lVar4);
      func_0x000107c614a8(alStack_80);
      func_0x000107c6142c(lVar3);
      lVar3 = lVar4 + 0x10;
      func_0x000107c61618();
      func_0x000107c61574(lVar4);
      if (lVar3 != 0) {
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar3);
        return;
      }
      goto LAB_101c78414;
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(alStack_80);
LAB_101c78414:
  func_0x0001000d224c(alStack_80);
  if (alStack_80[0] != 0) {
    lVar3 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4ffb8(alStack_80[0]);
    func_0x000107c615e8(alStack_80[0]);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_1 + lVar1,alStack_80,0x21,0);
  func_0x000107c61434(param_3);
  FUN_101c78664(param_2,param_3);
  func_0x000107c614a8(alStack_80);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 101c784cc; end: 101c784df;  */

bool FUN_101c784cc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c784e0; end: 101c7858b;  */

void FUN_101c784e0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c7858c; end: 101c785a7;  */

void FUN_101c7858c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101c785a8; end: 101c785ff;  */

void FUN_101c785a8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101c78600; end: 101c78663;  */

void FUN_101c78600(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101c78664; end: 101c7871f;  */

undefined8 FUN_101c78664(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101c78870();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_101c78cc0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 101c78720; end: 101c789df;  */

void FUN_101c78720(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c787f8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101c789e0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c787c0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101c78870();
    lVar6 = *unaff_x20;
    goto joined_r0x000101c7880c;
  }
  lVar6 = *unaff_x20;
joined_r0x000101c7880c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c78870);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101c789e0; end: 101c78c7b;  */

void FUN_101c789e0(long param_1,ulong param_2)

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
  uVar6 = 0x112e0f570;
  func_0x0001000285a8(0x112e0f570,&UNK_10d9ea940);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101c78c48:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c78c78);
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
          goto LAB_101c78c48;
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
      func_0x000107c6157c(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c78c7c);
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



/* Entry: 101c78c7c; end: 101c78ca3;  */

void FUN_101c78c7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = 0;
  func_0x000107c5fcec(0);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar4;
  func_0x000100f7a598(FUN_101c78ca4,auStack_60,
                      "SCAdAttachmentPreloadingServicesImpl/AdPlayableAttachmentPreloader.swift",
                      0x48,2,0x4e,uVar3);
  return;
}



/* Entry: 101c78ca4; end: 101c78cbf;  */

void FUN_101c78ca4(void)

{
  long unaff_x20;
  
  FUN_101c78328(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}


