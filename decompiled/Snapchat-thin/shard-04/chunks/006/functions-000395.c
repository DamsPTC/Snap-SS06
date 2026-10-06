/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103695700; end: 103695a9b;  */

int FUN_103695700(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x7b < param_2) {
    param_2 = param_2 + 0x84;
    uVar3 = 2;
    if (0xfffeff < param_2) {
      uVar3 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar3;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar3 = (uint)param_1[1], param_1[1] != 0)) goto LAB_103695768;
    }
    else if (uVar1 == 2) {
      uVar3 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_103695768:
        return ((uint)*param_1 | uVar3 << 8) - 0x84;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) goto LAB_103695768;
    }
  }
  uVar3 = (uint)(*param_1 >> 6) | (*param_1 >> 1 & 0x1f) << 2;
  iVar2 = 0;
  if (uVar3 < 0x7f) {
    iVar2 = 0x7e - uVar3;
  }
  if (0x7c < (uVar3 ^ 0x7f)) {
    iVar2 = 0;
  }
  return iVar2;
}



/* Entry: 103695a9c; end: 103695adb;  */

void FUN_103695a9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f84ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf8d2c;
  func_0x000107c61520(&UNK_10dbf8d2c,&UNK_11067ab80);
  puRam0000000112f84ac0 = puVar1;
  return;
}



/* Entry: 103695adc; end: 103695aef;  */

bool FUN_103695adc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103695af0; end: 103695b9b;  */

void FUN_103695af0(void)

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



/* Entry: 103695b9c; end: 103695ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103695b9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082420);
  func_0x00010062a788();
  uVar2 = param_2;
  func_0x000107c4af44();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_3 + _DAT_1130813f0);
  puVar3 = &UNK_11067acb0;
  func_0x000107c613fc(&UNK_11067acb0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  func_0x0001000285a8(0x112f84ac8,&UNK_10dbf8d60);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  puVar4 = &UNK_10073ee18;
  func_0x0001000bdd8c(&UNK_10073ee18,puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  return unaff_x20;
}



/* Entry: 103695ca8; end: 103695caf;  */

void FUN_103695ca8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103695cb0; end: 103695cd3;  */

void FUN_103695cb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103695cd4; end: 103695d4f;  */

void FUN_103695cd4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003a5b88();
  func_0x00010062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010062aa24(param_2,uVar1);
  uVar1 = 0;
  func_0x0001005c32f8(0);
  func_0x000107c610f8();
  func_0x00010062aa88(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103695d50; end: 10369603b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103695d50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar11 = *(undefined8 *)(*(long *)(param_3 + _DAT_1130827c8) + _DAT_113082768);
  func_0x000107c6157c(uVar11);
  uVar2 = param_2;
  func_0x000107c4b590();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c4b57c();
  func_0x000107c61180();
  uVar4 = param_4;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x00010062ae60();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined1 *)(lVar6 + _DAT_112f850c0) = 0;
  lVar1 = _DAT_112f850c8;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar1) = puVar7;
  lVar1 = _DAT_112f850d0;
  uVar8 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar6 + lVar1) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112f850d8) = uVar11;
  *(undefined8 *)(lVar6 + _DAT_112f850e0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f850e8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112f850f0) = uVar4;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c6157c(uVar11);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  plVar9 = &lStack_70;
  func_0x000107c61154(plVar9,puVar7);
  uVar8 = *(undefined8 *)((long)plVar9 + _DAT_112f850f0);
  puVar7 = &UNK_11067ad18;
  func_0x000107c613fc(&UNK_11067ad18,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,plVar9);
  puStack_80 = &UNK_100b5ec68;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100b5ebe4;
  puStack_88 = &UNK_11067ad30;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar10);
  puVar7 = puStack_78;
  func_0x000107c61174(plVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c5dc64(uVar8);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(plVar9);
  func_0x000107c61574(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  puVar7 = PTR_PTR_1126ad360;
  func_0x000107c610f8(PTR_PTR_1126ad360);
  func_0x000107c47204();
  func_0x000107c42c20(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(puVar7);
  return unaff_x20;
}



/* Entry: 10369603c; end: 103696057;  */

void FUN_10369603c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103696058; end: 1036960c3;  */

undefined8 FUN_103696058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x00010074d894(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1036960c4; end: 1036961c3;  */

void FUN_1036960c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c3f124();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4b434(lVar2);
      func_0x000107c61180();
      uVar3 = 0;
      FUN_103697a54(0);
      func_0x000107c610f8();
      FUN_103697628(lVar1,uVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1036961c4; end: 1036961ef;  */

void FUN_1036961c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036961f0; end: 1036962e3;  */

undefined8 FUN_1036961f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010073c0d8(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1036962e4; end: 1036962eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036962e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_38;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130385c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puStack_38 = PTR_DAT_11269cb50;
      lVar1 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_38);
      if (lVar1 != 0) {
        *param_1 = lVar1;
        return;
      }
      func_0x000107c61170(lVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1036962ec; end: 10369634f;  */

void FUN_1036962ec(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4b5a0();
  func_0x000107c61180();
  func_0x0001036986c4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  FUN_103698494(param_1,param_2);
  return;
}



/* Entry: 103696350; end: 103696367;  */

void FUN_103696350(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b5a0(uVar2);
  func_0x000107c61180();
  func_0x0001036986c4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  FUN_103698494(uVar2,uVar1);
  return;
}



/* Entry: 103696368; end: 10369638b;  */

void FUN_103696368(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10369638c; end: 1036963f7;  */

void FUN_10369638c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010073d1f4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x00010073d268();
  uVar1 = 0;
  func_0x0001005c6ea0(0);
  func_0x000107c610f8();
  func_0x00010073d2b4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1036963f8; end: 10369656f;  */

long FUN_1036963f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c4af44();
  func_0x000107c61180();
  puVar2 = &UNK_11067aec8;
  func_0x000107c613fc(&UNK_11067aec8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112f84ac8,&UNK_10dbf8d60);
  func_0x000107c613fc();
  pcVar3 = FUN_1036965e8;
  func_0x0001000bdd8c(FUN_1036965e8,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 103696570; end: 1036965e7;  */

void FUN_103696570(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x00010073f024(param_2,0xc,&uStack_60);
  func_0x000107c615e8(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036965e8; end: 1036965ef;  */

void FUN_1036965e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = uVar2;
  func_0x00010073f024(uVar2,0xc,&uStack_60);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036965f0; end: 10369665f;  */

void FUN_1036965f0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003a5b88();
  func_0x00010062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010062aa24(param_1,uVar1);
  func_0x00010450c8a8(0);
  func_0x000107c610f8();
  func_0x00010450c794(param_1);
  return;
}



/* Entry: 103696660; end: 103696667;  */

void FUN_103696660(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103696668; end: 103696707;  */

void FUN_103696668(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103696708; end: 103696783;  */

void FUN_103696708(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003a5b88();
  func_0x00010062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010062aa24(param_2,uVar1);
  uVar1 = 0;
  func_0x00010450c8a8(0);
  func_0x000107c610f8();
  func_0x00010450c794(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103696784; end: 103696787;  */

void FUN_103696784(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = uVar2;
  func_0x00010073f024(uVar2,0xc,&uStack_60);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103696788; end: 1036968ff;  */

long FUN_103696788(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c4af44();
  func_0x000107c61180();
  puVar2 = &UNK_11067af30;
  func_0x000107c613fc(&UNK_11067af30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112f84ac8,&UNK_10dbf8d60);
  func_0x000107c613fc();
  pcVar3 = FUN_103696978;
  func_0x0001000bdd8c(FUN_103696978,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 103696900; end: 103696977;  */

void FUN_103696900(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x00010073f024(param_2,0xb,&uStack_60);
  func_0x000107c615e8(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103696978; end: 10369697f;  */

void FUN_103696978(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = uVar2;
  func_0x00010073f024(uVar2,0xb,&uStack_60);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103696980; end: 1036969ef;  */

void FUN_103696980(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003a5b88();
  func_0x00010062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010062aa24(param_1,uVar1);
  func_0x00010450ca38(0);
  func_0x000107c610f8();
  func_0x00010450c924(param_1);
  return;
}



/* Entry: 1036969f0; end: 1036969f7;  */

void FUN_1036969f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036969f8; end: 103696a97;  */

void FUN_1036969f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103696a98; end: 103696b13;  */

void FUN_103696a98(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003a5b88();
  func_0x00010062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010062aa24(param_2,uVar1);
  uVar1 = 0;
  func_0x00010450ca38(0);
  func_0x000107c610f8();
  func_0x00010450c924(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103696b14; end: 103696b17;  */

void FUN_103696b14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = uVar2;
  func_0x00010073f024(uVar2,0xb,&uStack_60);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103696b18; end: 103696c8f;  */

long FUN_103696b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c4af44();
  func_0x000107c61180();
  puVar2 = &UNK_11067af98;
  func_0x000107c613fc(&UNK_11067af98,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112f84ac8,&UNK_10dbf8d60);
  func_0x000107c613fc();
  pcVar3 = FUN_103696d08;
  func_0x0001000bdd8c(FUN_103696d08,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 103696c90; end: 103696d07;  */

void FUN_103696c90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x00010073f024(param_2,0xb,&uStack_60);
  func_0x000107c615e8(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103696d08; end: 103696d0f;  */

void FUN_103696d08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = uVar2;
  func_0x00010073f024(uVar2,0xb,&uStack_60);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103696d10; end: 103696d7f;  */

void FUN_103696d10(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003a5b88();
  func_0x00010062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010062aa24(param_1,uVar1);
  func_0x00010450cbc8(0);
  func_0x000107c610f8();
  func_0x00010450cab4(param_1);
  return;
}



/* Entry: 103696d80; end: 103696d87;  */

void FUN_103696d80(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103696d88; end: 103696e27;  */

void FUN_103696d88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103696e28; end: 103696ea3;  */

void FUN_103696e28(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003a5b88();
  func_0x00010062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010062aa24(param_2,uVar1);
  uVar1 = 0;
  func_0x00010450cbc8(0);
  func_0x000107c610f8();
  func_0x00010450cab4(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103696ea4; end: 103696ea7;  */

void FUN_103696ea4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x00010073f004(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c610f8();
  uVar1 = uVar2;
  func_0x00010073f024(uVar2,0xb,&uStack_60);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103696ea8; end: 103696ed7;  */

void FUN_103696ea8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103697628(param_1);
  return;
}



/* Entry: 103696ed8; end: 103697017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103696ed8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f85030);
  if (lVar6 != 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar6);
    func_0x000107c453e4();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f85020);
    *(undefined **)(unaff_x20 + _DAT_112f85020) = puVar1;
    func_0x000107c61170(uVar5);
    lVar2 = lVar6;
    func_0x000107c4b438(lVar6);
    func_0x000107c61180();
    puVar1 = &UNK_11067b000;
    func_0x000107c613fc(&UNK_11067b000,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_50 = FUN_103697b18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1036975dc;
    puStack_58 = &UNK_11067b040;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar4 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar4);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 103697018; end: 10369735b;  */

void FUN_103697018(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = &UNK_11067b078;
  func_0x000107c613fc(&UNK_11067b078,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x103697b20;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_103697b28;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b090;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_11067b0c8;
  func_0x000107c613fc(&UNK_11067b0c8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103697b48;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_80 = (code *)0x103697b88;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b0e0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11067b118;
  func_0x000107c613fc(&UNK_11067b118,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x103697b50;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  pcStack_80 = (code *)0x103697b8c;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b130;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_11067b168;
  func_0x000107c613fc(&UNK_11067b168,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x103697b58;
  *(undefined8 *)(puVar8 + 0x18) = param_2;
  pcStack_80 = (code *)0x103697b90;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b180;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c4c5e0(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar10 = puVar2;
  func_0x000107c61544(puVar2,"",0x73,0x20,0x27,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103697350);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x73,0x23,0x26,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103697354);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x73,0x26,0x2a,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103697358);
    (*pcVar1)();
  }
  puVar2 = puVar8;
  func_0x000107c61544(puVar8,"",0x73,0x29,0x24,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10369735c);
  (*pcVar1)();
}



/* Entry: 10369735c; end: 1036975db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369735c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f85010);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    puVar1 = PTR_PTR_1126d1318;
    func_0x000107c61168(PTR_PTR_1126d1318);
    func_0x000107c5e3a8();
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1036975dc; end: 103697627;  */

void FUN_1036975dc(long param_1,undefined8 param_2)

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



/* Entry: 103697628; end: 1036977d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103697628(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000107c614f0();
  lVar1 = _DAT_112f85010;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f85018;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f85020;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f85028;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f85030) = 0;
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  puVar2 = &UNK_11067b000;
  func_0x000107c613fc(&UNK_11067b000,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar4);
  pcStack_60 = FUN_103697870;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_103697878;
  puStack_68 = &UNK_11067b018;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  uVar3 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c3e924(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return puVar4;
}



/* Entry: 1036977d4; end: 10369786f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036977d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f85028);
    lStack_60 = param_2;
    uStack_58 = param_1;
    func_0x000107c6157c(uVar1);
    func_0x000100087bd4(FUN_103697ac8,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 103697870; end: 103697877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697870(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f85028);
    lStack_60 = lVar1;
    uStack_58 = param_1;
    func_0x000107c6157c(uVar2);
    func_0x000100087bd4(FUN_103697ac8,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 103697878; end: 1036978bf;  */

void FUN_103697878(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1036978c0; end: 1036978db;  */

void FUN_1036978c0(long param_1,long param_2)

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



/* Entry: 1036978dc; end: 10369793b; -[_TtC26SCLensCarouselServicesImpl36LensCarouselRestorationStateProvider init] */

void FUN_1036978dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselServicesImpl.LensCarouselRestorationStateProvider",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103697908);
  (*pcVar1)();
}



/* Entry: 10369793c; end: 1036979a3; -[_TtC26SCLensCarouselServicesImpl36LensCarouselRestorationStateProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369793c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f85010));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f85018));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f85020));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f85028));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f85030));
  return;
}



/* Entry: 1036979a4; end: 1036979b3; -[_TtC26SCLensCarouselServicesImpl36LensCarouselRestorationStateProvider restorationEventsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036979a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f85010));
  return;
}



/* Entry: 1036979b4; end: 103697a27; -[_TtC26SCLensCarouselServicesImpl36LensCarouselRestorationStateProvider hasStateToRestore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1036979b4(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  uStack_31 = 0;
  puStack_50 = &uStack_31;
  uStack_48 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(FUN_103697b94,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  return uStack_31;
}



/* Entry: 103697a28; end: 103697a3b;  */

void FUN_103697a28(void)

{
  FUN_103697a8c();
  return;
}



/* Entry: 103697a3c; end: 103697a53; -[_TtC26SCLensCarouselServicesImpl36LensCarouselRestorationStateProvider clearStateToRestore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697a3c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f85030) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f85030),PTR_s_clearLensState_1125ac790);
    return;
  }
  return;
}



/* Entry: 103697a54; end: 103697a73;  */

void FUN_103697a54(void)

{
  func_0x000107c61168(&PTR_PTR_1128df140);
  return;
}



/* Entry: 103697a74; end: 103697a8b; -[_TtC26SCLensCarouselServicesImpl36LensCarouselRestorationStateProvider resetStateToRestore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697a74(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f85030) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c138f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f85030),PTR_s_resetLensState_11262bde0);
    return;
  }
  return;
}



/* Entry: 103697a8c; end: 103697ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697a8c(void)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112f85030);
  if (lVar2 != 0) {
    func_0x000107c44930();
  }
  *puVar1 = (char)lVar2;
  return;
}



/* Entry: 103697ac8; end: 103697b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697ac8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f85030);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f85030) = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  FUN_103696ed8();
  return;
}



/* Entry: 103697b18; end: 103697b27;  */

void FUN_103697b18(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = &UNK_11067b078;
  func_0x000107c613fc(&UNK_11067b078,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x103697b20;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_103697b28;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b090;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_11067b0c8;
  func_0x000107c613fc(&UNK_11067b0c8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103697b48;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  pcStack_80 = (code *)0x103697b88;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b0e0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11067b118;
  func_0x000107c613fc(&UNK_11067b118,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x103697b50;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  pcStack_80 = (code *)0x103697b8c;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b130;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_11067b168;
  func_0x000107c613fc(&UNK_11067b168,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x103697b58;
  *(undefined8 *)(puVar8 + 0x18) = unaff_x20;
  pcStack_80 = (code *)0x103697b90;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11067b180;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c4c5e0(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar10 = puVar2;
  func_0x000107c61544(puVar2,"",0x73,0x20,0x27,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103697350);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x73,0x23,0x26,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103697354);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x73,0x26,0x2a,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103697358);
    (*pcVar1)();
  }
  puVar2 = puVar8;
  func_0x000107c61544(puVar8,"",0x73,0x29,0x24,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10369735c);
  (*pcVar1)();
}



/* Entry: 103697b28; end: 103697b47;  */

void FUN_103697b28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103697b48; end: 103697b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697b48(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f85010);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126d1318;
    func_0x000107c61168(PTR_PTR_1126d1318);
    func_0x000107c41ce4();
    func_0x000107c61180();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 103697b94; end: 103697ba7;  */

void FUN_103697b94(void)

{
  FUN_103697a28();
  return;
}



/* Entry: 103697ba8; end: 103697bff;  */

undefined8 FUN_103697ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x00010073f024(param_1,param_2,param_3);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 103697c00; end: 103697c0f; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl migrateFromStartupObservableEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103697c00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f85070);
}



/* Entry: 103697c10; end: 103697c1f; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl forceSyncCarouselOpenEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103697c10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f85078);
}



/* Entry: 103697c20; end: 103697c2f; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl setAlwaysOnScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697c20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f85080) = param_3;
  return;
}



/* Entry: 103697c30; end: 103697c9f; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl openLensCarouselAnimationType] */

void FUN_103697c30(void)

{
  func_0x000103697c50();
  return;
}



/* Entry: 103697ca0; end: 103697cb7; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl setOpenLensCarouselAnimationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f85088);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 103697cb8; end: 103697d17; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl init] */

void FUN_103697cb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselServicesImpl.LensCarouselSettingsImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103697ce4);
  (*pcVar1)();
}



/* Entry: 103697d18; end: 103697f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103697d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  
  ppuVar5 = &puStack_90;
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f850c0) = 0;
  lVar1 = _DAT_112f850c8;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f850d0;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f850d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f850e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f850e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f850f0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar4 = auStack_60;
  func_0x000107c61154(puVar4,puVar2);
  uVar3 = *(undefined8 *)(puVar4 + _DAT_112f850f0);
  puVar2 = &UNK_11067b1b8;
  func_0x000107c613fc(&UNK_11067b1b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar4);
  pcStack_70 = FUN_103697f18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100b5ebe4;
  puStack_78 = &UNK_11067b1d0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(puVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(uVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  return puVar4;
}



/* Entry: 103697f18; end: 103697f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697f18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c3d1a0();
        func_0x000107c61180();
        puVar3 = &UNK_11067b1b8;
        func_0x000107c613fc(&UNK_11067b1b8,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar1);
        puStack_68 = &UNK_100b5fdf8;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_100b5fdac;
        puStack_70 = &UNK_11067b1f8;
        ppuVar4 = &puStack_88;
        puStack_60 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_60);
        lVar5 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c3e924(lVar5);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103697f28; end: 103697f83; -[_TtC26SCLensCarouselServicesImpl42LensCarouselUIActivationParametersProvider init] */

void FUN_103697f28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselServicesImpl.LensCarouselUIActivationParametersProvider",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103697f54);
  (*pcVar1)();
}



/* Entry: 103697f84; end: 103697ffb; -[_TtC26SCLensCarouselServicesImpl42LensCarouselUIActivationParametersProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103697fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103697fa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103697f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f850d8));
  return;
}



/* Entry: 103697ffc; end: 10369802f; -[_TtC26SCLensCarouselServicesImpl42LensCarouselUIActivationParametersProvider openAnimated] */

uint FUN_103697ffc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103698030();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103698030; end: 1036980e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103698030(void)

{
  long lVar1;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 uStack_39;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4de30();
  func_0x000107c615e8(lStack_38);
  if (lVar1 == 2) {
    uStack_39 = 1;
  }
  else if (lVar1 == 1) {
    uStack_39 = 0;
    puStack_50 = &uStack_39;
    func_0x000100087bd4(FUN_1036980e4,auStack_60,PTR___sytN_11034f1b0 + 8);
  }
  else {
    uStack_39 = 0;
  }
  return uStack_39;
}



/* Entry: 1036980e4; end: 103698103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036980e4(void)

{
  long unaff_x20;
  
  **(byte **)(unaff_x20 + 0x10) =
       (*(byte *)(*(long *)(unaff_x20 + 0x18) + _DAT_112f850c0) ^ 0xff) & 1;
  return;
}



/* Entry: 103698104; end: 103698107; -[_TtC26SCLensCarouselServicesImpl42LensCarouselUIActivationParametersProvider closeAnimated] */

void FUN_103698104(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openAnimated_112617dc0);
  return;
}



/* Entry: 103698108; end: 10369813b; -[_TtC26SCLensCarouselServicesImpl42LensCarouselUIActivationParametersProvider shouldKeepVisibleAfterHide] */

uint FUN_103698108(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10369813c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10369813c; end: 103698213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10369813c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f850e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f850e0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
      uVar5 = 0;
      goto LAB_1036981fc;
    }
    lVar3 = lVar2;
    func_0x000107c4a728();
    lVar4 = lVar1;
    func_0x000107c4b574();
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x000107c4b574(lVar1);
      uVar5 = (uint)(lVar4 != 1);
    }
    func_0x000107c4de08();
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar1);
    if ((unaff_x20 & 1) == 0) {
      uVar5 = (uint)lVar3 ^ 1 | uVar5;
      goto LAB_1036981fc;
    }
  }
  uVar5 = 0;
LAB_1036981fc:
  return uVar5 & 1;
}



/* Entry: 103698214; end: 10369822f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103698214(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f850c0) = 1;
  return;
}



/* Entry: 103698230; end: 10369827f; -[_TtC26SCLensCarouselServicesImpl32LensFeaturesVisibilityController lensFullScreenModeEnabled] */

undefined1 FUN_103698230(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_21);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1);
  return uStack_21;
}



/* Entry: 103698280; end: 10369828b; -[_TtC26SCLensCarouselServicesImpl32LensFeaturesVisibilityController setLensFullScreenModeEnabled:] */

void FUN_103698280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_10369828c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10369828c; end: 103698493;  */

void FUN_10369828c(byte param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte bStack_40;
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[7];
  bStack_40 = param_1;
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_103698ea0,&uStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x27);
  func_0x000107c6142c(uStack_48);
  uStack_50 = 0xd000000000000025;
  uStack_48 = 0x800000010f158110;
  bVar2 = (param_1 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  uVar4 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,uVar3,&PTR_DAT_11067b220);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 103698494; end: 103698677;  */

void FUN_103698494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0x3fc3333333333333;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  uStack_41 = 0;
  uVar2 = 0x112d382e0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar3 = &uStack_41;
  func_0x00010006c248();
  *(undefined1 **)(unaff_x20 + 0x38) = puVar3;
  uStack_42 = 0;
  func_0x000107c613fc(uVar2,0x19,7);
  puVar3 = &uStack_42;
  func_0x00010006c248();
  *(undefined1 **)(unaff_x20 + 0x40) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103698678; end: 1036986e3;  */

void FUN_103698678(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036986e4; end: 1036986eb; -[_TtC26SCLensCarouselServicesImpl32LensFeaturesVisibilityController lensFullScreenModeEnabledObservable] */

void FUN_1036986e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1036986ec; end: 1036986f3; -[_TtC26SCLensCarouselServicesImpl32LensFeaturesVisibilityController lensSnapButtonEventObservable] */

void FUN_1036986ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1036986f4; end: 1036987cf;  */

void FUN_1036986f4(byte param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  byte bStack_31;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&bStack_31);
  func_0x000107c61574(uVar1);
  if ((param_1 & 1) != bStack_31) {
    func_0x0001000d224c(&lStack_40);
    if (lStack_40 != 0) {
      func_0x000103698390(param_1 & 1);
      func_0x000107c52fcc(0x3fc3333333333333,lStack_40,param_2,param_1 & 1,param_1 & 1,1);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar1 = 0;
      func_0x00010450d90c(0);
      if ((param_1 & 1) == 0) {
        func_0x00010450d7d0();
      }
      else {
        func_0x00010450d7c0();
      }
      func_0x000107c4d664(uVar2,param_2,uVar1);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(lStack_40);
    }
  }
  return;
}



/* Entry: 1036987d0; end: 1036987db; -[_TtC26SCLensCarouselServicesImpl32LensFeaturesVisibilityController setSnapButtonHidden:] */

void FUN_1036987d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_1036986f4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1036987dc; end: 103698907;  */

void FUN_1036987dc(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar6 = *unaff_x20;
  uVar5 = param_1;
  func_0x000103698564(param_1,param_1);
  if ((uVar5 & 1) != 0) {
    bVar4 = (param_1 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar4) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar4) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5a114(unaff_x20[3]);
    lStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x27);
    func_0x000107c6142c(uStack_48);
    lStack_50 = -0x2fffffffffffffdb;
    uStack_48 = 0x800000010f1580e0;
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    uVar1 = uStack_48;
    func_0x0001007d6c6c(1,lStack_50,uStack_48,uVar6,&PTR_DAT_11067b220);
    func_0x000107c6142c(uVar1);
    func_0x0001000d224c(&lStack_50);
    lVar3 = lStack_50;
    if (lStack_50 != 0) {
      func_0x000107c5262c(0x3fc3333333333333,lStack_50);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 103698908; end: 103698913; -[_TtC26SCLensCarouselServicesImpl32LensFeaturesVisibilityController setupLensFullScreenModeEnabled:] */

void FUN_103698908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_1036987dc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103698914; end: 103698953;  */

void FUN_103698914(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c6157c();
  (*param_4)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103698954; end: 103698e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103698954(ulong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cStack_71;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar14 = *unaff_x20;
  lStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(uStack_68);
  lVar13 = _DAT_113082ab0;
  lStack_70 = -0x2fffffffffffffe3;
  uStack_68 = 0x800000010f158050;
  puVar11 = PTR___ss5UInt8Vs23CustomStringConvertiblesWP_11034ef08;
  func_0x000107c6057c(PTR___ss5UInt8VN_11034eef8,
                      PTR___ss5UInt8Vs23CustomStringConvertiblesWP_11034ef08);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar11);
  uVar15 = uStack_68;
  func_0x0001007d6c6c(1,lStack_70,uStack_68,uVar14,&PTR_DAT_11067b220);
  func_0x000107c6142c(uVar15);
  puVar5 = (undefined8 *)0x0;
  func_0x0001007bbbf8();
  func_0x00010450e7f8();
  puVar5 = (undefined8 *)*puVar5;
  func_0x000107c61174();
  uVar6 = param_1;
  func_0x000107c60118(param_1,puVar5);
  func_0x000107c61170();
  if ((uVar6 & 1) == 0) {
    func_0x00010450e304();
    plVar7 = (long *)*puVar5;
    func_0x000107c61174();
    uVar6 = param_1;
    func_0x000107c60118(param_1,plVar7);
    func_0x000107c61170();
    if ((uVar6 & 1) == 0) {
      func_0x00010450e538();
      lVar12 = *plVar7;
      uVar15 = 0;
      func_0x00010450e890(0);
      uVar6 = (ulong)*(byte *)(lVar12 + _DAT_113082ab0);
      func_0x000107c610f8();
      func_0x000107c61174(lVar12);
      func_0x00010450e854();
      bVar2 = *(byte *)(uVar6 + _DAT_113082ab0);
      func_0x000107c61170();
      bVar3 = *(byte *)(param_1 + lVar13);
      func_0x000107c610f8(uVar15);
      plVar8 = (long *)(ulong)(bVar3 & bVar2);
      func_0x00010450e854();
      plVar7 = plVar8;
      func_0x000107c60118();
      func_0x000107c61170(lVar12);
      func_0x000107c61170();
      func_0x00010450e3bc();
      lVar13 = *plVar8;
      uVar6 = (ulong)*(byte *)(lVar13 + _DAT_113082ab0);
      func_0x000107c610f8(uVar15);
      func_0x000107c61174(lVar13);
      func_0x00010450e854();
      bVar2 = *(byte *)(uVar6 + _DAT_113082ab0);
      func_0x000107c61170();
      func_0x000107c610f8(uVar15);
      plVar9 = (long *)(ulong)(bVar2 & bVar3);
      func_0x00010450e854();
      plVar8 = plVar9;
      func_0x000107c60118();
      func_0x000107c61170(lVar13);
      func_0x000107c61170();
      func_0x00010450e46c();
      lVar13 = *plVar9;
      uVar6 = (ulong)*(byte *)(lVar13 + _DAT_113082ab0);
      func_0x000107c610f8(uVar15);
      func_0x000107c61174(lVar13);
      func_0x00010450e854();
      bVar2 = *(byte *)(uVar6 + _DAT_113082ab0);
      func_0x000107c61170();
      func_0x000107c610f8(uVar15);
      uVar10 = (ulong)(bVar2 & bVar3);
      func_0x00010450e854();
      uVar6 = uVar10;
      func_0x000107c60118();
      func_0x000107c61170(lVar13);
      func_0x000107c61170(uVar10);
      func_0x000103698564(((uint)plVar7 ^ 1) & 1,((uint)plVar8 ^ 0xffffffff) & 1);
      func_0x000107c5a114(unaff_x20[3]);
      lStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x54);
      func_0x000107c5fb78(0xd000000000000028,0x800000010f158070);
      bVar4 = ((ulong)plVar7 & 1) == 0;
      uVar16 = 0x65757274;
      uVar17 = 0x65736c6166;
      uVar15 = uVar17;
      if (bVar4) {
        uVar15 = uVar16;
      }
      uVar1 = 0xe500000000000000;
      if (bVar4) {
        uVar1 = 0xe400000000000000;
      }
      func_0x000107c5fb78(uVar15,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c5fb78(0xd000000000000014,0x800000010f1580a0);
      uVar15 = unaff_x20[8];
      func_0x000107c6157c(uVar15);
      func_0x0001000c74f0(&cStack_71);
      func_0x000107c61574(uVar15);
      uVar15 = uVar16;
      if (cStack_71 == '\0') {
        uVar15 = uVar17;
      }
      uVar1 = 0xe400000000000000;
      if (cStack_71 == '\0') {
        uVar1 = 0xe500000000000000;
      }
      func_0x000107c5fb78(uVar15,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c5fb78(0xd000000000000012,0x800000010f1580c0);
      bVar4 = (uVar6 & 1) == 0;
      if (bVar4) {
        uVar17 = uVar16;
      }
      uVar15 = 0xe500000000000000;
      if (bVar4) {
        uVar15 = 0xe400000000000000;
      }
      func_0x000107c5fb78(uVar17,uVar15);
      func_0x000107c6142c(uVar15);
      uVar15 = uStack_68;
      func_0x0001007d6c6c(1,lStack_70,uStack_68,uVar14,&PTR_DAT_11067b220);
      func_0x000107c6142c(uVar15);
      func_0x0001000d224c(&lStack_70);
      lVar13 = lStack_70;
      if (lStack_70 != 0) {
        uVar15 = unaff_x20[8];
        func_0x000107c6157c(uVar15);
        func_0x0001000c74f0(&lStack_70);
        func_0x000107c61574(uVar15);
        func_0x000107c52630(0x3fc3333333333333,lVar13);
        func_0x000107c615e8(lVar13);
      }
      return;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  uVar15 = *unaff_x20;
  uVar10 = uVar6;
  func_0x000103698564(uVar6,uVar6);
  if ((uVar10 & 1) != 0) {
    bVar4 = (int)uVar6 == 0;
    uVar14 = 0x65757274;
    if (bVar4) {
      uVar14 = 0x65736c6166;
    }
    uVar17 = 0xe400000000000000;
    if (bVar4) {
      uVar17 = 0xe500000000000000;
    }
    func_0x000107c5a114(unaff_x20[3]);
    func_0x000107c602fc(0x27);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar14,uVar17);
    func_0x000107c6142c(uVar17);
    func_0x0001007d6c6c(1,0xd000000000000025,0x800000010f1580e0,uVar15,&PTR_DAT_11067b220);
    func_0x000107c6142c(0x800000010f1580e0);
    func_0x0001000d224c(&stack0xffffffffffffffb0);
    func_0x000107c5262c(0x3fc3333333333333,0xd000000000000025);
    func_0x000107c615e8(0xd000000000000025);
  }
  return;
}



/* Entry: 103698e2c; end: 103698e6f; -[_TtC26SCLensCarouselServicesImpl32LensFeaturesVisibilityController setVisibleInterfaceElements:] */

void FUN_103698e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_103698954(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103698e70; end: 103698e9f;  */

void FUN_103698e70(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000103698e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}


